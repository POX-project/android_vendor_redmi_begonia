package com.mediatek.ims.internal;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.net.ConnectivityManager;
import android.net.LinkProperties;
import android.net.Network;
import android.net.NetworkRequest;
import android.os.ConditionVariable;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Message;
import android.os.SystemProperties;
import android.telecom.VideoProfile;
import android.telephony.CarrierConfigManager;
import android.telephony.PhoneStateListener;
import android.telephony.ServiceState;
import android.telephony.SubscriptionInfo;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.util.Log;
import com.android.internal.os.SomeArgs;
import com.mediatek.ims.ImsCommonUtil;
import com.mediatek.ims.ImsService;
import com.mediatek.ims.common.SubscriptionManagerHelper;
import com.mediatek.ims.config.ImsConfigContract;
import com.mediatek.ims.plugin.ExtensionFactory;
import com.mediatek.ims.plugin.ImsCallOemPlugin;
import com.mediatek.ims.plugin.impl.ImsCallPluginBase;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.StringTokenizer;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes.dex */
public class ImsVTProviderUtil {
    public static final int CALL_RAT_LTE = 0;
    public static final int CALL_RAT_NR = 2;
    public static final int CALL_RAT_WIFI = 1;
    private static final String EXTRA_PHONE_ID = "phone_id";
    public static final int HIDE_ME_TYPE_DISABLE = 1;
    public static final int HIDE_ME_TYPE_FREEZE = 2;
    public static final int HIDE_ME_TYPE_NONE = 0;
    public static final int HIDE_ME_TYPE_PICTURE = 3;
    public static final int HIDE_YOU_TYPE_DISABLE = 0;
    public static final int HIDE_YOU_TYPE_ENABLE = 1;
    private static final int MSG_BIND = 2;
    private static final int MSG_INIT_REFVTP = 1;
    private static final int MSG_REINIT_REFVTP = 7;
    private static final int MSG_RESET_WRAPPER = 6;
    private static final int MSG_SETUIMODE = 3;
    private static final int MSG_SWITCH_FEATURE = 4;
    private static final int MSG_SWITCH_ROAMING = 5;
    private static final int MSG_TRIGGER_OPERATOR_ID = 8;
    public static final String PROPERTY_MAX_DRAM_SIZE = "ro.vendor.mtk_config_max_dram_size";
    private static final String PROPERTY_NO_CAMERA_MODE = "persist.vendor.vt.no_camera_mode";
    public static final String PROPERTY_RIL_ICCID_SIM = "vendor.ril.iccid.sim";
    public static final String PROPERTY_TEL_LOG = "persist.log.tag.tel_dbg";
    private static final String PROPERTY_VILTE_ENABLE = "persist.vendor.mtk.vilte.enable";
    private static final String PROPERTY_VIWIFI_ENABLE = "persist.vendor.mtk.viwifi.enable";
    private static final int SIM_NUM = TelephonyManager.getDefault().getPhoneCount();
    private static final String TAG = "ImsVT Util";
    public static final int TAG_VILTE_MOBILE = -16777216;
    public static final int TAG_VILTE_WIFI = -15728640;
    public static final int TURN_OFF_CAMERA = -1;
    public static final int UI_MODE_BG = 1;
    public static final int UI_MODE_DESTROY = 65536;
    public static final int UI_MODE_FG = 0;
    public static final int UI_MODE_FULL_SCREEN = 2;
    public static final int UI_MODE_NORMAL_SCREEN = 3;
    public static final int UI_MODE_RESET = 4;
    public static final int UI_MODE_UNCHANGED = -1;
    private static final String VILTE_SUPPORT = "persist.vendor.vilte_support";
    private static final String VIWIFI_SUPPORT = "persist.vendor.viwifi_support";
    public static final int VT_SIM_ID_ABSENT = -1;
    private static ImsVTProviderUtil mInstance;
    public static boolean sIsNoCameraMode;
    private ConnectivityManager mConnectivityManager;
    public Context mContext;
    private FeatureValueReceiver mFeatureValueReceiver;
    private NetworkAvailableCallback mNetworkAvailableCallback;
    private Map<Integer, PhoneStateListener> mPhoneServicesStateListeners;
    private Handler mProviderHandler;
    protected HandlerThread mProviderHandlerThread;
    private int[] mSimAppState;
    private int[] mSimCardState;
    private ConditionVariable[] mSimReadyVariable;
    private SimStateReceiver mSimStateReceiver;
    private SubscriptionManager mSubscriptionManager;
    private SubscriptionManager.OnSubscriptionsChangedListener mSubscriptionsChangedlistener;
    private TelephonyManager mTelephonyManager;
    private ImsVTMessagePacker mPacker = new ImsVTMessagePacker();
    private Map<String, Object> mProviderById = new ConcurrentHashMap();
    private Map<String, Object> mDataUsageById = new HashMap();

    public class FeatureValueReceiver extends BroadcastReceiver {
        private ImsVTProviderUtil mOwner;
        private ArrayList<Boolean> mViLTEValue = new ArrayList<>();
        private ArrayList<Boolean> mViWifiValue = new ArrayList<>();

        public FeatureValueReceiver() {
            for (int i = 0; i < ImsVTProviderUtil.SIM_NUM; i++) {
                int i2 = ImsCommonUtil.supportMims() ? i : 0;
                boolean z = false;
                boolean z2 = (SystemProperties.getInt("persist.vendor.mtk.vilte.enable", 0) & (1 << i2)) > 0;
                Log.d(ImsVTProviderUtil.TAG, "Getprop [persist.vendor.mtk.vilte.enable][" + i + "]=" + z2);
                this.mViLTEValue.add(Boolean.valueOf(z2));
                if ((SystemProperties.getInt("persist.vendor.mtk.viwifi.enable", 0) & (1 << i2)) > 0) {
                    z = true;
                }
                boolean z3 = z;
                Log.d(ImsVTProviderUtil.TAG, "Getprop [persist.vendor.mtk.viwifi.enable][" + i + "]=" + z3);
                this.mViWifiValue.add(Boolean.valueOf(z3));
            }
        }

        public boolean getInitViLTEValue(int i) {
            return this.mViLTEValue.get(i).booleanValue();
        }

        public boolean getInitViWifiValue(int i) {
            return this.mViWifiValue.get(i).booleanValue();
        }

        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            if (intent == null || intent.getAction() == null || !intent.getAction().equals(ImsConfigContract.ACTION_IMS_FEATURE_CHANGED)) {
                return;
            }
            int intExtra = intent.getIntExtra(ImsConfigContract.EXTRA_CHANGED_ITEM, -1);
            int intExtra2 = intent.getIntExtra("phone_id", -1);
            int intExtra3 = intent.getIntExtra("value", -1);
            if (intExtra2 < 0) {
                Log.d(ImsVTProviderUtil.TAG, "ignore it for invalid SIM id");
                return;
            }
            if (intExtra == 1) {
                Log.d(ImsVTProviderUtil.TAG, "onRecevied feature changed phoneId: " + intExtra2 + ", feature: " + intExtra + ", status: " + intExtra3);
                if (intExtra3 == 0) {
                    this.mViLTEValue.set(intExtra2, Boolean.FALSE);
                } else if (intExtra3 == 1) {
                    this.mViLTEValue.set(intExtra2, Boolean.TRUE);
                }
                this.mOwner.switchFeature(intExtra2, -16777216, this.mViLTEValue.get(intExtra2).booleanValue());
                return;
            }
            if (intExtra == 3) {
                Log.d(ImsVTProviderUtil.TAG, "onRecevied feature changed phoneId: " + intExtra2 + ", feature: " + intExtra + ", status: " + intExtra3);
                if (intExtra3 == 0) {
                    this.mViWifiValue.set(intExtra2, Boolean.FALSE);
                } else if (intExtra3 == 1) {
                    this.mViWifiValue.set(intExtra2, Boolean.TRUE);
                }
                this.mOwner.switchFeature(intExtra2, ImsVTProviderUtil.TAG_VILTE_WIFI, this.mViWifiValue.get(intExtra2).booleanValue());
            }
        }

        public void setOwner(ImsVTProviderUtil imsVTProviderUtil) {
            this.mOwner = imsVTProviderUtil;
        }
    }

    public class ImsVTMessagePacker {
        public ImsVTMessagePacker() {
        }

        public String packFromVdoProfile(VideoProfile videoProfile) {
            StringBuilder sb = new StringBuilder();
            sb.append("mVideoState");
            sb.append("=");
            sb.append("" + videoProfile.getVideoState());
            sb.append(";");
            sb.append("mQuality");
            sb.append("=");
            sb.append("" + videoProfile.getQuality());
            sb.append(";");
            sb.deleteCharAt(sb.length() + (-1));
            Log.d(ImsVTProviderUtil.TAG, "[packFromVdoProfile] profile = " + sb.toString());
            return sb.toString();
        }

        public VideoProfile unPackToVdoProfile(String str) {
            Log.d(ImsVTProviderUtil.TAG, "[unPackToVdoProfile] flattened = " + str);
            StringTokenizer stringTokenizer = new StringTokenizer(str, ";");
            int iIntValue = 3;
            int iIntValue2 = 4;
            while (stringTokenizer.hasMoreElements()) {
                String strNextToken = stringTokenizer.nextToken();
                int iIndexOf = strNextToken.indexOf(61);
                if (iIndexOf != -1) {
                    String strSubstring = strNextToken.substring(0, iIndexOf);
                    String strSubstring2 = strNextToken.substring(iIndexOf + 1);
                    Log.d(ImsVTProviderUtil.TAG, "[unPackToVdoProfile] k = " + strSubstring + ", v = " + strSubstring2);
                    if (strSubstring.equals("mVideoState")) {
                        iIntValue = Integer.valueOf(strSubstring2).intValue();
                    } else if (strSubstring.equals("mQuality")) {
                        iIntValue2 = Integer.valueOf(strSubstring2).intValue();
                    }
                }
            }
            Log.d(ImsVTProviderUtil.TAG, "[unPackToVdoProfile] state = " + iIntValue + ", qty = " + iIntValue2);
            return new VideoProfile(iIntValue, iIntValue2);
        }
    }

    private class NetworkAvailableCallback extends ConnectivityManager.NetworkCallback {
        private NetworkAvailableCallback() {
        }

        @Override // android.net.ConnectivityManager.NetworkCallback
        public void onAvailable(Network network) {
            Log.d(ImsVTProviderUtil.TAG, "NetworkAvailableCallback.onAvailable: network=" + network);
            if (network == null) {
                Log.w(ImsVTProviderUtil.TAG, "NetworkAvailableCallback.onAvailable: network = null");
                return;
            }
            LinkProperties linkProperties = ImsVTProviderUtil.this.mConnectivityManager.getLinkProperties(network);
            if (linkProperties == null) {
                Log.w(ImsVTProviderUtil.TAG, "NetworkAvailableCallback.onAvailable: linkProp = null");
                return;
            }
            String interfaceName = linkProperties.getInterfaceName();
            Log.d(ImsVTProviderUtil.TAG, "NetworkAvailableCallback.onAvailable: (network_id, if_name) = (" + network.netId + ", " + interfaceName + ")");
            if (ImsVTProviderUtil.isVideoCallOnByPlatform()) {
                ImsVTProvider.nUpdateNetworkTable(true, network.netId, interfaceName);
            }
        }

        @Override // android.net.ConnectivityManager.NetworkCallback
        public void onLost(Network network) {
            Log.d(ImsVTProviderUtil.TAG, "NetworkAvailableCallback.onLost: network=" + network);
            if (network == null) {
                Log.w(ImsVTProviderUtil.TAG, "NetworkAvailableCallback.onLost: network = null");
            } else if (ImsVTProviderUtil.isVideoCallOnByPlatform()) {
                ImsVTProvider.nUpdateNetworkTable(false, network.netId, null);
            }
        }
    }

    private class SimStateReceiver extends BroadcastReceiver {
        private ImsVTProviderUtil mOwner;

        private SimStateReceiver() {
        }

        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            String action = intent.getAction();
            int intExtra = intent.getIntExtra("phone", -1);
            int intExtra2 = intent.getIntExtra("android.telephony.extra.SIM_STATE", 0);
            if (intExtra == -1) {
                return;
            }
            if (action.equals("android.telephony.action.SIM_CARD_STATE_CHANGED")) {
                Log.d(ImsVTProviderUtil.TAG, "Received ACTION_SIM_CARD_STATE_CHANGED, slotId:" + intExtra + ", simState:" + intExtra2);
                ImsVTProviderUtil.this.setSimCardState(intExtra, intExtra2);
            } else if (action.equals("android.telephony.action.SIM_APPLICATION_STATE_CHANGED")) {
                Log.d(ImsVTProviderUtil.TAG, "Received ACTION_SIM_APPLICATION_STATE_CHANGED, slotId:" + intExtra + ", simState:" + intExtra2);
                ImsVTProviderUtil.this.setSimAppState(intExtra, intExtra2);
            }
            if (ImsVTProviderUtil.this.isSimStateStable(intExtra)) {
                ImsVTProviderUtil.this.mSimReadyVariable[intExtra].open();
            }
        }

        public void setOwner(ImsVTProviderUtil imsVTProviderUtil) {
            this.mOwner = imsVTProviderUtil;
        }
    }

    public static class Size {
        public int height;
        public int width;

        public Size(int i, int i2) {
            this.width = i;
            this.height = i2;
        }

        public boolean equals(Object obj) {
            if (!(obj instanceof Size)) {
                return false;
            }
            Size size = (Size) obj;
            return this.width == size.width && this.height == size.height;
        }

        public int hashCode() {
            return (this.width * 32713) + this.height;
        }
    }

    public class VTPhoneStateListener extends PhoneStateListener {
        private Context mContext;
        private ImsVTProviderUtil mOwner;

        public VTPhoneStateListener() {
        }

        @Override // android.telephony.PhoneStateListener
        public void onServiceStateChanged(ServiceState serviceState) {
            if (serviceState == null) {
                Log.d(ImsVTProviderUtil.TAG, "[onServiceStateChanged] " + this.mSubId + ": serviceState is null");
                return;
            }
            if (!SubscriptionManager.isValidPhoneId(SubscriptionManager.getPhoneId(this.mSubId.intValue()))) {
                Log.d(ImsVTProviderUtil.TAG, "[onServiceStateChanged] : phondId is invalid");
                return;
            }
            serviceState.getDataRoaming();
            serviceState.getVoiceRoaming();
            TelephonyManager.getDefault().getSimState();
        }

        public void setContext(Context context) {
            this.mContext = context;
        }

        public void setOwner(ImsVTProviderUtil imsVTProviderUtil) {
            this.mOwner = imsVTProviderUtil;
        }
    }

    static {
        sIsNoCameraMode = SystemProperties.getInt(PROPERTY_NO_CAMERA_MODE, 0) == 1;
        mInstance = getInstance();
    }

    private ImsVTProviderUtil() {
        int i = SIM_NUM;
        this.mSimCardState = new int[i];
        this.mSimAppState = new int[i];
        this.mSimReadyVariable = new ConditionVariable[i];
        this.mPhoneServicesStateListeners = new ConcurrentHashMap();
        this.mSubscriptionsChangedlistener = new SubscriptionManager.OnSubscriptionsChangedListener() { // from class: com.mediatek.ims.internal.ImsVTProviderUtil.1
            @Override // android.telephony.SubscriptionManager.OnSubscriptionsChangedListener
            public void onSubscriptionsChanged() {
                ImsVTProviderUtil.this.updateServiceStateListeners();
            }
        };
        HandlerThread handlerThread = new HandlerThread("ProviderHandlerThread");
        this.mProviderHandlerThread = handlerThread;
        handlerThread.start();
        this.mProviderHandler = new Handler(this.mProviderHandlerThread.getLooper()) { // from class: com.mediatek.ims.internal.ImsVTProviderUtil.2
            @Override // android.os.Handler
            public void handleMessage(Message message) {
                switch (message.what) {
                    case 1:
                        ImsVTProviderUtil.this.setContextAndInitRefVTPInternal((Context) message.obj);
                        return;
                    case 2:
                        SomeArgs someArgs = (SomeArgs) message.obj;
                        try {
                            ImsVTProviderUtil.this.bindInternal((ImsVTProvider) someArgs.arg1, ((Integer) someArgs.arg2).intValue(), ((Integer) someArgs.arg3).intValue());
                            return;
                        } finally {
                            someArgs.recycle();
                        }
                    case 3:
                        SomeArgs someArgs2 = (SomeArgs) message.obj;
                        try {
                            ImsVTProviderUtil.this.setUIModeInternal((ImsVTProvider) someArgs2.arg1, ((Integer) someArgs2.arg2).intValue());
                            return;
                        } finally {
                            someArgs2.recycle();
                        }
                    case 4:
                        SomeArgs someArgs3 = (SomeArgs) message.obj;
                        try {
                            ImsVTProviderUtil.this.switchFeatureInternal(((Integer) someArgs3.arg1).intValue(), ((Integer) someArgs3.arg2).intValue(), ((Boolean) someArgs3.arg3).booleanValue());
                            return;
                        } finally {
                            someArgs3.recycle();
                        }
                    case 5:
                        SomeArgs someArgs4 = (SomeArgs) message.obj;
                        try {
                            ImsVTProviderUtil.this.switchRoamingInternal(((Integer) someArgs4.arg1).intValue(), ((Boolean) someArgs4.arg2).booleanValue());
                            return;
                        } finally {
                            someArgs4.recycle();
                        }
                    case 6:
                        SomeArgs someArgs5 = (SomeArgs) message.obj;
                        try {
                            ImsVTProviderUtil.this.resetWrapperInternal((ImsVTProvider) someArgs5.arg1);
                            return;
                        } finally {
                            someArgs5.recycle();
                        }
                    case 7:
                        if (ImsVTProviderUtil.isVideoCallOnByPlatform()) {
                            Log.d(ImsVTProviderUtil.TAG, "reInitRefVTP, ViLTE on, do natvie ReInit");
                            ImsVTProvider.nInitRefVTP();
                            return;
                        }
                        return;
                    case 8:
                        ImsVTProvider.nTriggerGetOperatorId();
                        return;
                    default:
                        return;
                }
            }
        };
        FeatureValueReceiver featureValueReceiver = new FeatureValueReceiver();
        this.mFeatureValueReceiver = featureValueReceiver;
        featureValueReceiver.setOwner(this);
        for (int i2 = 0; i2 < SIM_NUM; i2++) {
            this.mSimCardState[i2] = getImsExtCallUtil().getSimCardState(i2);
            this.mSimAppState[i2] = getImsExtCallUtil().getSimApplicationState(i2);
            this.mSimReadyVariable[i2] = new ConditionVariable();
        }
        SimStateReceiver simStateReceiver = new SimStateReceiver();
        this.mSimStateReceiver = simStateReceiver;
        simStateReceiver.setOwner(this);
        this.mNetworkAvailableCallback = new NetworkAvailableCallback();
    }

    public static ImsVTProviderUtil getInstance() {
        if (mInstance == null) {
            synchronized (ImsVTProviderUtil.class) {
                mInstance = new ImsVTProviderUtil();
            }
        }
        return mInstance;
    }

    public static boolean is512mbProject() {
        return SystemProperties.get(PROPERTY_MAX_DRAM_SIZE, "0x40000000").equals("0x20000000");
    }

    public static boolean isCameraAvailable() {
        return VTSource.getAllCameraResolutions() != null;
    }

    public static boolean isTelephonyLogEnable() {
        return SystemProperties.get(PROPERTY_TEL_LOG, "0").equals("1");
    }

    public static boolean isVideoCallOnByPlatform() {
        return SystemProperties.get(VILTE_SUPPORT, "0").equals("1") || SystemProperties.get(VIWIFI_SUPPORT, "0").equals("1");
    }

    public static boolean isVideoQualityTestMode() {
        int i = SystemProperties.getInt("persist.vendor.vt.lab_op_code", 0);
        return i == 1 || i == 9;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateServiceStateListeners() {
        if (this.mSubscriptionManager == null) {
            Log.d(TAG, "[updateServiceStateListeners] Unexpected error, mSubscriptionManager=null");
            return;
        }
        if (this.mTelephonyManager == null) {
            Log.d(TAG, "[updateServiceStateListeners] Unexpected error, mTelephonyManager=null");
            return;
        }
        HashSet<Integer> hashSet = new HashSet(this.mPhoneServicesStateListeners.keySet());
        List<SubscriptionInfo> activeSubscriptionInfoList = this.mSubscriptionManager.getActiveSubscriptionInfoList();
        if (activeSubscriptionInfoList != null) {
            Iterator<SubscriptionInfo> it = activeSubscriptionInfoList.iterator();
            while (it.hasNext()) {
                int subscriptionId = it.next().getSubscriptionId();
                if (this.mPhoneServicesStateListeners.get(Integer.valueOf(subscriptionId)) == null) {
                    Log.d(TAG, "[updateServiceStateListeners] create ServicesStateListener for " + subscriptionId);
                    VTPhoneStateListener vTPhoneStateListener = new VTPhoneStateListener();
                    this.mTelephonyManager.listen(vTPhoneStateListener, 1);
                    this.mPhoneServicesStateListeners.put(Integer.valueOf(subscriptionId), vTPhoneStateListener);
                } else {
                    hashSet.remove(Integer.valueOf(subscriptionId));
                }
            }
        }
        for (Integer num : hashSet) {
            Log.d(TAG, "[updateServiceStateListeners] remove unused ServicesStateListener for " + num);
            this.mTelephonyManager.listen(this.mPhoneServicesStateListeners.get(num), 0);
            this.mPhoneServicesStateListeners.remove(num);
        }
    }

    public void bind(ImsVTProvider imsVTProvider, int i, int i2) {
        SomeArgs someArgsObtain = SomeArgs.obtain();
        someArgsObtain.arg1 = imsVTProvider;
        someArgsObtain.arg2 = Integer.valueOf(i);
        someArgsObtain.arg3 = Integer.valueOf(i2);
        this.mProviderHandler.obtainMessage(2, someArgsObtain).sendToTarget();
    }

    public void bindInternal(ImsVTProvider imsVTProvider, int i, int i2) {
        Log.d(TAG, "bindInternal(), vtp = " + imsVTProvider + ", id = " + i + ", phone id = " + i2);
        if (65536 == imsVTProvider.mMode) {
            Log.d(TAG, "Ignore bind ImsVTProvider because UI_MODE_DESTROY");
            return;
        }
        if (imsVTProvider == null) {
            Log.d(TAG, "ImsVTProvider == null");
            return;
        }
        int i3 = i;
        if (ImsService.getInstance(this.mContext).getModemMultiImsCount() > 1) {
            i3 = (i2 << 16) | i;
        }
        if (imsVTProvider.getId() == -10000) {
            int i4 = 0;
            Log.d(TAG, "bind ImsVTProvider check if exist the same id");
            while (recordGet(i3) != null) {
                Log.d(TAG, "bind ImsVTProvider the same id exist, wait ...");
                try {
                    Thread.sleep(400L);
                } catch (InterruptedException e) {
                }
                i4++;
                if (i4 > 10) {
                    Log.d(TAG, "bind ImsVTProvider the same id exist, break!");
                    break;
                }
            }
            imsVTProvider.setId(i3);
            imsVTProvider.setSimId(i2);
            imsVTProvider.mUsager.setInitUsage(new ImsVTUsageManager.ImsVTUsage("Init", usageGet(i3)));
            recordAdd(i3, imsVTProvider);
            if (sIsNoCameraMode) {
                imsVTProvider.mSource = new VTDummySource();
            } else {
                imsVTProvider.mSource = new VTSource(2, imsVTProvider.getId(), imsVTProvider);
            }
            imsVTProvider.mSource.setReplacePicture(ImsVTProvider.REPLACE_PICTURE_PATH);
            ImsVTProvider.nInitialization(i3, imsVTProvider.getSimId());
            imsVTProvider.mInitComplete = true;
        }
    }

    public boolean getBooleanFromCarrierConfig(String str, int i) {
        boolean z = ((CarrierConfigManager) this.mContext.getSystemService("carrier_config")).getConfigForSubId(SubscriptionManagerHelper.getSubIdUsingPhoneId(i)).getBoolean(str);
        Log.d(TAG, "getBooleanFromCarrierConfig() key: " + str + " result: " + z);
        return z;
    }

    public ImsCallPluginBase getImsExtCallUtil() {
        return ExtensionFactory.makeExtensionPluginFactory(this.mContext).makeImsCallPlugin(this.mContext);
    }

    public ImsCallOemPlugin getImsOemCallUtil() {
        return ExtensionFactory.makeOemPluginFactory(this.mContext).makeImsCallPlugin(this.mContext);
    }

    public synchronized int getSimAppState(int i) {
        if (i >= 0) {
            if (i < SIM_NUM) {
                return this.mSimAppState[i];
            }
        }
        return 1;
    }

    public synchronized int getSimCardState(int i) {
        if (i >= 0) {
            if (i < SIM_NUM) {
                return this.mSimCardState[i];
            }
        }
        return 1;
    }

    public boolean isSimStateStable(int i) {
        int simCardState = getSimCardState(i);
        return simCardState == 1 || simCardState == 11;
    }

    public boolean isViWifiOn(int i) {
        return this.mFeatureValueReceiver.getInitViWifiValue(i);
    }

    public boolean isVideoCallOn(int i) {
        return this.mFeatureValueReceiver.getInitViLTEValue(i);
    }

    public String packFromVdoProfile(VideoProfile videoProfile) {
        return this.mPacker.packFromVdoProfile(videoProfile);
    }

    public void quitAllThread() {
        if (this.mProviderById.size() != 0) {
            for (Object obj : this.mProviderById.values()) {
                Log.d(TAG, "quitThread, id = " + ((ImsVTProvider) obj).getId());
                ((ImsVTProvider) obj).quitThread();
            }
        }
    }

    public void reInitRefVTP() {
        this.mProviderHandler.obtainMessage(7).sendToTarget();
        this.mProviderHandler.sendMessageDelayed(this.mProviderHandler.obtainMessage(8), 2000L);
    }

    public void recordAdd(int i, ImsVTProvider imsVTProvider) {
        Log.d(TAG, "recordAdd id = " + i + ", size = " + recordSize());
        Map<String, Object> map = this.mProviderById;
        StringBuilder sb = new StringBuilder();
        sb.append("");
        sb.append(i);
        map.put(sb.toString(), imsVTProvider);
    }

    public boolean recordContain(int i) {
        return this.mProviderById.containsKey(Integer.valueOf(i));
    }

    public ImsVTProvider recordGet(int i) {
        if (isTelephonyLogEnable()) {
            Log.d(TAG, "recordGet id = " + i + ", size = " + recordSize());
        }
        return (ImsVTProvider) this.mProviderById.get("" + i);
    }

    public int recordPopId() {
        if (this.mProviderById.size() == 0) {
            return ImsVTProvider.VT_PROVIDER_INVALIDE_ID;
        }
        Iterator<Object> it = this.mProviderById.values().iterator();
        return it.hasNext() ? ((ImsVTProvider) it.next()).getId() : ImsVTProvider.VT_PROVIDER_INVALIDE_ID;
    }

    public void recordRemove(int i) {
        Log.d(TAG, "recordRemove id = " + i + ", size = " + recordSize());
        Map<String, Object> map = this.mProviderById;
        StringBuilder sb = new StringBuilder();
        sb.append("");
        sb.append(i);
        map.remove(sb.toString());
    }

    public void recordRemoveAll() {
        Log.d(TAG, "recordRemoveAll, size = " + recordSize());
        this.mProviderById.clear();
    }

    public int recordSize() {
        return this.mProviderById.size();
    }

    public void registerNetworkRequestWithCallback(int i) {
        NetworkRequest.Builder builder = new NetworkRequest.Builder();
        builder.addCapability(i);
        NetworkRequest networkRequestBuild = builder.build();
        Log.d(TAG, "registerNetworkRequestwithCallback(), networkRequest:" + networkRequestBuild);
        if (this.mConnectivityManager == null) {
            this.mConnectivityManager = (ConnectivityManager) this.mContext.getSystemService("connectivity");
        }
        this.mConnectivityManager.registerNetworkCallback(networkRequestBuild, this.mNetworkAvailableCallback);
    }

    public void releaseVTSourceAll() {
        if (this.mProviderById.size() != 0) {
            for (Object obj : this.mProviderById.values()) {
                Log.d(TAG, "releaseVTSourceAll, id = " + ((ImsVTProvider) obj).getId());
                ((ImsVTProvider) obj).mSource.release();
            }
        }
    }

    public void resetWrapper(ImsVTProvider imsVTProvider) {
        SomeArgs someArgsObtain = SomeArgs.obtain();
        someArgsObtain.arg1 = imsVTProvider;
        this.mProviderHandler.obtainMessage(6, someArgsObtain).sendToTarget();
    }

    public void resetWrapperInternal(ImsVTProvider imsVTProvider) {
        if (imsVTProvider != null) {
            imsVTProvider.onResetWrapper();
        }
    }

    public void setContextAndInitRefVTP(Context context) {
        this.mProviderHandler.obtainMessage(1, context).sendToTarget();
    }

    public void setContextAndInitRefVTPInternal(Context context) {
        Log.d(TAG, "setContextAndInitRefVTPInternal(), context =" + context);
        this.mContext = context;
        if (sIsNoCameraMode) {
            VTDummySource.setContext(context);
        } else {
            VTSource.setContext(context);
        }
        this.mTelephonyManager = (TelephonyManager) this.mContext.getSystemService("phone");
        if (this.mFeatureValueReceiver != null) {
            Log.d(TAG, "setContextAndInitRefVTP, register FeatureValueReceiver");
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction(ImsConfigContract.ACTION_IMS_FEATURE_CHANGED);
            this.mContext.registerReceiver(this.mFeatureValueReceiver, intentFilter);
        }
        if (this.mSimStateReceiver != null) {
            Log.d(TAG, "setContextAndInitRefVTP, register SimStateReceiver");
            this.mContext.registerReceiver(this.mSimStateReceiver, new IntentFilter("android.telephony.action.SIM_CARD_STATE_CHANGED"));
        }
        SubscriptionManager subscriptionManagerFrom = SubscriptionManager.from(this.mContext);
        this.mSubscriptionManager = subscriptionManagerFrom;
        subscriptionManagerFrom.addOnSubscriptionsChangedListener(this.mSubscriptionsChangedlistener);
        registerNetworkRequestWithCallback(4);
        registerNetworkRequestWithCallback(10);
        if (isVideoCallOnByPlatform()) {
            Log.d(TAG, "setContextAndInitRefVTPInternal(), ViLTE on, do natvie init");
            ImsVTProvider.nInitRefVTP();
            ImsVTProvider.nTagSocketWithUid(1001);
        }
    }

    public synchronized void setSimAppState(int i, int i2) {
        if (i >= 0) {
            if (i < SIM_NUM) {
                this.mSimAppState[i] = i2;
            }
        }
    }

    public synchronized void setSimCardState(int i, int i2) {
        if (i >= 0) {
            if (i < SIM_NUM) {
                this.mSimCardState[i] = i2;
            }
        }
    }

    public void setUIMode(ImsVTProvider imsVTProvider, int i) {
        SomeArgs someArgsObtain = SomeArgs.obtain();
        someArgsObtain.arg1 = imsVTProvider;
        someArgsObtain.arg2 = Integer.valueOf(i);
        this.mProviderHandler.obtainMessage(3, someArgsObtain).sendToTarget();
    }

    public void setUIModeInternal(ImsVTProvider imsVTProvider, int i) {
        if (imsVTProvider != null) {
            imsVTProvider.onSetUIMode(i);
        }
    }

    public void switchFeature(int i, int i2, boolean z) {
        SomeArgs someArgsObtain = SomeArgs.obtain();
        someArgsObtain.arg1 = Integer.valueOf(i);
        someArgsObtain.arg2 = Integer.valueOf(i2);
        someArgsObtain.arg3 = Boolean.valueOf(z);
        this.mProviderHandler.obtainMessage(4, someArgsObtain).sendToTarget();
    }

    public void switchFeatureInternal(int i, int i2, boolean z) {
        Log.d(TAG, "switchFeatureInternal, feature = " + i2 + "isOn = " + z);
        if (this.mProviderById.size() != 0) {
            for (Object obj : this.mProviderById.values()) {
                if (i == ((ImsVTProvider) obj).getSimId()) {
                    Log.d(TAG, "switchFeatureInternal, id = " + ((ImsVTProvider) obj).getId());
                    ((ImsVTProvider) obj).onSwitchFeature(i2, z);
                }
            }
        }
    }

    public void switchRoaming(int i, boolean z) {
        SomeArgs someArgsObtain = SomeArgs.obtain();
        someArgsObtain.arg1 = Integer.valueOf(i);
        someArgsObtain.arg2 = Boolean.valueOf(z);
        this.mProviderHandler.obtainMessage(5, someArgsObtain).sendToTarget();
    }

    public void switchRoamingInternal(int i, boolean z) {
        Log.d(TAG, "switchRoamingInternal, phoneId = " + i + "isRoaming = " + z);
        if (this.mProviderById.size() != 0) {
            for (Object obj : this.mProviderById.values()) {
                if (i == ((ImsVTProvider) obj).getSimId()) {
                    Log.d(TAG, "switchRoamingInternal, id = " + ((ImsVTProvider) obj).getId());
                    ((ImsVTProvider) obj).onSwitchRoaming(z);
                }
            }
        }
    }

    public VideoProfile unPackToVdoProfile(String str) {
        return this.mPacker.unPackToVdoProfile(str);
    }

    public void updateCameraUsage(int i) {
        Log.d(TAG, "updateCameraUsage");
        if (this.mProviderById.size() != 0) {
            for (Object obj : this.mProviderById.values()) {
                if (((ImsVTProvider) obj).getId() != i) {
                    ((ImsVTProvider) obj).setCameraInternal(null);
                }
            }
        }
    }

    public ImsVTUsageManager.ImsVTUsage usageGet(int i) {
        ImsVTUsageManager.ImsVTUsage imsVTUsage = (ImsVTUsageManager.ImsVTUsage) this.mDataUsageById.get("" + i);
        if (imsVTUsage == null) {
            return new ImsVTUsageManager.ImsVTUsage("Dummy");
        }
        Log.d(TAG, "[usageGet][id =" + i + "]" + imsVTUsage.toString());
        return imsVTUsage;
    }

    public void usageSet(int i, ImsVTUsageManager.ImsVTUsage imsVTUsage) {
        Log.d(TAG, "[usageSet][id =" + i + "]" + imsVTUsage.toString());
        Map<String, Object> map = this.mDataUsageById;
        StringBuilder sb = new StringBuilder();
        sb.append("");
        sb.append(i);
        map.put(sb.toString(), new ImsVTUsageManager.ImsVTUsage("Record", imsVTUsage));
    }

    public void waitSimStateStable(int i) {
        if (isSimStateStable(i)) {
            return;
        }
        Log.d(TAG, "waitSimStateStable, simId = " + i);
        this.mSimReadyVariable[i].close();
        this.mSimReadyVariable[i].block();
    }
}
