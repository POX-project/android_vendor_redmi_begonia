package com.mediatek.internal.telephony;

import android.content.ComponentName;
import android.content.Context;
import android.database.Cursor;
import android.os.Handler;
import android.os.Looper;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.util.Log;
import com.android.internal.telephony.CallManager;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.DefaultPhoneNotifier;
import com.android.internal.telephony.DeviceStateMonitor;
import com.android.internal.telephony.DisplayInfoController;
import com.android.internal.telephony.GsmCdmaCallTracker;
import com.android.internal.telephony.GsmCdmaPhone;
import com.android.internal.telephony.IccPhoneBookInterfaceManager;
import com.android.internal.telephony.IccSmsInterfaceManager;
import com.android.internal.telephony.ImsSmsDispatcher;
import com.android.internal.telephony.InboundSmsTracker;
import com.android.internal.telephony.MultiSimSettingController;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneNotifier;
import com.android.internal.telephony.PhoneSwitcher;
import com.android.internal.telephony.ProxyController;
import com.android.internal.telephony.RIL;
import com.android.internal.telephony.RetryManager;
import com.android.internal.telephony.ServiceStateTracker;
import com.android.internal.telephony.SmsDispatchersController;
import com.android.internal.telephony.SmsStorageMonitor;
import com.android.internal.telephony.SmsUsageMonitor;
import com.android.internal.telephony.SubscriptionController;
import com.android.internal.telephony.SubscriptionInfoUpdater;
import com.android.internal.telephony.TelephonyComponentFactory;
import com.android.internal.telephony.WapPushOverSms;
import com.android.internal.telephony.WspTypeDecoder;
import com.android.internal.telephony.cat.CatService;
import com.android.internal.telephony.cat.CommandParamsFactory;
import com.android.internal.telephony.cat.IconLoader;
import com.android.internal.telephony.cat.RilMessageDecoder;
import com.android.internal.telephony.cdma.CdmaInboundSmsHandler;
import com.android.internal.telephony.cdma.CdmaSMSDispatcher;
import com.android.internal.telephony.cdma.CdmaSubscriptionSourceManager;
import com.android.internal.telephony.dataconnection.DataConnection;
import com.android.internal.telephony.dataconnection.DataServiceManager;
import com.android.internal.telephony.dataconnection.DcController;
import com.android.internal.telephony.dataconnection.DcTesterFailBringUpAll;
import com.android.internal.telephony.dataconnection.DcTracker;
import com.android.internal.telephony.dataconnection.TelephonyNetworkFactory;
import com.android.internal.telephony.datasub.SmartDualSimSwitch;
import com.android.internal.telephony.gsm.GsmInboundSmsHandler;
import com.android.internal.telephony.gsm.GsmSMSDispatcher;
import com.android.internal.telephony.imsphone.ImsPhone;
import com.android.internal.telephony.imsphone.ImsPhoneCallTracker;
import com.android.internal.telephony.uicc.IccCardStatus;
import com.android.internal.telephony.uicc.IccFileHandler;
import com.android.internal.telephony.uicc.IccRecords;
import com.android.internal.telephony.uicc.UiccCard;
import com.android.internal.telephony.uicc.UiccCardApplication;
import com.android.internal.telephony.uicc.UiccController;
import com.android.internal.telephony.uicc.UiccProfile;
import com.mediatek.internal.telephony.carrierexpress.CarrierExpressFwkHandler;
import com.mediatek.internal.telephony.cat.MtkCatLog;
import com.mediatek.internal.telephony.cat.MtkCatService;
import com.mediatek.internal.telephony.cat.MtkCommandParamsFactory;
import com.mediatek.internal.telephony.cat.MtkIconLoader;
import com.mediatek.internal.telephony.cat.MtkRilMessageDecoder;
import com.mediatek.internal.telephony.cdma.MtkCdmaInboundSmsHandler;
import com.mediatek.internal.telephony.cdma.MtkCdmaSMSDispatcher;
import com.mediatek.internal.telephony.cdma.MtkCdmaSubscriptionSourceManager;
import com.mediatek.internal.telephony.dataconnection.MtkDataConnection;
import com.mediatek.internal.telephony.dataconnection.MtkDcController;
import com.mediatek.internal.telephony.dataconnection.MtkDcHelper;
import com.mediatek.internal.telephony.dataconnection.MtkDcTracker;
import com.mediatek.internal.telephony.dataconnection.MtkTelephonyNetworkFactory;
import com.mediatek.internal.telephony.dataconnection.OemDataEnhance;
import com.mediatek.internal.telephony.datasub.SmartDataSwitchAssistant;
import com.mediatek.internal.telephony.gsm.MtkGsmInboundSmsHandler;
import com.mediatek.internal.telephony.gsm.MtkGsmSMSDispatcher;
import com.mediatek.internal.telephony.imsphone.MtkImsPhone;
import com.mediatek.internal.telephony.imsphone.MtkImsPhoneCallTracker;
import com.mediatek.internal.telephony.phb.MtkIccPhoneBookInterfaceManager;
import com.mediatek.internal.telephony.uicc.MtkUiccController;
import com.mediatek.internal.telephony.uicc.MtkUiccProfile;
import com.mediatek.internal.telephony.worldphone.WorldPhoneUtil;
import dalvik.system.PathClassLoader;

/* JADX INFO: loaded from: classes.dex */
public class MtkTelephonyComponentFactory extends TelephonyComponentFactory {
    private static final String DEVICE_TYPE_BEGONIA = "begonia";
    private static final String DEVICE_TYPE_BEGONIA_IN = "begoniain";
    private static final String PROPERTY_DEVICE_NAME = "ro.product.device";
    private static String mDeviceName = null;
    private static MtkTelephonyComponentFactory sInstance;

    public static MtkTelephonyComponentFactory getInstance() {
        if (sInstance == null) {
            sInstance = new MtkTelephonyComponentFactory();
        }
        return sInstance;
    }

    public void initCarrierExpress() {
        Rlog.d("TelephonyComponentFactory", "Creating CarrierExpress");
        CarrierExpressFwkHandler.init();
    }

    public void initEmbmsAdaptor(Context context, CommandsInterface[] commandsInterfaceArr) {
        MtkEmbmsAdaptor.getDefault(context, commandsInterfaceArr);
    }

    public void initGwsdService(Context context) {
        if (SystemProperties.get("ro.vendor.mtk_telephony_add_on_policy", "0").equals("0") && SystemProperties.get("ro.vendor.mtk_gwsd_support", "0").equals("1")) {
            try {
                String str = SystemProperties.get("ro.vendor.mtk_gwsd_capability", "0").equals(MtkGsmCdmaPhone.ACT_TYPE_UTRAN) ? "/system/framework/mediatek-gwsdv2.jar" : "";
                if (SystemProperties.get("ro.vendor.mtk_gwsd_capability", "0").equals("1")) {
                    str = "/system/framework/mediatek-gwsd.jar";
                }
                Class<?> cls = Class.forName("com.mediatek.gwsd.service.GwsdService", false, new PathClassLoader(str, ClassLoader.getSystemClassLoader()));
                Rlog.d("TelephonyComponentFactory", "class = " + cls);
                cls.getMethod("getInstance", Context.class).invoke(cls, context);
            } catch (Exception e) {
                Rlog.e("TelephonyComponentFactory", Log.getStackTraceString(e));
            }
        }
    }

    public void initRadioManager(Context context, int i, CommandsInterface[] commandsInterfaceArr) {
        RadioManager.init(context, i, commandsInterfaceArr);
    }

    public SubscriptionController initSubscriptionController(Context context) {
        return MtkSubscriptionController.mtkInit(context);
    }

    public void initVoDataService(Context context) {
        try {
            Class<?> cls = Class.forName("com.mediatek.vodata.service.VoDataService", false, new PathClassLoader("/system/framework/mediatek-vodata.jar", ClassLoader.getSystemClassLoader()));
            Rlog.d("TelephonyComponentFactory", "class = " + cls);
            cls.getMethod("getInstance", Context.class).invoke(cls, context);
        } catch (Exception e) {
            Rlog.d("TelephonyComponentFactory", "not found VoData library");
        }
    }

    public CallManager makeCallManager() {
        return new MtkCallManager();
    }

    public CatService makeCatService(CommandsInterface commandsInterface, UiccCardApplication uiccCardApplication, IccRecords iccRecords, Context context, IccFileHandler iccFileHandler, UiccProfile uiccProfile, int i) {
        int i2;
        UiccCardApplication application;
        int[] subId = SubscriptionManager.getSubId(i);
        if (subId != null) {
            int currentPhoneType = TelephonyManager.getDefault().getCurrentPhoneType(subId[0]);
            MtkCatLog.d("MtkCatService", "makeCatService phoneType : " + currentPhoneType + " slotId: " + i + " subId[0]:" + subId[0]);
            i2 = currentPhoneType;
        } else {
            i2 = 1;
        }
        if (uiccProfile != null) {
            application = i2 == 2 ? uiccProfile.getApplication(2) : uiccProfile.getApplicationIndex(0);
        } else {
            application = uiccCardApplication;
        }
        MtkCatLog.v("MtkCatService", "makeCatService  ca = " + application);
        if (commandsInterface != null && application != null && iccRecords != null && context != null && iccFileHandler != null && uiccProfile != null) {
            return new MtkCatService(commandsInterface, application, iccRecords, context, iccFileHandler, uiccProfile, i);
        }
        MtkCatLog.e("MtkCatService", "makeCatService exception, will not create MtkCatservice!!!!");
        return null;
    }

    public CdmaInboundSmsHandler makeCdmaInboundSmsHandler(Context context, SmsStorageMonitor smsStorageMonitor, Phone phone, CdmaSMSDispatcher cdmaSMSDispatcher) {
        return new MtkCdmaInboundSmsHandler(context, smsStorageMonitor, phone, cdmaSMSDispatcher);
    }

    public CdmaSMSDispatcher makeCdmaSMSDispatcher(Phone phone, SmsDispatchersController smsDispatchersController) {
        return new MtkCdmaSMSDispatcher(phone, smsDispatchersController);
    }

    public CdmaSubscriptionSourceManager makeCdmaSubscriptionSourceManager(Context context, CommandsInterface commandsInterface, Handler handler, int i, Object obj) {
        return new MtkCdmaSubscriptionSourceManager(context, commandsInterface);
    }

    public CommandParamsFactory makeCommandParamsFactory(RilMessageDecoder rilMessageDecoder, IccFileHandler iccFileHandler, Context context) {
        return new MtkCommandParamsFactory(rilMessageDecoder, iccFileHandler, context);
    }

    public ComponentName makeConnectionServiceName() {
        Rlog.d("TelephonyComponentFactory", "makeConnectionServiceName mtk");
        return new ComponentName("com.android.phone", "com.mediatek.services.telephony.MtkTelephonyConnectionService");
    }

    public DataConnection makeDataConnection(Phone phone, String str, int i, DcTracker dcTracker, DataServiceManager dataServiceManager, DcTesterFailBringUpAll dcTesterFailBringUpAll, DcController dcController) {
        MtkDataConnection mtkDataConnection = new MtkDataConnection(phone, str, i, dcTracker, dataServiceManager, dcTesterFailBringUpAll, dcController);
        DataConnection.TCP_BUFFER_SIZES_LTE = "2097152,4194304,8388608,262144,524288,1048576";
        return mtkDataConnection;
    }

    public DcController makeDcController(String str, Phone phone, DcTracker dcTracker, DataServiceManager dataServiceManager, Handler handler) {
        return new MtkDcController(str, phone, dcTracker, dataServiceManager, handler);
    }

    public void makeDcHelper(Context context, Phone[] phoneArr) {
        MtkDcHelper.makeMtkDcHelper(context, phoneArr);
    }

    public DcTracker makeDcTracker(Phone phone, int i) {
        return new MtkDcTracker(phone, i);
    }

    public DefaultPhoneNotifier makeDefaultPhoneNotifier(Context context) {
        Rlog.d("TelephonyComponentFactory", "makeDefaultPhoneNotifier mtk");
        return new MtkPhoneNotifier(context);
    }

    public DeviceStateMonitor makeDeviceStateMonitor(Phone phone) {
        return new MtkDeviceStateMonitor(phone);
    }

    public DisplayInfoController makeDisplayInfoController(Phone phone) {
        return new MtkDisplayInfoController(phone);
    }

    public GsmCdmaCallTracker makeGsmCdmaCallTracker(GsmCdmaPhone gsmCdmaPhone) {
        return new MtkGsmCdmaCallTracker(gsmCdmaPhone);
    }

    public GsmInboundSmsHandler makeGsmInboundSmsHandler(Context context, SmsStorageMonitor smsStorageMonitor, Phone phone) {
        return MtkGsmInboundSmsHandler.makeInboundSmsHandler(context, smsStorageMonitor, phone);
    }

    public GsmSMSDispatcher makeGsmSMSDispatcher(Phone phone, SmsDispatchersController smsDispatchersController, GsmInboundSmsHandler gsmInboundSmsHandler) {
        return new MtkGsmSMSDispatcher(phone, smsDispatchersController, gsmInboundSmsHandler);
    }

    public IccPhoneBookInterfaceManager makeIccPhoneBookInterfaceManager(Phone phone) {
        Rlog.d("TelephonyComponentFactory", "makeIccPhoneBookInterfaceManager mtk");
        return new MtkIccPhoneBookInterfaceManager(phone);
    }

    public IccSmsInterfaceManager makeIccSmsInterfaceManager(Phone phone) {
        return new MtkIccSmsInterfaceManager(phone);
    }

    public IconLoader makeIconLoader(Looper looper, IccFileHandler iccFileHandler) {
        return new MtkIconLoader(looper, iccFileHandler);
    }

    public ImsPhone makeImsPhone(Context context, PhoneNotifier phoneNotifier, Phone phone) {
        try {
            return new MtkImsPhone(context, phoneNotifier, phone);
        } catch (Exception e) {
            Rlog.e("TelephonyComponentFactoryEx", "makeImsPhoneExt", e);
            return null;
        }
    }

    public ImsPhoneCallTracker makeImsPhoneCallTracker(ImsPhone imsPhone) {
        return new MtkImsPhoneCallTracker(imsPhone);
    }

    public ImsSmsDispatcher makeImsSmsDispatcher(Phone phone, SmsDispatchersController smsDispatchersController) {
        return new MtkImsSmsDispatcher(phone, smsDispatchersController);
    }

    public InboundSmsTracker makeInboundSmsTracker(Context context, Cursor cursor, boolean z) {
        return new MtkInboundSmsTracker(context, cursor, z);
    }

    public InboundSmsTracker makeInboundSmsTracker(Context context, byte[] bArr, long j, int i, boolean z, String str, String str2, int i2, int i3, int i4, boolean z2, String str3, boolean z3, int i5) {
        return new MtkInboundSmsTracker(context, bArr, j, i, z, str, str2, i2, i3, i4, z2, str3, z3, i5);
    }

    public InboundSmsTracker makeInboundSmsTracker(Context context, byte[] bArr, long j, int i, boolean z, boolean z2, String str, String str2, String str3, boolean z3, int i2) {
        return new MtkInboundSmsTracker(context, bArr, j, i, z, z2, str, str2, str3, z3, i2);
    }

    public MultiSimSettingController makeMultiSimSettingController(Context context, SubscriptionController subscriptionController) {
        Rlog.d("TelephonyComponentFactory", "makeMultiSimSettingController mtk");
        return new MtkMultiSimSettingController(context, subscriptionController);
    }

    /* JADX INFO: renamed from: makePhone, reason: merged with bridge method [inline-methods] */
    public GsmCdmaPhone m1makePhone(Context context, CommandsInterface commandsInterface, PhoneNotifier phoneNotifier, int i, int i2, TelephonyComponentFactory telephonyComponentFactory) {
        return new MtkGsmCdmaPhone(context, commandsInterface, phoneNotifier, i, i2, telephonyComponentFactory);
    }

    public PhoneSwitcher makePhoneSwitcher(int i, Context context, Looper looper) {
        if (WifiSarController.isNeeded()) {
            new WifiSarController(context);
        }
        return MtkPhoneSwitcher.mtkMake(i, context, looper);
    }

    public ProxyController makeProxyController(Context context) {
        return new MtkProxyController(context);
    }

    public RetryManager makeRetryManager(Phone phone, String str) {
        return new MtkRetryManager(phone, str);
    }

    public RIL makeRil(Context context, int i, int i2, Integer num) {
        return new MtkRIL(context, i, i2, num);
    }

    public RilMessageDecoder makeRilMessageDecoder(Handler handler, IccFileHandler iccFileHandler, Context context, int i) {
        return new MtkRilMessageDecoder(handler, iccFileHandler, context, i);
    }

    public ServiceStateTracker makeServiceStateTracker(GsmCdmaPhone gsmCdmaPhone, CommandsInterface commandsInterface) {
        return new MtkServiceStateTracker(gsmCdmaPhone, commandsInterface);
    }

    public void makeSmartDataSwitchAssistant(Context context, Phone[] phoneArr) {
        SmartDataSwitchAssistant.makeSmartDataSwitchAssistant(context, phoneArr);
    }

    public void makeSmartDualSim(Context context, Phone[] phoneArr) {
        SmartDualSimSwitch.makeSmartDualSimSwitch(context, phoneArr);
    }

    public void makeSmsBroadcastUndelivered(Context context, GsmInboundSmsHandler gsmInboundSmsHandler, CdmaInboundSmsHandler cdmaInboundSmsHandler) {
        MtkSmsBroadcastUndelivered.initialize(context, gsmInboundSmsHandler, cdmaInboundSmsHandler);
    }

    public SmsDispatchersController makeSmsDispatchersController(Phone phone, SmsStorageMonitor smsStorageMonitor, SmsUsageMonitor smsUsageMonitor) {
        return new MtkSmsDispatchersController(phone, phone.mSmsStorageMonitor, phone.mSmsUsageMonitor);
    }

    public MtkSmsHeader makeSmsHeader() {
        return new MtkSmsHeader();
    }

    public SmsStorageMonitor makeSmsStorageMonitor(Phone phone) {
        return new MtkSmsStorageMonitor(phone);
    }

    public SmsUsageMonitor makeSmsUsageMonitor(Context context) {
        return new MtkSmsUsageMonitor(context);
    }

    public SubscriptionInfoUpdater makeSubscriptionInfoUpdater(Looper looper, Context context, CommandsInterface[] commandsInterfaceArr) {
        ElevatorModeController.make(context, commandsInterfaceArr);
        FiveGDataOptimize.init(context, commandsInterfaceArr);
        String str = SystemProperties.get(PROPERTY_DEVICE_NAME);
        mDeviceName = str;
        if (DEVICE_TYPE_BEGONIA.equals(str) || DEVICE_TYPE_BEGONIA_IN.equals(mDeviceName)) {
            ModemSarController_G7.make(context, commandsInterfaceArr);
            Rlog.d("TelephonyComponentFactory", "ModemSarController_G7 make.");
        } else {
            ModemSarController.make(context, commandsInterfaceArr);
            Rlog.d("TelephonyComponentFactory", "ModemSarController make.");
        }
        OemDataEnhance.init(context);
        return new MtkSubscriptionInfoUpdater(looper, context, commandsInterfaceArr);
    }

    public void makeSuppServManager(Context context, Phone[] phoneArr) {
        MtkSuppServManager.makeSuppServManager(context, phoneArr).init();
    }

    public TelephonyNetworkFactory makeTelephonyNetworkFactories(Looper looper, Phone phone) {
        return new MtkTelephonyNetworkFactory(looper, phone);
    }

    public UiccController makeUiccController(Context context) {
        Rlog.d("TelephonyComponentFactory", "makeUiccController mtk");
        return new MtkUiccController(context);
    }

    public UiccProfile makeUiccProfile(Context context, CommandsInterface commandsInterface, IccCardStatus iccCardStatus, int i, UiccCard uiccCard, Object obj) {
        return new MtkUiccProfile(context, commandsInterface, iccCardStatus, i, uiccCard, obj);
    }

    public WapPushOverSms makeWapPushOverSms(Context context) {
        return new MtkWapPushOverSms(context);
    }

    public void makeWorldPhoneManager() {
        WorldPhoneUtil.makeWorldPhoneManager();
    }

    public WspTypeDecoder makeWspTypeDecoder(byte[] bArr) {
        return new MtkWspTypeDecoder(bArr);
    }
}
