package com.mediatek.ims;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.os.Build;
import android.os.RemoteException;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import android.util.Log;
import com.android.ims.ImsManager;
import com.android.ims.internal.IImsConfig;
import com.mediatek.ims.common.SubscriptionManagerHelper;
import com.mediatek.ims.config.ImsConfigContract;
import com.mediatek.ims.config.internal.ImsConfigAdapter;
import com.mediatek.ims.config.internal.ImsConfigImpl;
import com.mediatek.ims.config.internal.MtkImsConfigImpl;
import com.mediatek.ims.internal.IMtkImsConfig;
import com.mediatek.ims.plugin.ExtensionFactory;
import com.mediatek.ims.plugin.ImsManagerOemPlugin;
import com.mediatek.ims.ril.ImsCommandsInterface;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class ImsConfigManager {
    private static final boolean DEBUG;
    private static final String LOG_TAG = "ImsConfigManager";
    private static final String PROPERTY_CAPABILITY_SWITCH = "persist.vendor.radio.simswitch";
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    private static final boolean SENLOG;
    private static final boolean TELDBG;
    private Context mContext;
    private ImsCommandsInterface[] mImsRILAdapters;
    private Map<Integer, ImsConfigImpl> mImsConfigInstanceMap = new HashMap();
    private Map<Integer, ImsConfigAdapter> mImsConfigAdapterMap = new HashMap();
    private Map<Integer, IMtkImsConfig> mMtkImsConfigInstanceMap = new HashMap();
    private ImsManagerOemPlugin mImsManagerOemPlugin = null;
    private final BroadcastReceiver mBroadcastReceiver = new BroadcastReceiver() { // from class: com.mediatek.ims.ImsConfigManager.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            int intExtra;
            if (ImsConfigContract.ACTION_DYNAMIC_IMS_SWITCH_TRIGGER.equals(intent.getAction())) {
                Rlog.d(ImsConfigManager.LOG_TAG, "DYNAMIC_IMS_SWITCH_TRIGGER phoneId:" + intent.getIntExtra("phone", -1) + ", simState:" + intent.getStringExtra("ss"));
                ImsConfigManager.this.updateImsResrouceCapability(context, intent);
                return;
            }
            if (ImsConfigContract.ACTION_IMS_CONFIG_CHANGED.equals(intent.getAction())) {
                int intExtra2 = intent.getIntExtra("phone_id", 0);
                int intExtra3 = intent.getIntExtra(ImsConfigContract.EXTRA_CHANGED_ITEM, -1);
                Log.d(ImsConfigManager.LOG_TAG, "ACTION_IMS_CONFIG_CHANGED phoneId:" + intExtra2 + ", itemId:" + intExtra3);
                if (1003 == intExtra3 && "OP236".equals(SystemProperties.get("persist.vendor.operator.optr", "OM"))) {
                    ImsConfigManager.this.setVdpProvision(intExtra2, Integer.parseInt(intent.getStringExtra("value")));
                    return;
                }
                return;
            }
            if (ImsConfigContract.ACTION_CONFIG_LOADED.equals(intent.getAction()) && "OP236".equals(SystemProperties.get("persist.vendor.operator.optr", "OM")) && (intExtra = intent.getIntExtra("phone", -1)) >= 0) {
                try {
                    int provisionedValue = ImsConfigManager.this.getEx(intExtra).getProvisionedValue(1003);
                    if (ImsManager.getInstance(ImsConfigManager.this.mContext, intExtra).isVolteEnabledByPlatform() && provisionedValue == 1) {
                        Log.d(ImsConfigManager.LOG_TAG, "ignore setVdpProvision for internal test.");
                    } else {
                        ImsConfigManager.this.setVdpProvision(intExtra, provisionedValue);
                    }
                } catch (RemoteException e) {
                    Log.e(ImsConfigManager.LOG_TAG, "getProvisionedValue fail: " + e);
                }
            }
        }
    };

    static {
        DEBUG = TextUtils.equals(Build.TYPE, "eng") || SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
        SENLOG = TextUtils.equals(Build.TYPE, "user");
        TELDBG = SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
    }

    public ImsConfigManager(Context context, ImsCommandsInterface[] imsCommandsInterfaceArr) {
        this.mImsRILAdapters = null;
        if (DEBUG) {
            Rlog.d(LOG_TAG, "ImsConfigManager Enter");
        }
        this.mContext = context;
        this.mImsRILAdapters = imsCommandsInterfaceArr;
        if (!ImsCommonUtil.supportMdAutoSetupIms()) {
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction(ImsConfigContract.ACTION_DYNAMIC_IMS_SWITCH_TRIGGER);
            context.registerReceiver(this.mBroadcastReceiver, intentFilter);
        } else if ("OP236".equals(SystemProperties.get("persist.vendor.operator.optr", "OM"))) {
            IntentFilter intentFilter2 = new IntentFilter();
            intentFilter2.addAction(ImsConfigContract.ACTION_IMS_CONFIG_CHANGED);
            intentFilter2.addAction(ImsConfigContract.ACTION_CONFIG_LOADED);
            context.registerReceiver(this.mBroadcastReceiver, intentFilter2);
        }
    }

    private ImsConfigAdapter getImsConfigAdapter(Context context, ImsCommandsInterface[] imsCommandsInterfaceArr, int i) {
        ImsConfigAdapter imsConfigAdapter;
        synchronized (this.mImsConfigAdapterMap) {
            if (this.mImsConfigAdapterMap.containsKey(Integer.valueOf(i))) {
                imsConfigAdapter = this.mImsConfigAdapterMap.get(Integer.valueOf(i));
            } else {
                if (DEBUG) {
                    Rlog.d(LOG_TAG, "init ImsConfigAdapter phone:" + i);
                }
                imsConfigAdapter = new ImsConfigAdapter(context, imsCommandsInterfaceArr[i], i);
                this.mImsConfigAdapterMap.put(Integer.valueOf(i), imsConfigAdapter);
            }
        }
        return imsConfigAdapter;
    }

    private int getMainCapabilityPhoneId() {
        int i = SystemProperties.getInt("persist.vendor.radio.simswitch", 1) - 1;
        if (i < 0 || i >= TelephonyManager.getDefault().getPhoneCount()) {
            return -1;
        }
        return i;
    }

    private static boolean isTestSim(int i) {
        if (i == 0) {
            return "1".equals(SystemProperties.get("vendor.gsm.sim.ril.testsim", "0"));
        }
        if (i == 1) {
            return "1".equals(SystemProperties.get("vendor.gsm.sim.ril.testsim.2", "0"));
        }
        if (i == 2) {
            return "1".equals(SystemProperties.get("vendor.gsm.sim.ril.testsim.3", "0"));
        }
        if (i != 3) {
            return false;
        }
        return "1".equals(SystemProperties.get("vendor.gsm.sim.ril.testsim.4", "0"));
    }

    private static int mapFeatureValue(boolean z) {
        return z ? 1 : 0;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setVdpProvision(int i, int i2) {
        Log.d(LOG_TAG, "phoneId:" + i + " ,value:" + i2);
        if (i < 0) {
            return;
        }
        try {
            getEx(i).setModemImsCfg(new String[]{"provision_setting_vdp"}, new String[]{Integer.toString(i2)}, i);
        } catch (RemoteException e) {
            Log.e(LOG_TAG, "setModemImsCfg fail: " + e);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateImsResrouceCapability(Context context, Intent intent) {
        int i;
        int i2;
        int i3;
        int iMapFeatureValue;
        int i4;
        String stringExtra = intent.getStringExtra("ss");
        int intExtra = intent.getIntExtra("phone", -1);
        if (!"1".equals(SystemProperties.get("persist.vendor.mtk_dynamic_ims_switch"))) {
            if (stringExtra.equalsIgnoreCase("ABSENT") || stringExtra.equalsIgnoreCase("LOADED")) {
                Rlog.d(LOG_TAG, "updateImsServiceConfig after SIM event, phoneId:" + intExtra);
                updateImsServiceConfig(context, intExtra);
                return;
            }
            return;
        }
        Rlog.d(LOG_TAG, "get MtkImsConfigImpl of phone " + intExtra);
        IMtkImsConfig ex = getEx(intExtra);
        try {
            if (stringExtra.equalsIgnoreCase("ABSENT")) {
                Rlog.w(LOG_TAG, "setImsResCapability to volte only w/o SIM on phone " + intExtra);
                ex.setImsResCapability(0, 1);
                ex.setImsResCapability(1, 0);
                ex.setImsResCapability(2, 0);
            } else if (stringExtra.equalsIgnoreCase("LOADED")) {
                if (isTestSim(intExtra)) {
                    Rlog.w(LOG_TAG, "Found test SIM on phone " + intExtra);
                    i = 1;
                    i2 = 1;
                    i3 = 1;
                } else {
                    TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
                    String simOperatorNumericForPhone = OperatorUtils.getSimOperatorNumericForPhone(intExtra);
                    if (simOperatorNumericForPhone == null || simOperatorNumericForPhone.isEmpty()) {
                        Rlog.w(LOG_TAG, "Invalid mccMnc:" + simOperatorNumericForPhone);
                        return;
                    }
                    try {
                        int i5 = Integer.parseInt(simOperatorNumericForPhone.substring(0, 3));
                        int i6 = Integer.parseInt(simOperatorNumericForPhone.substring(3));
                        Rlog.d(LOG_TAG, "SIM loaded on phone " + intExtra + " with mcc: " + i5 + " mnc: " + i6);
                        String simSerialNumber = telephonyManager.getSimSerialNumber(SubscriptionManagerHelper.getSubIdUsingPhoneId(intExtra));
                        if (!SENLOG || TELDBG) {
                            Rlog.d(LOG_TAG, "check iccid:" + Rlog.pii(LOG_TAG, simSerialNumber));
                        }
                        if (!TextUtils.isEmpty(simSerialNumber)) {
                            if (simSerialNumber.startsWith("8988605")) {
                                if (DEBUG) {
                                    Rlog.d(LOG_TAG, "Replace mccmnc for APTG roaming case");
                                }
                                i6 = 5;
                                i5 = 466;
                            } else if (simSerialNumber.startsWith("898603") || simSerialNumber.startsWith("898611")) {
                                i5 = 460;
                                i6 = 3;
                                if (DEBUG) {
                                    Rlog.d(LOG_TAG, "Replace mccmnc for CT roaming case");
                                }
                            }
                        }
                        Resources resources = context.getResources();
                        Configuration configuration = resources.getConfiguration();
                        configuration.mcc = i5;
                        configuration.mnc = i6 == 0 ? 65535 : i6;
                        resources.updateConfiguration(configuration, null);
                        if (OperatorUtils.isCTVolteDisabled(intExtra)) {
                            i = 0;
                            i4 = 0;
                            iMapFeatureValue = 0;
                        } else {
                            int iMapFeatureValue2 = mapFeatureValue(resources.getBoolean(android.R.bool.config_batterySaver_full_enableFirewall));
                            int iMapFeatureValue3 = mapFeatureValue(resources.getBoolean(android.R.bool.config_batterySaver_full_enableNightMode));
                            iMapFeatureValue = mapFeatureValue(resources.getBoolean(android.R.bool.config_batterySaver_full_enableQuickDoze));
                            i = iMapFeatureValue2;
                            i4 = iMapFeatureValue3;
                        }
                        i2 = i4;
                        i3 = iMapFeatureValue;
                    } catch (NumberFormatException e) {
                        Rlog.w(LOG_TAG, "Invalid mccMnc:" + simOperatorNumericForPhone);
                        return;
                    }
                }
                Rlog.d(LOG_TAG, "Set res capability: volte = " + i + ", vilte = " + i2 + ", wfc = " + i3);
                ex.setImsResCapability(0, i);
                ex.setImsResCapability(1, i2);
                ex.setImsResCapability(2, i3);
            }
            Intent intent2 = new Intent(ImsConfigContract.ACTION_DYNAMIC_IMS_SWITCH_COMPLETE);
            intent2.putExtra("phone", intExtra);
            intent2.putExtra("ss", stringExtra);
            context.sendBroadcast(intent2, "android.permission.READ_PHONE_STATE");
            Rlog.d(LOG_TAG, "DYNAMIC_IMS_SWITCH_COMPLETE phoneId:" + intExtra + ", simState:" + stringExtra);
        } catch (RemoteException e2) {
            Rlog.e(LOG_TAG, "SetImsCapability fail: " + e2);
        }
    }

    private void updateImsServiceConfig(Context context, int i) {
        if (this.mImsManagerOemPlugin == null) {
            this.mImsManagerOemPlugin = ExtensionFactory.makeOemPluginFactory(context).makeImsManagerPlugin(context);
        }
        if (ImsCommonUtil.supportMims()) {
            this.mImsManagerOemPlugin.updateImsServiceConfig(context, i, true);
        } else if (i == getMainCapabilityPhoneId()) {
            this.mImsManagerOemPlugin.updateImsServiceConfig(context, i, true);
        } else if (DEBUG) {
            Rlog.d(LOG_TAG, "Do not update if phoneId is not main capability");
        }
    }

    public IImsConfig get(int i) {
        IImsConfig iImsConfig;
        ImsConfigAdapter imsConfigAdapter = getImsConfigAdapter(this.mContext, this.mImsRILAdapters, i);
        synchronized (this.mImsConfigInstanceMap) {
            if (this.mImsConfigInstanceMap.containsKey(Integer.valueOf(i))) {
                iImsConfig = this.mImsConfigInstanceMap.get(Integer.valueOf(i)).getIImsConfig();
            } else {
                ImsConfigImpl imsConfigImpl = new ImsConfigImpl(this.mContext, this.mImsRILAdapters[i], imsConfigAdapter, i);
                iImsConfig = imsConfigImpl.getIImsConfig();
                this.mImsConfigInstanceMap.put(Integer.valueOf(i), imsConfigImpl);
            }
        }
        return iImsConfig;
    }

    public IMtkImsConfig getEx(int i) {
        IImsConfig iImsConfig;
        IMtkImsConfig mtkImsConfigImpl;
        ImsConfigAdapter imsConfigAdapter = getImsConfigAdapter(this.mContext, this.mImsRILAdapters, i);
        synchronized (this.mImsConfigInstanceMap) {
            if (this.mImsConfigInstanceMap.containsKey(Integer.valueOf(i))) {
                iImsConfig = this.mImsConfigInstanceMap.get(Integer.valueOf(i)).getIImsConfig();
            } else {
                ImsConfigImpl imsConfigImpl = new ImsConfigImpl(this.mContext, this.mImsRILAdapters[i], imsConfigAdapter, i);
                iImsConfig = imsConfigImpl.getIImsConfig();
                this.mImsConfigInstanceMap.put(Integer.valueOf(i), imsConfigImpl);
            }
        }
        synchronized (this.mMtkImsConfigInstanceMap) {
            if (this.mMtkImsConfigInstanceMap.containsKey(Integer.valueOf(i))) {
                mtkImsConfigImpl = this.mMtkImsConfigInstanceMap.get(Integer.valueOf(i));
            } else {
                mtkImsConfigImpl = new MtkImsConfigImpl(this.mContext, this.mImsRILAdapters[i], iImsConfig, imsConfigAdapter, i);
                this.mMtkImsConfigInstanceMap.put(Integer.valueOf(i), mtkImsConfigImpl);
            }
        }
        return mtkImsConfigImpl;
    }

    public void init(int i) {
        ImsConfigAdapter imsConfigAdapter = getImsConfigAdapter(this.mContext, this.mImsRILAdapters, i);
        if (DEBUG) {
            Rlog.d(LOG_TAG, "init ImsConfigImpl phoneId:" + i);
        }
        synchronized (this.mImsConfigInstanceMap) {
            this.mImsConfigInstanceMap.put(Integer.valueOf(i), new ImsConfigImpl(this.mContext, this.mImsRILAdapters[i], imsConfigAdapter, i));
        }
    }

    public void initEx(int i) throws Throwable {
        ImsConfigAdapter imsConfigAdapter = getImsConfigAdapter(this.mContext, this.mImsRILAdapters, i);
        if (DEBUG) {
            Rlog.d(LOG_TAG, "initEx ImsConfigImpl phoneId:" + i);
        }
        synchronized (this.mImsConfigInstanceMap) {
            try {
                try {
                    ImsConfigImpl imsConfigImpl = new ImsConfigImpl(this.mContext, this.mImsRILAdapters[i], imsConfigAdapter, i);
                    IImsConfig iImsConfig = imsConfigImpl.getIImsConfig();
                    this.mImsConfigInstanceMap.put(Integer.valueOf(i), imsConfigImpl);
                    if (DEBUG) {
                        Rlog.d(LOG_TAG, "initEx MtkImsConfigImpl phoneId:" + i);
                    }
                    synchronized (this.mMtkImsConfigInstanceMap) {
                        this.mMtkImsConfigInstanceMap.put(Integer.valueOf(i), new MtkImsConfigImpl(this.mContext, this.mImsRILAdapters[i], iImsConfig, imsConfigAdapter, i));
                    }
                } catch (Throwable th) {
                    th = th;
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
            }
        }
    }
}
