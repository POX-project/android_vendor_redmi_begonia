package com.mediatek.engineermode.misc;

import android.app.Activity;
import android.content.ContentValues;
import android.content.Context;
import android.content.Intent;
import android.database.Cursor;
import android.net.Uri;
import android.os.Bundle;
import android.os.SystemProperties;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;
import com.android.ims.ImsConfig;
import com.android.ims.ImsException;
import com.android.ims.ImsManager;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public class PresenceSet extends Activity implements View.OnClickListener {
    public static final String ACTION_PRESENCE_489_STATE = "android.intent.presence.RESET_489_STATE";
    public static final String ACTION_PRESENCE_RESET_ETAG = "android.intent.presence.RESET_ETAG";
    public static final String BROADCAST_PERMISSION = "com.mediatek.uce.permission.RECEIVE_UCE_EVENT";
    public static final Uri PRESENCE_SLOT0_SETTINGS_URI = Uri.parse("content://com.mediatek.presence.settings/slot0settings");
    public static final Uri PRESENCE_SLOT1_SETTINGS_URI = Uri.parse("content://com.mediatek.presence.settings/slot1settings");
    private static String TAG = "[SLOT0] PresenceSet";
    private static HashMap<String, String> mPresenceSetDataMap = null;
    private Button mBt489TimerValue;
    private Button mBtCapabilityExpiryTime;
    private Button mBtCapabilityPollingPeriod;
    private Button mBtEabAvalCacheExpiry;
    private Button mBtEabCapCacheExpiry;
    private Button mBtEabCapDiscovery;
    private Button mBtEabCapPollExpiry;
    private Button mBtEabCapPollIntv;
    private Button mBtEabGzipEnabled;
    private Button mBtEabMaxNoEntries;
    private Button mBtEabPubErrRetryTimer;
    private Button mBtEabPublishTimer;
    private Button mBtEabPublishTimerExtended;
    private Button mBtEabSrcThrotPub;
    private Button mBtEnablePresence;
    private Button mBtMaxSubscriptionList;
    private Button mBtPublishExpiryTime;
    private Button mBtReset489State;
    private Button mBtResetETAG;
    private Button mBtSlotId;
    private EditText mEd489TimerValue;
    private EditText mEdCapabilityExpiryTime;
    private EditText mEdCapabilityPollingPeriod;
    private EditText mEdEabAvalCacheExpiry;
    private EditText mEdEabCapCacheExpiry;
    private EditText mEdEabCapDiscovery;
    private EditText mEdEabCapPollExpiry;
    private EditText mEdEabCapPollIntv;
    private EditText mEdEabGzipEnabled;
    private EditText mEdEabMaxNoEntries;
    private EditText mEdEabPubErrRetryTimer;
    private EditText mEdEabPublishTimer;
    private EditText mEdEabPublishTimerExtended;
    private EditText mEdEabSrcThrotPub;
    private EditText mEdMaxSubscriptionList;
    private EditText mEdPublishExpiryTime;
    private EditText mEdSlotId;
    private EditText mEnablePresence;
    private ImsConfig mImsConfig;
    private final String PRESENCE_PACKAGE_NAME = "com.mediatek.presence";
    private int mSlotId = 0;
    private String mPort = null;
    private String mRWType = null;
    private String mUsid = null;
    private String mAddress = null;
    private String mData = null;
    private String mMipiMode = null;
    private Toast mToast = null;

    private void SendBroadcast(Context context, String str, int i) {
        Intent intent = new Intent();
        intent.setAction(str);
        intent.setPackage("com.mediatek.presence");
        intent.putExtra("slotId", this.mSlotId);
        if (i != -1) {
            intent.putExtra("489ExpiredTime", i);
            Elog.d(TAG, "sendBroadcast result = " + i);
        }
        if (context != null) {
            context.sendBroadcast(intent, "com.mediatek.uce.permission.RECEIVE_UCE_EVENT");
        }
    }

    private int checkValue(String str) {
        try {
            return Integer.valueOf(str).intValue();
        } catch (Exception e) {
            Elog.d(TAG, "The value input is error!");
            showToast("The value input is error!");
            return 0;
        }
    }

    private int queryEabConfiguration(int i) {
        int provisionedValue = -1;
        try {
            provisionedValue = this.mImsConfig.getProvisionedValue(i);
            Elog.d(TAG, "getProvisionedValue, result=" + provisionedValue);
            return provisionedValue;
        } catch (ImsException e) {
            Elog.d(TAG, "setEabConfiguration exception = " + e);
            return provisionedValue;
        }
    }

    private void queryPresenceDB() {
        Cursor cursorQuery = null;
        int i = this.mSlotId;
        if (i == 0) {
            cursorQuery = getContentResolver().query(PRESENCE_SLOT0_SETTINGS_URI, null, null, null, null);
        } else if (i == 1) {
            cursorQuery = getContentResolver().query(PRESENCE_SLOT1_SETTINGS_URI, null, null, null, null);
        }
        if (cursorQuery != null) {
            cursorQuery.moveToFirst();
            if (cursorQuery.getCount() > 0) {
                do {
                    String string = cursorQuery.getString(cursorQuery.getColumnIndex("key"));
                    String string2 = cursorQuery.getString(cursorQuery.getColumnIndex("value"));
                    if (mPresenceSetDataMap.containsKey(string)) {
                        Elog.d(TAG, string + " = " + string2);
                        mPresenceSetDataMap.put(string, string2);
                    }
                } while (cursorQuery.moveToNext());
            }
            cursorQuery.close();
        } else {
            Elog.d(TAG, "cursor is null!");
        }
        this.mEdCapabilityPollingPeriod.setText(mPresenceSetDataMap.get("CapabilityPollingPeriod"));
        this.mEdCapabilityExpiryTime.setText(mPresenceSetDataMap.get("CapabilityExpiryTimeout"));
        this.mEdPublishExpiryTime.setText(mPresenceSetDataMap.get("PublishExpirePeriod"));
        this.mEdMaxSubscriptionList.setText(mPresenceSetDataMap.get("MaxSubscriptionPresenceList"));
        this.mEnablePresence.setText(SystemProperties.get(MiscConfig.FK_MTK_MISC_UCE_SUPPORT));
        this.mEd489TimerValue.setText(mPresenceSetDataMap.get("SipBadEventExpiredTime"));
    }

    private void setEabConfiguration(int i, int i2) {
        try {
            this.mImsConfig.setProvisionedValue(i, i2);
            showToast("config:" + i + ", value = " + i2);
        } catch (ImsException e) {
            Elog.d(TAG, "setEabConfiguration exception = " + e);
        }
    }

    private void setPresenceDB(int i, String str, String str2) {
        String str3 = "key = \"" + str + "\"";
        if (!str2.equals("")) {
            ContentValues contentValues = new ContentValues();
            contentValues.put("value", str2);
            Elog.d(TAG, "where = " + str3);
            if (i == 0) {
                getContentResolver().update(PRESENCE_SLOT0_SETTINGS_URI, contentValues, str3, null);
                showToast("set " + str + " to " + str2 + " succeed");
                return;
            }
            if (i == 1) {
                getContentResolver().update(PRESENCE_SLOT1_SETTINGS_URI, contentValues, str3, null);
                showToast("set " + str + " to " + str2 + " succeed");
                return;
            }
        }
        showToast("The value input is error!");
    }

    private void showToast(String str) {
        Toast toastMakeText = Toast.makeText(this, "[SLOT" + this.mSlotId + "] " + str, 0);
        this.mToast = toastMakeText;
        toastMakeText.show();
    }

    private void updateSlotId() {
        this.mSlotId = checkValue(this.mEdSlotId.getText().toString());
        TAG = "[SLOT" + this.mSlotId + "] PresenceSet";
        queryPresenceDB();
        ImsManager imsManager = ImsManager.getInstance(this, this.mSlotId);
        if (imsManager != null) {
            try {
                this.mImsConfig = imsManager.getConfigInterface();
            } catch (ImsException e) {
            }
        }
        showToast("Slot Id is updated to : " + this.mSlotId);
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        switch (view.getId()) {
            case R.id.presence_enable_button /* 2131101218 */:
                if (!"1".equals(this.mEnablePresence.getText().toString())) {
                    SystemProperties.set(MiscConfig.FK_MTK_MISC_UCE_SUPPORT, "0");
                    showToast("persist.vendor.mtk_uce_support = 0");
                } else {
                    SystemProperties.set(MiscConfig.FK_MTK_MISC_UCE_SUPPORT, "1");
                    showToast("persist.vendor.mtk_uce_support = 1");
                }
                break;
            case R.id.presence_set_489_timer_value_button /* 2131101220 */:
                int iCheckValue = checkValue(this.mEd489TimerValue.getText().toString());
                SendBroadcast(this, ACTION_PRESENCE_489_STATE, iCheckValue);
                setPresenceDB(this.mSlotId, "SipBadEventExpiredTime", "" + iCheckValue);
                Elog.d(TAG, "sendBroadcast = android.intent.presence.RESET_489_STATE,489ExpiredTime = " + iCheckValue);
                showToast("sendBroadcast = android.intent.presence.RESET_489_STATE , " + iCheckValue + " succeed");
                break;
            case R.id.presence_set_capability_expiry_time_button /* 2131101222 */:
                setPresenceDB(this.mSlotId, "CapabilityExpiryTimeout", this.mEdCapabilityExpiryTime.getText().toString());
                break;
            case R.id.presence_set_capability_polling_period_button /* 2131101224 */:
                setPresenceDB(this.mSlotId, "CapabilityPollingPeriod", this.mEdCapabilityPollingPeriod.getText().toString());
                break;
            case R.id.presence_set_eab_availability_cache_exp_button /* 2131101225 */:
                setEabConfiguration(19, Integer.parseInt(this.mEdEabAvalCacheExpiry.getText().toString()));
                break;
            case R.id.presence_set_eab_cap_poll_exp_button /* 2131101227 */:
                setEabConfiguration(23, Integer.parseInt(this.mEdEabCapPollExpiry.getText().toString()));
                break;
            case R.id.presence_set_eab_capability_cache_exp_button /* 2131101229 */:
                setEabConfiguration(18, Integer.parseInt(this.mEdEabCapCacheExpiry.getText().toString()));
                break;
            case R.id.presence_set_eab_capability_discovery_button /* 2131101231 */:
                setEabConfiguration(17, Integer.parseInt(this.mEdEabCapDiscovery.getText().toString()));
                break;
            case R.id.presence_set_eab_capability_poll_interval_button /* 2131101233 */:
                setEabConfiguration(20, Integer.parseInt(this.mEdEabCapPollIntv.getText().toString()));
                break;
            case R.id.presence_set_eab_gzip_enabled_button /* 2131101235 */:
                setEabConfiguration(24, Integer.parseInt(this.mEdEabGzipEnabled.getText().toString()));
                break;
            case R.id.presence_set_eab_max_no_entries_button /* 2131101237 */:
                setEabConfiguration(22, Integer.parseInt(this.mEdEabMaxNoEntries.getText().toString()));
                break;
            case R.id.presence_set_eab_publish_error_retry_timer_button /* 2131101239 */:
                setEabConfiguration(1001, Integer.parseInt(this.mEdEabPubErrRetryTimer.getText().toString()));
                break;
            case R.id.presence_set_eab_publish_timer_button /* 2131101241 */:
                setEabConfiguration(15, Integer.parseInt(this.mEdEabPublishTimer.getText().toString()));
                break;
            case R.id.presence_set_eab_publish_timer_extended_button /* 2131101242 */:
                setEabConfiguration(16, Integer.parseInt(this.mEdEabPublishTimerExtended.getText().toString()));
                break;
            case R.id.presence_set_eab_source_throttle_publish_button /* 2131101245 */:
                setEabConfiguration(21, Integer.parseInt(this.mEdEabSrcThrotPub.getText().toString()));
                break;
            case R.id.presence_set_max_subscription_list_button /* 2131101248 */:
                setPresenceDB(this.mSlotId, "MaxSubscriptionPresenceList", this.mEdMaxSubscriptionList.getText().toString());
                break;
            case R.id.presence_set_publish_expiry_time_button /* 2131101250 */:
                setPresenceDB(this.mSlotId, "PublishExpirePeriod", this.mEdPublishExpiryTime.getText().toString());
                break;
            case R.id.presence_set_reset_489_state /* 2131101251 */:
                SendBroadcast(this, ACTION_PRESENCE_489_STATE, -1);
                Elog.d(TAG, "sendBroadcast = android.intent.presence.RESET_489_STATE");
                showToast("sendBroadcast = android.intent.presence.RESET_489_STATE succeed");
                break;
            case R.id.presence_set_reset_ETAG /* 2131101252 */:
                SendBroadcast(this, ACTION_PRESENCE_RESET_ETAG, -1);
                Elog.d(TAG, "sendBroadcast = android.intent.presence.RESET_ETAG");
                showToast("sendBroadcast = android.intent.presence.RESET_ETAG succeed");
                break;
            case R.id.presence_set_slot_id_button /* 2131101254 */:
                updateSlotId();
                break;
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.presence_set);
        ImsManager imsManager = ImsManager.getInstance(this, 0);
        if (imsManager != null) {
            try {
                this.mImsConfig = imsManager.getConfigInterface();
            } catch (ImsException e) {
            }
        }
        this.mEd489TimerValue = (EditText) findViewById(R.id.presence_set_slot_id);
        this.mEd489TimerValue = (EditText) findViewById(R.id.presence_set_489_timer_value);
        this.mEdCapabilityPollingPeriod = (EditText) findViewById(R.id.presence_set_capability_polling_period);
        this.mEdCapabilityExpiryTime = (EditText) findViewById(R.id.presence_set_capability_expiry_time);
        this.mEdPublishExpiryTime = (EditText) findViewById(R.id.presence_set_publish_expiry_time);
        this.mEdMaxSubscriptionList = (EditText) findViewById(R.id.presence_set_max_subscription_list);
        this.mEnablePresence = (EditText) findViewById(R.id.presence_enable);
        this.mEdEabPublishTimer = (EditText) findViewById(R.id.presence_set_eab_publish_timer_value);
        this.mEdEabPublishTimerExtended = (EditText) findViewById(R.id.presence_set_eab_publish_timer_extended_value);
        this.mEdEabCapCacheExpiry = (EditText) findViewById(R.id.presence_set_eab_capability_cache_exp_value);
        this.mEdEabAvalCacheExpiry = (EditText) findViewById(R.id.presence_set_eab_availability_cache_exp_value);
        this.mEdEabSrcThrotPub = (EditText) findViewById(R.id.presence_set_eab_source_throttle_publish_value);
        this.mEdEabCapPollIntv = (EditText) findViewById(R.id.presence_set_eab_capability_poll_interval_value);
        this.mEdEabMaxNoEntries = (EditText) findViewById(R.id.presence_set_eab_max_no_entries_value);
        this.mEdEabCapPollExpiry = (EditText) findViewById(R.id.presence_set_eab_cap_poll_exp_value);
        this.mEdEabCapDiscovery = (EditText) findViewById(R.id.presence_set_eab_capability_discovery_value);
        this.mEdEabGzipEnabled = (EditText) findViewById(R.id.presence_set_eab_gzip_enabled_value);
        this.mEdEabPubErrRetryTimer = (EditText) findViewById(R.id.presence_set_eab_publish_error_retry_timer_value);
        this.mEdSlotId = (EditText) findViewById(R.id.presence_set_slot_id);
        this.mBt489TimerValue = (Button) findViewById(R.id.presence_set_489_timer_value_button);
        this.mBtCapabilityPollingPeriod = (Button) findViewById(R.id.presence_set_capability_polling_period_button);
        this.mBtCapabilityExpiryTime = (Button) findViewById(R.id.presence_set_capability_expiry_time_button);
        this.mBtPublishExpiryTime = (Button) findViewById(R.id.presence_set_publish_expiry_time_button);
        this.mBtMaxSubscriptionList = (Button) findViewById(R.id.presence_set_max_subscription_list_button);
        this.mBtEnablePresence = (Button) findViewById(R.id.presence_enable_button);
        this.mBtResetETAG = (Button) findViewById(R.id.presence_set_reset_ETAG);
        this.mBtReset489State = (Button) findViewById(R.id.presence_set_reset_489_state);
        this.mBtSlotId = (Button) findViewById(R.id.presence_set_slot_id_button);
        this.mBtEabPublishTimer = (Button) findViewById(R.id.presence_set_eab_publish_timer_button);
        this.mBtEabPublishTimerExtended = (Button) findViewById(R.id.presence_set_eab_publish_timer_extended_button);
        this.mBtEabCapCacheExpiry = (Button) findViewById(R.id.presence_set_eab_capability_cache_exp_button);
        this.mBtEabAvalCacheExpiry = (Button) findViewById(R.id.presence_set_eab_availability_cache_exp_button);
        this.mBtEabSrcThrotPub = (Button) findViewById(R.id.presence_set_eab_source_throttle_publish_button);
        this.mBtEabCapPollIntv = (Button) findViewById(R.id.presence_set_eab_capability_poll_interval_button);
        this.mBtEabMaxNoEntries = (Button) findViewById(R.id.presence_set_eab_max_no_entries_button);
        this.mBtEabCapPollExpiry = (Button) findViewById(R.id.presence_set_eab_cap_poll_exp_button);
        this.mBtEabCapDiscovery = (Button) findViewById(R.id.presence_set_eab_capability_discovery_button);
        this.mBtEabGzipEnabled = (Button) findViewById(R.id.presence_set_eab_gzip_enabled_button);
        this.mBtEabPubErrRetryTimer = (Button) findViewById(R.id.presence_set_eab_publish_error_retry_timer_button);
        this.mBt489TimerValue.setOnClickListener(this);
        this.mBtCapabilityPollingPeriod.setOnClickListener(this);
        this.mBtCapabilityExpiryTime.setOnClickListener(this);
        this.mBtPublishExpiryTime.setOnClickListener(this);
        this.mBtMaxSubscriptionList.setOnClickListener(this);
        this.mBtEnablePresence.setOnClickListener(this);
        this.mBtResetETAG.setOnClickListener(this);
        this.mBtReset489State.setOnClickListener(this);
        this.mBtEabPublishTimer.setOnClickListener(this);
        this.mBtEabPublishTimerExtended.setOnClickListener(this);
        this.mBtEabCapCacheExpiry.setOnClickListener(this);
        this.mBtEabAvalCacheExpiry.setOnClickListener(this);
        this.mBtEabSrcThrotPub.setOnClickListener(this);
        this.mBtEabCapPollIntv.setOnClickListener(this);
        this.mBtEabMaxNoEntries.setOnClickListener(this);
        this.mBtEabCapPollExpiry.setOnClickListener(this);
        this.mBtEabCapDiscovery.setOnClickListener(this);
        this.mBtEabGzipEnabled.setOnClickListener(this);
        this.mBtEabPubErrRetryTimer.setOnClickListener(this);
        this.mBtSlotId.setOnClickListener(this);
        if (mPresenceSetDataMap == null) {
            HashMap<String, String> map = new HashMap<>();
            mPresenceSetDataMap = map;
            map.put("SipBadEventExpiredTime", "0");
            mPresenceSetDataMap.put("CapabilityPollingPeriod", "0");
            mPresenceSetDataMap.put("CapabilityExpiryTimeout", "0");
            mPresenceSetDataMap.put("PublishExpirePeriod", "0");
            mPresenceSetDataMap.put("MaxSubscriptionPresenceList", "0");
        }
        queryPresenceDB();
        this.mEdEabPublishTimer.setText(String.valueOf(queryEabConfiguration(15)));
        this.mEdEabPublishTimerExtended.setText(String.valueOf(queryEabConfiguration(16)));
        this.mEdEabCapCacheExpiry.setText(String.valueOf(queryEabConfiguration(18)));
        this.mEdEabAvalCacheExpiry.setText(String.valueOf(queryEabConfiguration(19)));
        this.mEdEabSrcThrotPub.setText(String.valueOf(queryEabConfiguration(21)));
        this.mEdEabCapPollIntv.setText(String.valueOf(queryEabConfiguration(20)));
        this.mEdEabMaxNoEntries.setText(String.valueOf(queryEabConfiguration(22)));
        this.mEdEabCapPollExpiry.setText(String.valueOf(queryEabConfiguration(23)));
        this.mEdEabCapDiscovery.setText(String.valueOf(queryEabConfiguration(17)));
        this.mEdEabGzipEnabled.setText(String.valueOf(queryEabConfiguration(24)));
        this.mEdEabPubErrRetryTimer.setText(String.valueOf(queryEabConfiguration(1001)));
        this.mEdSlotId.setText("0");
    }

    @Override // android.app.Activity
    public void onDestroy() {
        super.onDestroy();
    }
}
