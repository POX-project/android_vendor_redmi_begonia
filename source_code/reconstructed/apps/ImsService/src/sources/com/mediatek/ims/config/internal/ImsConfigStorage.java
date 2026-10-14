package com.mediatek.ims.config.internal;

import android.content.BroadcastReceiver;
import android.content.ContentResolver;
import android.content.ContentValues;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.database.Cursor;
import android.net.Uri;
import android.os.AsyncResult;
import android.os.Build;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.os.SystemProperties;
import android.text.TextUtils;
import android.util.Log;
import com.android.ims.ImsException;
import com.android.internal.telephony.CommandException;
import com.mediatek.ims.ImsCommonUtil;
import com.mediatek.ims.config.DefaultConfigPolicyFactory;
import com.mediatek.ims.config.ImsConfigContract;
import com.mediatek.ims.config.ImsConfigPolicy;
import com.mediatek.ims.config.ImsConfigSettings;
import com.mediatek.ims.plugin.ExtensionFactory;
import com.mediatek.ims.plugin.ImsManagerOemPlugin;
import com.mediatek.ims.ril.ImsCommandsInterface;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class ImsConfigStorage {
    private static final String ACTION_CXP_NOTIFY_FEATURE = "com.mediatek.common.carrierexpress.cxp_notify_feature";
    private static final boolean DEBUG;
    static final int EVENT_GET_PROVISION_DONE_URC = 6;
    static ImsFeatureMap[] FeatureSendArray = null;
    static final int MDCONFIG_CMD_ERROR = 32;
    static final int MDCONFIG_CMD_SUCCESS = 33;
    static final int MDCONFIG_INTERRUPT_ERROR = 31;
    static final int MDCONFIG_TIMEOUT_ERROR = 30;
    static final int MSG_FORCE_TO_SEND_WFC_MODE = 10;
    static final int MSG_IMS_GET_PROVISION_DONE = 4;
    static final int MSG_IMS_SET_MDCFG_DONE = 7;
    static final int MSG_IMS_SET_PROVISION_DONE = 5;
    static final int MSG_LOAD_CONFIG_STORAGE = 1;
    static final int MSG_RESET_BROADCAST_FLAG = 2;
    static final int MSG_RESET_CONFIG_STORAGE = 0;
    static final int MSG_RESET_WFC_MODE_FLAG = 8;
    static final int MSG_SIM_ABSENT_ECC_BROADCAST = 3;
    static final int MSG_UPDATE_IMS_SERVICE_CONFIG = 9;
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    static final int PROVISION_CMD_ERROR = 22;
    static final int PROVISION_CMD_SUCCESS = 23;
    static final int PROVISION_INTERRUPT_ERROR = 21;
    static final int PROVISION_NO_DEFAULT_VALUE = 25;
    static final int PROVISION_TIMEOUT_ERROR = 20;
    static final int PROVISION_URC_PARSE_ERROR = 24;
    private static final String TAG = "ImsConfigStorage";
    private static final boolean TELDBG;
    private int IMS_PROVISION_NO_DEFAULT_ERROR;
    private int curWfcMode;
    private ConfigHelper mConfigHelper;
    private Context mContext;
    private FeatureHelper mFeatureHelper;
    private Object mFeatureLock;
    private Handler mHandler;
    private ImsManagerOemPlugin mImsManagerOemPlugin;
    private Object mMdCfgLock;
    private int mPhoneId;
    private Object mProvisionedStringValueLock;
    private Object mProvisionedValueLock;
    private BroadcastReceiver mReceiver;
    private ResourceHelper mResourceHelper;
    private ImsCommandsInterface mRilAdapter;
    private Object mWfcLock;

    class CarrierConfigHandler extends Handler {
        private boolean isGetProvisionUrc;
        private int mPhoneId;
        private String[] provisionInfoTemp;

        CarrierConfigHandler(int i, Looper looper) {
            super(looper);
            this.mPhoneId = i;
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (ImsConfigStorage.DEBUG) {
                Log.d(ImsConfigStorage.TAG, "Received msg = " + message.hashCode() + ", what = " + message.what);
            }
            switch (message.what) {
                case 0:
                    Log.d(ImsConfigStorage.TAG, "Reset config storage");
                    ImsConfigStorage.this.mConfigHelper.clear();
                    return;
                case 1:
                    synchronized (ImsConfigStorage.this.mConfigHelper) {
                        int iIntValue = ((Integer) message.obj).intValue();
                        if (ImsConfigStorage.this.mConfigHelper.getOpCode() != iIntValue) {
                            ImsConfigStorage.this.mConfigHelper.setOpCode(iIntValue);
                            Log.d(ImsConfigStorage.TAG, "Start load config storage for " + iIntValue + " on phone " + this.mPhoneId);
                            ImsConfigStorage.this.mConfigHelper.clear();
                            ImsConfigStorage.this.mConfigHelper.init(iIntValue);
                            ImsConfigStorage.this.mConfigHelper.setInitDone(true);
                            Log.d(ImsConfigStorage.TAG, "Finish Loading config storage for " + iIntValue);
                        } else {
                            Log.d(ImsConfigStorage.TAG, "Skip reloading config by same opCode: " + iIntValue + " on phone " + this.mPhoneId);
                            ImsConfigStorage.this.mConfigHelper.setInitDone(true);
                        }
                        break;
                    }
                    return;
                case 2:
                    ImsConfigStorage.this.resetFeatureSendCmd();
                    ImsConfigStorage.this.mFeatureHelper.resetBroadcastFlag();
                    return;
                case 3:
                    ImsConfigProvider.ECCAllowSendCmd.put(Integer.valueOf(this.mPhoneId), true);
                    if (ImsConfigStorage.this.mFeatureHelper.isAllFeatureFalse()) {
                        ImsConfigProvider.ECCAllowBroadcast.put(Integer.valueOf(this.mPhoneId), true);
                        Log.d(ImsConfigStorage.TAG, "All feature false after sim absent,should broadcast VoLTE feature value once for ECC");
                        return;
                    }
                    return;
                case 4:
                    if (ImsConfigStorage.DEBUG) {
                        Log.d(ImsConfigStorage.TAG, "MSG_IMS_GET_PROVISION_DONE: Enter messege");
                    }
                    AsyncResult asyncResult = (AsyncResult) message.obj;
                    ProvisioningResult provisioningResult = (ProvisioningResult) asyncResult.userObj;
                    synchronized (provisioningResult.lockObj) {
                        if (asyncResult.exception != null) {
                            if ((asyncResult.exception instanceof CommandException) && asyncResult.exception.getCommandError() == CommandException.Error.OEM_ERROR_24) {
                                provisioningResult.provisionResult = 25;
                                Log.d(ImsConfigStorage.TAG, "MSG_IMS_GET_PROVISION_DONE: MD no default value");
                            } else {
                                provisioningResult.provisionResult = 22;
                                Log.d(ImsConfigStorage.TAG, "MSG_IMS_GET_PROVISION_DONE: error ret null, e=" + asyncResult.exception);
                            }
                        } else if (!this.isGetProvisionUrc || this.provisionInfoTemp.length < 2) {
                            Log.e(ImsConfigStorage.TAG, "MSG_IMS_GET_PROVISION_DONE: Error getting, URC error or no URC received!");
                            provisioningResult.provisionResult = 22;
                        } else {
                            provisioningResult.provisionInfo = new String[2];
                            provisioningResult.provisionInfo[0] = this.provisionInfoTemp[0];
                            provisioningResult.provisionInfo[1] = this.provisionInfoTemp[1];
                            provisioningResult.provisionResult = 23;
                            Log.d(ImsConfigStorage.TAG, "MSG_IMS_GET_PROVISION_DONE: provisionInfo[0]:" + provisioningResult.provisionInfo[0] + ", provisionInfo[1]:" + provisioningResult.provisionInfo[1]);
                        }
                        provisioningResult.lockObj.notify();
                        if (ImsConfigStorage.DEBUG) {
                            Log.d(ImsConfigStorage.TAG, "MSG_IMS_GET_PROVISION_DONE: notify result");
                        }
                        break;
                    }
                    return;
                case 5:
                    if (ImsConfigStorage.DEBUG) {
                        Log.d(ImsConfigStorage.TAG, "MSG_IMS_SET_PROVISION_DONE: Enter messege");
                    }
                    AsyncResult asyncResult2 = (AsyncResult) message.obj;
                    ProvisioningResult provisioningResult2 = (ProvisioningResult) asyncResult2.userObj;
                    synchronized (provisioningResult2.lockObj) {
                        if (asyncResult2.exception != null) {
                            provisioningResult2.provisionResult = 22;
                            Log.e(ImsConfigStorage.TAG, "MSG_IMS_SET_PROVISION_DONE: error ret null, e=" + asyncResult2.exception);
                        } else {
                            provisioningResult2.provisionResult = 23;
                            Log.d(ImsConfigStorage.TAG, "MSG_IMS_SET_PROVISION_DONE: Finish set provision!");
                        }
                        provisioningResult2.lockObj.notify();
                        if (ImsConfigStorage.DEBUG) {
                            Log.d(ImsConfigStorage.TAG, "MSG_IMS_SET_PROVISION_DONE: notify result");
                        }
                        break;
                    }
                    return;
                case 6:
                    if (ImsConfigStorage.DEBUG) {
                        Log.d(ImsConfigStorage.TAG, "EVENT_GET_PROVISION_DONE_URC: Enter messege");
                    }
                    AsyncResult asyncResult3 = (AsyncResult) message.obj;
                    this.provisionInfoTemp = (String[]) asyncResult3.result;
                    this.isGetProvisionUrc = false;
                    if (asyncResult3.exception != null) {
                        Log.e(ImsConfigStorage.TAG, "EVENT_GET_PROVISION_DONE_URC: error, e=" + asyncResult3.exception);
                        return;
                    }
                    Log.d(ImsConfigStorage.TAG, "EVENT_GET_PROVISION_DONE_URC: provisionInfoTemp.length: " + this.provisionInfoTemp.length);
                    String[] strArr = this.provisionInfoTemp;
                    if (strArr == null || strArr.length < 2) {
                        return;
                    }
                    this.isGetProvisionUrc = true;
                    return;
                case 7:
                    if (ImsConfigStorage.DEBUG) {
                        Log.d(ImsConfigStorage.TAG, "MSG_IMS_SET_MDCFG_DONE: Enter messege");
                    }
                    AsyncResult asyncResult4 = (AsyncResult) message.obj;
                    MdConfigResult mdConfigResult = (MdConfigResult) asyncResult4.userObj;
                    synchronized (mdConfigResult.lockObj) {
                        if (asyncResult4.exception != null) {
                            int[] iArr = new int[mdConfigResult.requestConfigNum];
                            for (int i = 0; i < iArr.length; i++) {
                                iArr[i] = -1;
                            }
                            mdConfigResult.resultArray = iArr;
                            mdConfigResult.configResult = 32;
                            Log.e(ImsConfigStorage.TAG, "SET_MDCFG_DONE, error ret, e=" + asyncResult4.exception);
                        } else {
                            String[] strArrSplit = ((String) asyncResult4.result).split(",");
                            int[] iArr2 = new int[strArrSplit.length];
                            for (int i2 = 0; i2 < strArrSplit.length; i2++) {
                                iArr2[i2] = Integer.parseInt(strArrSplit[i2]);
                            }
                            mdConfigResult.resultArray = iArr2;
                            mdConfigResult.configResult = 33;
                            Log.d(ImsConfigStorage.TAG, "SET_MDCFG_DONE, finish set MD Ims config!");
                        }
                        mdConfigResult.lockObj.notify();
                        if (ImsConfigStorage.DEBUG) {
                            Log.d(ImsConfigStorage.TAG, "SET_MDCFG_DONE, notify result");
                        }
                        break;
                    }
                    return;
                case 8:
                    ImsConfigStorage.this.resetWfcModeFlag();
                    return;
                case 9:
                    if (ImsConfigStorage.this.mImsManagerOemPlugin == null) {
                        ImsConfigStorage imsConfigStorage = ImsConfigStorage.this;
                        imsConfigStorage.mImsManagerOemPlugin = ExtensionFactory.makeOemPluginFactory(imsConfigStorage.mContext).makeImsManagerPlugin(ImsConfigStorage.this.mContext);
                    }
                    ImsConfigStorage.this.mImsManagerOemPlugin.updateImsServiceConfig(ImsConfigStorage.this.mContext, ImsCommonUtil.getMainCapabilityPhoneId(), true);
                    return;
                case 10:
                    if (ImsConfigStorage.this.curWfcMode == -1) {
                        Log.i(ImsConfigStorage.TAG, "Should not set invalid wfc mode");
                        return;
                    }
                    int i3 = ImsConfigStorage.this.curWfcMode;
                    ImsConfigStorage.this.resetWfcModeFlag();
                    ImsConfigStorage.this.sendWfcProfileInfo(i3);
                    return;
                default:
                    return;
            }
        }
    }

    private static class ConfigHelper {
        private ContentResolver mContentResolver;
        private Context mContext;
        private Handler mHandler;
        private int mOpCode;
        private int mPhoneId;
        DefaultConfigPolicyFactory mDefConfigPolicyFactory = null;
        private boolean mInitDone = false;

        /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
        ConfigHelper(Context context, Handler handler, int i) {
            this.mContext = null;
            this.mContentResolver = null;
            this.mPhoneId = -1;
            this.mOpCode = -1;
            this.mHandler = null;
            this.mContext = context;
            this.mHandler = handler;
            this.mPhoneId = i;
            this.mContentResolver = context.getContentResolver();
            String configSetting = null;
            try {
                configSetting = getConfigSetting(0);
                this.mOpCode = Integer.parseInt(configSetting);
            } catch (NumberFormatException e) {
                Log.e(ImsConfigStorage.TAG, "Parse SETTING_ID_OPCODE error: " + configSetting);
                this.mOpCode = -1;
            } catch (ImsException e2) {
                this.mOpCode = -1;
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
        public Uri addConfig(String str, int i, int i2, int i3) throws ImsException {
            enforceConfigId(i);
            return this.mContentResolver.insert(ImsConfigContract.getTableUri(str), getConfigCv(i, i2, i3));
        }

        /* JADX INFO: Access modifiers changed from: private */
        /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
        public Uri addConfig(String str, int i, int i2, String str2) throws ImsException {
            enforceConfigId(i);
            return this.mContentResolver.insert(ImsConfigContract.getTableUri(str), getConfigCv(i, i2, str2));
        }

        private void addConfigSetting(int i, String str) {
            ContentValues contentValues = new ContentValues();
            contentValues.put("phone_id", Integer.valueOf(this.mPhoneId));
            contentValues.put(ImsConfigContract.ConfigSetting.SETTING_ID, Integer.valueOf(i));
            contentValues.put("value", str);
            if (this.mContentResolver.insert(ImsConfigContract.ConfigSetting.CONTENT_URI, contentValues) != null) {
                return;
            }
            throw new IllegalArgumentException("addConfigSetting " + i + " for phone " + this.mPhoneId + " failed!");
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void clear() {
            String[] strArr = {String.valueOf(this.mPhoneId)};
            this.mContentResolver.delete(ImsConfigContract.ConfigSetting.CONTENT_URI, "phone_id = ?", strArr);
            this.mContentResolver.delete(ImsConfigContract.Provision.CONTENT_URI, "phone_id = ?", strArr);
            this.mContentResolver.delete(ImsConfigContract.Master.CONTENT_URI, "phone_id = ?", strArr);
            this.mContentResolver.delete(ImsConfigContract.Default.CONTENT_URI, "phone_id = ?", strArr);
        }

        /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
        private void enforceConfigId(int i) throws ImsException {
            if (ImsConfigContract.Validator.isValidConfigId(i)) {
                return;
            }
            throw new ImsException("No deafult value for config " + i, 101);
        }

        /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
        private void enforceDefaultValue(int i, String str) throws ImsException {
            if (ImsConfigContract.VALUE_NO_DEFAULT.equals(str)) {
                throw new ImsException("No deafult value for config " + i, 0);
            }
        }

        private ContentValues getConfigCv(int i, int i2, int i3) {
            ContentValues contentValues = new ContentValues();
            contentValues.put("phone_id", Integer.valueOf(this.mPhoneId));
            contentValues.put("config_id", Integer.valueOf(i));
            contentValues.put(ImsConfigContract.BasicConfigTable.MIMETYPE_ID, Integer.valueOf(i2));
            contentValues.put(ImsConfigContract.BasicConfigTable.DATA, Integer.valueOf(i3));
            return contentValues;
        }

        private ContentValues getConfigCv(int i, int i2, String str) {
            ContentValues contentValues = new ContentValues();
            contentValues.put("phone_id", Integer.valueOf(this.mPhoneId));
            contentValues.put("config_id", Integer.valueOf(i));
            contentValues.put(ImsConfigContract.BasicConfigTable.MIMETYPE_ID, Integer.valueOf(i2));
            contentValues.put(ImsConfigContract.BasicConfigTable.DATA, str);
            return contentValues;
        }

        /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
        private Cursor getConfigFirstCursor(String str, int i) throws ImsException {
            Cursor cursorQuery = this.mContentResolver.query(ImsConfigContract.getConfigUri(str, this.mPhoneId, i), new String[]{"phone_id", "config_id", ImsConfigContract.BasicConfigTable.MIMETYPE_ID, ImsConfigContract.BasicConfigTable.DATA}, null, null, null);
            if (cursorQuery == null) {
                throw new ImsException("Null cursor with config: " + i + " in table: " + str, 101);
            }
            if (cursorQuery.getCount() == 1) {
                cursorQuery.moveToFirst();
                return cursorQuery;
            }
            if (cursorQuery.getCount() == 0) {
                cursorQuery.close();
                throw new ImsException("Config " + i + " shall exist in table: " + str, 101);
            }
            cursorQuery.close();
            throw new ImsException("Config " + i + " shall exist once in table: " + str, 101);
        }

        private String getConfigSetting(int i) throws ImsException {
            Cursor cursor = null;
            try {
                try {
                    Cursor cursorQuery = this.mContentResolver.query(ImsConfigContract.ConfigSetting.getUriWithSettingId(this.mPhoneId, i), new String[]{"phone_id", ImsConfigContract.ConfigSetting.SETTING_ID, "value"}, null, null, null);
                    if (cursorQuery != null && cursorQuery.getCount() == 1) {
                        cursorQuery.moveToFirst();
                        String string = cursorQuery.getString(cursorQuery.getColumnIndex("value"));
                        cursorQuery.close();
                        if (cursorQuery != null) {
                            cursorQuery.close();
                        }
                        return string;
                    }
                    throw new ImsException("getConfigSetting " + i + " for phone " + this.mPhoneId + " not found", 102);
                } catch (Exception e) {
                    throw new ImsException("getConfigSetting " + i + " for phone " + this.mPhoneId + " not found or something wrong with cursor", 102);
                }
            } catch (Throwable th) {
                if (0 != 0) {
                    cursor.close();
                }
                throw th;
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
        public String getConfigStringValue(String str, int i) throws ImsException {
            Cursor cursor = null;
            enforceConfigId(i);
            try {
                try {
                    Cursor configFirstCursor = getConfigFirstCursor(str, i);
                    int columnIndex = configFirstCursor.getColumnIndex(ImsConfigContract.BasicConfigTable.DATA);
                    int i2 = configFirstCursor.getInt(configFirstCursor.getColumnIndex(ImsConfigContract.BasicConfigTable.MIMETYPE_ID));
                    enforceDefaultValue(i, configFirstCursor.getString(columnIndex));
                    if (i2 == 1) {
                        String string = configFirstCursor.getString(columnIndex);
                        if (configFirstCursor != null) {
                            configFirstCursor.close();
                        }
                        return string;
                    }
                    throw new ImsException("Config " + i + " shall be type 1, but " + i2, 101);
                } catch (Exception e) {
                    throw new ImsException("Config " + i + " shall be type 1, but -1 or something wrong with cursor", 101);
                }
            } catch (Throwable th) {
                if (0 != 0) {
                    cursor.close();
                }
                throw th;
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
        public int getConfigValue(String str, int i) throws ImsException {
            Cursor cursor = null;
            enforceConfigId(i);
            try {
                try {
                    Cursor configFirstCursor = getConfigFirstCursor(str, i);
                    int columnIndex = configFirstCursor.getColumnIndex(ImsConfigContract.BasicConfigTable.DATA);
                    int i2 = configFirstCursor.getInt(configFirstCursor.getColumnIndex(ImsConfigContract.BasicConfigTable.MIMETYPE_ID));
                    enforceDefaultValue(i, configFirstCursor.getString(columnIndex));
                    if (i2 == 0) {
                        int i3 = Integer.parseInt(configFirstCursor.getString(columnIndex));
                        if (configFirstCursor != null) {
                            configFirstCursor.close();
                        }
                        return i3;
                    }
                    throw new ImsException("Config " + i + " shall be type 0, but " + i2, 101);
                } catch (Exception e) {
                    throw new ImsException("Config " + i + " shall be type 0, but -1 or something wrong with cursor", 101);
                }
            } catch (Throwable th) {
                if (0 != 0) {
                    cursor.close();
                }
                throw th;
            }
        }

        private void initConfigSettingStorage(int i) {
            addConfigSetting(0, Integer.toString(i));
        }

        private void initDefaultStorage(int i) {
            Map<Integer, ImsConfigSettings.Setting> configSettings = ImsConfigSettings.getConfigSettings();
            new HashMap();
            DefaultConfigPolicyFactory instanceByOpCode = DefaultConfigPolicyFactory.getInstanceByOpCode(i);
            this.mDefConfigPolicyFactory = instanceByOpCode;
            HashMap mapLoad = instanceByOpCode.load();
            if (mapLoad != null && mapLoad.isEmpty()) {
                Log.d(ImsConfigStorage.TAG, "No default value");
                return;
            }
            for (Integer num : configSettings.keySet()) {
                String str = ImsConfigContract.VALUE_NO_DEFAULT;
                int i2 = -1;
                if (this.mDefConfigPolicyFactory.hasDefaultValue(num.intValue())) {
                    ImsConfigPolicy.DefaultConfig defaultConfig = (ImsConfigPolicy.DefaultConfig) mapLoad.get(num);
                    if (defaultConfig != null) {
                        str = defaultConfig.defVal;
                        i2 = defaultConfig.unitId;
                    }
                    ImsConfigSettings.Setting setting = configSettings.get(num);
                    if (setting.mimeType == 0) {
                        ContentValues configCv = getConfigCv(num.intValue(), setting.mimeType, Integer.parseInt(str));
                        configCv.put(ImsConfigContract.Default.UNIT_ID, Integer.valueOf(i2));
                        this.mContentResolver.insert(ImsConfigContract.Default.CONTENT_URI, configCv);
                    } else if (1 == setting.mimeType) {
                        ContentValues configCv2 = getConfigCv(num.intValue(), setting.mimeType, str);
                        configCv2.put(ImsConfigContract.Default.UNIT_ID, Integer.valueOf(i2));
                        this.mContentResolver.insert(ImsConfigContract.Default.CONTENT_URI, configCv2);
                    }
                }
            }
        }

        /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
        /* JADX WARN: Code duplicated, block: B:45:0x00eb  */
        /* JADX WARN: Code duplicated, block: B:47:0x00f0 A[ADDED_TO_REGION] */
        /* JADX WARN: Code duplicated, block: B:48:0x00f2  */
        /* JADX WARN: Code duplicated, block: B:51:0x011c  */
        /* JADX WARN: Code duplicated, block: B:66:0x0123 A[SYNTHETIC] */
        private void initMasterStorage() throws Throwable {
            Map<Integer, ImsConfigSettings.Setting> map;
            Iterator<Integer> it;
            boolean z;
            Map<Integer, ImsConfigSettings.Setting> configSettings = ImsConfigSettings.getConfigSettings();
            for (Iterator<Integer> it2 = configSettings.keySet().iterator(); it2.hasNext(); it2 = it) {
                Integer next = it2.next();
                Cursor configFirstCursor = null;
                ContentValues contentValues = new ContentValues();
                try {
                    throw new ImsException("here", 102);
                } catch (ImsException e) {
                    try {
                        configFirstCursor = getConfigFirstCursor(ImsConfigContract.TABLE_DEFAULT, next.intValue());
                        if (configFirstCursor != null) {
                            int columnIndex = configFirstCursor.getColumnIndex("phone_id");
                            int columnIndex2 = configFirstCursor.getColumnIndex("config_id");
                            int columnIndex3 = configFirstCursor.getColumnIndex(ImsConfigContract.BasicConfigTable.MIMETYPE_ID);
                            int columnIndex4 = configFirstCursor.getColumnIndex(ImsConfigContract.BasicConfigTable.DATA);
                            contentValues.put("phone_id", Integer.valueOf(configFirstCursor.getInt(columnIndex)));
                            contentValues.put("config_id", Integer.valueOf(configFirstCursor.getInt(columnIndex2)));
                            contentValues.put(ImsConfigContract.BasicConfigTable.MIMETYPE_ID, Integer.valueOf(configFirstCursor.getInt(columnIndex3)));
                            map = configSettings;
                            try {
                                try {
                                    contentValues.put(ImsConfigContract.BasicConfigTable.DATA, configFirstCursor.getString(columnIndex4));
                                    it = it2;
                                    try {
                                        StringBuilder sb = new StringBuilder();
                                        try {
                                            sb.append("Load default value ");
                                            sb.append(configFirstCursor.getString(columnIndex4));
                                            sb.append(" for config ");
                                            sb.append(next);
                                            Log.d(ImsConfigStorage.TAG, sb.toString());
                                            configFirstCursor.close();
                                        } catch (ImsException e2) {
                                            z = false;
                                            if (configFirstCursor != null) {
                                                configFirstCursor.close();
                                            }
                                            if (z) {
                                                contentValues.put("phone_id", Integer.valueOf(this.mPhoneId));
                                                contentValues.put("config_id", next);
                                                contentValues.put(ImsConfigContract.BasicConfigTable.MIMETYPE_ID, Integer.valueOf(ImsConfigSettings.getMimeType(next.intValue())));
                                                contentValues.put(ImsConfigContract.BasicConfigTable.DATA, ImsConfigContract.VALUE_NO_DEFAULT);
                                            } else {
                                                contentValues.put("phone_id", Integer.valueOf(this.mPhoneId));
                                                contentValues.put("config_id", next);
                                                contentValues.put(ImsConfigContract.BasicConfigTable.MIMETYPE_ID, Integer.valueOf(ImsConfigSettings.getMimeType(next.intValue())));
                                                contentValues.put(ImsConfigContract.BasicConfigTable.DATA, ImsConfigContract.VALUE_NO_DEFAULT);
                                            }
                                            this.mContentResolver.insert(ImsConfigContract.Master.CONTENT_URI, contentValues);
                                            if (0 != 0) {
                                                this.mContentResolver.insert(ImsConfigContract.Provision.CONTENT_URI, contentValues);
                                            }
                                            configSettings = map;
                                        } catch (Throwable th) {
                                            th = th;
                                            if (configFirstCursor != null) {
                                                configFirstCursor.close();
                                            }
                                            throw th;
                                        }
                                    } catch (ImsException e3) {
                                        z = false;
                                        if (configFirstCursor != null) {
                                            configFirstCursor.close();
                                        }
                                        if (z || configFirstCursor == null) {
                                            contentValues.put("phone_id", Integer.valueOf(this.mPhoneId));
                                            contentValues.put("config_id", next);
                                            contentValues.put(ImsConfigContract.BasicConfigTable.MIMETYPE_ID, Integer.valueOf(ImsConfigSettings.getMimeType(next.intValue())));
                                            contentValues.put(ImsConfigContract.BasicConfigTable.DATA, ImsConfigContract.VALUE_NO_DEFAULT);
                                        }
                                        this.mContentResolver.insert(ImsConfigContract.Master.CONTENT_URI, contentValues);
                                        if (0 != 0) {
                                            this.mContentResolver.insert(ImsConfigContract.Provision.CONTENT_URI, contentValues);
                                        }
                                        configSettings = map;
                                    }
                                } catch (ImsException e4) {
                                    it = it2;
                                }
                            } catch (Throwable th2) {
                                th = th2;
                            }
                        } else {
                            map = configSettings;
                            it = it2;
                        }
                        if (configFirstCursor != null) {
                            configFirstCursor.close();
                        }
                        z = true;
                    } catch (ImsException e5) {
                        map = configSettings;
                        it = it2;
                    } catch (Throwable th3) {
                        th = th3;
                    }
                    if (z) {
                        contentValues.put("phone_id", Integer.valueOf(this.mPhoneId));
                        contentValues.put("config_id", next);
                        contentValues.put(ImsConfigContract.BasicConfigTable.MIMETYPE_ID, Integer.valueOf(ImsConfigSettings.getMimeType(next.intValue())));
                        contentValues.put(ImsConfigContract.BasicConfigTable.DATA, ImsConfigContract.VALUE_NO_DEFAULT);
                    } else {
                        contentValues.put("phone_id", Integer.valueOf(this.mPhoneId));
                        contentValues.put("config_id", next);
                        contentValues.put(ImsConfigContract.BasicConfigTable.MIMETYPE_ID, Integer.valueOf(ImsConfigSettings.getMimeType(next.intValue())));
                        contentValues.put(ImsConfigContract.BasicConfigTable.DATA, ImsConfigContract.VALUE_NO_DEFAULT);
                    }
                    this.mContentResolver.insert(ImsConfigContract.Master.CONTENT_URI, contentValues);
                    if (0 != 0) {
                        this.mContentResolver.insert(ImsConfigContract.Provision.CONTENT_URI, contentValues);
                    }
                    configSettings = map;
                }
            }
        }

        static void loadConfigStorage(Handler handler, int i) {
            if (handler != null) {
                handler.removeMessages(1);
                Message message = new Message();
                message.what = 1;
                message.obj = Integer.valueOf(i);
                if (ImsConfigStorage.DEBUG) {
                    Log.d(ImsConfigStorage.TAG, "LoadConfigStorage() msg = " + message.hashCode());
                }
                handler.sendMessage(message);
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
        public int updateConfig(String str, int i, int i2, int i3) throws ImsException {
            enforceConfigId(i);
            ContentValues contentValues = new ContentValues();
            contentValues.put("phone_id", Integer.valueOf(this.mPhoneId));
            contentValues.put("config_id", Integer.valueOf(i));
            contentValues.put(ImsConfigContract.BasicConfigTable.MIMETYPE_ID, Integer.valueOf(i2));
            contentValues.put(ImsConfigContract.BasicConfigTable.DATA, Integer.valueOf(i3));
            return this.mContentResolver.update(ImsConfigContract.getConfigUri(str, this.mPhoneId, i), contentValues, null, null);
        }

        /* JADX INFO: Access modifiers changed from: private */
        /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
        public int updateConfig(String str, int i, int i2, String str2) throws ImsException {
            enforceConfigId(i);
            ContentValues contentValues = new ContentValues();
            contentValues.put("phone_id", Integer.valueOf(this.mPhoneId));
            contentValues.put("config_id", Integer.valueOf(i));
            contentValues.put(ImsConfigContract.BasicConfigTable.MIMETYPE_ID, Integer.valueOf(i2));
            contentValues.put(ImsConfigContract.BasicConfigTable.DATA, str2);
            return this.mContentResolver.update(ImsConfigContract.getConfigUri(str, this.mPhoneId, i), contentValues, null, null);
        }

        private void updateConfigSetting(int i, int i2) {
            ContentValues contentValues = new ContentValues();
            contentValues.put("phone_id", Integer.valueOf(this.mPhoneId));
            contentValues.put(ImsConfigContract.ConfigSetting.SETTING_ID, Integer.valueOf(i));
            contentValues.put("value", Integer.valueOf(i2));
            if (this.mContentResolver.update(ImsConfigContract.getConfigUri(ImsConfigContract.TABLE_CONFIG_SETTING, this.mPhoneId, i), contentValues, null, null) == 1) {
                return;
            }
            throw new IllegalArgumentException("updateConfigSetting " + i + " for phone " + this.mPhoneId + " failed!");
        }

        synchronized int getOpCode() {
            return this.mOpCode;
        }

        void init() throws Throwable {
            initDefaultStorage(0);
            initMasterStorage();
        }

        void init(int i) throws Throwable {
            initDefaultStorage(i);
            initMasterStorage();
            initConfigSettingStorage(i);
        }

        synchronized boolean isInitDone() {
            return this.mInitDone;
        }

        public boolean isStorageInitialized() {
            Cursor cursorQuery = this.mContentResolver.query(ImsConfigContract.ConfigSetting.getUriWithSettingId(this.mPhoneId, 0), new String[]{"phone_id", ImsConfigContract.ConfigSetting.SETTING_ID, "value"}, null, null, null);
            return cursorQuery != null && cursorQuery.getCount() == 1;
        }

        synchronized void setInitDone(boolean z) {
            this.mInitDone = z;
            Intent intent = new Intent(ImsConfigContract.ACTION_CONFIG_LOADED);
            intent.putExtra("phone_id", this.mPhoneId);
            this.mContext.sendBroadcast(intent, "android.permission.READ_PHONE_STATE");
        }

        synchronized void setOpCode(int i) {
            this.mOpCode = i;
        }
    }

    private static class FeatureHelper {
        private ContentResolver mContentResolver;
        private Context mContext;
        private HashMap<Integer, Integer> mIsFeatureBroadcast = new HashMap<>();
        private int mPhoneId;

        FeatureHelper(Context context, int i) {
            this.mContext = null;
            this.mContentResolver = null;
            this.mPhoneId = i;
            this.mContext = context;
            this.mContentResolver = context.getContentResolver();
            resetBroadcastFlag();
        }

        private boolean checkIfBroadcastOnce(int i, int i2) {
            String str = ImsConfigProvider.LatestSimState.get(Integer.valueOf(i2));
            if (ImsConfigStorage.TELDBG) {
                Log.d(ImsConfigStorage.TAG, "checkIfBroadcastOnce() phoneId: " + i2 + ", Sim state: " + str);
            }
            if (str == null) {
                return false;
            }
            if (str != null && !str.equals("READY") && !str.equals("IMSI") && !str.equals("LOADED") && !str.equals("LOCKED")) {
                return false;
            }
            if (this.mIsFeatureBroadcast.get(Integer.valueOf(i)).intValue() != 0) {
                return true;
            }
            this.mIsFeatureBroadcast.put(Integer.valueOf(i), 1);
            return false;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void clear() {
            this.mContentResolver.delete(ImsConfigContract.Feature.CONTENT_URI, "phone_id = ?", new String[]{String.valueOf(this.mPhoneId)});
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void initFeatureStorage() {
            int featurePropValue = ImsConfigUtils.getFeaturePropValue(ImsConfigUtils.PROPERTY_VOLTE_ENALBE, this.mPhoneId);
            updateFeature(0, 13, featurePropValue);
            Log.d(ImsConfigStorage.TAG, "updateFeature: VoLTE initial value:" + featurePropValue + " for phoneId:" + this.mPhoneId);
            int featurePropValue2 = ImsConfigUtils.getFeaturePropValue(ImsConfigUtils.PROPERTY_VILTE_ENALBE, this.mPhoneId);
            updateFeature(1, 13, featurePropValue2);
            Log.d(ImsConfigStorage.TAG, "updateFeature: ViLTE initial value:" + featurePropValue2 + " for phoneId:" + this.mPhoneId);
            int featurePropValue3 = ImsConfigUtils.getFeaturePropValue(ImsConfigUtils.PROPERTY_WFC_ENALBE, this.mPhoneId);
            updateFeature(2, 18, featurePropValue3);
            Log.d(ImsConfigStorage.TAG, "updateFeature: VoWIFI initial value:" + featurePropValue3 + " for phoneId:" + this.mPhoneId);
        }

        /* JADX INFO: Access modifiers changed from: private */
        /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
        public boolean isAllFeatureFalse() {
            int featureValue = -1;
            int featureValue2 = -1;
            try {
                featureValue = getFeatureValue(0, ImsConfigContract.getNetworkTypeByFeature(0));
                featureValue2 = getFeatureValue(1, ImsConfigContract.getNetworkTypeByFeature(1));
                return featureValue == 0 && featureValue2 == 0 && getFeatureValue(2, ImsConfigContract.getNetworkTypeByFeature(2)) == 0;
            } catch (ImsException e) {
                Log.e(ImsConfigStorage.TAG, "isAllFeatureFalse volte:" + featureValue + ", vilte:" + featureValue2 + ", wfc:-1");
                return false;
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void resetBroadcastFlag() {
            this.mIsFeatureBroadcast.put(0, 0);
            this.mIsFeatureBroadcast.put(1, 0);
            this.mIsFeatureBroadcast.put(2, 0);
            this.mIsFeatureBroadcast.put(3, 0);
        }

        /* JADX INFO: Access modifiers changed from: private */
        /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
        public void updateFeature(int i, int i2, int i3) {
            ContentValues contentValues = new ContentValues();
            contentValues.put("phone_id", Integer.valueOf(this.mPhoneId));
            contentValues.put("feature_id", Integer.valueOf(i));
            contentValues.put(ImsConfigContract.Feature.NETWORK_ID, Integer.valueOf(i2));
            contentValues.put("value", Integer.valueOf(i3));
            try {
                int featureValue = getFeatureValue(i, i2);
                if (ImsConfigStorage.DEBUG) {
                    Log.d(ImsConfigStorage.TAG, "updateFeature() comparing: curValue: " + featureValue + ", value:" + i3);
                }
                if (checkIfBroadcastOnce(i, this.mPhoneId) && featureValue == i3 && featureValue != -1) {
                    return;
                }
                this.mContentResolver.update(ImsConfigContract.Feature.getUriWithFeatureId(this.mPhoneId, i, i2), contentValues, null, null);
            } catch (ImsException e) {
                Log.e(ImsConfigStorage.TAG, "updateFeature() ImsException featureId:" + i + ", value:" + i3);
                this.mContentResolver.insert(ImsConfigContract.Feature.CONTENT_URI, contentValues);
            }
        }

        int getFeatureValue(int i, int i2) throws ImsException {
            Cursor cursor = null;
            try {
                try {
                    Cursor cursorQuery = this.mContentResolver.query(ImsConfigContract.Feature.getUriWithFeatureId(this.mPhoneId, i, i2), new String[]{"phone_id", "feature_id", ImsConfigContract.Feature.NETWORK_ID, "value"}, null, null, null);
                    if (cursorQuery == null || cursorQuery.getCount() != 1) {
                        throw new ImsException("Feature " + i + " not assigned with value!", 101);
                    }
                    cursorQuery.moveToFirst();
                    int i3 = cursorQuery.getInt(cursorQuery.getColumnIndex("value"));
                    cursorQuery.close();
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return i3;
                } catch (Exception e) {
                    throw new ImsException("Feature " + i + " not assigned with value! or something wrong with cursor", 101);
                }
            } catch (Throwable th) {
                if (0 != 0) {
                    cursor.close();
                }
                throw th;
            }
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
            this.configResult = 30;
            this.lockObj = new Object();
        }
    }

    private class ProvisioningResult {
        Object lockObj;
        String[] provisionInfo;
        int provisionResult;

        private ProvisioningResult() {
            this.provisionResult = 20;
            this.lockObj = new Object();
        }
    }

    private static class ResourceHelper {
        private ContentResolver mContentResolver;
        private Context mContext;
        private int mPhoneId;

        ResourceHelper(Context context, int i) {
            this.mContext = null;
            this.mContentResolver = null;
            this.mPhoneId = i;
            this.mContext = context;
            this.mContentResolver = context.getContentResolver();
        }

        private void clear() {
            this.mContentResolver.delete(ImsConfigContract.Resource.CONTENT_URI, "phone_id = ?", new String[]{String.valueOf(this.mPhoneId)});
        }

        /* JADX INFO: Access modifiers changed from: private */
        /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
        public void updateResource(int i, int i2) {
            ContentValues contentValues = new ContentValues();
            contentValues.put("phone_id", Integer.valueOf(this.mPhoneId));
            contentValues.put("feature_id", Integer.valueOf(i));
            contentValues.put("value", Integer.valueOf(i2));
            try {
                Log.d(ImsConfigStorage.TAG, "updateResource() comparing: curValue: " + getResourceValue(i) + ", value:" + i2);
                this.mContentResolver.update(ImsConfigContract.Resource.CONTENT_URI, contentValues, "phone_id=? AND feature_id=?", new String[]{String.valueOf(this.mPhoneId), String.valueOf(i)});
            } catch (ImsException e) {
                Log.e(ImsConfigStorage.TAG, "updateResource() ImsException featureId:" + i + ", value:" + i2);
                this.mContentResolver.insert(ImsConfigContract.Resource.CONTENT_URI, contentValues);
            }
        }

        int getResourceValue(int i) throws ImsException {
            Cursor cursor = null;
            try {
                try {
                    Cursor cursorQuery = this.mContentResolver.query(ImsConfigContract.Resource.getUriWithFeatureId(this.mPhoneId, i), new String[]{"phone_id", "feature_id", "value"}, null, null, null);
                    if (cursorQuery == null || cursorQuery.getCount() != 1) {
                        throw new ImsException("Feature " + i + " not assigned with res value!", 101);
                    }
                    cursorQuery.moveToFirst();
                    int i2 = cursorQuery.getInt(cursorQuery.getColumnIndex("value"));
                    cursorQuery.close();
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return i2;
                } catch (Exception e) {
                    throw new ImsException("Feature " + i + " not assigned with res value or something wrong with cursor", 101);
                }
            } catch (Throwable th) {
                if (0 != 0) {
                    cursor.close();
                }
                throw th;
            }
        }
    }

    static {
        DEBUG = TextUtils.equals(Build.TYPE, "eng") || SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
        TELDBG = SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
        FeatureSendArray = new ImsFeatureMap[4];
    }

    private ImsConfigStorage() {
        this.mFeatureHelper = null;
        this.mConfigHelper = null;
        this.mResourceHelper = null;
        this.mPhoneId = -1;
        this.mContext = null;
        this.curWfcMode = -1;
        this.mImsManagerOemPlugin = null;
        this.IMS_PROVISION_NO_DEFAULT_ERROR = 6604;
        this.mFeatureLock = new Object();
        this.mProvisionedValueLock = new Object();
        this.mProvisionedStringValueLock = new Object();
        this.mWfcLock = new Object();
        this.mMdCfgLock = new Object();
    }

    public ImsConfigStorage(Context context, int i, ImsCommandsInterface imsCommandsInterface) {
        this.mFeatureHelper = null;
        this.mConfigHelper = null;
        this.mResourceHelper = null;
        this.mPhoneId = -1;
        this.mContext = null;
        this.curWfcMode = -1;
        this.mImsManagerOemPlugin = null;
        this.IMS_PROVISION_NO_DEFAULT_ERROR = 6604;
        this.mFeatureLock = new Object();
        this.mProvisionedValueLock = new Object();
        this.mProvisionedStringValueLock = new Object();
        this.mWfcLock = new Object();
        this.mMdCfgLock = new Object();
        Log.d(TAG, "ImsConfigStorage() on phone " + i);
        this.mContext = context;
        this.mPhoneId = i;
        this.mRilAdapter = imsCommandsInterface;
        FeatureSendArray[i] = new ImsFeatureMap(i);
        HandlerThread handlerThread = new HandlerThread("ImsConfig-" + this.mPhoneId);
        handlerThread.start();
        this.mHandler = new CarrierConfigHandler(this.mPhoneId, handlerThread.getLooper());
        this.mFeatureHelper = new FeatureHelper(this.mContext, this.mPhoneId);
        this.mConfigHelper = new ConfigHelper(this.mContext, this.mHandler, this.mPhoneId);
        this.mResourceHelper = new ResourceHelper(this.mContext, this.mPhoneId);
        this.mFeatureHelper.initFeatureStorage();
        this.mRilAdapter.registerForGetProvisionComplete(this.mHandler, 6, null);
        resetFeatureSendCmd();
        this.mReceiver = new ImsConfigReceiver(this.mHandler, this.mPhoneId, this.mRilAdapter);
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.intent.action.SIM_STATE_CHANGED");
        intentFilter.addAction("android.telephony.action.CARRIER_CONFIG_CHANGED");
        intentFilter.addAction(ACTION_CXP_NOTIFY_FEATURE);
        intentFilter.addAction("com.mediatek.ims.MTK_MMTEL_READY");
        if (ImsCommonUtil.isDssNoResetSupport()) {
            intentFilter.addAction("android.intent.action.ACTION_SET_RADIO_CAPABILITY_DONE");
        }
        this.mContext.registerReceiver(this.mReceiver, intentFilter);
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    private void enforceConfigStorageInit(String str) throws ImsException {
        if (this.mConfigHelper.isInitDone()) {
            return;
        }
        Log.e(TAG, str);
        throw new ImsException("Config storage not ready", 102);
    }

    private static boolean isProvisionStoreModem(int i) {
        boolean isStoreModem = ImsConfigSettings.getIsStoreModem(i);
        if (DEBUG) {
            Log.d(TAG, "isProvisionStoreModem: " + i + ", checkIsStoreModem: " + isStoreModem);
        }
        return isStoreModem;
    }

    private static boolean isProvisionSuccess(int i) {
        return i == 23;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void resetFeatureSendCmd() {
        HashMap<Integer, Boolean> featureMap = FeatureSendArray[this.mPhoneId].getFeatureMap();
        featureMap.put(0, false);
        featureMap.put(1, false);
        featureMap.put(2, false);
        featureMap.put(3, false);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void resetWfcModeFlag() {
        if (TELDBG) {
            Log.d(TAG, "resetWfcModeFlag()");
        }
        synchronized (this.mWfcLock) {
            this.curWfcMode = -1;
        }
    }

    public int getFeatureValue(int i, int i2) throws ImsException {
        int featureValue;
        synchronized (this.mFeatureLock) {
            featureValue = this.mFeatureHelper.getFeatureValue(i, i2);
        }
        return featureValue;
    }

    public synchronized int getImsResCapability(int i) throws ImsException {
        return this.mResourceHelper.getResourceValue(i);
    }

    public String getProvisionedStringValue(int i) throws ImsException {
        synchronized (this.mProvisionedStringValueLock) {
            if (!isProvisionStoreModem(i)) {
                enforceConfigStorageInit("getProvisionedStringValue(" + i + ")");
                return this.mConfigHelper.getConfigStringValue(ImsConfigContract.TABLE_MASTER, i);
            }
            ProvisioningResult provisioningResult = new ProvisioningResult();
            String provisionStr = ImsConfigSettings.getProvisionStr(i);
            Message messageObtainMessage = this.mHandler.obtainMessage(4, provisioningResult);
            synchronized (provisioningResult.lockObj) {
                this.mRilAdapter.getProvisionValue(this.mPhoneId, provisionStr, messageObtainMessage);
                try {
                    provisioningResult.lockObj.wait(10000L);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                    provisioningResult.provisionResult = 21;
                }
            }
            if (provisioningResult.provisionResult == 25) {
                enforceConfigStorageInit("MD no default value, getProvisionedStringValue(" + i + ")");
                return this.mConfigHelper.getConfigStringValue(ImsConfigContract.TABLE_MASTER, i);
            }
            if (isProvisionSuccess(provisioningResult.provisionResult)) {
                return provisioningResult.provisionInfo[1];
            }
            throw new ImsException("Something wrong, reason:" + provisioningResult.provisionResult, 101);
        }
    }

    public int getProvisionedValue(int i) throws ImsException {
        synchronized (this.mProvisionedValueLock) {
            if (!isProvisionStoreModem(i)) {
                enforceConfigStorageInit("getProvisionedValue(" + i + ")");
                return this.mConfigHelper.getConfigValue(ImsConfigContract.TABLE_MASTER, i);
            }
            ProvisioningResult provisioningResult = new ProvisioningResult();
            String provisionStr = ImsConfigSettings.getProvisionStr(i);
            Message messageObtainMessage = this.mHandler.obtainMessage(4, provisioningResult);
            synchronized (provisioningResult.lockObj) {
                this.mRilAdapter.getProvisionValue(this.mPhoneId, provisionStr, messageObtainMessage);
                try {
                    provisioningResult.lockObj.wait(10000L);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                    provisioningResult.provisionResult = 21;
                }
            }
            if (provisioningResult.provisionResult == 25) {
                enforceConfigStorageInit("MD no default value, getProvisionedValue(" + i + ")");
                return this.mConfigHelper.getConfigValue(ImsConfigContract.TABLE_MASTER, i);
            }
            if (isProvisionSuccess(provisioningResult.provisionResult)) {
                return Integer.parseInt(provisioningResult.provisionInfo[1]);
            }
            throw new ImsException("Something wrong, reason:" + provisioningResult.provisionResult, 101);
        }
    }

    public void resetConfigStorage() {
        resetConfigStorage(0);
    }

    public void resetConfigStorage(int i) {
        Log.d(TAG, "resetConfigStorage(" + i + ")");
        synchronized (this.mConfigHelper) {
            this.mConfigHelper.clear();
            this.mConfigHelper.init(i);
        }
    }

    public void resetFeatureStorage() {
        Log.d(TAG, "resetFeatureStorage()");
        synchronized (this.mFeatureHelper) {
            this.mFeatureHelper.clear();
        }
    }

    public void sendWfcProfileInfo(int i) {
        synchronized (this.mWfcLock) {
            Log.i(TAG, "sendWfcProfileInfo rilWfcMode:" + i + ", curWfcMode:" + this.curWfcMode);
            if (i != this.curWfcMode) {
                this.mRilAdapter.sendWfcProfileInfo(i, null);
                if (i != 0) {
                    if (DEBUG) {
                        Log.d(TAG, "Not wifi-only mode, trun radio ON");
                    }
                    ImsConfigUtils.sendWifiOnlyModeIntent(this.mContext, this.mPhoneId, false);
                } else if (ImsConfigUtils.isWfcEnabledByUser(this.mContext, this.mPhoneId)) {
                    if (DEBUG) {
                        Log.d(TAG, "Wifi-only and WFC setting enabled, send intent to turn radio OFF");
                    }
                    ImsConfigUtils.sendWifiOnlyModeIntent(this.mContext, this.mPhoneId, true);
                } else {
                    if (DEBUG) {
                        Log.d(TAG, "Wifi-only and WFC setting disabled, send intent to turn radio ON");
                    }
                    ImsConfigUtils.sendWifiOnlyModeIntent(this.mContext, this.mPhoneId, false);
                }
                this.curWfcMode = i;
            }
        }
    }

    public void setFeatureValue(int i, int i2, int i3) throws ImsException {
        synchronized (this.mFeatureLock) {
            this.mFeatureHelper.updateFeature(i, i2, i3);
        }
    }

    public synchronized void setImsResCapability(int i, int i2) throws ImsException {
        this.mResourceHelper.updateResource(i, i2);
    }

    public int[] setModemImsCfg(String[] strArr, String[] strArr2, int i) {
        synchronized (this.mMdCfgLock) {
            if (strArr == null) {
                Log.d(TAG, "keys is null, return null");
                return null;
            }
            if (strArr.length >= 1 && strArr2.length >= 1) {
                if (strArr.length != strArr2.length) {
                    Log.d(TAG, "keys and values length not equals");
                    return null;
                }
                Log.d(TAG, "keys and values length equals");
                String strArrayToString = ImsConfigUtils.arrayToString(strArr);
                String strArrayToString2 = ImsConfigUtils.arrayToString(strArr2);
                Log.d(TAG, "keysStr:" + strArrayToString + ", valuesStr:" + strArrayToString2);
                MdConfigResult mdConfigResult = new MdConfigResult();
                mdConfigResult.requestConfigNum = strArr.length;
                Message messageObtainMessage = this.mHandler.obtainMessage(7, mdConfigResult);
                synchronized (mdConfigResult.lockObj) {
                    this.mRilAdapter.setModemImsCfg(strArrayToString, strArrayToString2, i, messageObtainMessage);
                    try {
                        mdConfigResult.lockObj.wait(10000L);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                        mdConfigResult.configResult = 31;
                    }
                }
                return mdConfigResult.resultArray;
            }
            Log.d(TAG, "keys or values length is smaller than 1, return null");
            return null;
        }
    }

    public void setProvisionedStringValue(int i, String str) throws ImsException {
        synchronized (this.mProvisionedStringValueLock) {
            enforceConfigStorageInit("setProvisionedStringValue(" + i + ", " + str + ")");
            if (isProvisionStoreModem(i)) {
                ProvisioningResult provisioningResult = new ProvisioningResult();
                String provisionStr = ImsConfigSettings.getProvisionStr(i);
                Message messageObtainMessage = this.mHandler.obtainMessage(5, provisioningResult);
                synchronized (provisioningResult.lockObj) {
                    this.mRilAdapter.setProvisionValue(this.mPhoneId, provisionStr, str, messageObtainMessage);
                    try {
                        provisioningResult.lockObj.wait(10000L);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                        provisioningResult.provisionResult = 21;
                    }
                }
                if (!isProvisionSuccess(provisioningResult.provisionResult)) {
                    throw new ImsException("Something wrong, reason:" + provisioningResult.provisionResult, 101);
                }
            }
            this.mConfigHelper.addConfig(ImsConfigContract.TABLE_PROVISION, i, 1, str);
            this.mConfigHelper.updateConfig(ImsConfigContract.TABLE_MASTER, i, 1, str);
        }
    }

    public void setProvisionedValue(int i, int i2) throws ImsException {
        synchronized (this.mProvisionedValueLock) {
            enforceConfigStorageInit("setProvisionedValue(" + i + ", " + i2 + ")");
            if (isProvisionStoreModem(i)) {
                ProvisioningResult provisioningResult = new ProvisioningResult();
                String provisionStr = ImsConfigSettings.getProvisionStr(i);
                Message messageObtainMessage = this.mHandler.obtainMessage(5, provisioningResult);
                synchronized (provisioningResult.lockObj) {
                    this.mRilAdapter.setProvisionValue(this.mPhoneId, provisionStr, Integer.toString(i2), messageObtainMessage);
                    try {
                        provisioningResult.lockObj.wait(10000L);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                        provisioningResult.provisionResult = 21;
                    }
                }
                if (!isProvisionSuccess(provisioningResult.provisionResult)) {
                    throw new ImsException("Something wrong, reason:" + provisioningResult.provisionResult, 101);
                }
            }
            this.mConfigHelper.addConfig(ImsConfigContract.TABLE_PROVISION, i, 0, i2);
            this.mConfigHelper.updateConfig(ImsConfigContract.TABLE_MASTER, i, 0, i2);
        }
    }

    public synchronized void setVoltePreference(int i) {
        Log.i(TAG, "setVoltePreference mode:" + i + ", phoneId:" + this.mPhoneId);
        this.mRilAdapter.setVoiceDomainPreference(i, null);
    }
}
