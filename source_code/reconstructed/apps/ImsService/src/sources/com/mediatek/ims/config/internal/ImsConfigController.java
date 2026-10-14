package com.mediatek.ims.config.internal;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.AsyncResult;
import android.os.Build;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.text.TextUtils;
import com.android.ims.ImsException;
import com.mediatek.ims.ImsCommonUtil;
import com.mediatek.ims.config.ImsConfigContract;
import com.mediatek.ims.plugin.ExtensionFactory;
import com.mediatek.ims.plugin.ImsManagerOemPlugin;
import com.mediatek.ims.ril.ImsCommandsInterface;

/* JADX INFO: loaded from: classes.dex */
public class ImsConfigController {
    private static final String ACTION_CXP_NOTIFY_FEATURE = "com.mediatek.common.carrierexpress.cxp_notify_feature";
    static final int CONFIG_CMD_ERROR = 2;
    static final int CONFIG_CMD_SUCCESS = 1;
    static final int CONFIG_INTERRUPT_ERROR = 4;
    static final int CONFIG_TIMEOUT_ERROR = 3;
    private static final boolean DEBUG;
    static final int EVENT_IMS_CFG_CONFIG_CHANGED = 1003;
    static final int EVENT_IMS_CFG_CONFIG_LOADED = 1004;
    static final int EVENT_IMS_CFG_DYNAMIC_IMS_SWITCH_COMPLETE = 1001;
    static final int EVENT_IMS_CFG_FEATURE_CHANGED = 1002;
    static final int MSG_IMS_GET_FEATURE_DONE = 103;
    static final int MSG_IMS_GET_PROVISION_DONE = 101;
    static final int MSG_IMS_GET_RESOURCE_DONE = 106;
    static final int MSG_IMS_SET_FEATURE_DONE = 104;
    static final int MSG_IMS_SET_MDCFG_DONE = 107;
    static final int MSG_IMS_SET_PROVISION_DONE = 102;
    static final int MSG_RESET_WFC_MODE_FLAG = 108;
    static final int MSG_UPDATE_IMS_SERVICE_CONFIG = 109;
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    private static final String TAG = "ImsConfigController";
    static final int TIMER_IMS_CFG_TIMEOUT = 4000;
    private Context mContext;
    private int mCurWfcMode;
    private Handler mEventHandler;
    private Object mFeatureValueLock;
    private Handler mHandler;
    private ImsManagerOemPlugin mImsManagerOemPlugin;
    private String mLogTag;
    private Object mMdCfgLock;
    private int mPhoneId;
    private Object mProvisionedValueLock;
    private BroadcastReceiver mReceiver;
    private Object mResourceValueLock;
    private ImsCommandsInterface mRilAdapter;
    private Object mWfcLock;

    class EventHandler extends Handler {
        private int mPhoneId;

        EventHandler(int i, Looper looper) {
            super(looper);
            this.mPhoneId = i;
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 1001) {
                Intent intent = new Intent(ImsConfigContract.ACTION_DYNAMIC_IMS_SWITCH_COMPLETE);
                intent.putExtra("phone", this.mPhoneId);
                ImsConfigController.this.mContext.sendBroadcast(intent, "android.permission.READ_PHONE_STATE");
                if (ImsConfigController.DEBUG) {
                    Rlog.d(ImsConfigController.this.mLogTag, "DYNAMIC_IMS_SWITCH_COMPLETE phoneId:" + this.mPhoneId);
                    return;
                }
                return;
            }
            if (i == 1002) {
                int[] iArr = (int[]) ((AsyncResult) message.obj).result;
                Intent intent2 = new Intent(ImsConfigContract.ACTION_IMS_FEATURE_CHANGED);
                intent2.putExtra("phone_id", iArr[0]);
                intent2.putExtra(ImsConfigContract.EXTRA_CHANGED_ITEM, iArr[1]);
                intent2.putExtra("value", iArr[2]);
                ImsConfigController.this.mContext.sendBroadcast(intent2);
                if (ImsConfigController.DEBUG) {
                    Rlog.d(ImsConfigController.TAG, "EVENT_IMS_CFG_FEATURE_CHANGED: phoneId = " + iArr[0] + " feature =" + iArr[1] + " value=" + iArr[2]);
                    return;
                }
                return;
            }
            if (i == 1004) {
                Intent intent3 = new Intent(ImsConfigContract.ACTION_CONFIG_LOADED);
                intent3.putExtra("phone", this.mPhoneId);
                ImsConfigController.this.mContext.sendBroadcast(intent3, "android.permission.READ_PHONE_STATE");
                if (ImsConfigController.DEBUG) {
                    Rlog.d(ImsConfigController.this.mLogTag, "EVENT_IMS_CFG_CONFIG_LOADED phoneId:" + this.mPhoneId);
                    return;
                }
                return;
            }
            switch (i) {
                case 101:
                    AsyncResult asyncResult = (AsyncResult) message.obj;
                    ProvisioningResult provisioningResult = (ProvisioningResult) asyncResult.userObj;
                    synchronized (provisioningResult.lockObj) {
                        if (asyncResult.exception != null) {
                            provisioningResult.provisionResult = 2;
                            Rlog.e(ImsConfigController.this.mLogTag, "MSG_IMS_GET_PROVISION_DONE: error ret null, e=" + asyncResult.exception);
                        } else {
                            String str = (String) asyncResult.result;
                            provisioningResult.provisionInfo = str;
                            asyncResult.result = str;
                            provisioningResult.provisionResult = 1;
                            if (ImsConfigController.DEBUG) {
                                Rlog.d(ImsConfigController.this.mLogTag, "MSG_IMS_GET_PROVISION_DONE: provisionInfo:" + provisioningResult.provisionInfo);
                            }
                        }
                        provisioningResult.lockObj.notify();
                        break;
                    }
                    return;
                case 102:
                    AsyncResult asyncResult2 = (AsyncResult) message.obj;
                    ProvisioningResult provisioningResult2 = (ProvisioningResult) asyncResult2.userObj;
                    synchronized (provisioningResult2.lockObj) {
                        if (asyncResult2.exception != null) {
                            provisioningResult2.provisionResult = 2;
                            Rlog.e(ImsConfigController.this.mLogTag, "MSG_IMS_SET_PROVISION_DONE: error ret null, e=" + asyncResult2.exception);
                        } else {
                            provisioningResult2.provisionResult = 1;
                            if (ImsConfigController.DEBUG) {
                                Rlog.d(ImsConfigController.this.mLogTag, "MSG_IMS_SET_PROVISION_DONE: Finish set provision!");
                            }
                        }
                        provisioningResult2.lockObj.notify();
                        break;
                    }
                    return;
                case 103:
                    AsyncResult asyncResult3 = (AsyncResult) message.obj;
                    FeatureResult featureResult = (FeatureResult) asyncResult3.userObj;
                    synchronized (featureResult.lockObj) {
                        if (asyncResult3.exception != null) {
                            featureResult.featureResult = 2;
                            Rlog.e(ImsConfigController.this.mLogTag, "MSG_IMS_GET_FEATURE_DONE: error ret null, e=" + asyncResult3.exception);
                        } else {
                            featureResult.featureValue = ((Integer) asyncResult3.result).intValue();
                            featureResult.featureResult = 1;
                            if (ImsConfigController.DEBUG) {
                                Rlog.d(ImsConfigController.this.mLogTag, "MSG_IMS_GET_FEATURE_DONE: featureValue:" + featureResult.featureValue);
                            }
                        }
                        featureResult.lockObj.notify();
                        break;
                    }
                    return;
                case 104:
                    AsyncResult asyncResult4 = (AsyncResult) message.obj;
                    FeatureResult featureResult2 = (FeatureResult) asyncResult4.userObj;
                    synchronized (featureResult2.lockObj) {
                        if (asyncResult4.exception != null) {
                            featureResult2.featureResult = 2;
                            Rlog.e(ImsConfigController.this.mLogTag, "MSG_IMS_SET_FEATURE_DONE: error ret null, e=" + asyncResult4.exception);
                        } else {
                            featureResult2.featureResult = 1;
                            if (ImsConfigController.DEBUG) {
                                Rlog.d(ImsConfigController.this.mLogTag, "MSG_IMS_SET_FEATURE_DONE: Finish set feature!");
                            }
                        }
                        featureResult2.lockObj.notify();
                        break;
                    }
                    return;
                default:
                    switch (i) {
                        case 106:
                            AsyncResult asyncResult5 = (AsyncResult) message.obj;
                            FeatureResult featureResult3 = (FeatureResult) asyncResult5.userObj;
                            synchronized (featureResult3.lockObj) {
                                if (asyncResult5.exception != null) {
                                    featureResult3.featureResult = 2;
                                    Rlog.e(ImsConfigController.this.mLogTag, "MSG_IMS_GET_RESOURCE_DONE: error ret null, e=" + asyncResult5.exception);
                                } else {
                                    featureResult3.featureValue = ((int[]) asyncResult5.result)[0];
                                    featureResult3.featureResult = 1;
                                }
                                featureResult3.lockObj.notify();
                                break;
                            }
                            return;
                        case ImsConfigController.MSG_IMS_SET_MDCFG_DONE /* 107 */:
                            AsyncResult asyncResult6 = (AsyncResult) message.obj;
                            MdConfigResult mdConfigResult = (MdConfigResult) asyncResult6.userObj;
                            synchronized (mdConfigResult.lockObj) {
                                if (asyncResult6.exception != null) {
                                    int[] iArr2 = new int[mdConfigResult.requestConfigNum];
                                    for (int i2 = 0; i2 < iArr2.length; i2++) {
                                        iArr2[i2] = -1;
                                    }
                                    mdConfigResult.resultArray = iArr2;
                                    mdConfigResult.configResult = 2;
                                    Rlog.e(ImsConfigController.this.mLogTag, "SET_MDCFG_DONE, error ret, e=" + asyncResult6.exception);
                                } else {
                                    String[] strArrSplit = ((String) asyncResult6.result).split(",");
                                    int[] iArr3 = new int[strArrSplit.length];
                                    for (int i3 = 0; i3 < strArrSplit.length; i3++) {
                                        iArr3[i3] = Integer.parseInt(strArrSplit[i3]);
                                    }
                                    mdConfigResult.resultArray = iArr3;
                                    mdConfigResult.configResult = 1;
                                    if (ImsConfigController.DEBUG) {
                                        Rlog.d(ImsConfigController.this.mLogTag, "SET_MDCFG_DONE, finish set MD Ims config!");
                                    }
                                }
                                mdConfigResult.lockObj.notify();
                                break;
                            }
                            return;
                        case ImsConfigController.MSG_RESET_WFC_MODE_FLAG /* 108 */:
                            ImsConfigController.this.resetWfcModeFlag();
                            return;
                        case ImsConfigController.MSG_UPDATE_IMS_SERVICE_CONFIG /* 109 */:
                            if (ImsConfigController.this.mImsManagerOemPlugin == null) {
                                ImsConfigController imsConfigController = ImsConfigController.this;
                                imsConfigController.mImsManagerOemPlugin = ExtensionFactory.makeOemPluginFactory(imsConfigController.mContext).makeImsManagerPlugin(ImsConfigController.this.mContext);
                            }
                            ImsConfigController.this.mImsManagerOemPlugin.updateImsServiceConfig(ImsConfigController.this.mContext, ImsCommonUtil.getMainCapabilityPhoneId(), true);
                            return;
                        default:
                            return;
                    }
            }
        }
    }

    private class FeatureResult {
        int featureResult;
        int featureValue;
        Object lockObj;

        private FeatureResult() {
            this.lockObj = new Object();
        }
    }

    private class MdConfigResult {
        int configResult;
        Object lockObj;
        int requestConfigNum;
        int[] resultArray;

        private MdConfigResult() {
            this.requestConfigNum = 0;
            this.resultArray = null;
            this.configResult = 3;
            this.lockObj = new Object();
        }
    }

    private class ProvisioningResult {
        Object lockObj;
        String provisionInfo;
        int provisionResult;

        private ProvisioningResult() {
            this.provisionResult = 3;
            this.lockObj = new Object();
        }
    }

    static {
        DEBUG = TextUtils.equals(Build.TYPE, "eng") || SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
    }

    private ImsConfigController() {
        this.mPhoneId = -1;
        this.mContext = null;
        this.mFeatureValueLock = new Object();
        this.mProvisionedValueLock = new Object();
        this.mResourceValueLock = new Object();
        this.mWfcLock = new Object();
        this.mMdCfgLock = new Object();
        this.mCurWfcMode = -1;
        this.mImsManagerOemPlugin = null;
    }

    public ImsConfigController(Context context, int i, ImsCommandsInterface imsCommandsInterface) {
        this.mPhoneId = -1;
        this.mContext = null;
        this.mFeatureValueLock = new Object();
        this.mProvisionedValueLock = new Object();
        this.mResourceValueLock = new Object();
        this.mWfcLock = new Object();
        this.mMdCfgLock = new Object();
        this.mCurWfcMode = -1;
        this.mImsManagerOemPlugin = null;
        this.mContext = context;
        this.mPhoneId = i;
        this.mRilAdapter = imsCommandsInterface;
        this.mLogTag = "ImsConfigController[" + i + "]";
        StringBuilder sb = new StringBuilder();
        sb.append("ImsConfigThread-");
        sb.append(this.mPhoneId);
        HandlerThread handlerThread = new HandlerThread(sb.toString());
        handlerThread.start();
        HandlerThread handlerThread2 = new HandlerThread("ImsEventThread-" + this.mPhoneId);
        handlerThread2.start();
        this.mHandler = new EventHandler(this.mPhoneId, handlerThread.getLooper());
        this.mEventHandler = new EventHandler(this.mPhoneId, handlerThread2.getLooper());
        this.mReceiver = new ImsConfigEventReceiver(this.mEventHandler, this.mPhoneId, this.mRilAdapter);
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.intent.action.SIM_STATE_CHANGED");
        intentFilter.addAction("android.telephony.action.CARRIER_CONFIG_CHANGED");
        intentFilter.addAction(ACTION_CXP_NOTIFY_FEATURE);
        intentFilter.addAction("com.mediatek.ims.MTK_MMTEL_READY");
        if (ImsCommonUtil.isDssNoResetSupport()) {
            intentFilter.addAction("android.intent.action.ACTION_SET_RADIO_CAPABILITY_DONE");
        }
        this.mContext.registerReceiver(this.mReceiver, intentFilter);
        this.mRilAdapter.registerForImsCfgDynamicImsSwitchComplete(this.mHandler, 1001, null);
        this.mRilAdapter.registerForImsCfgConfigChanged(this.mHandler, 1003, null);
        this.mRilAdapter.registerForImsCfgFeatureChanged(this.mHandler, 1002, null);
        this.mRilAdapter.registerForImsCfgConfigLoaded(this.mHandler, 1004, null);
    }

    private static boolean isConfigSuccess(int i) {
        return i == 1;
    }

    private String messageToString(int i) {
        switch (i) {
            case 101:
                return "MSG_IMS_GET_PROVISION_DONE";
            case 102:
                return "MSG_IMS_SET_PROVISION_DONE";
            case 103:
                return "MSG_IMS_GET_FEATURE_DONE";
            case 104:
                return "MSG_IMS_SET_FEATURE_DONE";
            default:
                switch (i) {
                    case 106:
                        return "MSG_IMS_GET_RESOURCE_DONE";
                    case MSG_IMS_SET_MDCFG_DONE /* 107 */:
                        return "MSG_IMS_SET_MDCFG_DONE";
                    case MSG_RESET_WFC_MODE_FLAG /* 108 */:
                        return "MSG_RESET_WFC_MODE_FLAG";
                    case MSG_UPDATE_IMS_SERVICE_CONFIG /* 109 */:
                        return "MSG_UPDATE_IMS_SERVICE_CONFIG";
                    default:
                        switch (i) {
                            case 1001:
                                return "EVENT_IMS_CFG_DYNAMIC_IMS_SWITCH_COMPLETE";
                            case 1002:
                                return "EVENT_IMS_CFG_FEATURE_CHANGED";
                            case 1003:
                                return "EVENT_IMS_CFG_CONFIG_CHANGED";
                            case 1004:
                                return "EVENT_IMS_CFG_CONFIG_LOADED";
                            default:
                                return "" + i;
                        }
                }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void resetWfcModeFlag() {
        Rlog.d(this.mLogTag, "resetWfcModeFlag()");
        synchronized (this.mWfcLock) {
            this.mCurWfcMode = -1;
        }
    }

    public int getFeatureValue(int i, int i2) throws ImsException {
        int i3;
        synchronized (this.mFeatureValueLock) {
            FeatureResult featureResult = new FeatureResult();
            Message messageObtainMessage = this.mHandler.obtainMessage(103, featureResult);
            synchronized (featureResult.lockObj) {
                this.mRilAdapter.getImsCfgFeatureValue(i, i2, messageObtainMessage);
                try {
                    featureResult.lockObj.wait(4000L);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                    featureResult.featureResult = 4;
                }
            }
            if (!isConfigSuccess(featureResult.featureResult)) {
                throw new ImsException("Something wrong, reason:" + featureResult.featureResult, 101);
            }
            i3 = featureResult.featureValue;
        }
        return i3;
    }

    /* JADX WARN: Bottom block not found for handler: all -> 0x0058 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public synchronized int getImsResCapability(int i) throws ImsException {
        int i2;
        synchronized (this.mResourceValueLock) {
            try {
                FeatureResult featureResult = new FeatureResult();
                Message messageObtainMessage = this.mHandler.obtainMessage(106, featureResult);
                synchronized (featureResult.lockObj) {
                    this.mRilAdapter.getImsCfgResourceCapValue(i, messageObtainMessage);
                    try {
                        featureResult.lockObj.wait(4000L);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                        featureResult.featureResult = 4;
                    }
                }
                if (!isConfigSuccess(featureResult.featureResult)) {
                    throw new ImsException("Something wrong, reason:" + featureResult.featureResult, 101);
                }
                i2 = featureResult.featureValue;
            } catch (Throwable th) {
                th = th;
                while (true) {
                    throw th;
                }
            }
        }
        return i2;
    }

    public String getProvisionedValue(int i) throws ImsException {
        String str;
        synchronized (this.mProvisionedValueLock) {
            ProvisioningResult provisioningResult = new ProvisioningResult();
            Message messageObtainMessage = this.mHandler.obtainMessage(101, provisioningResult);
            synchronized (provisioningResult.lockObj) {
                this.mRilAdapter.getImsCfgProvisionValue(i, messageObtainMessage);
                try {
                    provisioningResult.lockObj.wait(4000L);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                    provisioningResult.provisionResult = 4;
                }
            }
            if (!isConfigSuccess(provisioningResult.provisionResult)) {
                throw new ImsException("Something wrong, reason:" + provisioningResult.provisionResult, 101);
            }
            str = provisioningResult.provisionInfo;
        }
        return str;
    }

    public void sendWfcProfileInfo(int i) {
        synchronized (this.mWfcLock) {
            Rlog.i(this.mLogTag, "sendWfcProfileInfo rilWfcMode:" + i + ", mCurWfcMode:" + this.mCurWfcMode);
            if (i != this.mCurWfcMode) {
                this.mRilAdapter.sendWfcProfileInfo(i, null);
                if (i != 3) {
                    if (DEBUG) {
                        Rlog.d(this.mLogTag, "Not wifi-only mode, turn radio ON");
                    }
                    ImsConfigUtils.sendWifiOnlyModeIntent(this.mContext, this.mPhoneId, false);
                } else if (ImsConfigUtils.isWfcEnabledByUser(this.mContext, this.mPhoneId)) {
                    if (DEBUG) {
                        Rlog.d(this.mLogTag, "Wifi-only and WFC setting enabled, send intent to turn radio OFF");
                    }
                    ImsConfigUtils.sendWifiOnlyModeIntent(this.mContext, this.mPhoneId, true);
                } else {
                    if (DEBUG) {
                        Rlog.d(this.mLogTag, "Wifi-only and WFC setting disabled, send intent to turn radio ON");
                    }
                    ImsConfigUtils.sendWifiOnlyModeIntent(this.mContext, this.mPhoneId, false);
                }
                this.mCurWfcMode = i;
            }
        }
    }

    public void setFeatureValue(int i, int i2, int i3, int i4) throws ImsException {
        synchronized (this.mFeatureValueLock) {
            FeatureResult featureResult = new FeatureResult();
            Message messageObtainMessage = this.mHandler.obtainMessage(104, featureResult);
            synchronized (featureResult.lockObj) {
                this.mRilAdapter.setImsCfgFeatureValue(i, i2, i3, i4, messageObtainMessage);
                try {
                    featureResult.lockObj.wait(4000L);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                    featureResult.featureResult = 4;
                }
                if (!isConfigSuccess(featureResult.featureResult)) {
                    throw new ImsException("Something wrong, reason:" + featureResult.featureResult, 101);
                }
            }
        }
    }

    public int[] setModemImsCfg(String[] strArr, String[] strArr2, int i) {
        synchronized (this.mMdCfgLock) {
            if (strArr == null) {
                Rlog.d(this.mLogTag, "keys is null, return null");
                return null;
            }
            if (strArr.length >= 1 && strArr2.length >= 1) {
                if (strArr.length != strArr2.length) {
                    Rlog.d(this.mLogTag, "keys and values length not equals");
                    return null;
                }
                Rlog.d(this.mLogTag, "keys and values length equals");
                String strArrayToString = ImsConfigUtils.arrayToString(strArr);
                String strArrayToString2 = ImsConfigUtils.arrayToString(strArr2);
                Rlog.d(this.mLogTag, "keysStr:" + strArrayToString + ", valuesStr:" + strArrayToString2);
                MdConfigResult mdConfigResult = new MdConfigResult();
                mdConfigResult.requestConfigNum = strArr.length;
                Message messageObtainMessage = this.mHandler.obtainMessage(MSG_IMS_SET_MDCFG_DONE, mdConfigResult);
                synchronized (mdConfigResult.lockObj) {
                    this.mRilAdapter.setModemImsCfg(strArrayToString, strArrayToString2, i, messageObtainMessage);
                    try {
                        mdConfigResult.lockObj.wait(4000L);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                        mdConfigResult.configResult = 4;
                    }
                }
                return mdConfigResult.resultArray;
            }
            Rlog.d(this.mLogTag, "keys or values length is smaller than 1, return null");
            return null;
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    public void setProvisionedStringValue(int i, String str) throws ImsException {
        setProvisionedValue(i, str);
    }

    public void setProvisionedValue(int i, String str) throws ImsException {
        synchronized (this.mProvisionedValueLock) {
            ProvisioningResult provisioningResult = new ProvisioningResult();
            Message messageObtainMessage = this.mHandler.obtainMessage(102, provisioningResult);
            synchronized (provisioningResult.lockObj) {
                this.mRilAdapter.setImsCfgProvisionValue(i, str, messageObtainMessage);
                try {
                    provisioningResult.lockObj.wait(4000L);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                    provisioningResult.provisionResult = 4;
                }
            }
            if (!isConfigSuccess(provisioningResult.provisionResult)) {
                throw new ImsException("Something wrong, reason:" + provisioningResult.provisionResult, 101);
            }
        }
    }

    public synchronized void setVoltePreference(int i) {
        Rlog.i(this.mLogTag, "setVoltePreference mode:" + i + ", phoneId:" + this.mPhoneId);
        this.mRilAdapter.setVoiceDomainPreference(i, null);
    }
}
