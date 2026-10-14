package com.mediatek.ims;

import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.ServiceConnection;
import android.net.Uri;
import android.os.AsyncResult;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.IBinder;
import android.os.Looper;
import android.os.Message;
import android.os.Messenger;
import android.os.PersistableBundle;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.provider.Settings;
import android.telephony.CarrierConfigManager;
import android.telephony.Rlog;
import android.telephony.ServiceState;
import android.telephony.SmsMessage;
import android.telephony.SubscriptionInfo;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.telephony.ims.ImsCallProfile;
import android.telephony.ims.ImsCallSessionListener;
import android.telephony.ims.ImsReasonInfo;
import android.telephony.ims.aidl.IImsCallSessionListener;
import android.telephony.ims.aidl.IImsSmsListener;
import android.telephony.ims.feature.CapabilityChangeRequest;
import android.telephony.ims.feature.MmTelFeature;
import android.telephony.ims.stub.ImsCallSessionImplBase;
import android.telephony.ims.stub.ImsEcbmImplBase;
import android.telephony.ims.stub.ImsMultiEndpointImplBase;
import android.telephony.ims.stub.ImsUtImplBase;
import android.text.TextUtils;
import com.android.ims.ImsConfigListener;
import com.android.ims.ImsManager;
import com.android.ims.internal.IImsCallSession;
import com.android.ims.internal.IImsConfig;
import com.android.ims.internal.IImsEcbm;
import com.android.ims.internal.IImsEcbmListener;
import com.android.ims.internal.IImsMultiEndpoint;
import com.android.ims.internal.IImsRegistrationListener;
import com.android.ims.internal.IImsUt;
import com.android.internal.telephony.CommandException;
import com.mediatek.gba.NafSessionKey;
import com.mediatek.ims.common.ImsCarrierConfigConstants;
import com.mediatek.ims.config.ImsConfigContract;
import com.mediatek.ims.config.internal.ImsConfigUtils;
import com.mediatek.ims.ext.IImsServiceExt;
import com.mediatek.ims.ext.OpImsServiceCustomizationUtils;
import com.mediatek.ims.feature.MtkImsUtImplBase;
import com.mediatek.ims.internal.IMtkImsCallSession;
import com.mediatek.ims.internal.IMtkImsRegistrationListener;
import com.mediatek.ims.internal.IMtkImsUt;
import com.mediatek.ims.internal.IVoDataService;
import com.mediatek.ims.internal.ImsDataTracker;
import com.mediatek.ims.internal.ImsMultiEndpointProxy;
import com.mediatek.ims.internal.ImsXuiManager;
import com.mediatek.ims.plugin.ExtensionFactory;
import com.mediatek.ims.plugin.ImsManagerOemPlugin;
import com.mediatek.ims.plugin.ImsRegistrationOemPlugin;
import com.mediatek.ims.plugin.OemPluginFactory;
import com.mediatek.ims.ril.ImsCommandsInterface;
import com.mediatek.ims.ril.ImsRILAdapter;
import com.mediatek.wfo.IMwiService;
import com.mediatek.wfo.IWifiOffloadService;
import com.mediatek.wfo.MwisConstants;
import com.mediatek.wfo.WifiOffloadManager;
import com.mediatek.wfo.impl.WfoService;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.function.Consumer;

/* JADX INFO: loaded from: classes.dex */
public class ImsService {
    private static final String CONFIG_EXTRA_PHONE_ID = "phone_id";
    private static final boolean DBG = true;
    protected static final int EVENT_CALL_ADDITIONAL_INFO_INDICATION = 36;
    protected static final int EVENT_CALL_INFO_INDICATION = 8;
    protected static final int EVENT_DETAIL_IMS_REGISTRATION_IND = 38;
    protected static final int EVENT_IMS_DEREG_DONE = 16;
    protected static final int EVENT_IMS_DEREG_URC = 17;
    protected static final int EVENT_IMS_DISABLED_URC = 5;
    protected static final int EVENT_IMS_DISABLING_URC = 12;
    protected static final int EVENT_IMS_ENABLED_URC = 11;
    protected static final int EVENT_IMS_ENABLING_URC = 10;
    protected static final int EVENT_IMS_NOTIFICATION_INIT = 39;
    private static final int EVENT_IMS_REGISTRATION_INFO = 1;
    protected static final int EVENT_IMS_REGISTRATION_STATUS_REPORT_IND = 37;
    protected static final int EVENT_IMS_RTP_INFO_URC = 20;
    protected static final int EVENT_IMS_SMS_NEW_CDMA_SMS = 32;
    protected static final int EVENT_IMS_SMS_NEW_SMS = 31;
    protected static final int EVENT_IMS_SMS_STATUS_REPORT = 30;
    protected static final int EVENT_IMS_SUPPORT_ECC_URC = 25;
    protected static final int EVENT_IMS_VOLTE_SETTING_URC = 22;
    protected static final int EVENT_INCOMING_CALL_INDICATION = 7;
    protected static final int EVENT_INIT_CALL_SESSION_PROXY = 27;
    protected static final int EVENT_ON_USSI = 15;
    protected static final int EVENT_RADIO_NOT_AVAILABLE = 2;
    protected static final int EVENT_RADIO_OFF = 18;
    protected static final int EVENT_RADIO_ON = 19;
    protected static final int EVENT_READY_TO_RECEIVE_PENDING_IND = 33;
    protected static final int EVENT_RUN_GBA = 23;
    protected static final int EVENT_SELF_IDENTIFY_UPDATE = 24;
    protected static final int EVENT_SEND_SMS_DONE = 28;
    protected static final int EVENT_SET_IMS_DISABLE_DONE = 4;
    protected static final int EVENT_SET_IMS_ENABLED_DONE = 3;
    protected static final int EVENT_SET_IMS_REGISTRATION_REPORT_DONE = 21;
    protected static final int EVENT_SIP_CODE_INDICATION = 13;
    protected static final int EVENT_SIP_CODE_INDICATION_DEREG = 14;
    protected static final int EVENT_START_GBA_SERVICE = 26;
    protected static final int EVENT_TEST_QUERY_VOPS_STATUS = 35;
    protected static final int EVENT_UT_CAPABILITY_CHANGE = 29;
    private static final int EVENT_VIRTUAL_SIM_ON = 6;
    protected static final int EVENT_VOPS_STATUS_IND = 34;
    private static final int IMS_ALLOW_INCOMING_CALL_INDICATION = 0;
    private static final int IMS_DISALLOW_INCOMING_CALL_INDICATION = 1;
    private static final int IMS_MAX_FEATURE_SUPPORT_SIZE = 6;
    private static final int IMS_RCS_OVER_LTE = 2;
    private static final int IMS_REG_SIP_URI_TYPE_IMSI = 1;
    private static final int IMS_REG_SIP_URI_TYPE_MSISDN = 0;
    private static final String IMS_SERVICE = "ims";
    private static final int IMS_SMS_OVER_LTE = 4;
    private static final int IMS_SS_CMD_ERROR = 3;
    private static final int IMS_SS_CMD_SUCCESS = 4;
    private static final int IMS_SS_INTERRUPT_ERROR = 2;
    private static final int IMS_SS_TIMEOUT_ERROR = 1;
    private static final int IMS_VIDEO_OVER_LTE = 8;
    private static final int IMS_VOICE_OVER_LTE = 1;
    private static final int IMS_VOICE_OVER_WIFI = 16;
    private static final String LOG_TAG = "ImsService";
    private static final int MT_CALL_DIAL_IMS_STK = 100;
    private static final String NOTIFICATION_CHANNEL = "ImsService";
    private static final String PROPERTY_IMSCONFIG_FORCE_NOTIFY = "vendor.ril.imsconfig.force.notify";
    private static final String PROPERTY_IMS_REG_EXTINFO = "ril.ims.extinfo";
    private static final boolean VDBG = false;
    private Context mContext;
    private int[] mExpectedImsState;
    private final Handler[] mHandler;
    private ImsAdapter mImsAdapter;
    private ImsCallProfile[] mImsCallProfile;
    private String[] mImsConfigIccid;
    private ImsConfigManager mImsConfigManager;
    private String[] mImsConfigMccmnc;
    private ImsDataTracker mImsDataTracker;
    private ImsEcbmProxy[] mImsEcbm;
    private ImsEventPackageAdapter[] mImsEvtPkgAdapter;
    private int[] mImsExtInfo;
    private ImsCommandsInterface[] mImsRILAdapters;
    private ImsRegInfo[] mImsRegInd;
    private int[] mImsRegInfo;
    private ImsRegistrationOemPlugin mImsRegOemPlugin;
    private int[] mImsState;
    private int[] mIsImsEccSupported;
    private boolean[] mIsMTredirect;
    private boolean[] mIsPendingMTTerminated;
    private MtkImsCallSessionProxy[] mMtkPendingMT;
    private ImsMultiEndpointProxy[] mMultiEndpoints;
    private int mNumOfPhones;
    private ImsCallSessionProxy[] mPendingMT;
    private String[] mPendingMTCallId;
    private String[] mPendingMTSeqNum;
    private int[] mRAN;
    private int[] mRegErrorCode;
    private int[] mServiceId;
    private boolean[] mTempDisableWFC;
    private boolean[] mVolteEnable;
    private int[] mVopsReport;
    private boolean[] mWaitSubInfoChange;
    private int[] mWfcPdnState;
    private int[] mWfcRegErrorCode;
    private static final boolean ENGLOAD = "eng".equals(Build.TYPE);
    private static final boolean SENLOG = TextUtils.equals(Build.TYPE, "user");
    private static final CharSequence IMSSERVICE_NOTIFICATION_NAME = "ImsService notification";
    private static IWifiOffloadService sWifiOffloadService = null;
    private static HashMap<Integer, MtkImsRegistrationImpl> sMtkImsRegImpl = new HashMap<>();
    private static HashMap<Integer, MtkSuppServExt> sMtkSSExt = new HashMap<>();
    private static ImsService sInstance = null;
    protected static final Object mLock = new Object();
    private static HashMap<Integer, IMtkMmTelFeatureCallback> mMmTelFeatureCallback = new HashMap<>();
    private Object mLockObj = new Object();
    private Object mLockUri = new Object();
    private Object mCapLockObj = new Object();
    private IWifiOffloadServiceDeathRecipient mDeathRecipient = new IWifiOffloadServiceDeathRecipient();
    private IWifiOffloadListenerProxy mProxy = null;
    private ArrayList<HashSet<IImsRegistrationListener>> mListener = new ArrayList<>();
    private ArrayList<HashSet<IMtkImsRegistrationListener>> mMtkListener = new ArrayList<>();
    private ImsManagerOemPlugin mImsManagerOemPlugin = null;
    private ArrayList<HashSet<IImsSmsListener>> mImsSmsListener = new ArrayList<>();
    private boolean mRegisterSubInfoChange = false;
    private int mWaitFeatureChange = 0;
    private AsyncResult mRedirectIncomingAsyncResult = null;
    private int mRedirectIncomingSocketId = -1;
    private Map<Object, Object> mPendingMtkImsCallSessionProxy = new HashMap();
    private boolean mImsRegistry = false;
    private final BroadcastReceiver mBroadcastReceiver = new BroadcastReceiver() { // from class: com.mediatek.ims.ImsService.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            ImsService.this.log("[onReceive] action=" + intent.getAction());
            if ("com.mediatek.ims.ACTION_IMS_SIMULATE".equals(intent.getAction())) {
                ImsService.this.mImsRegistry = intent.getBooleanExtra("registry", false);
                ImsService.this.logw("Simulate IMS Registration: " + ImsService.this.mImsRegistry);
                int mainCapabilityPhoneId = ImsCommonUtil.getMainCapabilityPhoneId();
                ImsService.this.mHandler[mainCapabilityPhoneId].sendMessage(ImsService.this.mHandler[mainCapabilityPhoneId].obtainMessage(1, new AsyncResult((Object) null, new int[]{ImsService.this.mImsRegistry ? 1 : 0, 15, mainCapabilityPhoneId}, (Throwable) null)));
            } else if ("android.intent.action.BOOT_COMPLETED".equals(intent.getAction())) {
                if (ImsCommonUtil.supportMdAutoSetupIms()) {
                    ImsService.this.bindAndRegisterMWIService();
                } else {
                    ImsService.this.bindAndRegisterWifiOffloadService();
                }
                for (int i = 0; i < ImsService.this.mNumOfPhones; i++) {
                    if (ImsService.this.mImsState[i] == 1) {
                        Intent intent2 = new Intent("com.android.ims.IMS_SERVICE_UP");
                        intent2.putExtra("android:phone_id", i);
                        ImsService.this.mContext.sendBroadcast(intent2);
                        ImsService.this.log("broadcast IMS_SERVICE_UP for phone=" + i);
                    }
                }
            } else if ("android.intent.action.SIM_STATE_CHANGED".equals(intent.getAction())) {
                if ("ABSENT".equals(intent.getStringExtra("ss"))) {
                    int intExtra = intent.getIntExtra("phone", -1);
                    if (SubscriptionManager.isValidPhoneId(intExtra)) {
                        ImsService.this.resetXuiAndNotify(intExtra);
                    }
                }
            } else if ("android.intent.action.SERVICE_STATE".equals(intent.getAction())) {
                Bundle extras = intent.getExtras();
                int intExtra2 = intent.getIntExtra("slot", 0);
                if (extras != null) {
                    ServiceState serviceStateNewFromBundle = ServiceState.newFromBundle(extras);
                    int dataRegState = serviceStateNewFromBundle.getDataRegState();
                    int dataNetworkType = serviceStateNewFromBundle.getDataNetworkType();
                    ImsService.this.log("ACTION_SERVICE_STATE_CHANGED: slotId=" + intExtra2 + ", ims=" + ImsService.this.mImsRegInfo[intExtra2] + ",data=" + dataRegState);
                    if (ImsService.this.mImsRegInfo[intExtra2] == 0) {
                        if (dataRegState != 0) {
                            ImsService.this.setNotificationVirtual(intExtra2, 1);
                        } else if (dataNetworkType == 13 || dataNetworkType == 19) {
                            ImsService imsService = ImsService.this;
                            imsService.setNotificationVirtual(intExtra2, imsService.mImsRegInfo[intExtra2]);
                        } else {
                            ImsService.this.setNotificationVirtual(intExtra2, 1);
                        }
                    }
                }
            }
            ImsService.this.log("[onReceive] finished action=" + intent.getAction());
        }
    };
    private ServiceConnection mGbaConnection = new ServiceConnection() { // from class: com.mediatek.ims.ImsService.2
        @Override // android.content.ServiceConnection
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            ImsService.this.log("GbaService onServiceConnected");
        }

        @Override // android.content.ServiceConnection
        public void onServiceDisconnected(ComponentName componentName) {
            ImsService.this.log("GbaService onServiceFailed");
        }
    };
    private final BroadcastReceiver mSubInfoReceiver = new BroadcastReceiver() { // from class: com.mediatek.ims.ImsService.3
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            ImsService.this.log("volte_setting mSubInfoReceiver action: " + intent.getAction());
            if ("android.intent.action.ACTION_SUBINFO_RECORD_UPDATED".equals(intent.getAction())) {
                boolean z = ImsService.DBG;
                for (int i = 0; i < ImsService.this.mNumOfPhones; i++) {
                    if (ImsService.this.mWaitSubInfoChange[i] && ImsService.this.getSubIdUsingPhoneId(i) > -1) {
                        ImsService imsService = ImsService.this;
                        imsService.setEnhanced4gLteModeSetting(i, imsService.mVolteEnable[i]);
                        ImsService.this.mWaitSubInfoChange[i] = false;
                    }
                    if (ImsService.this.mWaitSubInfoChange[i]) {
                        z = false;
                    }
                }
                if (z) {
                    ImsService.this.mContext.unregisterReceiver(ImsService.this.mSubInfoReceiver);
                    ImsService.this.mRegisterSubInfoChange = false;
                }
            }
            ImsService.this.log("volte_setting mSubInfoReceiver finished");
        }
    };
    private BroadcastReceiver mFeatureValueReceiver = new BroadcastReceiver() { // from class: com.mediatek.ims.ImsService.4
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            int intExtra = intent.getIntExtra(ImsConfigContract.EXTRA_CHANGED_ITEM, -1);
            int intExtra2 = intent.getIntExtra("phone_id", -1);
            ImsService.this.log("volte_setting mFeatureValueReceiver action: " + intent.getAction() + ", phoneId: " + intExtra2 + ", feature: " + intExtra + ", mWaitFeatureChange" + ImsService.this.mWaitFeatureChange);
            if (intExtra == 0) {
                if ((ImsService.this.mWaitFeatureChange & (1 << intExtra2)) != 0) {
                    ImsService imsService = ImsService.this;
                    imsService.mWaitFeatureChange = (~(1 << intExtra2)) & imsService.mWaitFeatureChange;
                }
                if (ImsService.this.mWaitFeatureChange == 0) {
                    ImsService.this.mContext.unregisterReceiver(ImsService.this.mFeatureValueReceiver);
                    SystemProperties.set(ImsService.PROPERTY_IMSCONFIG_FORCE_NOTIFY, "0");
                }
                ImsService.this.log("volte_setting mFeatureValueReceiver finished mWaitFeatureChange:" + ImsService.this.mWaitFeatureChange);
            }
        }
    };

    public interface IMtkMmTelFeatureCallback {
        void newImsSmsInd(byte[] bArr, String str);

        void newStatusReportInd(byte[] bArr, String str);

        void notifyCapabilitiesChanged(MmTelFeature.MmTelCapabilities mmTelCapabilities);

        void notifyContextChanged(Context context);

        void notifyIncomingCall(ImsCallSessionImplBase imsCallSessionImplBase, Bundle bundle);

        void notifyIncomingCallSession(IImsCallSession iImsCallSession, Bundle bundle);

        void sendSmsRsp(int i, int i2, int i3, int i4);

        void updateCapbilities(CapabilityChangeRequest capabilityChangeRequest);
    }

    private class IWifiOffloadListenerProxy extends WifiOffloadManager.Listener {
        private IWifiOffloadListenerProxy() {
        }

        @Override // com.mediatek.wfo.WifiOffloadManager.Listener, com.mediatek.wfo.IWifiOffloadListener
        public void onHandover(int i, int i2, int i3) {
            ImsService.this.log("onHandover simIdx=" + i + ", stage=" + i2 + ", ratType=" + i3 + ", mImsRegInfo[simIdx]" + ImsService.this.mImsRegInfo[i]);
            if (i2 == 1 && ImsService.this.mImsRegInfo[i] == 0) {
                if (i3 > 3) {
                    i3 = 2;
                }
                ImsService.this.mRAN[i] = i3;
                ImsService.this.log("onHandover simIdx=" + i + ", ratType=" + i3 + ", mImsExtInfo[simIdx]" + ImsService.this.mImsExtInfo[i]);
                ImsService imsService = ImsService.this;
                imsService.notifyRegistrationStateChange(i, imsService.mImsRegInfo[i], false);
                ImsService imsService2 = ImsService.this;
                imsService2.notifyRegistrationCapabilityChange(i, imsService2.mImsExtInfo[i], false);
            }
        }

        @Override // com.mediatek.wfo.WifiOffloadManager.Listener, com.mediatek.wfo.IWifiOffloadListener
        public void onRequestImsSwitch(int i, boolean z) {
            if (ImsCommonUtil.supportMdAutoSetupIms()) {
                return;
            }
            int mainCapabilityPhoneId = ImsCommonUtil.getMainCapabilityPhoneId();
            ImsService.this.log("onRequestImsSwitch simIdx=" + i + " isImsOn=" + z + " mainCapabilityPhoneId=" + mainCapabilityPhoneId);
            if (i >= ImsService.this.mNumOfPhones) {
                ImsService.this.loge("onRequestImsSwitch can't enable/disable ims due to wrong sim id");
            }
            if (!ImsCommonUtil.supportMims() && i != mainCapabilityPhoneId) {
                ImsService.this.logw("onRequestImsSwitch, ignore not MainCapabilityPhoneId request");
                return;
            }
            if (z) {
                if (ImsService.this.mImsState[i] == 1 && ImsService.this.mExpectedImsState[i] != 0) {
                    ImsService.this.log("Ims already enable and ignore to send AT command.");
                    return;
                }
                ImsService.this.mImsRILAdapters[i].turnOnIms(ImsService.this.mHandler[i].obtainMessage(3));
                ImsService.this.mExpectedImsState[i] = 1;
                ImsService.this.mImsState[i] = 2;
                return;
            }
            if (ImsService.this.mImsState[i] == 0 && ImsService.this.mExpectedImsState[i] != 1) {
                ImsService.this.log("Ims already disabled and ignore to send AT command.");
                return;
            }
            ImsService.this.mImsRILAdapters[i].turnOffIms(ImsService.this.mHandler[i].obtainMessage(4));
            ImsService.this.mExpectedImsState[i] = 0;
            ImsService.this.mImsState[i] = 3;
        }

        @Override // com.mediatek.wfo.WifiOffloadManager.Listener, com.mediatek.wfo.IWifiOffloadListener
        public void onWfcStateChanged(int i, int i2) {
            ImsService.this.log("onWfcStateChanged simIdx=" + i + ", state=" + i2);
            ImsService.this.mWfcPdnState[i] = i2 != 1 ? 0 : 1;
        }

        @Override // com.mediatek.wfo.WifiOffloadManager.Listener, com.mediatek.wfo.IWifiOffloadListener
        public void onWifiPdnOOSStateChanged(int i, int i2) {
            ImsService.this.log("onWifiPdnOOSStateChanged simIdx=" + i + ", oosState=" + i2);
            ImsService.this.notifyRegistrationOOSStateChanged(i, i2);
        }
    }

    private class IWifiOffloadServiceDeathRecipient implements IBinder.DeathRecipient {
        private IWifiOffloadServiceDeathRecipient() {
        }

        @Override // android.os.IBinder.DeathRecipient
        public void binderDied() {
            IWifiOffloadService unused = ImsService.sWifiOffloadService = null;
        }
    }

    private class MyHandler extends Handler {
        int mSocketId;

        public MyHandler(int i) {
            super((Handler.Callback) null, false);
            this.mSocketId = i;
        }

        private boolean isRttSupported() {
            boolean zEquals = SystemProperties.get("persist.vendor.mtk_rtt_support").equals("1");
            ImsService.this.log("isRttSupport: " + zEquals);
            return zEquals;
        }

        private void setRttModeForIncomingCall(ImsCommandsInterface imsCommandsInterface) {
            if (isRttSupported()) {
                ImsService.this.log("setRttModeForIncomingCall: mode = 2");
                if (ImsService.this.mImsRILAdapters[this.mSocketId] != null) {
                    ImsService.this.mImsRILAdapters[this.mSocketId].setRttMode(2, null);
                }
            }
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            switch (message.what) {
                case 1:
                case 14:
                    if (hasMessages(14)) {
                        removeMessages(14);
                    }
                    AsyncResult asyncResult = (AsyncResult) message.obj;
                    int i = ((int[]) asyncResult.result)[0] == 1 ? 0 : 1;
                    if (SystemProperties.getInt("persist.vendor.ims.simulate", 0) == 1) {
                        i = ImsService.this.mImsRegistry ? 0 : 1;
                        ImsService.this.log("handleMessage() : Override EVENT_IMS_REGISTRATION_INFO: newImsRegInfo=" + i);
                    }
                    int i2 = ((int[]) asyncResult.result)[1];
                    if (ImsCommonUtil.supportMdAutoSetupIms()) {
                        if ((i2 & 16) == 16) {
                            ImsService.this.mRAN[this.mSocketId] = 2;
                        } else {
                            ImsService.this.mRAN[this.mSocketId] = 1;
                        }
                    }
                    ImsService.this.log("handleMessage() : newReg:" + i + " oldReg:" + ImsService.this.mImsRegInfo[this.mSocketId]);
                    int[] iArr = ImsService.this.mImsRegInfo;
                    int i3 = this.mSocketId;
                    iArr[i3] = i;
                    ImsService imsService = ImsService.this;
                    imsService.notifyRegistrationStateChange(i3, imsService.mImsRegInfo[this.mSocketId], false);
                    ImsService.this.log("handleMessage() : newRegExt:" + i2 + "oldRegExt:" + ImsService.this.mImsExtInfo[this.mSocketId]);
                    if (ImsService.this.mImsRegInfo[this.mSocketId] == 0) {
                        ImsService.this.mImsExtInfo[this.mSocketId] = i2;
                    } else {
                        ImsService.this.mImsExtInfo[this.mSocketId] = 0;
                    }
                    ImsService imsService2 = ImsService.this;
                    imsService2.notifyRegistrationCapabilityChange(this.mSocketId, imsService2.mImsExtInfo[this.mSocketId], false);
                    ServiceState serviceStateForSubscriber = TelephonyManager.getDefault().getServiceStateForSubscriber(ImsService.this.getSubIdUsingPhoneId(this.mSocketId));
                    if (serviceStateForSubscriber != null) {
                        int dataRegState = serviceStateForSubscriber.getDataRegState();
                        ImsService.this.log("data=" + dataRegState + " , dataNetType=" + serviceStateForSubscriber.getDataNetworkType());
                        int[] iArr2 = ImsService.this.mImsRegInfo;
                        int i4 = this.mSocketId;
                        if (iArr2[i4] != 0) {
                            ImsService imsService3 = ImsService.this;
                            imsService3.setNotificationVirtual(i4, imsService3.mImsRegInfo[this.mSocketId]);
                        } else if (dataRegState == 0) {
                            ImsService imsService4 = ImsService.this;
                            imsService4.setNotificationVirtual(i4, imsService4.mImsRegInfo[this.mSocketId]);
                        } else {
                            ImsService.this.setNotificationVirtual(i4, 1);
                        }
                    } else {
                        ImsService imsService5 = ImsService.this;
                        imsService5.setNotificationVirtual(this.mSocketId, imsService5.mImsRegInfo[this.mSocketId]);
                    }
                    boolean z = ((ImsService.this.mRAN[this.mSocketId] == 2 && (ImsService.this.mImsExtInfo[this.mSocketId] & 1) == 1) || (ImsService.this.mImsExtInfo[this.mSocketId] & 16) == 16) ? ImsService.DBG : false;
                    OemPluginFactory oemPluginFactoryMakeOemPluginFactory = ExtensionFactory.makeOemPluginFactory(ImsService.this.mContext);
                    ImsRegistrationOemPlugin imsRegistrationOemPluginMakeImsRegistrationPlugin = oemPluginFactoryMakeOemPluginFactory != null ? oemPluginFactoryMakeOemPluginFactory.makeImsRegistrationPlugin(ImsService.this.mContext) : null;
                    if (imsRegistrationOemPluginMakeImsRegistrationPlugin != null) {
                        imsRegistrationOemPluginMakeImsRegistrationPlugin.broadcastImsRegistration(this.mSocketId, ImsService.this.mImsRegInfo[this.mSocketId], z);
                    }
                    break;
                case 2:
                    ImsService.this.disableIms(this.mSocketId, false);
                    break;
                case 3:
                    if (((AsyncResult) message.obj).exception != null) {
                        ImsService.this.logw("handleMessage() : turnOnIms failed, return to disabled state!");
                        ImsService.this.disableIms(this.mSocketId, false);
                    }
                    break;
                case 5:
                    ImsService.this.log("handleMessage() : [Info]EVENT_IMS_DISABLED_URC: socketId = " + this.mSocketId + " ExpImsState = " + ImsService.this.mExpectedImsState[this.mSocketId] + " mImsState = " + ImsService.this.mImsState[this.mSocketId]);
                    ImsService.this.disableIms(this.mSocketId, ImsService.DBG);
                    break;
                case 7:
                    AsyncResult asyncResult2 = (AsyncResult) message.obj;
                    boolean[] zArr = ImsService.this.mIsMTredirect;
                    int i5 = this.mSocketId;
                    if (zArr[i5]) {
                        ImsService.this.notifyRedirectIncomingCall(i5, asyncResult2);
                        ImsService.this.mRedirectIncomingAsyncResult = asyncResult2;
                        ImsService.this.mRedirectIncomingSocketId = this.mSocketId;
                    } else {
                        ImsService.this.sendIncomingCallIndication(i5, asyncResult2);
                    }
                    setRttModeForIncomingCall(ImsService.this.mImsRILAdapters[this.mSocketId]);
                    break;
                case 8:
                    String[] strArr = (String[]) ((AsyncResult) message.obj).result;
                    int i6 = Integer.parseInt(strArr[1]);
                    ImsService.this.log("handleMessage() : EVENT_CALL_INFO_INDICATION, msgType: " + i6);
                    if (i6 == 133 && ImsService.this.mPendingMTCallId[this.mSocketId] != null && ImsService.this.mPendingMTCallId[this.mSocketId].equals(strArr[0])) {
                        if (ImsService.this.mMtkPendingMT[this.mSocketId] == null) {
                            ImsService.this.mIsPendingMTTerminated[this.mSocketId] = ImsService.DBG;
                        } else {
                            ImsService.this.log("handle 133 in ImsService");
                            IImsCallSession serviceImpl = ImsService.this.mMtkPendingMT[this.mSocketId].getAospCallSessionProxy().getServiceImpl();
                            if (ImsService.this.mPendingMtkImsCallSessionProxy.containsKey(serviceImpl)) {
                                ImsService.this.mPendingMtkImsCallSessionProxy.remove(serviceImpl);
                            }
                            ImsService.this.mMtkPendingMT[this.mSocketId].callTerminated();
                            ImsService.this.mMtkPendingMT[this.mSocketId].setServiceImpl(null);
                            ImsService.this.mMtkPendingMT[this.mSocketId] = null;
                            ImsService.this.mIsPendingMTTerminated[this.mSocketId] = false;
                        }
                    }
                    break;
                case 10:
                    ImsService.this.log("handleMessage() : [Info]receive EVENT_IMS_ENABLING_URC, socketId = " + this.mSocketId + " ExpImsState = " + ImsService.this.mExpectedImsState[this.mSocketId] + " mImsState = " + ImsService.this.mImsState[this.mSocketId]);
                    if (ImsService.this.mImsState[this.mSocketId] != 1) {
                        Intent intent = new Intent("com.android.ims.IMS_SERVICE_UP");
                        intent.putExtra("android:phone_id", this.mSocketId);
                        ImsService.this.mContext.sendBroadcast(intent);
                        ImsService.this.log("handleMessage() : broadcast IMS_SERVICE_UP");
                    }
                    if (!ImsCommonUtil.supportMdAutoSetupIms()) {
                        ImsService.this.enableImsAdapter(this.mSocketId);
                    } else if (ImsService.this.mHandler[this.mSocketId].hasMessages(10)) {
                        ImsService.this.mHandler[this.mSocketId].removeMessages(10);
                    }
                    ImsService.this.mImsState[this.mSocketId] = 1;
                    break;
                case 13:
                    String[] strArr2 = (String[]) ((AsyncResult) message.obj).result;
                    if (strArr2 != null) {
                        ImsService.this.log("handleMessage() : Method =" + strArr2[3] + " response_code =" + strArr2[4] + " reason_text =" + strArr2[5]);
                        int i7 = Integer.parseInt(strArr2[3]);
                        int i8 = Integer.parseInt(strArr2[4]);
                        String str = strArr2[5];
                        if (i7 == 0 || i7 == 9) {
                            IImsServiceExt opImsService = ImsService.this.getOpImsService();
                            if (ImsService.this.mRAN[this.mSocketId] != 2 && (opImsService == null || !opImsService.isWfcRegErrorCauseSupported())) {
                                ImsService.this.mRegErrorCode[this.mSocketId] = i8;
                            } else {
                                ImsService.this.mRegErrorCode[this.mSocketId] = ImsService.this.mapToWfcRegErrorCause(i8, i7, str);
                                if (ImsService.this.mRegErrorCode[this.mSocketId] == 1600 && i7 == 0) {
                                    ImsService.this.log("handleMessage() : L-ePDG-5025 8-13. Received SIP REG 403 response, perform ImsDiscommect flow.");
                                    sendMessageDelayed(obtainMessage(14, new AsyncResult((Object) null, new int[]{0, 16}, (Throwable) null)), 1000L);
                                }
                            }
                        }
                    }
                    break;
                case 15:
                    String[] strArr3 = (String[]) ((AsyncResult) message.obj).result;
                    ImsService.this.log("EVENT_ON_USSI, m = " + strArr3[0] + ", str = " + strArr3[1]);
                    ImsCallProfile imsCallProfileOnCreateCallProfile = ImsService.this.onCreateCallProfile(1, 1, 2);
                    imsCallProfileOnCreateCallProfile.setCallExtraInt("dialstring", 2);
                    imsCallProfileOnCreateCallProfile.setCallExtra("m", strArr3[0]);
                    imsCallProfileOnCreateCallProfile.setCallExtra("str", strArr3[1]);
                    Context context = ImsService.this.mContext;
                    ImsService imsService6 = ImsService.this;
                    Handler handler = imsService6.mHandler[this.mSocketId];
                    ImsCommandsInterface[] imsCommandsInterfaceArr = ImsService.this.mImsRILAdapters;
                    int i9 = this.mSocketId;
                    ImsCallSessionProxy imsCallSessionProxy = new ImsCallSessionProxy(context, imsCallProfileOnCreateCallProfile, null, imsService6, handler, imsCommandsInterfaceArr[i9], "-1", i9);
                    Bundle bundle = new Bundle();
                    bundle.putBoolean("android:ussd", ImsService.DBG);
                    bundle.putString("android:imsCallID", "-1");
                    bundle.putInt("android:imsServiceId", ImsService.this.mapPhoneIdToServiceId(this.mSocketId));
                    ImsService.this.notifyIncomingCall(this.mSocketId, imsCallSessionProxy, bundle);
                    break;
                case 17:
                    Intent intent2 = new Intent("com.android.ims.IMS_SERVICE_DEREGISTERED");
                    intent2.putExtra("android:phone_id", this.mSocketId);
                    ImsService.this.mContext.sendBroadcast(intent2);
                    break;
                case 18:
                    ImsService.this.updateRadioState(0, this.mSocketId);
                    break;
                case 19:
                    ImsService.this.updateRadioState(1, this.mSocketId);
                    break;
                case 22:
                    boolean z2 = ((int[]) ((AsyncResult) message.obj).result)[0] == 1;
                    if (TelephonyManager.getSimStateForSlotIndex(this.mSocketId) == 1 || ImsService.this.getSubIdUsingPhoneId(this.mSocketId) <= -1) {
                        if (!ImsService.this.mRegisterSubInfoChange) {
                            IntentFilter intentFilter = new IntentFilter();
                            intentFilter.addAction("android.intent.action.ACTION_SUBINFO_RECORD_UPDATED");
                            ImsService.this.mContext.registerReceiver(ImsService.this.mSubInfoReceiver, intentFilter);
                            ImsService.this.mRegisterSubInfoChange = ImsService.DBG;
                        }
                        ImsService.this.mWaitSubInfoChange[this.mSocketId] = ImsService.DBG;
                    } else {
                        ImsService.this.mWaitSubInfoChange[this.mSocketId] = false;
                    }
                    ImsService.this.mVolteEnable[this.mSocketId] = z2;
                    if (ImsService.this.mWaitFeatureChange == 0) {
                        SystemProperties.set(ImsService.PROPERTY_IMSCONFIG_FORCE_NOTIFY, "1");
                        IntentFilter intentFilter2 = new IntentFilter();
                        intentFilter2.addAction(ImsConfigContract.ACTION_IMS_FEATURE_CHANGED);
                        ImsService.this.mContext.registerReceiver(ImsService.this.mFeatureValueReceiver, intentFilter2);
                    }
                    ImsService.this.mWaitFeatureChange |= 1 << this.mSocketId;
                    ImsService.this.setEnhanced4gLteModeSetting(this.mSocketId, z2);
                    ImsService.this.log("handleMessage() : Volte_Setting_Enable=" + z2 + ", register:" + ImsService.this.mWaitSubInfoChange[this.mSocketId] + ", mWaitFeatureChange:" + ImsService.this.mWaitFeatureChange);
                    break;
                case 23:
                    ImsService.this.log("handleMessage() : receive EVENT_RUN_GBA: Enter messege");
                    AsyncResult asyncResult3 = (AsyncResult) message.obj;
                    String[] strArr4 = (String[]) asyncResult3.result;
                    NafSessionKeyResult nafSessionKeyResult = (NafSessionKeyResult) asyncResult3.userObj;
                    synchronized (nafSessionKeyResult.lockObj) {
                        if (asyncResult3.exception != null) {
                            nafSessionKeyResult.cmdResult = 3;
                            ImsService.this.log("handleMessage() : receive EVENT_RUN_GBA: IMS_SS_CMD_ERROR");
                        } else {
                            if (!ImsService.SENLOG) {
                                ImsService.this.log("handleMessage() : receive EVENT_RUN_GBA: hexkey:" + strArr4[0] + ", btid:" + strArr4[2] + ", keylifetime:" + strArr4[3]);
                            }
                            nafSessionKeyResult.nafSessionKey = new NafSessionKey(strArr4[2], ImsCommonUtil.hexToBytes(strArr4[0]), strArr4[3]);
                            nafSessionKeyResult.cmdResult = 4;
                            ImsService.this.log("handleMessage() : receive EVENT_RUN_GBA: IMS_SS_CMD_SUCCESS");
                        }
                        nafSessionKeyResult.lockObj.notify();
                        ImsService.this.log("handleMessage() : receive EVENT_RUN_GBA: notify result");
                        break;
                    }
                    break;
                case 24:
                    ImsXuiManager imsXuiManager = ImsXuiManager.getInstance();
                    if (ImsCommonUtil.supportMdAutoSetupIms()) {
                        String[] strArr5 = (String[]) ((AsyncResult) message.obj).result;
                        if (!ImsService.SENLOG) {
                            ImsService.this.log("handleMessage() : XUI_INFO=" + Rlog.pii("ImsService", strArr5[2]));
                        }
                        imsXuiManager.setXui(this.mSocketId, strArr5[2]);
                    }
                    ImsService.this.notifyRegistrationAssociatedUriChange(imsXuiManager, this.mSocketId);
                    break;
                case 25:
                    int i10 = ((int[]) ((AsyncResult) message.obj).result)[0];
                    ImsService.this.log("receive EVENT_IMS_SUPPORT_ECC_URC, enable = " + i10 + " phoneId = " + this.mSocketId);
                    if (i10 == 0) {
                        int[] iArr3 = ImsService.this.mIsImsEccSupported;
                        int i11 = this.mSocketId;
                        iArr3[i11] = iArr3[i11] & (-2);
                    } else if (i10 == 1) {
                        int[] iArr4 = ImsService.this.mIsImsEccSupported;
                        int i12 = this.mSocketId;
                        iArr4[i12] = iArr4[i12] | 1;
                    } else if (i10 == 2) {
                        int[] iArr5 = ImsService.this.mIsImsEccSupported;
                        int i13 = this.mSocketId;
                        iArr5[i13] = iArr5[i13] & (-17);
                    } else if (i10 == 3) {
                        int[] iArr6 = ImsService.this.mIsImsEccSupported;
                        int i14 = this.mSocketId;
                        iArr6[i14] = 16 | iArr6[i14];
                    }
                    HashSet hashSet = (HashSet) ImsService.this.mListener.get(this.mSocketId);
                    if (hashSet != null) {
                        int i15 = ImsService.this.mIsImsEccSupported[this.mSocketId] > 0 ? 2 : 4;
                        synchronized (hashSet) {
                            try {
                                Iterator it = hashSet.iterator();
                                while (it.hasNext()) {
                                    ((IImsRegistrationListener) it.next()).registrationServiceCapabilityChanged(1, i15);
                                }
                            } catch (RemoteException e) {
                            }
                        }
                    }
                    break;
                case 27:
                    ImsService.this.log("handleMessage() : Start init call session proxy");
                    Bundle data = message.getData();
                    String string = data.getString("callId");
                    int i16 = data.getInt("phoneId");
                    int i17 = data.getInt("seqNum");
                    MtkImsCallSessionProxy[] mtkImsCallSessionProxyArr = ImsService.this.mMtkPendingMT;
                    Context context2 = ImsService.this.mContext;
                    ImsCallProfile imsCallProfile = ImsService.this.mImsCallProfile[i16];
                    ImsService imsService7 = ImsService.this;
                    mtkImsCallSessionProxyArr[i16] = new MtkImsCallSessionProxy(context2, imsCallProfile, null, imsService7, imsService7.mHandler[i16], ImsService.this.mImsRILAdapters[i16], string, i16);
                    Context context3 = ImsService.this.mContext;
                    ImsCallProfile imsCallProfile2 = ImsService.this.mImsCallProfile[i16];
                    ImsService imsService8 = ImsService.this;
                    ImsCallSessionProxy imsCallSessionProxy2 = new ImsCallSessionProxy(context3, imsCallProfile2, null, imsService8, imsService8.mHandler[i16], ImsService.this.mImsRILAdapters[i16], string, i16);
                    ImsService.this.mMtkPendingMT[i16].setAospCallSessionProxy(imsCallSessionProxy2);
                    imsCallSessionProxy2.setMtkCallSessionProxy(ImsService.this.mMtkPendingMT[i16]);
                    ImsService.this.mPendingMtkImsCallSessionProxy.put(imsCallSessionProxy2.getServiceImpl(), ImsService.this.mMtkPendingMT[i16]);
                    ImsService.this.mImsRILAdapters[i16].unregisterForCallInfo(ImsService.this.mHandler[i16]);
                    ImsService.this.mImsRILAdapters[i16].setCallIndication(0, Integer.parseInt(string), i17, 0);
                    if (ImsService.this.mIsPendingMTTerminated[this.mSocketId]) {
                        ImsService.this.log("handleMessage() : Start deal with pending 133");
                        IImsCallSession serviceImpl2 = imsCallSessionProxy2.getServiceImpl();
                        if (ImsService.this.mPendingMtkImsCallSessionProxy.containsKey(serviceImpl2)) {
                            ImsService.this.mPendingMtkImsCallSessionProxy.remove(serviceImpl2);
                        }
                        ImsService.this.mMtkPendingMT[i16].callTerminated();
                        ImsService.this.mMtkPendingMT[i16].setServiceImpl(null);
                        ImsService.this.mMtkPendingMT[i16] = null;
                        ImsService.this.mIsPendingMTTerminated[this.mSocketId] = false;
                    }
                    break;
                case 28:
                    int i18 = message.arg1;
                    int i19 = message.arg2;
                    int i20 = 0;
                    AsyncResult asyncResult4 = (AsyncResult) message.obj;
                    if (asyncResult4.result != null) {
                        i20 = ((MtkSmsResponse) asyncResult4.result).mMessageRef;
                    } else {
                        ImsService.this.log("handleMessage() : MtkSmsResponse was null");
                    }
                    if (asyncResult4.exception != null) {
                        ImsService.this.log("handleMessage() : SMS send failed");
                        int i21 = 2;
                        int i22 = 1;
                        if (asyncResult4.exception.getCommandError() == CommandException.Error.SMS_FAIL_RETRY) {
                            i21 = 4;
                        } else if (asyncResult4.exception.getCommandError() == CommandException.Error.FDN_CHECK_FAILURE) {
                            i22 = 6;
                        }
                        if (ImsService.mMmTelFeatureCallback.get(Integer.valueOf(i18)) != null) {
                            ((IMtkMmTelFeatureCallback) ImsService.mMmTelFeatureCallback.get(Integer.valueOf(i18))).sendSmsRsp(i19, i20, i21, i22);
                        }
                    } else {
                        ImsService.this.log("handleMessage() : SMS send complete, messageRef: " + i20);
                        if (ImsService.mMmTelFeatureCallback.get(Integer.valueOf(i18)) != null) {
                            ((IMtkMmTelFeatureCallback) ImsService.mMmTelFeatureCallback.get(Integer.valueOf(i18))).sendSmsRsp(i19, i20, 1, 0);
                        }
                    }
                    break;
                case 29:
                    ImsService.this.log("receive EVENT_UT_CAPABILITY_CHANGE, phoneId = " + message.arg1);
                    ImsService.this.notifyRegistrationCapabilityChange(message.arg1, ImsService.this.mImsExtInfo[message.arg1], false);
                    break;
                case 30:
                    AsyncResult asyncResult5 = (AsyncResult) message.obj;
                    if (asyncResult5 != null) {
                        byte[] bArr = (byte[]) asyncResult5.result;
                        ImsService.this.log("EVENT_IMS_SMS_STATUS_REPORT, mSocketId = " + this.mSocketId);
                        if (ImsService.mMmTelFeatureCallback.get(Integer.valueOf(this.mSocketId)) != null) {
                            ((IMtkMmTelFeatureCallback) ImsService.mMmTelFeatureCallback.get(Integer.valueOf(this.mSocketId))).newStatusReportInd(bArr, "3gpp");
                        }
                    }
                    break;
                case 31:
                    AsyncResult asyncResult6 = (AsyncResult) message.obj;
                    if (asyncResult6 != null) {
                        byte[] bArr2 = (byte[]) asyncResult6.result;
                        ImsService.this.log("EVENT_IMS_SMS_NEW_SMS, mSocketId = " + this.mSocketId);
                        if (ImsService.mMmTelFeatureCallback.get(Integer.valueOf(this.mSocketId)) != null) {
                            ((IMtkMmTelFeatureCallback) ImsService.mMmTelFeatureCallback.get(Integer.valueOf(this.mSocketId))).newImsSmsInd(bArr2, "3gpp");
                        }
                    }
                    break;
                case 32:
                    if (!ImsService.this.handleNewCdmaSms((AsyncResult) message.obj, this.mSocketId)) {
                        ImsService.this.acknowledgeLastIncomingCdmaSms(this.mSocketId, false, 2);
                    }
                    break;
                case 33:
                    ImsService.this.mImsRILAdapters[this.mSocketId].notifyImsServiceReady();
                    break;
                case 34:
                    ImsService.this.log("receive EVENT_VOPS_STATUS_IND, vops = " + ((int[]) ((AsyncResult) message.obj).result)[0] + " phoneId = " + this.mSocketId);
                    break;
                case 36:
                    String[] strArr6 = (String[]) ((AsyncResult) message.obj).result;
                    if (Integer.parseInt(strArr6[0]) == 100) {
                        ImsService.this.handleImsStkCall(this.mSocketId, strArr6);
                    }
                    break;
                case 37:
                    ImsRegInfo imsRegInfo = (ImsRegInfo) ((AsyncResult) message.obj).result;
                    ImsRegInfo[] imsRegInfoArr = ImsService.this.mImsRegInd;
                    int i23 = this.mSocketId;
                    imsRegInfoArr[i23] = imsRegInfo;
                    ImsService.this.notifyImsRegInd(imsRegInfo, null, i23);
                    break;
                case 38:
                    ArrayList arrayList = (ArrayList) ((AsyncResult) message.obj).result;
                    int iIntValue = -1;
                    if (((Integer) arrayList.get(0)).intValue() == 1) {
                        iIntValue = ((Integer) arrayList.get(5)).intValue() == 1 ? 1 : ((Integer) arrayList.get(5)).intValue() <= 5 ? 0 : ((Integer) arrayList.get(5)).intValue();
                    }
                    ImsService.this.log("receive EVENT_DETAIL_IMS_REGISTRATION_IND, phoneId = " + this.mSocketId + ", rat = " + iIntValue);
                    ImsService.this.updateImsRegistrationRat(this.mSocketId, iIntValue);
                    break;
            }
            IImsServiceExt opImsService2 = ImsService.this.getOpImsService();
            if (opImsService2 != null) {
                opImsService2.notifyImsServiceEvent(this.mSocketId, ImsService.this.mContext, message);
            }
        }
    }

    private class NafSessionKeyResult {
        int cmdResult;
        Object lockObj;
        NafSessionKey nafSessionKey;

        private NafSessionKeyResult() {
            this.nafSessionKey = null;
            this.cmdResult = 1;
            this.lockObj = new Object();
        }
    }

    public ImsService(Context context) {
        this.mImsAdapter = null;
        this.mImsRILAdapters = null;
        this.mPendingMT = null;
        this.mMtkPendingMT = null;
        this.mNumOfPhones = 0;
        this.mImsConfigManager = null;
        this.mImsConfigMccmnc = null;
        this.mImsConfigIccid = null;
        this.mPendingMTCallId = null;
        this.mPendingMTSeqNum = null;
        logi("init");
        this.mContext = context;
        this.mNumOfPhones = TelephonyManager.getDefault().getPhoneCount();
        if (!ImsCommonUtil.supportMdAutoSetupIms()) {
            this.mImsAdapter = new ImsAdapter(context);
        }
        int i = this.mNumOfPhones;
        this.mHandler = new MyHandler[i];
        this.mImsRILAdapters = new ImsCommandsInterface[i];
        for (int i2 = 0; i2 < this.mNumOfPhones; i2++) {
            this.mHandler[i2] = new MyHandler(i2);
            ImsRILAdapter imsRILAdapter = new ImsRILAdapter(context, i2);
            imsRILAdapter.registerForNotAvailable(this.mHandler[i2], 2, null);
            imsRILAdapter.registerForOff(this.mHandler[i2], 18, null);
            imsRILAdapter.registerForOn(this.mHandler[i2], 19, null);
            imsRILAdapter.registerForImsRegistrationInfo(this.mHandler[i2], 1, null);
            imsRILAdapter.registerForImsEnableStart(this.mHandler[i2], 10, null);
            imsRILAdapter.registerForImsEnableComplete(this.mHandler[i2], 11, null);
            imsRILAdapter.registerForImsDisableStart(this.mHandler[i2], 12, null);
            imsRILAdapter.registerForImsDisableComplete(this.mHandler[i2], 5, null);
            imsRILAdapter.setOnIncomingCallIndication(this.mHandler[i2], 7, null);
            imsRILAdapter.registerForCallProgressIndicator(this.mHandler[i2], 13, null);
            imsRILAdapter.registerForImsDeregisterComplete(this.mHandler[i2], 17, null);
            imsRILAdapter.registerForImsEccSupport(this.mHandler[i2], 25, null);
            imsRILAdapter.setOnUSSI(this.mHandler[i2], 15, null);
            imsRILAdapter.registerForImsRTPInfo(this.mHandler[i2], 20, null);
            imsRILAdapter.registerForImsRegStatusInd(this.mHandler[i2], 37, null);
            imsRILAdapter.registerForDetailImsRegistrationInd(this.mHandler[i2], 38, null);
            if (ImsCommonUtil.supportMdAutoSetupIms()) {
                imsRILAdapter.registerForXuiInfo(this.mHandler[i2], 24, null);
            }
            imsRILAdapter.setOnSmsStatus(this.mHandler[i2], 30, null);
            imsRILAdapter.setOnNewSms(this.mHandler[i2], 31, null);
            imsRILAdapter.setOnNewCdmaSms(this.mHandler[i2], 32, null);
            imsRILAdapter.registerForVopsStatusInd(this.mHandler[i2], 34, null);
            imsRILAdapter.registerForCallAdditionalInfo(this.mHandler[i2], 36, null);
            this.mImsRILAdapters[i2] = imsRILAdapter;
        }
        if (ImsCommonUtil.supportMdAutoSetupIms()) {
            log("Initializing");
            this.mImsDataTracker = new ImsDataTracker(context, this.mImsRILAdapters);
        }
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("com.mediatek.ims.ACTION_IMS_SIMULATE");
        intentFilter.addAction("android.intent.action.BOOT_COMPLETED");
        intentFilter.addAction("android.intent.action.SIM_STATE_CHANGED");
        if (SystemProperties.getInt("ro.vendor.mtk_ims_notification", 0) == 1) {
            intentFilter.addAction("android.intent.action.SERVICE_STATE");
        }
        context.registerReceiver(this.mBroadcastReceiver, intentFilter);
        int i3 = this.mNumOfPhones;
        this.mImsRegInfo = new int[i3];
        this.mImsExtInfo = new int[i3];
        this.mServiceId = new int[i3];
        this.mImsState = new int[i3];
        this.mExpectedImsState = new int[i3];
        this.mRegErrorCode = new int[i3];
        this.mRAN = new int[i3];
        this.mImsEcbm = new ImsEcbmProxy[i3];
        this.mImsEvtPkgAdapter = new ImsEventPackageAdapter[i3];
        this.mImsConfigManager = new ImsConfigManager(context, this.mImsRILAdapters);
        int i4 = this.mNumOfPhones;
        this.mImsConfigMccmnc = new String[i4];
        this.mImsConfigIccid = new String[i4];
        this.mIsImsEccSupported = new int[i4];
        this.mWaitSubInfoChange = new boolean[i4];
        this.mVolteEnable = new boolean[i4];
        this.mImsRegInd = new ImsRegInfo[i4];
        this.mPendingMT = new ImsCallSessionProxy[i4];
        this.mMtkPendingMT = new MtkImsCallSessionProxy[i4];
        this.mPendingMTCallId = new String[i4];
        this.mPendingMTSeqNum = new String[i4];
        this.mIsPendingMTTerminated = new boolean[i4];
        this.mImsCallProfile = new ImsCallProfile[i4];
        this.mMultiEndpoints = new ImsMultiEndpointProxy[i4];
        this.mIsMTredirect = new boolean[i4];
        this.mWfcPdnState = new int[i4];
        this.mWfcRegErrorCode = new int[i4];
        HandlerThread handlerThread = new HandlerThread("MtkSSExt");
        handlerThread.start();
        Looper looper = handlerThread.getLooper();
        for (int i5 = 0; i5 < this.mNumOfPhones; i5++) {
            this.mListener.add(new HashSet<>());
            this.mMtkListener.add(new HashSet<>());
            this.mImsRegInfo[i5] = 3;
            this.mImsExtInfo[i5] = 0;
            this.mServiceId[i5] = i5 + 1;
            this.mImsState[i5] = 0;
            this.mExpectedImsState[i5] = 0;
            this.mRegErrorCode[i5] = 0;
            this.mRAN[i5] = 1;
            this.mWfcPdnState[i5] = 0;
            this.mWfcRegErrorCode[i5] = 0;
            this.mImsEcbm[i5] = new ImsEcbmProxy(this.mContext, this.mImsRILAdapters[i5], i5);
            this.mImsConfigManager.init(i5);
            this.mIsImsEccSupported[i5] = 0;
            if (ImsCommonUtil.supportMdAutoSetupIms()) {
                sMtkSSExt.put(Integer.valueOf(i5), new MtkSuppServExt(this.mContext, i5, this, looper));
            }
            this.mImsEvtPkgAdapter[i5] = new ImsEventPackageAdapter(this.mContext, this.mHandler[i5], this.mImsRILAdapters[i5], i5);
            this.mWaitSubInfoChange[i5] = false;
            this.mVolteEnable[i5] = false;
            this.mIsPendingMTTerminated[i5] = false;
            this.mIsMTredirect[i5] = false;
        }
        if (ImsCommonUtil.supportMims()) {
            for (int i6 = 0; i6 < TelephonyManager.getDefault().getPhoneCount(); i6++) {
                this.mImsRILAdapters[i6].setImsRegistrationReport(this.mHandler[i6].obtainMessage(21));
                if (!ImsCommonUtil.supportMdAutoSetupIms()) {
                    initImsAvailability(i6, i6, 3, 4);
                }
            }
        } else {
            int mainCapabilityPhoneId = ImsCommonUtil.getMainCapabilityPhoneId();
            log("getMainCapabilityPhoneId: mainPhoneId = " + mainCapabilityPhoneId);
            this.mImsRILAdapters[mainCapabilityPhoneId].setImsRegistrationReport(this.mHandler[mainCapabilityPhoneId].obtainMessage(21));
            if (!ImsCommonUtil.supportMdAutoSetupIms() && SubscriptionManager.isValidPhoneId(mainCapabilityPhoneId)) {
                initImsAvailability(mainCapabilityPhoneId, 0, 3, 4);
            }
        }
        ExtensionFactory.makeOemPluginFactory(this.mContext);
        ExtensionFactory.makeExtensionPluginFactory(this.mContext);
        startWfoService();
        for (int i7 = 0; i7 < TelephonyManager.getDefault().getPhoneCount(); i7++) {
            Handler[] handlerArr = this.mHandler;
            handlerArr[i7].sendMessage(handlerArr[i7].obtainMessage(33));
        }
        IImsServiceExt opImsService = getOpImsService();
        if (opImsService != null) {
            for (int i8 = 0; i8 < TelephonyManager.getDefault().getPhoneCount(); i8++) {
                opImsService.notifyImsServiceEvent(i8, this.mContext, this.mHandler[i8].obtainMessage(39));
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void bindAndRegisterMWIService() {
        bindAndRegisterWifiOffloadService();
    }

    private void checkAndBindWifiOffloadService() {
        IBinder service = ServiceManager.getService(WifiOffloadManager.WFO_SERVICE);
        if (service != null) {
            try {
                service.linkToDeath(this.mDeathRecipient, 0);
            } catch (RemoteException e) {
            }
            sWifiOffloadService = IWifiOffloadService.Stub.asInterface(service);
        } else {
            loge("can't get WifiOffloadService");
            IBinder service2 = ServiceManager.getService(MwisConstants.MWI_SERVICE);
            try {
                if (service2 != null) {
                    service2.linkToDeath(this.mDeathRecipient, 0);
                    sWifiOffloadService = IMwiService.Stub.asInterface(service2).getWfcHandlerInterface();
                } else {
                    log("No MwiService exist");
                }
            } catch (RemoteException e2) {
                Rlog.e("ImsService", "can't get MwiService", e2);
            }
        }
        log("checkAndBindWifiOffloadService: sWifiOffloadService = " + sWifiOffloadService);
    }

    private MmTelFeature.MmTelCapabilities convertCapabilities(int[] iArr) {
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
        if (zArr[1] || zArr[3]) {
            mmTelCapabilities.addCapabilities(2);
        }
        if (zArr[4] || zArr[5]) {
            mmTelCapabilities.addCapabilities(4);
        }
        log("convertCapabilities - capabilities: " + mmTelCapabilities);
        return mmTelCapabilities;
    }

    private int convertImsRegistrationTech(int i) {
        if (i != 14) {
            return i != 18 ? -1 : 1;
        }
        return 0;
    }

    private ImsReasonInfo createImsReasonInfo(int i) {
        int[] iArr = this.mRegErrorCode;
        return new ImsReasonInfo(1000, iArr[i], Integer.toString(iArr[i]));
    }

    private IWifiOffloadListenerProxy createWifiOffloadListenerProxy() {
        if (this.mProxy == null) {
            log("create WifiOffloadListenerProxy");
            this.mProxy = new IWifiOffloadListenerProxy();
        }
        return this.mProxy;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void disableIms(int i, boolean z) {
        if (!ImsCommonUtil.supportMdAutoSetupIms()) {
            disableImsAdapter(i, z);
        }
        this.mImsState[i] = 0;
    }

    private void disableImsAdapter(int i, boolean z) {
        this.mImsAdapter.disableImsAdapter(i, z);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void enableImsAdapter(int i) {
        this.mImsAdapter.enableImsAdapter(i);
    }

    private void enforceModifyPermission() {
        this.mContext.enforceCallingOrSelfPermission("android.permission.MODIFY_PHONE_STATE", null);
    }

    private void englog(String str) {
        if (ENGLOAD) {
            log(str);
        }
    }

    private String eventToString(int i) {
        switch (i) {
            case 1:
                return "EVENT_IMS_REGISTRATION_INFO";
            case 2:
                return "EVENT_RADIO_NOT_AVAILABLE";
            case 3:
                return "EVENT_SET_IMS_ENABLED_DONE";
            case 4:
                return "EVENT_SET_IMS_DISABLE_DONE";
            case 5:
                return "EVENT_IMS_DISABLED_URC";
            case 6:
                return "EVENT_VIRTUAL_SIM_ON";
            case 7:
                return "EVENT_INCOMING_CALL_INDICATION";
            case 8:
                return "EVENT_CALL_INFO_INDICATION";
            case 9:
            case 29:
            case 35:
            default:
                return "UNKNOWN EVENT: " + i;
            case 10:
                return "EVENT_IMS_ENABLING_URC";
            case 11:
                return "EVENT_IMS_ENABLED_URC";
            case 12:
                return "EVENT_IMS_DISABLING_URC";
            case 13:
                return "EVENT_SIP_CODE_INDICATION";
            case 14:
                return "EVENT_SIP_CODE_INDICATION_DEREG";
            case 15:
                return "EVENT_ON_USSI";
            case 16:
                return "EVENT_IMS_DEREG_DONE";
            case 17:
                return "EVENT_IMS_DEREG_URC";
            case 18:
                return "EVENT_RADIO_OFF";
            case 19:
                return "EVENT_RADIO_ON";
            case 20:
                return "EVENT_IMS_RTP_INFO_URC";
            case 21:
                return "EVENT_SET_IMS_REGISTRATION_REPORT_DONE";
            case 22:
                return "EVENT_IMS_VOLTE_SETTING_URC";
            case 23:
                return "EVENT_RUN_GBA";
            case 24:
                return "EVENT_SELF_IDENTIFY_UPDATE";
            case 25:
                return "EVENT_IMS_SUPPORT_ECC_URC";
            case 26:
                return "EVENT_START_GBA_SERVICE";
            case 27:
                return "EVENT_INIT_CALL_SESSION_PROXY";
            case 28:
                return "EVENT_SEND_SMS_DONE";
            case 30:
                return "EVENT_IMS_SMS_STATUS_REPORT";
            case 31:
                return "EVENT_IMS_SMS_NEW_SMS";
            case 32:
                return "EVENT_IMS_SMS_NEW_CDMA_SMS";
            case 33:
                return "EVENT_READY_TO_RECEIVE_PENDING_IND";
            case 34:
                return "EVENT_VOPS_STATUS_IND";
            case 36:
                return "EVENT_CALL_ADDITIONAL_INFO_INDICATION";
        }
    }

    private boolean getBooleanFromCarrierConfig(int i, String str) {
        PersistableBundle configForSubId = ((CarrierConfigManager) this.mContext.getSystemService("carrier_config")).getConfigForSubId(getSubIdUsingPhoneId(i));
        if (configForSubId == null) {
            configForSubId = CarrierConfigManager.getDefaultConfig();
        }
        boolean z = configForSubId.getBoolean(str);
        log("getBooleanFromCarrierConfig() : key = " + str + " result = " + z);
        return z;
    }

    public static ImsService getInstance(Context context) {
        ImsService imsService;
        synchronized (mLock) {
            if (sInstance == null && context != null) {
                ImsService imsService2 = new ImsService(context);
                sInstance = imsService2;
                imsService2.log("ImsService is created!");
            }
            imsService = sInstance;
        }
        return imsService;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public IImsServiceExt getOpImsService() {
        return OpImsServiceCustomizationUtils.getOpFactory(this.mContext).makeImsServiceExt(this.mContext);
    }

    private int getRadioTech(int i) throws RemoteException {
        log("getRadioTech mRAN = " + this.mRAN[i]);
        if (ImsCommonUtil.supportMdAutoSetupIms()) {
            bindAndRegisterMWIService();
        } else {
            bindAndRegisterWifiOffloadService();
            IWifiOffloadService iWifiOffloadService = sWifiOffloadService;
            if (iWifiOffloadService != null) {
                this.mRAN[i] = iWifiOffloadService.getRatType(i);
            }
        }
        int i2 = this.mRAN[i] != 2 ? 14 : 18;
        log("getRadioTech mRAN=" + this.mRAN[i] + ", radioTech=" + i2);
        return i2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleImsStkCall(int i, String[] strArr) {
        String str = strArr[1];
        String str2 = strArr[7];
        ImsCallProfile imsCallProfile = new ImsCallProfile();
        if (str2 != null && !str2.equals("")) {
            log("setCallIndication new call profile: " + sensitiveEncode(str2));
            imsCallProfile.setCallExtra("oi", str2);
            imsCallProfile.setCallExtraInt("oir", 2);
        }
        this.mMtkPendingMT[i] = new MtkImsCallSessionProxy(this.mContext, imsCallProfile, null, this, this.mHandler[i], this.mImsRILAdapters[i], str, i);
        ImsCallSessionProxy imsCallSessionProxy = new ImsCallSessionProxy(this.mContext, imsCallProfile, null, this, this.mHandler[i], this.mImsRILAdapters[i], str, i);
        this.mMtkPendingMT[i].setAospCallSessionProxy(imsCallSessionProxy);
        imsCallSessionProxy.setMtkCallSessionProxy(this.mMtkPendingMT[i]);
        this.mPendingMtkImsCallSessionProxy.put(imsCallSessionProxy.getServiceImpl(), this.mMtkPendingMT[i]);
        ImsServiceCallTracker.getInstance(i).processCallInfoIndication((String[]) Arrays.copyOfRange(strArr, 1, strArr.length), imsCallSessionProxy, imsCallSessionProxy.getCallProfile());
        Bundle bundle = new Bundle();
        bundle.putString("android:imsCallID", str);
        bundle.putString("android:imsDialString", strArr[6]);
        bundle.putInt("android:imsServiceId", i);
        bundle.putBoolean("android:isUnknown", DBG);
        notifyIncomingCallSession(i, imsCallSessionProxy.getServiceImpl(), bundle);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean handleNewCdmaSms(AsyncResult asyncResult, int i) {
        if (asyncResult.exception != null) {
            loge("Exception processing incoming SMS: " + asyncResult.exception);
            return false;
        }
        SmsMessage smsMessage = (SmsMessage) asyncResult.result;
        if (smsMessage == null) {
            loge("SmsMessage is null");
            return false;
        }
        com.android.internal.telephony.cdma.SmsMessage smsMessage2 = smsMessage.mWrappedSmsMessage;
        if (smsMessage2 == null) {
            loge("SmsMessageBase is null");
            return false;
        }
        if (mMmTelFeatureCallback == null) {
            loge("mMmTelFeatureCallback is null");
            return false;
        }
        boolean z = false;
        com.android.internal.telephony.cdma.SmsMessage smsMessage3 = smsMessage2;
        if (smsMessage3.getMessageType() == 0) {
            try {
                smsMessage3.parseSms();
                if (smsMessage3.isStatusReportMessage()) {
                    z = true;
                }
            } catch (RuntimeException e) {
                loge("Exception dispatching message: " + e);
                return false;
            }
        }
        if (z) {
            log("EVENT_IMS_SMS_STATUS_REPORT, socketId = " + i);
            mMmTelFeatureCallback.get(Integer.valueOf(i)).newStatusReportInd(smsMessage2.getPdu(), "3gpp2");
            return DBG;
        }
        log("EVENT_IMS_SMS_NEW_SMS, socketId = " + i);
        mMmTelFeatureCallback.get(Integer.valueOf(i)).newImsSmsInd(smsMessage2.getPdu(), "3gpp2");
        return DBG;
    }

    private void handleWifiPdnOOS(int i, int i2) {
        log("handleWifiPdnOOS oosState= " + i2);
        if (i2 == 0) {
            this.mTempDisableWFC[i] = false;
            this.mRAN[i] = 1;
            int[] iArr = this.mImsExtInfo;
            iArr[i] = iArr[i] & (-17);
        } else if (i2 == 1) {
            this.mTempDisableWFC[i] = DBG;
        } else if (i2 == 2) {
            this.mTempDisableWFC[i] = false;
        }
        notifyRegistrationStateChange(i, this.mImsRegInfo[i], false);
        notifyRegistrationCapabilityChange(i, this.mImsExtInfo[i], false);
    }

    private void initImsAvailability(int i, int i2, int i3, int i4) {
        int i5 = SystemProperties.getInt(ImsConfigUtils.PROPERTY_VOLTE_ENALBE, 0);
        int i6 = SystemProperties.getInt(ImsConfigUtils.PROPERTY_WFC_ENALBE, 0);
        if (((1 << i2) & i5) > 0 || ((1 << i2) & i6) > 0) {
            log("initImsAvailability turnOnIms : " + i);
            this.mImsRILAdapters[i].turnOnIms(this.mHandler[i].obtainMessage(i3));
            this.mImsState[i] = 2;
        } else {
            log("initImsAvailability turnOffIms : " + i);
            this.mImsRILAdapters[i].turnOffIms(this.mHandler[i].obtainMessage(i4));
            this.mImsState[i] = 3;
        }
        updateRadioState(2, i);
    }

    private boolean isOp09SimCard(String str) {
        if (str.startsWith("898603") || str.startsWith("898611") || str.startsWith("8985302") || str.startsWith("8985307") || str.startsWith("8985231")) {
            return DBG;
        }
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void log(String str) {
        Rlog.d("ImsService", str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void loge(String str) {
        Rlog.e("ImsService", str);
    }

    private void logi(String str) {
        Rlog.i("ImsService", str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void logw(String str) {
        Rlog.w("ImsService", str);
    }

    private int mapSipErrorCode(int i) {
        if (i < 300) {
            return 1000;
        }
        if (i < 400) {
            return 321;
        }
        if (i >= 500) {
            if (i < 600) {
                if (i == 501) {
                    return 351;
                }
                if (i != 503) {
                    return i != 504 ? 354 : 353;
                }
                return 352;
            }
            if (i >= 700) {
                return 1000;
            }
            if (i == 600) {
                return 338;
            }
            if (i == 606) {
                return 340;
            }
            if (i != 603) {
                return i != 604 ? 362 : 341;
            }
            return 361;
        }
        if (i == 400) {
            return 331;
        }
        if (i != 406) {
            if (i == 408) {
                return 335;
            }
            if (i == 410) {
                return 341;
            }
            if (i == 420) {
                return 334;
            }
            if (i == 480) {
                return 336;
            }
            if (i == 484) {
                return 337;
            }
            if (i == 403) {
                return 332;
            }
            if (i == 404) {
                return 333;
            }
            if (i == 415 || i == 416) {
                return 334;
            }
            switch (i) {
                case SipMessage.CODE_SESSION_INVITE_FAILED_REMOTE_BUSY /* 486 */:
                    return 338;
                case 487:
                    return 339;
                case 488:
                    break;
                default:
                    return 342;
            }
        }
        return 340;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int mapToWfcRegErrorCause(int i, int i2, String str) {
        int i3 = WfcReasonInfo.CODE_UNSPECIFIED;
        if (i != 403) {
            if (i == 500) {
                i3 = WfcReasonInfo.CODE_WFC_INTERNAL_SERVER_ERROR;
            } else if (i != 503) {
                if (i != 606) {
                    switch (i) {
                        case 40301:
                            i3 = WfcReasonInfo.CODE_WFC_403_UNKNOWN_USER;
                            break;
                        case 40302:
                            i3 = WfcReasonInfo.CODE_WFC_403_ROAMING_NOT_ALLOWED;
                            break;
                        case 40303:
                            i3 = WfcReasonInfo.CODE_WFC_403_MISMATCH_IDENTITIES;
                            break;
                        case 40304:
                            i3 = WfcReasonInfo.CODE_WFC_403_AUTH_SCHEME_UNSUPPORTED;
                            break;
                        case 40305:
                            i3 = WfcReasonInfo.CODE_WFC_403_HANDSET_BLACKLISTED;
                            break;
                    }
                } else if (i2 == 0 && str.equals("Not Acceptable")) {
                    i3 = WfcReasonInfo.CODE_WFC_606_WIFI_CALLING_IP_NOT_ACCEPTABLE;
                }
            } else if (i2 == 0 && str.equals("Emergency Calls over Wi-Fi is not allowed in this location")) {
                i3 = WfcReasonInfo.CODE_WFC_503_ECC_OVER_WIFI_NOT_ALLOWED;
            }
        } else if (i2 == 9 && str.equals("SHOW_WIFI_REG09")) {
            i3 = WfcReasonInfo.CODE_WFC_911_MISSING;
        } else if (i2 == 0 && str.equals("WiFi Calling Not Allowed from this Region")) {
            i3 = WfcReasonInfo.CODE_WFC_403_NOT_ALLOWED_FROM_THIS_REGION;
        } else {
            i3 = i2 == 0 ? WfcReasonInfo.CODE_WFC_403_FORBIDDEN : WfcReasonInfo.CODE_WFC_403_MISMATCH_IDENTITIES;
        }
        log("mapToWfcRegErrorCause(), sipErrorCode:" + i + " sipMethod:" + i2 + " sipReasonText: " + str + " wfcRegErrorCode:" + i3);
        return i3;
    }

    private void notifyCapabilityChanged(int i, MmTelFeature.MmTelCapabilities mmTelCapabilities) {
        synchronized (this.mCapLockObj) {
            if (mMmTelFeatureCallback.get(Integer.valueOf(i)) != null) {
                mMmTelFeatureCallback.get(Integer.valueOf(i)).notifyCapabilitiesChanged(mmTelCapabilities);
            } else {
                loge("There is not IMtkMmTelFeatureCallback for slot " + i);
            }
        }
    }

    private void notifyCapabilityChangedEx(int i, final int[] iArr, final int[] iArr2) {
        HashSet<IImsRegistrationListener> hashSet = this.mListener.get(i);
        if (hashSet != null) {
            synchronized (hashSet) {
                hashSet.forEach(new Consumer() { // from class: com.mediatek.ims.-$$Lambda$ImsService$Cms3drtFerZJcFg-sT1ybVcEEaM
                    @Override // java.util.function.Consumer
                    public final void accept(Object obj) {
                        ((IImsRegistrationListener) obj).registrationFeatureCapabilityChanged(1, iArr, iArr2);
                    }
                });
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyImsRegInd(final ImsRegInfo imsRegInfo, IMtkImsRegistrationListener iMtkImsRegistrationListener, int i) {
        if (imsRegInfo == null || imsRegInfo.mReportType < 0) {
            log("Do not get +IMSREGURI yet.");
            return;
        }
        final ImsReasonInfo imsReasonInfo = new ImsReasonInfo(mapSipErrorCode(imsRegInfo.mErrorCode), 0, imsRegInfo.mErrorMsg);
        final Uri[] uriArrConvertUri = convertUri(imsRegInfo.mUri);
        englog("Notify " + registrationStateToString(imsRegInfo.mReportType) + " uri " + Rlog.pii("ImsService", imsRegInfo.mUri) + " expireTime " + imsRegInfo.mExpireTime + " imsReasonInfo " + imsReasonInfo + " listener " + iMtkImsRegistrationListener);
        if (iMtkImsRegistrationListener != null) {
            try {
                iMtkImsRegistrationListener.onRegistrationImsStateChanged(imsRegInfo.mReportType, uriArrConvertUri, imsRegInfo.mExpireTime, imsReasonInfo);
            } catch (RemoteException e) {
                loge("onRegistrationImsStateChanged failed!!");
            }
        } else {
            HashSet<IMtkImsRegistrationListener> hashSet = this.mMtkListener.get(i);
            if (hashSet != null) {
                synchronized (hashSet) {
                    hashSet.forEach(new Consumer() { // from class: com.mediatek.ims.-$$Lambda$ImsService$YqrpTjASgO1BfAQxcka5yskrfAQ
                        @Override // java.util.function.Consumer
                        public final void accept(Object obj) {
                            this.f$0.lambda$notifyImsRegInd$5$ImsService(imsRegInfo, uriArrConvertUri, imsReasonInfo, (IMtkImsRegistrationListener) obj);
                        }
                    });
                }
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyIncomingCall(int i, ImsCallSessionImplBase imsCallSessionImplBase, Bundle bundle) {
        if (mMmTelFeatureCallback.get(Integer.valueOf(i)) != null) {
            mMmTelFeatureCallback.get(Integer.valueOf(i)).notifyIncomingCall(imsCallSessionImplBase, bundle);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyRedirectIncomingCall(final int i, final AsyncResult asyncResult) {
        HashSet<IMtkImsRegistrationListener> hashSet = this.mMtkListener.get(i);
        if (hashSet != null) {
            synchronized (hashSet) {
                hashSet.forEach(new Consumer() { // from class: com.mediatek.ims.-$$Lambda$ImsService$ZSU0zi1_CR_tVhNgJwIx7D2DHwU
                    @Override // java.util.function.Consumer
                    public final void accept(Object obj) {
                        this.f$0.lambda$notifyRedirectIncomingCall$6$ImsService(i, asyncResult, (IMtkImsRegistrationListener) obj);
                    }
                });
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyRegistrationAssociatedUriChange(ImsXuiManager imsXuiManager, int i) {
        final Uri[] selfIdentifyUri = imsXuiManager.getSelfIdentifyUri(i);
        log("notifyRegistrationAssociatedUriChange phoneId=" + i);
        englog("uris=" + Rlog.pii("ImsService", selfIdentifyUri));
        HashSet<IImsRegistrationListener> hashSet = this.mListener.get(i);
        if (hashSet != null && selfIdentifyUri != null) {
            synchronized (hashSet) {
                hashSet.forEach(new Consumer() { // from class: com.mediatek.ims.-$$Lambda$ImsService$GZ0ahyx7HZsBpKxFCTrTHOwrNgo
                    @Override // java.util.function.Consumer
                    public final void accept(Object obj) {
                        this.f$0.lambda$notifyRegistrationAssociatedUriChange$0$ImsService(selfIdentifyUri, (IImsRegistrationListener) obj);
                    }
                });
            }
        }
        updateAssociatedUriChanged(i, selfIdentifyUri);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyRegistrationCapabilityChange(int i, int i2, boolean z) {
        log("notifyRegistrationCapabilityChange imsExtInfo= " + i2 + ", phoneId=" + i + ", staticReg=" + z);
        int[] iArr = new int[6];
        int[] iArr2 = new int[6];
        updateCapabilityChange(i, i2, iArr, iArr2);
        updateUtCapabilityChange(i, iArr, iArr2);
        MmTelFeature.MmTelCapabilities mmTelCapabilitiesConvertCapabilities = convertCapabilities(iArr);
        if ((i2 & 4) == 4) {
            mmTelCapabilitiesConvertCapabilities.addCapabilities(8);
        }
        if (!z) {
            notifyCapabilityChanged(i, mmTelCapabilitiesConvertCapabilities);
        }
        notifyCapabilityChangedEx(i, iArr, iArr2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyRegistrationOOSStateChanged(int i, int i2) {
        handleWifiPdnOOS(i, i2);
        HashSet<IImsRegistrationListener> hashSet = this.mListener.get(i);
        if (hashSet == null) {
            log("notifyRegistrationOOSStateChanged: listeners is null");
            return;
        }
        synchronized (hashSet) {
            int i3 = 5;
            if (i2 == 0) {
                i3 = 6;
            } else if (i2 == 1) {
                i3 = 5;
            } else if (i2 == 2) {
                i3 = 7;
            }
            try {
                log("notifyRegistrationOOSStateChanged listener size: " + hashSet.size());
                for (IImsRegistrationListener iImsRegistrationListener : hashSet) {
                    log("call registrationServiceCapabilityChanged with event: " + i3);
                    iImsRegistrationListener.registrationServiceCapabilityChanged(1, i3);
                }
            } catch (RemoteException e) {
                log(e.toString());
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyRegistrationStateChange(int i, int i2, boolean z) {
        synchronized (this.mLockObj) {
            log("notifyRegistrationStateChange imsRegInfo= " + i2 + ", phoneId=" + i + ", staticReg=" + z + ", mRAN[phoneId]=" + this.mRAN[i]);
            this.mListener.get(i);
            if (i2 == 0) {
                try {
                    int radioTech = getRadioTech(i);
                    setWfcRegErrorCodeWithPdn(i, 0);
                    if (!z) {
                        updateImsRegstration(i, 2, convertImsRegistrationTech(radioTech), null);
                    }
                    updateImsRegstrationEx(i, i2, convertImsRegistrationTech(radioTech), null);
                    IImsServiceExt opImsService = getOpImsService();
                    if (opImsService != null) {
                        opImsService.notifyRegistrationStateChange(this.mRAN[i], this.mHandler[i], this.mImsRILAdapters[i]);
                    }
                    this.mRegErrorCode[i] = 0;
                } catch (RemoteException e) {
                    loge("IMS: notifyStateChange fail on access WifiOffloadService");
                }
            } else {
                setWfcRegErrorCodeWithPdn(i, this.mRegErrorCode[i]);
                ImsReasonInfo imsReasonInfoCreateImsReasonInfo = createImsReasonInfo(i);
                updateImsRegstration(i, 3, -1, imsReasonInfoCreateImsReasonInfo);
                updateImsRegstrationEx(i, i2, -1, imsReasonInfoCreateImsReasonInfo);
            }
        }
    }

    private String registrationStateToString(int i) {
        if (i == 0) {
            return "IMS_REGISTERING";
        }
        if (i != 1) {
            return i != 2 ? "" : "IMS_REGISTER_FAIL";
        }
        return "IMS_REGISTERED";
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void resetXuiAndNotify(int i) {
        log("resetXuiAndNotify() phoneId: " + i);
        ImsXuiManager.getInstance().setXui(i, null);
        final Uri[] uriArr = {Uri.parse("")};
        HashSet<IImsRegistrationListener> hashSet = this.mListener.get(i);
        if (hashSet != null) {
            synchronized (hashSet) {
                hashSet.forEach(new Consumer() { // from class: com.mediatek.ims.-$$Lambda$ImsService$FjfXO7_7sxN84aO5RoWE5NZ54GI
                    @Override // java.util.function.Consumer
                    public final void accept(Object obj) {
                        this.f$0.lambda$resetXuiAndNotify$4$ImsService(uriArr, (IImsRegistrationListener) obj);
                    }
                });
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:25:0x00e7  */
    public void sendIncomingCallIndication(int i, AsyncResult asyncResult) {
        boolean z;
        this.mIsPendingMTTerminated[i] = false;
        this.mImsRILAdapters[i].registerForCallInfo(this.mHandler[i], 8, null);
        String str = ((String[]) asyncResult.result)[0];
        this.mPendingMTCallId[i] = str;
        String str2 = ((String[]) asyncResult.result)[1];
        String str3 = ((String[]) asyncResult.result)[3];
        String str4 = ((String[]) asyncResult.result)[4];
        String str5 = ((String[]) asyncResult.result)[6];
        log("sendIncomingCallIndication() : call_id = " + str + " dialString = " + sensitiveEncode(str2) + " seqNum = " + str4 + " phoneId = " + i);
        ImsServiceCallTracker imsServiceCallTracker = ImsServiceCallTracker.getInstance(i);
        boolean z2 = DBG;
        if (TelephonyManager.getTelephonyProperty(i, ImsConstants.PROPERTY_TBCW_MODE, ImsConstants.TBCW_DISABLED).equals(ImsConstants.TBCW_OFF) && imsServiceCallTracker.isInCall()) {
            log("sendIncomingCallIndication() : PROPERTY_TBCW_MODE = TBCW_OFF. Reject the call as UDUB ");
            z2 = false;
        }
        if (ImsServiceCallTracker.isEccExistOnAnySlot()) {
            log("sendIncomingCallIndication() : there is an ECC call, dis-allow this incoming call!");
            z2 = false;
        }
        if (!getBooleanFromCarrierConfig(i, "allow_hold_video_call_bool")) {
            log("sendIncomingCallIndication() : OP01 or OP09 case");
            if (imsServiceCallTracker.isVideoCallExist()) {
                log("sendIncomingCallIndication() : there is video calls, dis-allow this incoming call!");
                z2 = false;
            } else if (imsServiceCallTracker.isVideoCall(Integer.parseInt(str3)) && imsServiceCallTracker.isInCall()) {
                log("sendIncomingCallIndication() : MT is video calls during call, dis-allow this incoming call!");
                z2 = false;
            }
        }
        if (OperatorUtils.isMatched(OperatorUtils.OPID.OP129, i)) {
            log("sendIncomingCallIndication() : OP129 case");
            if (imsServiceCallTracker.isConferenceHostCallExist()) {
                log("sendIncomingCallIndication() : there is conference call, dis-allow this incoming call!");
                z = false;
            } else {
                z = z2;
            }
        } else {
            z = z2;
        }
        log("sendIncomingCallIndication() : isAllow = " + z);
        if (!z) {
            setCallIndicationInternal(i, str, str2, Integer.parseInt(str4), str5, z, -1);
            return;
        }
        boolean z3 = z;
        boolean booleanFromCarrierConfig = getBooleanFromCarrierConfig(i, ImsCarrierConfigConstants.MTK_KEY_SUPPORT_ENHANCED_CALL_BLOCKING_BOOL);
        log("sendIncomingCallIndication() : needCheckEnhanceCallBlacking = " + booleanFromCarrierConfig);
        if (!booleanFromCarrierConfig) {
            setCallIndicationInternal(i, str, str2, Integer.parseInt(str4), str5, z3, -1);
            return;
        }
        Intent intent = new Intent("com.android.ims.IMS_INCOMING_CALL_INDICATION");
        intent.setPackage(ImsConstants.PACKAGE_NAME_PHONE);
        intent.putExtra("android:imsCallID", str);
        intent.putExtra("android:imsDialString", str2);
        intent.putExtra("android:imsCallMode", Integer.parseInt(str3));
        intent.putExtra("android:imsSeqNum", Integer.parseInt(str4));
        intent.putExtra("android:phoneId", i);
        intent.putExtra("mediatek:mtToNumber", str5);
        this.mPendingMTSeqNum[i] = str4;
        this.mContext.sendBroadcast(intent);
    }

    private String sensitiveEncode(String str) {
        return ImsServiceCallTracker.sensitiveEncode(str);
    }

    private void setCallIndicationInternal(int i, String str, String str2, int i2, String str3, boolean z, int i3) {
        if (!z) {
            this.mImsRILAdapters[i].setCallIndication(1, Integer.parseInt(str), i2, i3);
            return;
        }
        this.mImsCallProfile[i] = new ImsCallProfile();
        if (str2 != null && !str2.equals("")) {
            log("setCallIndication new call profile: " + sensitiveEncode(str2));
            this.mImsCallProfile[i].setCallExtra("oi", str2);
            this.mImsCallProfile[i].setCallExtraInt("oir", 2);
        }
        Message messageObtainMessage = this.mHandler[i].obtainMessage(27);
        Bundle bundle = new Bundle();
        bundle.putString("callId", str);
        bundle.putInt("phoneId", i);
        bundle.putInt("seqNum", i2);
        messageObtainMessage.setData(bundle);
        this.mHandler[i].sendMessage(messageObtainMessage);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setEnhanced4gLteModeSetting(int i, boolean z) {
        ImsManager imsManager = ImsManager.getInstance(this.mContext, i);
        if (imsManager == null) {
            loge("[" + i + "] Fail to setEnhanced4gLteModeSetting because imsMgr is null");
            return;
        }
        imsManager.setEnhanced4gLteModeSetting(z);
        if (imsManager.isServiceReady()) {
            return;
        }
        try {
            this.mImsConfigManager.get(i).setFeatureValue(0, 13, z ? 1 : 0, (ImsConfigListener) null);
            log("volte_setting setEnhanced4gLteModeSetting with service not ready yet.");
        } catch (RemoteException e) {
            log("volte_setting setEnhanced4gLteModeSetting with exception.");
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setNotificationVirtual(int i, int i2) {
        String str;
        int i3 = i + 1;
        if (SystemProperties.getInt("ro.vendor.mtk_ims_notification", 0) != 1) {
            return;
        }
        log("Show setNotificationVirtual(): slot = " + i);
        NotificationChannel notificationChannel = new NotificationChannel("ImsService", IMSSERVICE_NOTIFICATION_NAME, 3);
        NotificationManager notificationManager = (NotificationManager) this.mContext.getSystemService("notification");
        if (i2 == 0) {
            str = "IMS " + i3 + " IN SERVICE";
        } else {
            str = "IMS " + i3 + " NOT IN SERVICE";
        }
        notificationManager.createNotificationChannel(notificationChannel);
        notificationManager.notify("Volte Icon", i3, new Notification.Builder(this.mContext).setSmallIcon(android.R.drawable.stat_sys_warning).setContentTitle("Volte status").setContentText(str).setAutoCancel(false).setVisibility(1).setDefaults(-1).setChannelId("ImsService").build());
    }

    private void startWfoService() {
        this.mTempDisableWFC = new boolean[TelephonyManager.getDefault().getPhoneCount()];
        WfoService.getInstance(this.mContext).makeWfoService();
    }

    private String toHexString(String str) {
        if (TextUtils.isEmpty(str)) {
            return "";
        }
        byte[] bytes = str.getBytes();
        StringBuilder sb = new StringBuilder();
        for (byte b : bytes) {
            sb.append(String.format("%02x", Byte.valueOf(b)));
        }
        log("toHexString before: " + str + " after: " + sb.toString());
        return sb.toString();
    }

    private void updateAssociatedUriChanged(int i, Uri[] uriArr) {
        synchronized (this.mLockUri) {
            MtkImsRegistrationImpl mtkImsRegistrationImpl = sMtkImsRegImpl.get(Integer.valueOf(i));
            if (mtkImsRegistrationImpl != null) {
                try {
                    log("[" + i + "] updateAssociatedUriChanged");
                    StringBuilder sb = new StringBuilder();
                    sb.append("uris=");
                    sb.append(Rlog.pii("ImsService", uriArr));
                    englog(sb.toString());
                    mtkImsRegistrationImpl.onSubscriberAssociatedUriChanged(uriArr);
                } catch (IllegalStateException e) {
                    loge("Failed to updateAssociatedUriChanged " + e);
                }
            } else {
                loge("There is not ImsRegistrationImpl for slot " + i);
            }
        }
    }

    private void updateCapabilityChange(int i, int i2, int[] iArr, int[] iArr2) {
        log("updateCapabilityChange phoneId= " + i + " + imsExtInfo: " + i2);
        for (int i3 = 0; i3 < 6; i3++) {
            iArr[i3] = -1;
            iArr2[i3] = -1;
        }
        if (this.mRAN[i] == 2 || (i2 & 1) != 1) {
            iArr2[0] = 0;
            iArr2[4] = 4;
        } else {
            iArr[0] = 0;
            iArr[4] = 4;
        }
        if (this.mRAN[i] == 2 || (i2 & 8) != 8) {
            iArr2[1] = 1;
        } else {
            iArr[1] = 1;
        }
        if (ImsCommonUtil.supportMdAutoSetupIms()) {
            if (this.mRAN[i] == 2 && (i2 & 1) == 1 && !this.mTempDisableWFC[i]) {
                iArr[2] = 2;
                iArr[5] = 5;
                log("[WFC]IMS_VOICE_OVER_WIFI");
            } else {
                iArr2[2] = 2;
                iArr2[5] = 5;
            }
        } else if (this.mRAN[i] == 2 && (i2 & 1) == 1) {
            iArr[2] = 2;
            iArr[5] = 5;
            log("[WFC]IMS_VOICE_OVER_WIFI");
        } else {
            iArr2[2] = 2;
            iArr2[5] = 5;
        }
        if (this.mRAN[i] == 2 && (i2 & 8) == 8) {
            iArr[3] = 3;
            log("[WFC]IMS_VIDEO_OVER_WIFI");
        } else {
            iArr2[3] = 3;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateImsRegistrationRat(int i, int i2) {
        IVoDataService iVoDataServiceAsInterface = IVoDataService.Stub.asInterface(ServiceManager.getService("vodata"));
        if (iVoDataServiceAsInterface != null) {
            try {
                log("updateImsRegistrationRat : VoDataStatus = " + i2);
                iVoDataServiceAsInterface.setImsPdnStatus(i, i2);
            } catch (Exception e) {
                log("updateImsRegistrationRat error");
            }
        }
    }

    private void updateImsRegstration(int i, int i2, int i3, ImsReasonInfo imsReasonInfo) {
        MtkImsRegistrationImpl mtkImsRegistrationImpl = sMtkImsRegImpl.get(Integer.valueOf(i));
        if (mtkImsRegistrationImpl == null) {
            loge("There is not ImsRegistrationImpl for slot " + i);
            return;
        }
        try {
            logi("[" + i + "] state " + i2 + " updateImsRegstration, tech " + i3 + ", reason " + imsReasonInfo);
            if (i2 == 1) {
                mtkImsRegistrationImpl.onRegistering(i3);
            } else if (i2 == 2) {
                mtkImsRegistrationImpl.onRegistered(i3);
            } else if (i2 == 3) {
                mtkImsRegistrationImpl.onDeregistered(imsReasonInfo);
            }
        } catch (IllegalStateException e) {
            loge("Failed to updateImsRegstration " + e);
        }
    }

    private void updateImsRegstrationEx(int i, int i2, final int i3, final ImsReasonInfo imsReasonInfo) {
        HashSet<IImsRegistrationListener> hashSet = this.mListener.get(i);
        if (hashSet != null) {
            synchronized (hashSet) {
                try {
                    if (i2 == 0) {
                        hashSet.forEach(new Consumer() { // from class: com.mediatek.ims.-$$Lambda$ImsService$9tmNOyFUa3Yi5q4Wz7Vu1HVnsjs
                            @Override // java.util.function.Consumer
                            public final void accept(Object obj) {
                                this.f$0.lambda$updateImsRegstrationEx$1$ImsService(i3, (IImsRegistrationListener) obj);
                            }
                        });
                    } else {
                        hashSet.forEach(new Consumer() { // from class: com.mediatek.ims.-$$Lambda$ImsService$oXEquH1mAVMnGhV-gsn4CyK_UQQ
                            @Override // java.util.function.Consumer
                            public final void accept(Object obj) {
                                ((IImsRegistrationListener) obj).registrationDisconnected(imsReasonInfo);
                            }
                        });
                    }
                } catch (Throwable th) {
                    throw th;
                }
            }
        }
    }

    private void updateUtCapabilityChange(int i, int[] iArr, int[] iArr2) {
        if (sMtkSSExt.containsKey(Integer.valueOf(i))) {
            int utCapabilityFromSettings = sMtkSSExt.get(Integer.valueOf(i)).getUtCapabilityFromSettings();
            boolean z = false;
            if (OperatorUtils.isMatched(OperatorUtils.OPID.OP09, i) && SystemProperties.getInt("persist.vendor.mtk_ct_volte_support", 0) != 0) {
                z = true;
            }
            boolean z2 = z;
            log("updateUtCapabilityChange, add Ut capability, utCap = " + utCapabilityFromSettings + ", isUtDefaultEnabled = " + z2 + ", phoneId = " + i);
            if (utCapabilityFromSettings == 1 || (utCapabilityFromSettings == 0 && z2)) {
                iArr[4] = 4;
            }
        }
    }

    public void acknowledgeLastIncomingCdmaSms(int i, boolean z, int i2) {
        log("acknowledgeLastIncomingCdmaSms, success " + z + ", cause " + i2);
        this.mImsRILAdapters[i].acknowledgeLastIncomingCdmaSmsEx(z, i2, null);
    }

    public void acknowledgeLastIncomingGsmSms(int i, boolean z, int i2) {
        log("acknowledgeLastIncomingGsmSms, success " + z + ", cause " + i2);
        this.mImsRILAdapters[i].acknowledgeLastIncomingGsmSms(z, i2, null);
    }

    void bindAndRegisterWifiOffloadService() {
        if (sWifiOffloadService == null) {
            checkAndBindWifiOffloadService();
            IWifiOffloadService iWifiOffloadService = sWifiOffloadService;
            if (iWifiOffloadService != null) {
                try {
                    iWifiOffloadService.registerForHandoverEvent(createWifiOffloadListenerProxy());
                } catch (RemoteException e) {
                    loge("can't register handover event");
                }
            } else if (SystemProperties.getInt("persist.vendor.mtk_wfc_support", 0) == 1) {
                loge("can't get WifiOffloadService");
            }
        }
    }

    public void changeEnabledCapabilities(int i, CapabilityChangeRequest capabilityChangeRequest) {
        if (mMmTelFeatureCallback.get(Integer.valueOf(i)) != null) {
            mMmTelFeatureCallback.get(Integer.valueOf(i)).updateCapbilities(capabilityChangeRequest);
            return;
        }
        loge("There is not IMtkMmTelFeatureCallback for slot " + i);
    }

    public void cleanMtkCallSessionProxyIfNeed(ImsCallSessionProxy imsCallSessionProxy, boolean z, String str, int i) {
        log("cleanMtkCallSessionProxyIfNeed" + imsCallSessionProxy);
        if (z) {
            MtkImsCallSessionProxy[] mtkImsCallSessionProxyArr = this.mMtkPendingMT;
            if (mtkImsCallSessionProxyArr[i] != null) {
                IMtkImsCallSession serviceImpl = mtkImsCallSessionProxyArr[i].getServiceImpl();
                log("cleanMtkCallSessionProxyIfNeed : mMtkPendingMT = " + this.mMtkPendingMT[i] + ", pendingMTsession = " + serviceImpl);
                try {
                    if (serviceImpl.getCallId().equals(str)) {
                        this.mMtkPendingMT[i] = null;
                    }
                } catch (RemoteException e) {
                }
            }
        }
        IImsCallSession serviceImpl2 = imsCallSessionProxy.getServiceImpl();
        log("cleanMtkCallSessionProxyIfNeed : aospCallSessionImpl = " + serviceImpl2);
        if (this.mPendingMtkImsCallSessionProxy.containsKey(serviceImpl2)) {
            MtkImsCallSessionProxy mtkImsCallSessionProxy = (MtkImsCallSessionProxy) this.mPendingMtkImsCallSessionProxy.get(serviceImpl2);
            log("cleanMtkCallSessionProxyIfNeed : mtk_cs = " + mtkImsCallSessionProxy);
            this.mPendingMtkImsCallSessionProxy.remove(serviceImpl2);
            mtkImsCallSessionProxy.setAospCallSessionProxy(null);
            imsCallSessionProxy.setMtkCallSessionProxy(null);
        }
    }

    protected void clearImsRilRequest() {
        log("clearImsRilRequest()");
        for (int i = 0; i < this.mNumOfPhones; i++) {
            ImsCommandsInterface[] imsCommandsInterfaceArr = this.mImsRILAdapters;
            if (imsCommandsInterfaceArr[i] != null) {
                ((ImsRILAdapter) imsCommandsInterfaceArr[i]).clearRequestList(1, DBG);
            }
        }
    }

    public Uri[] convertUri(String str) {
        if (str == null) {
            return null;
        }
        String[] strArrSplit = str.split(",");
        int length = strArrSplit.length;
        Uri[] uriArr = new Uri[length];
        for (int i = 0; i < length; i++) {
            String schemeSpecificPart = Uri.parse(strArrSplit[i]).getSchemeSpecificPart();
            if (TextUtils.isEmpty(schemeSpecificPart)) {
                log("empty XUI");
            } else {
                String[] strArrSplit2 = schemeSpecificPart.split("[@;:]");
                if (strArrSplit2.length == 0) {
                    log("no number in XUI handle");
                } else {
                    uriArr[i] = Uri.parse(strArrSplit2[0]);
                    log("IMS: convertUri() uri = " + Rlog.pii("ImsService", uriArr[i]));
                }
            }
        }
        return uriArr;
    }

    protected void deregisterIms(int i) {
        if (!SubscriptionManager.isValidPhoneId(i)) {
            loge("deregisterIms() error phoneId:" + i);
            return;
        }
        log("deregisterIms, phoneId = " + i);
        if (!ImsCommonUtil.supportMims()) {
            i = ImsCommonUtil.getMainCapabilityPhoneId();
            log("deregisterIms, MainCapabilityPhoneId = " + i);
        }
        this.mImsRILAdapters[i].deregisterIms(this.mHandler[i].obtainMessage(16));
    }

    public void deregisterImsWithCause(int i, int i2) {
        log("deregisterImsWithCause, phoneId = " + i + " cause = " + i2);
        if (!ImsCommonUtil.supportMims()) {
            i = ImsCommonUtil.getMainCapabilityPhoneId();
            log("deregisterImsWithCause, MainCapabilityPhoneId = " + i);
        }
        this.mImsRILAdapters[i].deregisterImsWithCause(i2, this.mHandler[i].obtainMessage(16));
    }

    public void disableIms(int i) {
        log("turnOffIms, phoneId = " + i);
        onTurnOffIms(i);
    }

    public void enableIms(int i) {
        log("turnOnIms phoneId = " + i);
        onTurnOnIms(i);
    }

    public void explicitCallTransfer(int i, Message message, Messenger messenger) {
        log("explicitCallTransfer: phoneId " + i);
        ImsCallSessionProxy fgCall = ImsServiceCallTracker.getInstance(i).getFgCall();
        if (fgCall != null) {
            fgCall.explicitCallTransferWithCallback(message, messenger);
            return;
        }
        message.arg1 = 0;
        try {
            messenger.send(message);
        } catch (RemoteException e) {
            log(e.toString());
        }
    }

    public void fallBackAospMTFlow(int i) {
        AsyncResult asyncResult;
        log("fallBackAospMTFlow: phoneId " + i);
        int i2 = this.mRedirectIncomingSocketId;
        if (i2 != -1 && (asyncResult = this.mRedirectIncomingAsyncResult) != null) {
            sendIncomingCallIndication(i2, asyncResult);
        }
        this.mRedirectIncomingSocketId = -1;
        this.mRedirectIncomingAsyncResult = null;
    }

    int getCurrentCallCount(int i) {
        if (i >= 0 && i <= this.mNumOfPhones - 1) {
            return ImsServiceCallTracker.getInstance(i).getCurrentCallCount();
        }
        log("IMS: getCurrentCallCount() phoneId: " + i);
        return 0;
    }

    public ImsConfigManager getImsConfigManager() {
        return this.mImsConfigManager;
    }

    public int[] getImsNetworkState(int i) {
        return this.mImsDataTracker.getImsNetworkState(i);
    }

    public ImsCommandsInterface getImsRILAdapter(int i) {
        if (this.mImsRILAdapters[i] == null) {
            logw("getImsRILAdapter phoneId=" + i + ", mImsRILAdapter is null ");
        }
        return this.mImsRILAdapters[i];
    }

    protected int getImsRegUriType(int i) {
        if (!SubscriptionManager.isValidPhoneId(i)) {
            loge("getImsRegUriType() error phoneId:" + i + ", use phone 0");
            i = 0;
        }
        int i2 = this.mImsRegInfo[i] == 0 ? SystemProperties.getInt(PROPERTY_IMS_REG_EXTINFO + i, 1) : 1;
        log("getImsRegUriType, phoneId = " + i + "uri_type =" + i2);
        return i2;
    }

    public int getImsServiceState(int i) {
        if (!ImsCommonUtil.supportMims()) {
            i = ImsCommonUtil.getMainCapabilityPhoneId();
        }
        if (i >= 0 && i < TelephonyManager.getDefault().getPhoneCount()) {
            return this.mImsRegInfo[i];
        }
        loge("Invalid phoneId: " + i);
        return 3;
    }

    protected int getImsState(int i) {
        if (!SubscriptionManager.isValidPhoneId(i)) {
            loge("getImsState() error phoneId:" + i + ", use phone 0");
            i = 0;
        }
        return this.mImsState[i];
    }

    public int getModemMultiImsCount() {
        log("getModemMultiImsCount");
        int i = SystemProperties.getInt(ImsConstants.PROPERTY_MD_MULTI_IMS_SUPPORT, -1);
        log("mdMultiImsCount=" + i);
        if (i == -1) {
            logw("MD Multi IMS Count not initialized");
        }
        return i;
    }

    public int getRatType(int i) {
        return this.mRAN[i];
    }

    public int getSubIdUsingPhoneId(int i) {
        int[] subId = SubscriptionManager.getSubId(i);
        int i2 = -1;
        if (subId != null && subId.length >= 1) {
            i2 = subId[0];
        }
        log("[getSubIdUsingPhoneId] volte_setting subId: " + i2);
        return i2;
    }

    public int getWfcRegErrorCode(int i) {
        return this.mWfcRegErrorCode[i];
    }

    public boolean isImsEccSupported(int i) {
        if (this.mIsImsEccSupported[i] > 0) {
            return DBG;
        }
        return false;
    }

    public boolean isImsEccSupportedWhenNormalService(int i) {
        if ((this.mIsImsEccSupported[i] & 16) > 0) {
            return DBG;
        }
        return false;
    }

    public boolean isSupportCFT(int i) {
        boolean zIsSupportCFT;
        synchronized (sMtkSSExt) {
            zIsSupportCFT = sMtkSSExt.containsKey(Integer.valueOf(i)) ? sMtkSSExt.get(Integer.valueOf(i)).isSupportCFT() : false;
            log("isSupportCFT: " + zIsSupportCFT);
        }
        return zIsSupportCFT;
    }

    public /* synthetic */ void lambda$notifyImsRegInd$5$ImsService(ImsRegInfo imsRegInfo, Uri[] uriArr, ImsReasonInfo imsReasonInfo, IMtkImsRegistrationListener iMtkImsRegistrationListener) {
        try {
            iMtkImsRegistrationListener.onRegistrationImsStateChanged(imsRegInfo.mReportType, uriArr, imsRegInfo.mExpireTime, imsReasonInfo);
        } catch (RemoteException e) {
            loge("onRegistrationImsStateChanged failed!!");
        }
    }

    public /* synthetic */ void lambda$notifyRedirectIncomingCall$6$ImsService(int i, AsyncResult asyncResult, IMtkImsRegistrationListener iMtkImsRegistrationListener) {
        try {
            iMtkImsRegistrationListener.onRedirectIncomingCallIndication(i, (String[]) asyncResult.result);
        } catch (RemoteException e) {
            loge("onRedirectIncomingCallIndication failed!!");
        }
    }

    public /* synthetic */ void lambda$notifyRegistrationAssociatedUriChange$0$ImsService(Uri[] uriArr, IImsRegistrationListener iImsRegistrationListener) {
        try {
            iImsRegistrationListener.registrationAssociatedUriChanged(uriArr);
        } catch (RemoteException e) {
            loge("handle self identify update failed!!");
        }
    }

    public /* synthetic */ void lambda$resetXuiAndNotify$4$ImsService(Uri[] uriArr, IImsRegistrationListener iImsRegistrationListener) {
        try {
            iImsRegistrationListener.registrationAssociatedUriChanged(uriArr);
        } catch (RemoteException e) {
            loge("clear self identify failed!!");
        }
    }

    public /* synthetic */ void lambda$updateImsRegstrationEx$1$ImsService(int i, IImsRegistrationListener iImsRegistrationListener) {
        try {
            iImsRegistrationListener.registrationConnectedWithRadioTech(i);
        } catch (RemoteException e) {
            loge("IMS: l.registrationConnectedWithRadioTech failed");
        }
    }

    public int mapPhoneIdToServiceId(int i) {
        return i + 1;
    }

    public void notifyIncomingCallSession(int i, IImsCallSession iImsCallSession, Bundle bundle) {
        if (mMmTelFeatureCallback.get(Integer.valueOf(i)) != null) {
            try {
                mMmTelFeatureCallback.get(Integer.valueOf(i)).notifyIncomingCallSession(iImsCallSession, bundle);
            } catch (RuntimeException e) {
                StringBuilder sb = new StringBuilder();
                sb.append("Fail to notifyIncomingCallSession ");
                sb.append(sensitiveEncode("" + e));
                loge(sb.toString());
            }
        }
    }

    public void notifyUtCapabilityChange(int i) {
        log("notifyUtCapabilityChange, phoneId = " + i);
        Handler[] handlerArr = this.mHandler;
        handlerArr[i].sendMessage(handlerArr[i].obtainMessage(29, i, 0));
    }

    protected void onAddImsSmsListener(int i, IImsSmsListener iImsSmsListener) {
        if (!SubscriptionManager.isValidPhoneId(i)) {
            loge("onAddImsSmsListener() error phoneId:" + i);
            return;
        }
        log("onAddImsSmsListener: phoneId=" + i + " listener=" + iImsSmsListener);
        HashSet<IImsSmsListener> hashSet = this.mImsSmsListener.get(i);
        synchronized (hashSet) {
            if (!hashSet.isEmpty()) {
                hashSet.clear();
            }
            hashSet.add(iImsSmsListener);
            log("IMS SMS listener set size=" + hashSet.size());
        }
    }

    public void onAddRegistrationListener(int i, int i2, IImsRegistrationListener iImsRegistrationListener, IMtkImsRegistrationListener iMtkImsRegistrationListener, boolean z) {
        if (!SubscriptionManager.isValidPhoneId(i)) {
            loge("onAddRegistrationListener() error phoneId:" + i);
            return;
        }
        StringBuilder sb = new StringBuilder();
        sb.append("onAddRegistrationListener: phoneId=");
        sb.append(i);
        sb.append(" serviceType=");
        sb.append(i2);
        sb.append(" listener=");
        sb.append(iImsRegistrationListener);
        sb.append(" mtklistener= ");
        sb.append(iMtkImsRegistrationListener);
        sb.append(" notifyOnly= ");
        sb.append(z ? "true" : "false");
        log(sb.toString());
        if (!z) {
            HashSet<IImsRegistrationListener> hashSet = this.mListener.get(i);
            synchronized (hashSet) {
                if (hashSet.contains(iImsRegistrationListener)) {
                    log("listener already exist");
                } else {
                    hashSet.add(iImsRegistrationListener);
                    log("listener set size=" + hashSet.size());
                }
            }
        }
        int[] iArr = this.mImsRegInfo;
        if (iArr[i] != 3) {
            notifyRegistrationStateChange(i, iArr[i], DBG);
        }
        if (this.mImsRegInfo[i] == 0) {
            notifyRegistrationCapabilityChange(i, this.mImsExtInfo[i], DBG);
            notifyRegistrationAssociatedUriChange(ImsXuiManager.getInstance(), i);
        }
        if (!z) {
            HashSet<IMtkImsRegistrationListener> hashSet2 = this.mMtkListener.get(i);
            synchronized (hashSet2) {
                if (hashSet2.contains(iMtkImsRegistrationListener)) {
                    log("mtklistener already exist");
                } else {
                    hashSet2.add(iMtkImsRegistrationListener);
                    log("mtklistener set size=" + this.mMtkListener.size());
                }
            }
        }
        notifyImsRegInd(this.mImsRegInd[i], iMtkImsRegistrationListener, i);
    }

    protected void onClose(int i) {
        synchronized (this.mLockObj) {
            try {
                if (this.mImsEcbm[i] != null) {
                    this.mImsEcbm[i].getImsEcbm().setListener((IImsEcbmListener) null);
                }
            } catch (RemoteException e) {
            }
        }
    }

    public ImsCallProfile onCreateCallProfile(int i, int i2, int i3) {
        return new ImsCallProfile(i2, i3);
    }

    public IImsCallSession onCreateCallSession(int i, ImsCallProfile imsCallProfile, IImsCallSessionListener iImsCallSessionListener) {
        return onCreateCallSessionProxy(i, imsCallProfile, iImsCallSessionListener).getServiceImpl();
    }

    public ImsCallSessionProxy onCreateCallSessionProxy(int i, ImsCallProfile imsCallProfile, IImsCallSessionListener iImsCallSessionListener) {
        log("onCreateCallSessionProxy: serviceId =" + i + " profile =" + imsCallProfile + " listener =" + iImsCallSessionListener);
        ImsCallSessionListener imsCallSessionListener = iImsCallSessionListener != null ? new ImsCallSessionListener(iImsCallSessionListener) : null;
        ImsCallSessionProxy imsCallSessionProxy = new ImsCallSessionProxy(this.mContext, imsCallProfile, imsCallSessionListener, this, this.mHandler[i], this.mImsRILAdapters[i], i);
        MtkImsCallSessionProxy mtkImsCallSessionProxy = new MtkImsCallSessionProxy(this.mContext, imsCallProfile, imsCallSessionListener, this, this.mHandler[i], this.mImsRILAdapters[i], i);
        mtkImsCallSessionProxy.setAospCallSessionProxy(imsCallSessionProxy);
        imsCallSessionProxy.setMtkCallSessionProxy(mtkImsCallSessionProxy);
        log("onCreateCallSessionProxy: cs.getServiceImpl() = " + imsCallSessionProxy.getServiceImpl());
        this.mPendingMtkImsCallSessionProxy.put(imsCallSessionProxy.getServiceImpl(), mtkImsCallSessionProxy);
        return imsCallSessionProxy;
    }

    public IMtkImsCallSession onCreateMtkCallSession(int i, ImsCallProfile imsCallProfile, IImsCallSessionListener iImsCallSessionListener, IImsCallSession iImsCallSession) {
        return onCreateMtkCallSessionProxy(i, imsCallProfile, iImsCallSessionListener, iImsCallSession).getServiceImpl();
    }

    public MtkImsCallSessionProxy onCreateMtkCallSessionProxy(int i, ImsCallProfile imsCallProfile, IImsCallSessionListener iImsCallSessionListener, IImsCallSession iImsCallSession) {
        log("onCreateMtkCallSessionProxy: aospCallSessionImpl = " + iImsCallSession);
        log("onCreateMtkCallSessionProxy: containsKey = " + this.mPendingMtkImsCallSessionProxy.containsKey(iImsCallSession));
        if (!this.mPendingMtkImsCallSessionProxy.containsKey(iImsCallSession)) {
            return null;
        }
        MtkImsCallSessionProxy mtkImsCallSessionProxy = (MtkImsCallSessionProxy) this.mPendingMtkImsCallSessionProxy.get(iImsCallSession);
        this.mPendingMtkImsCallSessionProxy.remove(iImsCallSession);
        return mtkImsCallSessionProxy;
    }

    public IImsConfig onGetConfigInterface(int i) {
        if (!SubscriptionManager.isValidPhoneId(i)) {
            loge("onGetConfigInterface() error phoneId:" + i + ", use phone 0");
            i = 0;
        }
        if (ImsCommonUtil.supportMdAutoSetupIms()) {
            bindAndRegisterMWIService();
        } else {
            bindAndRegisterWifiOffloadService();
        }
        return this.mImsConfigManager.get(i);
    }

    protected IImsEcbm onGetEcbmInterface(int i) {
        ImsEcbmImplBase imsEcbmImplBaseOnGetEcbmProxy = onGetEcbmProxy(i);
        if (imsEcbmImplBaseOnGetEcbmProxy == null) {
            return null;
        }
        return imsEcbmImplBaseOnGetEcbmProxy.getImsEcbm();
    }

    public ImsEcbmImplBase onGetEcbmProxy(int i) {
        ImsEcbmProxy[] imsEcbmProxyArr = this.mImsEcbm;
        if (imsEcbmProxyArr[i] == null) {
            imsEcbmProxyArr[i] = new ImsEcbmProxy(this.mContext, this.mImsRILAdapters[i], i);
        }
        return this.mImsEcbm[i];
    }

    protected IMtkImsUt onGetMtkUtInterface(int i) {
        if (!SubscriptionManager.isValidPhoneId(i)) {
            loge("onGetMtkUtInterface() error phoneId:" + i + ", use phone 0");
            i = 0;
        }
        if (ImsCommonUtil.supportMdAutoSetupIms()) {
            return MtkImsUtImpl.getInstance(this.mContext, i, this).getInterface();
        }
        MtkImsUtImplBase mtkImsUtImplBaseMakeMtkImsUt = ExtensionFactory.makeLegacyComponentFactory(this.mContext).makeMtkImsUt(this.mContext, i, this);
        if (mtkImsUtImplBaseMakeMtkImsUt != null) {
            return mtkImsUtImplBaseMakeMtkImsUt.getInterface();
        }
        return null;
    }

    protected IImsMultiEndpoint onGetMultiEndpointInterface(int i) {
        ImsMultiEndpointImplBase imsMultiEndpointImplBaseOnGetMultiEndpointProxy = onGetMultiEndpointProxy(i);
        if (imsMultiEndpointImplBaseOnGetMultiEndpointProxy == null) {
            return null;
        }
        return imsMultiEndpointImplBaseOnGetMultiEndpointProxy.getIImsMultiEndpoint();
    }

    public ImsMultiEndpointImplBase onGetMultiEndpointProxy(int i) {
        log("onGetMultiEndpointProxy phoneId is " + i);
        if (i >= this.mNumOfPhones) {
            return null;
        }
        ImsMultiEndpointProxy[] imsMultiEndpointProxyArr = this.mMultiEndpoints;
        if (imsMultiEndpointProxyArr[i] == null) {
            imsMultiEndpointProxyArr[i] = new ImsMultiEndpointProxy(this.mContext);
            log("onGetMultiEndpointProxy instance is " + this.mMultiEndpoints[i]);
        }
        return this.mMultiEndpoints[i];
    }

    protected IImsCallSession onGetPendingCallSession(int i, String str) {
        if (i >= this.mNumOfPhones || this.mPendingMT[i] == null) {
            loge("onGetPendingCallSession() : no pendingMT or wrong phoneId " + i);
            return null;
        }
        log("onGetPendingCallSession() : serviceId = " + i + ", callId = " + str + ", mPendingMT" + this.mPendingMT[i]);
        IImsCallSession serviceImpl = this.mPendingMT[i].getServiceImpl();
        try {
            if (serviceImpl.getCallId().equals(str)) {
                this.mPendingMT[i] = null;
                return serviceImpl;
            }
        } catch (RemoteException e) {
        }
        return null;
    }

    IMtkImsCallSession onGetPendingMtkCallSession(int i, String str) {
        log("onGetPendingMtkCallSession() : callId = " + str + ", mPendingMT = " + this.mMtkPendingMT[i]);
        if (i < this.mNumOfPhones) {
            MtkImsCallSessionProxy[] mtkImsCallSessionProxyArr = this.mMtkPendingMT;
            if (mtkImsCallSessionProxyArr[i] != null) {
                IMtkImsCallSession serviceImpl = mtkImsCallSessionProxyArr[i].getServiceImpl();
                try {
                    if (serviceImpl.getCallId().equals(str)) {
                        ImsCallSessionProxy aospCallSessionProxy = this.mMtkPendingMT[i].getAospCallSessionProxy();
                        log("onGetPendingMtkCallSession() : aospCallSession = " + aospCallSessionProxy);
                        if (aospCallSessionProxy != null) {
                            IImsCallSession serviceImpl2 = aospCallSessionProxy.getServiceImpl();
                            if (this.mPendingMtkImsCallSessionProxy.containsKey(serviceImpl2)) {
                                this.mPendingMtkImsCallSessionProxy.remove(serviceImpl2);
                            }
                        }
                        this.mMtkPendingMT[i] = null;
                        return serviceImpl;
                    }
                } catch (RemoteException e) {
                }
                return null;
            }
        }
        return null;
    }

    protected IImsUt onGetUtInterface(int i) {
        if (ImsCommonUtil.supportMdAutoSetupIms()) {
            return ImsUtImpl.getInstance(this.mContext, i, this).getInterface();
        }
        ImsUtImplBase imsUtImplBaseMakeImsUt = ExtensionFactory.makeLegacyComponentFactory(this.mContext).makeImsUt(this.mContext, i, this);
        if (imsUtImplBaseMakeImsUt != null) {
            return imsUtImplBaseMakeImsUt.getInterface();
        }
        return null;
    }

    protected void onHangupAllCall(int i) {
        if (SubscriptionManager.isValidPhoneId(i)) {
            this.mImsRILAdapters[i].hangupAllCall(null);
            return;
        }
        loge("onHangupAllCall() error phoneId:" + i);
    }

    protected boolean onIsConnected(int i, int i2, int i3) {
        log("onIsConnected: serviceId=" + i + ", serviceType=" + i2 + ", callType=" + i3);
        if (this.mImsRegInfo[i] == 0) {
            return DBG;
        }
        return false;
    }

    protected boolean onIsOpened(int i) {
        log("onIsOpened: serviceId=" + i);
        if (this.mListener.get(i).size() > 0) {
            return DBG;
        }
        return false;
    }

    protected int onOpen(int i, int i2, PendingIntent pendingIntent, IImsRegistrationListener iImsRegistrationListener) {
        log("onOpen: phoneId=" + i + " serviceClass=" + i2 + " listener=" + iImsRegistrationListener);
        int iMapPhoneIdToServiceId = mapPhoneIdToServiceId(i);
        StringBuilder sb = new StringBuilder();
        sb.append("onOpen: serviceId=");
        sb.append(iMapPhoneIdToServiceId);
        englog(sb.toString());
        return iMapPhoneIdToServiceId;
    }

    protected NafSessionKey onRunGbaAuthentication(String str, byte[] bArr, boolean z, int i, int i2) {
        if (!SubscriptionManager.isValidPhoneId(i2)) {
            loge("onRunGbaAuthentication() error phoneId:" + i2 + ", use phone 0");
            i2 = 0;
        }
        NafSessionKeyResult nafSessionKeyResult = new NafSessionKeyResult();
        Message messageObtainMessage = this.mHandler[i2].obtainMessage(23, nafSessionKeyResult);
        synchronized (nafSessionKeyResult.lockObj) {
            this.mImsRILAdapters[i2].runGbaAuthentication(str, ImsCommonUtil.bytesToHex(bArr), z, i, messageObtainMessage);
            try {
                nafSessionKeyResult.lockObj.wait(10000L);
            } catch (InterruptedException e) {
                loge("onRunGbaAuthentication() InterruptedException occured");
                nafSessionKeyResult.cmdResult = 2;
            }
        }
        log("onRunGbaAuthentication complete, nafSessionKey:" + nafSessionKeyResult.nafSessionKey + ", cmdResult:" + nafSessionKeyResult.cmdResult);
        return nafSessionKeyResult.nafSessionKey;
    }

    protected void onSetCallIndication(int i, String str, String str2, int i2, String str3, boolean z, int i3) {
        enforceModifyPermission();
        if (!SubscriptionManager.isValidPhoneId(i)) {
            loge("onSetCallIndication() error phoneId:" + i);
            return;
        }
        AsyncResult asyncResult = this.mRedirectIncomingAsyncResult;
        if (asyncResult != null) {
            if (!str.equals(((String[]) asyncResult.result)[0]) || i2 != Integer.parseInt(((String[]) this.mRedirectIncomingAsyncResult.result)[4])) {
                loge("onSetCallIndication() error callId:" + str + ", seqNum:" + i2);
                return;
            }
        } else {
            if (!str.equals(this.mPendingMTCallId[i]) || i2 != Integer.parseInt(this.mPendingMTSeqNum[i])) {
                loge("onSetCallIndication() error callId:" + str + ", seqNum:" + i2);
                return;
            }
            this.mPendingMTSeqNum[i] = "";
        }
        setCallIndicationInternal(i, str, str2, i2, str3, z, i3);
    }

    protected void onSetRegistrationListener(int i, IImsRegistrationListener iImsRegistrationListener) {
        log("onSetRegistrationListener: serviceId=" + i + ", listener=" + iImsRegistrationListener);
    }

    protected void onSetUiTTYMode(int i, int i2, Message message) {
        log("onSetUiTTYMode: " + i2);
    }

    protected void onTurnOffIms(int i) {
        log("turnOffIms, phoneId = " + i);
    }

    protected void onTurnOnIms(int i) {
        log("turnOnIms phoneId = " + i);
    }

    protected void onUpdateImsSate(int i) {
        if (!SubscriptionManager.isValidPhoneId(i)) {
            loge("onUpdateImsSate() error phoneId:" + i);
            return;
        }
        log("request onUpdateImsSate for ImsManager add local registrant");
        int[] iArr = this.mImsRegInfo;
        if (iArr[i] != 3) {
            notifyRegistrationStateChange(i, iArr[i], false);
        }
        if (this.mImsRegInfo[i] == 0) {
            ImsXuiManager imsXuiManager = ImsXuiManager.getInstance();
            notifyRegistrationCapabilityChange(i, this.mImsExtInfo[i], false);
            notifyRegistrationAssociatedUriChange(imsXuiManager, i);
        }
    }

    public void sendSms(int i, int i2, int i3, String str, String str2, boolean z, byte[] bArr) {
        if (!SubscriptionManager.isValidPhoneId(i)) {
            loge("sendSms() error phoneId:" + i);
            return;
        }
        log("sendSms, token " + i2 + ", messageRef " + i3);
        this.mImsRILAdapters[i].sendSms(i2, i3, str, str2, z, bArr, this.mHandler[i].obtainMessage(28, i, i2));
    }

    public void setImsPreCallInfo(int i, int i2, String str, String str2, HashMap<String, String> map, String[] strArr) {
        if (map != null || str2 != null) {
            ArrayList<String> arrayList = new ArrayList<>();
            int i3 = 0;
            StringBuilder sb = new StringBuilder();
            if (map != null) {
                int size = map.size();
                for (Iterator<Map.Entry<String, String>> it = map.entrySet().iterator(); it.hasNext(); it = it) {
                    Map.Entry<String, String> next = it.next();
                    String key = next.getKey();
                    String value = next.getValue();
                    log("setImsPreCallInfo key: " + key + ", value: " + value);
                    sb.append(toHexString(key) + "," + toHexString(value) + ",");
                }
                i3 = 0 + size;
            }
            if (str2 != null) {
                sb.append(toHexString("f") + "," + toHexString(str2) + ",");
                i3++;
            }
            sb.setLength(sb.length() - 1);
            String string = sb.toString();
            log("setImsPreCallInfo headerValuePair: " + string);
            arrayList.add("" + i2);
            arrayList.add("1");
            int length = (sb.length() / 1000) + 1;
            arrayList.add("" + length);
            arrayList.add("");
            arrayList.add("" + i3);
            arrayList.add("");
            int i4 = 1;
            while (i4 <= length) {
                arrayList.set(3, "" + i4);
                StringBuilder sb2 = new StringBuilder();
                sb2.append("");
                int i5 = i3;
                sb2.append(string.substring((i4 - 1) * 1000, i4 * 1000 < string.length() ? i4 * 1000 : string.length()));
                arrayList.set(5, sb2.toString());
                this.mImsRILAdapters[i].setCallAdditionalInfo(arrayList, null);
                i4++;
                i3 = i5;
            }
        }
        if (strArr != null) {
            ArrayList<String> arrayList2 = new ArrayList<>();
            StringBuilder sb3 = new StringBuilder();
            for (String str3 : strArr) {
                sb3.append(str3 + ",");
            }
            sb3.setLength(sb3.length() - 1);
            arrayList2.add("" + i2);
            arrayList2.add("2");
            arrayList2.add("1");
            arrayList2.add("1");
            arrayList2.add("" + strArr.length);
            arrayList2.add(sb3.toString());
            log("setImsPreCallInfo locationString: " + sb3.toString());
            this.mImsRILAdapters[i].setCallAdditionalInfo(arrayList2, null);
        }
    }

    public void setImsRegistration(int i, MtkImsRegistrationImpl mtkImsRegistrationImpl) {
        sMtkImsRegImpl.remove(Integer.valueOf(i));
        if (mtkImsRegistrationImpl != null) {
            sMtkImsRegImpl.put(Integer.valueOf(i), mtkImsRegistrationImpl);
            int[] iArr = this.mImsRegInfo;
            if (iArr[i] != 3) {
                if (iArr[i] != 0) {
                    if (iArr[i] == 1) {
                        updateImsRegstration(i, 3, -1, createImsReasonInfo(i));
                        return;
                    }
                    return;
                }
                try {
                    updateImsRegstration(i, 2, convertImsRegistrationTech(getRadioTech(i)), null);
                } catch (RemoteException e) {
                    loge("Fail to get radio tech " + e);
                }
            }
        }
    }

    public void setMTRedirect(int i, boolean z) {
        log("setMTRedirect: " + z + ",phoneId: " + i);
        this.mIsMTredirect[i] = z;
    }

    public void setMmTelFeatureCallback(int i, IMtkMmTelFeatureCallback iMtkMmTelFeatureCallback) {
        mMmTelFeatureCallback.remove(Integer.valueOf(i));
        if (iMtkMmTelFeatureCallback == null || !SubscriptionManager.isValidPhoneId(i)) {
            return;
        }
        mMmTelFeatureCallback.put(Integer.valueOf(i), iMtkMmTelFeatureCallback);
        iMtkMmTelFeatureCallback.notifyContextChanged(this.mContext);
        Intent intent = new Intent("com.mediatek.ims.MTK_MMTEL_READY");
        intent.setPackage("com.mediatek.ims");
        intent.putExtra("android:phone_id", i);
        this.mContext.sendBroadcast(intent);
        int[] iArr = new int[6];
        int[] iArr2 = new int[6];
        updateCapabilityChange(i, this.mImsExtInfo[i], iArr, iArr2);
        updateUtCapabilityChange(i, iArr, iArr2);
        MmTelFeature.MmTelCapabilities mmTelCapabilitiesConvertCapabilities = convertCapabilities(iArr);
        if ((this.mImsExtInfo[i] & 4) == 4) {
            mmTelCapabilitiesConvertCapabilities.addCapabilities(8);
        }
        notifyCapabilityChanged(i, mmTelCapabilitiesConvertCapabilities);
    }

    public void setSipHeader(int i, HashMap<String, String> map, String str) {
        log("setSipHeader phoneId: " + i + ", fromUri: " + str + ", extraHeaders: " + map);
        int i2 = 0;
        if (map == null && str == null) {
            return;
        }
        StringBuilder sb = new StringBuilder();
        if (map != null) {
            int size = map.size();
            for (Map.Entry<String, String> entry : map.entrySet()) {
                String key = entry.getKey();
                String value = entry.getValue();
                log("setSipHeader key: " + key + ", value: " + value);
                sb.append(toHexString(key + "," + value + ","));
            }
            i2 = 0 + size;
        }
        if (str != null) {
            sb.append(toHexString("f," + str + ","));
            i2++;
        }
        sb.setLength(sb.length() - 2);
        log("setSipHeader headerValuePair: " + sb.toString());
        this.mImsRILAdapters[i].setSipHeader(0, 0, 0, "0", null);
        this.mImsRILAdapters[i].setSipHeader(1, 1, i2, sb.toString(), null);
    }

    public void setWfcRegErrorCode(int i, int i2) {
        this.mWfcRegErrorCode[i] = i2;
    }

    public void setWfcRegErrorCodeWithPdn(int i, int i2) {
        if (this.mWfcPdnState[i] != 0) {
            this.mWfcRegErrorCode[i] = i2;
        }
    }

    /* JADX WARN: Code duplicated, block: B:71:0x01b3  */
    /* JADX WARN: Code duplicated, block: B:73:0x01b7  */
    public void updateRadioState(int i, int i2) {
        if (!SubscriptionManager.isValidPhoneId(i2)) {
            loge("updateRadioState() error phoneId:" + i2);
            return;
        }
        log("updateRadioState, phoneId = " + i2 + " radioState = " + i);
        if (ImsCommonUtil.supportMdAutoSetupIms()) {
            if (!ImsCommonUtil.isPhoneIdSupportIms(i2)) {
                log("updateRadioState() not support IMS, phoneId:" + i2);
                this.mImsConfigMccmnc[i2] = "";
                this.mImsConfigIccid[i2] = "";
                return;
            }
            if (Settings.System.getInt(this.mContext.getContentResolver(), "airplane_mode_on", 0) != 0) {
                return;
            }
            if (TelephonyManager.getSimStateForSlotIndex(i2) != 10) {
                SubscriptionManager subscriptionManagerFrom = SubscriptionManager.from(this.mContext);
                SubscriptionInfo activeSubscriptionInfo = subscriptionManagerFrom != null ? subscriptionManagerFrom.getActiveSubscriptionInfo(getSubIdUsingPhoneId(i2)) : null;
                String iccId = activeSubscriptionInfo != null ? activeSubscriptionInfo.getIccId() : null;
                if ((!TextUtils.isEmpty(iccId) && isOp09SimCard(iccId)) || (TextUtils.isEmpty(iccId) && this.mWaitSubInfoChange[i2])) {
                    log("updateRadioState CT sim state isn't loaded, don't update.");
                    return;
                }
            }
            if (2 != i) {
                if (this.mHandler[i2].hasMessages(18)) {
                    this.mHandler[i2].removeMessages(18);
                }
                if (this.mHandler[i2].hasMessages(19)) {
                    this.mHandler[i2].removeMessages(19);
                }
                String simOperatorNumericForPhone = OperatorUtils.getSimOperatorNumericForPhone(i2);
                if (this.mImsConfigMccmnc[i2] != null) {
                    englog("updateRadioState, mImsConfigMccmnc[phoneId]: " + this.mImsConfigMccmnc[i2] + ", currentMccmnc: " + simOperatorNumericForPhone);
                } else {
                    englog("updateRadioState, mImsConfigMccmnc[phoneId] is null, currentMccmnc: " + simOperatorNumericForPhone);
                }
                SubscriptionManager subscriptionManagerFrom2 = SubscriptionManager.from(this.mContext);
                SubscriptionInfo activeSubscriptionInfo2 = subscriptionManagerFrom2 != null ? subscriptionManagerFrom2.getActiveSubscriptionInfo(getSubIdUsingPhoneId(i2)) : null;
                String iccId2 = activeSubscriptionInfo2 != null ? activeSubscriptionInfo2.getIccId() : null;
                if (iccId2 == null) {
                    iccId2 = "";
                }
                if (this.mImsConfigIccid[i2] != null) {
                    englog("updateRadioState, mImsConfigIccid[phoneId]: " + Rlog.pii("ImsService", this.mImsConfigIccid[i2]) + ", currentIccid: " + Rlog.pii("ImsService", iccId2));
                } else {
                    englog("updateRadioState, mImsConfigIccid[phoneId] is null, currentIccid: " + Rlog.pii("ImsService", iccId2));
                }
                String[] strArr = this.mImsConfigMccmnc;
                if (strArr[i2] == null || strArr[i2].equals("") || this.mImsConfigMccmnc[i2].compareTo(simOperatorNumericForPhone) != 0) {
                    if (this.mImsManagerOemPlugin == null) {
                        this.mImsManagerOemPlugin = ExtensionFactory.makeOemPluginFactory(this.mContext).makeImsManagerPlugin(this.mContext);
                    }
                    this.mImsConfigMccmnc[i2] = simOperatorNumericForPhone;
                    this.mImsConfigIccid[i2] = iccId2;
                    this.mImsManagerOemPlugin.updateImsServiceConfig(this.mContext, i2, DBG);
                } else {
                    String[] strArr2 = this.mImsConfigIccid;
                    if (strArr2[i2] == null || strArr2[i2].equals("") || this.mImsConfigIccid[i2].compareTo(iccId2) != 0) {
                        if (this.mImsManagerOemPlugin == null) {
                            this.mImsManagerOemPlugin = ExtensionFactory.makeOemPluginFactory(this.mContext).makeImsManagerPlugin(this.mContext);
                        }
                        this.mImsConfigMccmnc[i2] = simOperatorNumericForPhone;
                        this.mImsConfigIccid[i2] = iccId2;
                        this.mImsManagerOemPlugin.updateImsServiceConfig(this.mContext, i2, DBG);
                    }
                }
            }
        }
        bindAndRegisterWifiOffloadService();
        IWifiOffloadService iWifiOffloadService = sWifiOffloadService;
        if (iWifiOffloadService == null) {
            loge("can't get WifiOffloadService");
            return;
        }
        try {
            iWifiOffloadService.updateRadioState(i2, i);
        } catch (RemoteException e) {
            loge("can't update radio state");
        }
    }

    public void updateSelfIdentity(int i) {
        log("updateSelfIdentity, send EVENT_SELF_IDENTIFY_UPDATE, phoneId = " + i);
        Handler[] handlerArr = this.mHandler;
        handlerArr[i].sendMessage(handlerArr[i].obtainMessage(24));
    }
}
