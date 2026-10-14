package com.mediatek.engineermode.networkselect;

import android.app.Activity;
import android.content.Context;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.provider.Settings;
import android.telephony.TelephonyManager;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes.dex */
public class NetworkSelectActivity extends Activity {
    private static final int CDMA_ONLY = 5;
    private static final int EVENT_QUERY_NETWORKMODE_DONE = 101;
    private static final int EVENT_SET_NETWORKMODE_DONE = 102;
    private static final int GSM_ONLY = 1;
    private static final int GSM_TDSCDMA_AUTO = 16;
    private static final int GSM_WCDMA_AUTO = 3;
    private static final int INDEX_CDMA_ONLY = 7;
    private static final int INDEX_EM_UI_NOT_SUPPORT_TYPE = 10;
    private static final int INDEX_GSM_ONLY = 1;
    private static final int INDEX_GSM_TDSCDMA_AUTO = 5;
    private static final int INDEX_GSM_WCDMA_AUTO = 4;
    private static final int INDEX_LTE_ONLY = 6;
    private static final int INDEX_LTE_TDSCDMA_GSM_WCDMA = 8;
    private static final int INDEX_LTE_WCDMA = 9;
    private static final int INDEX_TDSCDMA_ONLY = 3;
    private static final int INDEX_WCDMA_ONLY = 2;
    private static final int INDEX_WCDMA_PREFERRED = 0;
    private static final int LTE_CDMA_EVDO_GSM_WCDMA = 10;
    private static final int LTE_GSM_WCDMA = 9;
    private static final int LTE_ONLY = 11;
    private static final int LTE_TDSCDMA_GSM = 17;
    private static final int LTE_TDSCDMA_GSM_WCDMA = 20;
    private static final int LTE_WCDMA = 12;
    private static final String TAG = "NetworkMode";
    private static final int TDSCDMA_ONLY = 13;
    private static final int WCDMA_ONLY = 2;
    private static final int WCDMA_PREFERRED = 0;
    private int mModemType;
    private SimCardInfo mSimCard;
    private TelephonyManager mTelephonyManager = null;
    private int mSubId = 1;
    private int[] mNetworkTypeValues = {0, 1, 2, 13, 3, 16, 11, 5, 20, 12};
    private int mCurrentSelected = 0;
    private Spinner mPreferredNetworkSpinner = null;
    private AdapterView.OnItemSelectedListener mPreferredNetworkListener = new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.networkselect.NetworkSelectActivity.1
        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onItemSelected(AdapterView adapterView, View view, int i, long j) {
            Elog.d(NetworkSelectActivity.TAG, "onItemSelected " + i + " mCurrentSelected: " + NetworkSelectActivity.this.mCurrentSelected);
            if (NetworkSelectActivity.this.mCurrentSelected == i || i == 10) {
                return;
            }
            NetworkSelectActivity.this.mCurrentSelected = i;
            NetworkSelectActivity.this.mHandler.obtainMessage(102);
            final int i2 = NetworkSelectActivity.this.mNetworkTypeValues[i];
            Elog.d(NetworkSelectActivity.TAG, "selectNetworkMode " + i2);
            Settings.Global.putInt(NetworkSelectActivity.this.getContentResolver(), "preferred_network_mode" + NetworkSelectActivity.this.mSubId, i2);
            new Thread(new Runnable() { // from class: com.mediatek.engineermode.networkselect.NetworkSelectActivity.1.1
                @Override // java.lang.Runnable
                public void run() {
                    boolean preferredNetworkType = NetworkSelectActivity.this.mTelephonyManager.setPreferredNetworkType(NetworkSelectActivity.this.mSubId, i2);
                    Message message = new Message();
                    message.what = 102;
                    message.arg1 = preferredNetworkType ? 0 : -1;
                    NetworkSelectActivity.this.mHandler.sendMessage(message);
                }
            }).start();
        }

        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onNothingSelected(AdapterView adapterView) {
        }
    };
    private Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.networkselect.NetworkSelectActivity.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i != 101) {
                if (i != 102) {
                    return;
                }
                String str = message.arg1 == 0 ? "set the network succeed" : "set the network failed";
                EmUtils.showToast(str);
                Elog.d(NetworkSelectActivity.TAG, str);
                return;
            }
            if (message.arg1 < 0) {
                Elog.d(NetworkSelectActivity.TAG, "query_preferred_failed");
                EmUtils.showToast("query_preferred_failed");
                return;
            }
            Elog.d(NetworkSelectActivity.TAG, "Get Preferred Type = " + message.arg1);
            NetworkSelectActivity.this.updateNetworkType(message.arg1);
        }
    };

    public class CustomAdapter extends ArrayAdapter<String> {
        public CustomAdapter(Context context, int i, String[] strArr) {
            super(context, i, strArr);
        }

        @Override // android.widget.ArrayAdapter, android.widget.BaseAdapter, android.widget.SpinnerAdapter
        public View getDropDownView(int i, View view, ViewGroup viewGroup) {
            Elog.d(NetworkSelectActivity.TAG, "isAvailable: " + i + " is " + NetworkSelectActivity.this.isAvailable(i));
            if (NetworkSelectActivity.this.isAvailable(i) && i != 10) {
                return super.getDropDownView(i, null, viewGroup);
            }
            TextView textView = new TextView(getContext());
            textView.setVisibility(8);
            textView.setHeight(0);
            return textView;
        }
    }

    public class SimCardInfo {
        private int mSimType = 0;
        private boolean isCapabilitySim = ModemCategory.isCapabilitySim(0);
        private boolean isWCapabilityViceSim = ModemCategory.CheckViceSimWCapability(this.mSimType);
        private boolean isLteCapabilityViceSim = ModemCategory.checkViceSimCapability(this.mSimType, 4096);

        public SimCardInfo(int i) {
            setSimType(i);
        }

        private void setCapabilitySim(boolean z) {
            this.isCapabilitySim = z;
        }

        private void setLteCapabilityViceSim(boolean z) {
            this.isLteCapabilityViceSim = z;
        }

        private void setWCapabilityViceSim(boolean z) {
            this.isWCapabilityViceSim = z;
        }

        public int getSimType() {
            return this.mSimType;
        }

        public boolean isCapabilitySim() {
            return this.isCapabilitySim;
        }

        public boolean isLteCapabilityViceSim() {
            return this.isLteCapabilityViceSim;
        }

        public boolean isWCapabilityViceSim() {
            return this.isWCapabilityViceSim;
        }

        public void setSimType(int i) {
            this.mSimType = i;
            setCapabilitySim(ModemCategory.isCapabilitySim(i));
            setWCapabilityViceSim(ModemCategory.CheckViceSimWCapability(this.mSimType));
            setLteCapabilityViceSim(ModemCategory.checkViceSimCapability(i, 4096));
        }
    }

    private int findSpinnerIndexByType(int i) {
        if ((i == 0 || i == 3) && this.mModemType == 2) {
            i = 16;
        }
        if (i == 0 && !FeatureSupport.isSupported(FeatureSupport.FK_WCDMA_PREFERRED)) {
            i = 3;
        }
        if (i == 2 && this.mModemType == 2) {
            i = 13;
        }
        if (i == 9 || i == 17) {
            i = 20;
        }
        int i2 = 0;
        while (true) {
            int[] iArr = this.mNetworkTypeValues;
            if (i2 >= iArr.length) {
                return -1;
            }
            if (iArr[i2] == i && isAvailable(i2)) {
                return i2;
            }
            i2++;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isAvailable(int i) {
        if (this.mSimCard.isCapabilitySim()) {
            if (this.mModemType == 2 && (i == 0 || i == 2 || i == 4)) {
                return false;
            }
            if (this.mModemType == 1 && (i == 3 || i == 5)) {
                return false;
            }
            if (ModemCategory.isLteSupport() || !(i == 6 || i == 8 || i == 9)) {
                return (FeatureSupport.isSupported(FeatureSupport.FK_WCDMA_PREFERRED) || i != 0) && i != 7;
            }
            return false;
        }
        if (this.mSimCard.isLteCapabilityViceSim()) {
            if (i == 6 || i == 8 || i == 9) {
                return true;
            }
        } else if (i == 6 || i == 8 || i == 9) {
            return false;
        }
        if (!this.mSimCard.isWCapabilityViceSim()) {
            return i == 1;
        }
        if (i == 3 || i == 5 || i == 7) {
            return false;
        }
        return FeatureSupport.isSupported(FeatureSupport.FK_WCDMA_PREFERRED) || i != 0;
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.networkmode_switching);
        this.mPreferredNetworkSpinner = (Spinner) findViewById(R.id.networkModeSwitching);
        if (!ModemCategory.isCdma()) {
            findViewById(R.id.network_mode_set_hint).setVisibility(8);
        }
        findViewById(R.id.disable_eHRPD).setVisibility(8);
        this.mTelephonyManager = (TelephonyManager) getSystemService("phone");
    }

    @Override // android.app.Activity
    protected void onResume() {
        String[] stringArray;
        super.onResume();
        int intExtra = getIntent().getIntExtra("mSimType", ModemCategory.getCapabilitySim());
        Elog.i(TAG, "mSimType " + intExtra);
        SimCardInfo simCardInfo = new SimCardInfo(intExtra);
        this.mSimCard = simCardInfo;
        if (!ModemCategory.isSimReady(simCardInfo.getSimType())) {
            EmUtils.showToast("The card is not ready,please check it");
            Elog.w(TAG, "The card is not ready,please check it");
            this.mPreferredNetworkSpinner.setEnabled(false);
            return;
        }
        int subIdBySlot = ModemCategory.getSubIdBySlot(this.mSimCard.getSimType());
        this.mSubId = subIdBySlot;
        if (subIdBySlot < 0) {
            Elog.w(TAG, "Invalid sub id");
            return;
        }
        this.mPreferredNetworkSpinner.setEnabled(true);
        int modemType = ModemCategory.getModemType();
        this.mModemType = modemType;
        if (modemType != 3) {
            stringArray = getResources().getStringArray(R.array.network_mode_labels);
        } else {
            Elog.w(TAG, "Isn't TD/WCDMA modem: " + this.mModemType);
            stringArray = new String[]{"GSM only"};
            this.mNetworkTypeValues = new int[]{1};
        }
        CustomAdapter customAdapter = new CustomAdapter(this, android.R.layout.simple_spinner_item, stringArray);
        customAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mPreferredNetworkSpinner.setAdapter((SpinnerAdapter) customAdapter);
        for (int i = 0; i < this.mNetworkTypeValues.length; i++) {
            if (isAvailable(i)) {
                this.mCurrentSelected = i;
                this.mPreferredNetworkSpinner.setSelection(i, true);
                break;
            }
        }
        this.mPreferredNetworkSpinner.setOnItemSelectedListener(this.mPreferredNetworkListener);
        new Thread(new Runnable() { // from class: com.mediatek.engineermode.networkselect.NetworkSelectActivity.3
            @Override // java.lang.Runnable
            public void run() {
                if (NetworkSelectActivity.this.mTelephonyManager == null) {
                    Elog.e(NetworkSelectActivity.TAG, "mTelephonyManager = null");
                    return;
                }
                int preferredNetworkType = NetworkSelectActivity.this.mTelephonyManager.getPreferredNetworkType(NetworkSelectActivity.this.mSubId);
                Message message = new Message();
                message.what = 101;
                message.arg1 = preferredNetworkType;
                NetworkSelectActivity.this.mHandler.sendMessage(message);
            }
        }).start();
    }

    void updateNetworkType(int i) {
        int iFindSpinnerIndexByType = findSpinnerIndexByType(i);
        Elog.d(TAG, "Index = " + iFindSpinnerIndexByType);
        if (iFindSpinnerIndexByType < 0 || iFindSpinnerIndexByType >= this.mPreferredNetworkSpinner.getCount()) {
            Elog.d(TAG, "Netwok select not support the type: " + i);
            EmUtils.showToast("Netwok select not support the type: " + i);
            this.mCurrentSelected = 10;
            this.mPreferredNetworkSpinner.setSelection(10, true);
            return;
        }
        this.mCurrentSelected = iFindSpinnerIndexByType;
        this.mPreferredNetworkSpinner.setSelection(iFindSpinnerIndexByType, true);
        Elog.d(TAG, "Netwok select type is: " + i);
        EmUtils.showToast("Netwok select type is: " + i);
    }
}
