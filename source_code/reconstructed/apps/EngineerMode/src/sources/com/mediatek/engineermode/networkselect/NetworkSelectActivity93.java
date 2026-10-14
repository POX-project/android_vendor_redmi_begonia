package com.mediatek.engineermode.networkselect;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.SystemProperties;
import android.provider.Settings;
import android.support.v4.media.session.PlaybackStateCompat;
import android.telephony.TelephonyManager;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes.dex */
public class NetworkSelectActivity93 extends Activity implements CompoundButton.OnCheckedChangeListener {
    private static final int CARD_TYPE_CDMA_ONLY = 3;
    private static final int CARD_TYPE_GSM_CDMA = 2;
    private static final int CARD_TYPE_GSM_ONLY = 1;
    public static final int CDMA_EVDO = 4;
    public static final int CDMA_EVDO_GSM_UMTS = 21;
    public static final int CDMA_EVDO_GSM_WCDMA = 7;
    public static final int CDMA_ONLY = 5;
    public static final int EVDO_ONLY = 6;
    private static final int EVENT_QUERY_EHRPD_ENABLE_DONE = 103;
    private static final int EVENT_QUERY_NETWORKMODE_DONE = 101;
    private static final int EVENT_SET_EHRPD_ENABLE_DONE = 104;
    private static final int EVENT_SET_NETWORKMODE_DONE = 102;
    public static final String FK_MTK_C2K_CAPABILITY = "persist.vendor.radio.disable_c2k_cap";
    public static final int GSM_ONLY = 1;
    public static final int GSM_TDSCDMA_AUTO = 16;
    public static final int GSM_WCDMA_AUTO = 3;
    private static final int INDEX_CDMA_EVDO = 9;
    private static final int INDEX_CDMA_EVDO_UMTS_GSM = 14;
    private static final int INDEX_CDMA_ONLY = 10;
    private static final int INDEX_EM_UI_NOT_SUPPORT_TYPE = 21;
    private static final int INDEX_EVDO_ONLY = 11;
    private static final int INDEX_GSM_ONLY = 1;
    private static final int INDEX_GSM_TDSCDMA_AUTO = 5;
    private static final int INDEX_GSM_WCDMA_AUTO = 4;
    private static final int INDEX_LTE_CDMA_EVDO = 13;
    private static final int INDEX_LTE_CDMA_EVDO_UMTS_GSM = 12;
    private static final int INDEX_LTE_GSM_UMTS = 7;
    private static final int INDEX_LTE_ONLY = 6;
    private static final int INDEX_LTE_UMTS = 8;
    private static final int INDEX_NR_LTE = 16;
    private static final int INDEX_NR_LTE_CDMA_EVDO = 19;
    private static final int INDEX_NR_LTE_UMTS = 17;
    private static final int INDEX_NR_LTE_UMTS_GSM = 18;
    private static final int INDEX_NR_LTE_UMTS_GSM_CDMA = 20;
    private static final int INDEX_NR_ONLY = 15;
    private static final int INDEX_TDSCDMA_ONLY = 3;
    private static final int INDEX_WCDMA_ONLY = 2;
    private static final int INDEX_WCDMA_PREFERRED = 0;
    public static final int LTE_CDMA_EVDO = 8;
    public static final int LTE_CDMA_EVDO_GSM_UMTS = 22;
    public static final int LTE_CDMA_EVDO_GSM_WCDMA = 10;
    public static final int LTE_GSM_WCDMA = 9;
    public static final int LTE_ONLY = 11;
    public static final int LTE_TDSCDMA = 15;
    public static final int LTE_TDSCDMA_GSM = 17;
    public static final int LTE_TDSCDMA_GSM_WCDMA = 20;
    public static final int LTE_TDSCDMA_WCDMA = 19;
    public static final int LTE_WCDMA = 12;
    public static final int NR_LTE = 24;
    public static final int NR_LTE_CDMA_EVDO = 25;
    public static final int NR_LTE_CDMA_EVDO_GSM_UMTS = 33;
    public static final int NR_LTE_CDMA_EVDO_GSM_WCDMA = 27;
    public static final int NR_LTE_GSM_WCDMA = 26;
    public static final int NR_LTE_TDSCDMA = 29;
    public static final int NR_LTE_TDSCDMA_GSM = 30;
    public static final int NR_LTE_UMTS = 31;
    public static final int NR_LTE_UMTS_GSM = 32;
    public static final int NR_LTE_WCDMA = 28;
    public static final int NR_ONLY = 23;
    private static final int REBOOT_DIALOG = 2000;
    public static final String TAG = "NetworkMode93";
    public static final int TDSCDMA_GSM_WCDMA = 18;
    public static final int TDSCDMA_ONLY = 13;
    public static final int TDSCDMA_WCDMA_ONLY = 14;
    public static final int WCDMA_ONLY = 2;
    public static final int WCDMA_PREFERRED = 0;
    private int mModemType;
    private SimCardInfo mSimCard;
    private int mSimType;
    private String[] network_mode_labels;
    private int selectNetworkMode;
    private TelephonyManager mTelephonyManager = null;
    private String[] mCardTypeValues = {"gsm_only_card", "gsm_cdma_card", "cdma_only_card"};
    private String[] mNetworkTypeLabel = {"GSM/WCDMA (WCDMA preferred)", "GSM only", "WCDMA only", "TD-SCDMA only", "GSM/WCDMA (auto)", "GSM/TD-SCDMA (auto)", "LTE only", "LTE/UMTS/GSM", "LTE/UMTS", "CDMA/EVDO", "CDMA only", "EVDO only", "LTE/CDMA/EVDO/UMTS/GSM", "LTE/CDMA/EVDO", "CDMA/EVDO/UMTS/GSM", "NR only", "NR/LTE", "NR/LTE/UMTS", "NR/LTE/UMTS/GSM", "NR/LTE/CDMA/EVDO", "NR/LTE/UMTS/GSM/C2K", "EM UI not support this type"};
    private int[] mNetworkTypeValues = {0, 1, 2, 13, 3, 16, 11, 20, 19, 4, 5, 6, 22, 8, 21, 23, 24, 31, 32, 25, 33};
    private boolean mFirstEntry = true;
    private boolean mEHRPDFirstEnter = true;
    private int mSubId = 1;
    private int mCurrentSelected = 0;
    private Spinner mPreferredNetworkSpinner = null;
    private CheckBox mCbDisableC2kCapabilit = null;
    private CheckBox mDisableeHRPDCheckBox = null;
    private Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.networkselect.NetworkSelectActivity93.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            switch (message.what) {
                case 101:
                    if (message.arg1 < 0) {
                        Elog.d(NetworkSelectActivity93.TAG, "query_preferred_failed");
                        EmUtils.showToast("query_preferred_failed");
                    } else {
                        Elog.d(NetworkSelectActivity93.TAG, "Get Preferred Type = " + message.arg1);
                        NetworkSelectActivity93.this.updateNetworkType(message.arg1);
                    }
                    break;
                case 102:
                    String str = message.arg1 == 0 ? "set the network to : " + NetworkSelectActivity93.this.selectNetworkMode + " succeed" : "set the network to : " + NetworkSelectActivity93.this.selectNetworkMode + " failed";
                    EmUtils.showToast(str);
                    Elog.d(NetworkSelectActivity93.TAG, str);
                    break;
                case 103:
                    AsyncResult asyncResult = (AsyncResult) message.obj;
                    if (asyncResult.exception != null) {
                        EmUtils.showToast(R.string.query_eHRPD_state_fail);
                        Elog.d(NetworkSelectActivity93.TAG, NetworkSelectActivity93.this.getResources().getString(R.string.query_eHRPD_state_fail));
                        break;
                    } else if (asyncResult.result != null && (asyncResult.result instanceof String[])) {
                        String[] strArr = (String[]) asyncResult.result;
                        if (strArr.length > 0 && strArr[0] != null) {
                            Elog.d(NetworkSelectActivity93.TAG, "data[0]:" + strArr[0]);
                            if (!strArr[0].equals("+EHRPD:0")) {
                                NetworkSelectActivity93.this.mEHRPDFirstEnter = false;
                                NetworkSelectActivity93.this.mDisableeHRPDCheckBox.setChecked(false);
                            } else {
                                NetworkSelectActivity93.this.mEHRPDFirstEnter = true;
                                NetworkSelectActivity93.this.mDisableeHRPDCheckBox.setChecked(true);
                            }
                            break;
                        }
                    }
                    break;
                case 104:
                    if (((AsyncResult) message.obj).exception == null) {
                        EmUtils.showToast(R.string.set_eHRPD_state_succeed);
                        Elog.d(NetworkSelectActivity93.TAG, NetworkSelectActivity93.this.getResources().getString(R.string.set_eHRPD_state_succeed));
                    } else {
                        EmUtils.showToast(R.string.set_eHRPD_state_fail);
                        Elog.d(NetworkSelectActivity93.TAG, NetworkSelectActivity93.this.getResources().getString(R.string.set_eHRPD_state_fail));
                    }
                    break;
            }
        }
    };
    private AdapterView.OnItemSelectedListener mPreferredNetworkListener = new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.networkselect.NetworkSelectActivity93.2
        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onItemSelected(AdapterView adapterView, View view, int i, long j) {
            Elog.d(NetworkSelectActivity93.TAG, "onItemSelected = " + i + ",mCurrentSelected = " + NetworkSelectActivity93.this.mCurrentSelected + " " + NetworkSelectActivity93.this.mNetworkTypeLabel[i] + ",mNetworkTypeValues length " + NetworkSelectActivity93.this.mNetworkTypeValues.length);
            if (NetworkSelectActivity93.this.mCurrentSelected == i) {
                Elog.d(NetworkSelectActivity93.TAG, "listener being invoked by setSelection, return ");
                return;
            }
            if (i >= NetworkSelectActivity93.this.mNetworkTypeValues.length) {
                Elog.d(NetworkSelectActivity93.TAG, "mNetworkTypeValues array out of bound return!");
                return;
            }
            NetworkSelectActivity93.this.mCurrentSelected = i;
            NetworkSelectActivity93 networkSelectActivity93 = NetworkSelectActivity93.this;
            networkSelectActivity93.selectNetworkMode = networkSelectActivity93.mNetworkTypeValues[i];
            NetworkSelectActivity93 networkSelectActivity94 = NetworkSelectActivity93.this;
            networkSelectActivity94.selectNetworkMode = networkSelectActivity94.filterTypeByCapability(networkSelectActivity94.selectNetworkMode);
            Elog.d(NetworkSelectActivity93.TAG, "selectNetworkMode to: " + NetworkSelectActivity93.this.selectNetworkMode);
            Settings.Global.putInt(NetworkSelectActivity93.this.getContentResolver(), "preferred_network_mode" + NetworkSelectActivity93.this.mSubId, NetworkSelectActivity93.this.selectNetworkMode);
            new Thread(new Runnable() { // from class: com.mediatek.engineermode.networkselect.NetworkSelectActivity93.2.1
                @Override // java.lang.Runnable
                public void run() {
                    boolean preferredNetworkType = NetworkSelectActivity93.this.mTelephonyManager.setPreferredNetworkType(NetworkSelectActivity93.this.mSubId, NetworkSelectActivity93.this.selectNetworkMode);
                    Message message = new Message();
                    message.what = 102;
                    message.arg1 = preferredNetworkType ? 0 : -1;
                    NetworkSelectActivity93.this.mHandler.sendMessage(message);
                }
            }).start();
        }

        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onNothingSelected(AdapterView adapterView) {
        }
    };

    public class CustomAdapter extends ArrayAdapter<String> {
        public CustomAdapter(Context context, int i, String[] strArr) {
            super(context, i, strArr);
        }

        @Override // android.widget.ArrayAdapter, android.widget.BaseAdapter, android.widget.SpinnerAdapter
        public View getDropDownView(int i, View view, ViewGroup viewGroup) {
            Elog.d(NetworkSelectActivity93.TAG, "isAvailable: " + i + " is " + NetworkSelectActivity93.this.isAvailable(i));
            if (NetworkSelectActivity93.this.isAvailable(i)) {
                return super.getDropDownView(i, null, viewGroup);
            }
            TextView textView = new TextView(getContext());
            textView.setVisibility(8);
            textView.setHeight(0);
            return textView;
        }
    }

    class SimCardInfo {
        private boolean isCapabilitySim;
        private boolean isLteCapabilityViceSim;
        private boolean isNRCapabilityViceSim;
        private boolean isWCapabilityViceSim;
        private int mCardType;
        private int mSimType;

        public SimCardInfo(int i) {
            setSimType(i);
            setCapabilitySim(ModemCategory.isCapabilitySim(i));
            setWCapabilityViceSim(ModemCategory.CheckViceSimWCapability(i));
            setLteCapabilityViceSim(ModemCategory.checkViceSimCapability(i, 4096));
            setNRCapabilityViceSim(ModemCategory.CheckViceSimNRCapability(i));
            setCardType(getCardType(i));
        }

        private int getCardType(int i) {
            int i2 = 1;
            String[] supportCardType = ModemCategory.getSupportCardType(i);
            if (supportCardType != null) {
                boolean zIsCt3gDualMode = ModemCategory.isCt3gDualMode(i);
                String str = "";
                for (String str2 : supportCardType) {
                    str = str + str2 + " ";
                }
                if ((str.contains("USIM") && str.contains("CSIM")) || zIsCt3gDualMode) {
                    i2 = 2;
                } else if (str.contains("USIM") && str.contains("RUIM")) {
                    i2 = 2;
                } else if (str.contains("CSIM") && str.contains("SIM")) {
                    i2 = 2;
                } else if (!str.contains("RUIM") && !str.contains("CSIM")) {
                    i2 = 1;
                } else if ((!str.contains("SIM") || str.contains("USIM")) && !zIsCt3gDualMode) {
                    i2 = 3;
                } else {
                    Elog.w(NetworkSelectActivity93.TAG, "the card type is unknow!");
                }
            } else {
                Elog.w(NetworkSelectActivity93.TAG, "there has no card insert,default type is GSM_only");
            }
            Elog.d(NetworkSelectActivity93.TAG, "card type = " + NetworkSelectActivity93.this.mCardTypeValues[i2 - 1]);
            return i2;
        }

        private void setCapabilitySim(boolean z) {
            this.isCapabilitySim = z;
        }

        private void setCardType(int i) {
            this.mCardType = i;
        }

        private void setLteCapabilityViceSim(boolean z) {
            this.isLteCapabilityViceSim = z;
        }

        private void setWCapabilityViceSim(boolean z) {
            this.isWCapabilityViceSim = z;
        }

        public int getCardType() {
            return this.mCardType;
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

        public boolean isNRCapabilityViceSim() {
            return this.isNRCapabilityViceSim;
        }

        public boolean isWCapabilityViceSim() {
            return this.isWCapabilityViceSim;
        }

        public void setNRCapabilityViceSim(boolean z) {
            this.isNRCapabilityViceSim = z;
        }

        public void setSimType(int i) {
            this.mSimType = i;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int filterTypeByCapability(int i) {
        if (!((PlaybackStateCompat.ACTION_PREPARE_FROM_SEARCH & this.mTelephonyManager.getSupportedRadioAccessFamily()) > 0)) {
            if (i == 20) {
                return 9;
            }
            if (i == 19) {
                return 12;
            }
            if (i == 22) {
                return 10;
            }
            if (i == 21) {
                return 7;
            }
            if (i == 31) {
                return 28;
            }
            if (i == 32) {
                return 26;
            }
            if (i == 33) {
                return 27;
            }
        }
        return i;
    }

    private int findSpinnerIndexByType(int i) {
        if (i == 7) {
            i = 21;
        }
        if (i == 9 || i == 17) {
            i = 20;
        }
        if (i == 12 || i == 15) {
            i = 19;
        }
        if (i == 10) {
            i = 22;
        }
        if (i == 28 || i == 29) {
            i = 31;
        }
        if (i == 26 || i == 30) {
            i = 32;
        }
        if (i == 27) {
            i = 33;
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

    private void handleQueryCdmaCapability() {
        if ("1".equals(SystemProperties.get(FK_MTK_C2K_CAPABILITY, "0"))) {
            Elog.d(TAG, "QueryCdmaCapability set true");
            this.mFirstEntry = true;
            this.mCbDisableC2kCapabilit.setChecked(true);
        } else {
            Elog.d(TAG, "QueryCdmaCapability set false");
            this.mFirstEntry = false;
            this.mCbDisableC2kCapabilit.setChecked(false);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isAvailable(int i) {
        if (21 == i) {
            return false;
        }
        if (!this.mSimCard.isNRCapabilityViceSim() && (i == 15 || i == 16 || i == 17 || i == 18 || i == 19 || i == 20)) {
            return false;
        }
        if (this.mSimCard.isCapabilitySim()) {
            if (this.mSimCard.getCardType() == 3 && (i == 10 || i == 11 || i == 9)) {
                return true;
            }
            if (this.mSimCard.getCardType() == 3) {
                return false;
            }
            if (this.mSimCard.getCardType() == 1 && (i == 10 || i == 11 || i == 9 || i == 13 || i == 12 || i == 14 || i == 19 || i == 20)) {
                return false;
            }
            if (this.mModemType == 2 && (i == 0 || i == 2 || i == 4)) {
                return false;
            }
            if (this.mModemType == 1 && (i == 3 || i == 5)) {
                return false;
            }
            if (ModemCategory.isLteSupport() || !(i == 6 || i == 7 || i == 8 || i == 12 || i == 13)) {
                return FeatureSupport.isSupported(FeatureSupport.FK_WCDMA_PREFERRED) || !(i == 4 || i == 5);
            }
            return false;
        }
        if (this.mSimCard.getCardType() == 3 && i == 10) {
            return true;
        }
        if (this.mSimCard.getCardType() == 3) {
            return false;
        }
        if (this.mSimCard.getCardType() == 1 && (i == 10 || i == 11 || i == 9 || i == 13 || i == 12 || i == 14 || i == 19 || i == 20)) {
            return false;
        }
        if (this.mSimCard.isLteCapabilityViceSim()) {
            if (i == 6 || i == 7 || i == 8 || i == 12 || i == 13) {
                return true;
            }
        } else if (i == 6 || i == 7 || i == 8 || i == 12 || i == 13) {
            return false;
        }
        if (!this.mSimCard.isWCapabilityViceSim()) {
            return i == 1 || i == 10 || i == 9 || i == 14;
        }
        if (i == 3 || i == 5) {
            return false;
        }
        return FeatureSupport.isSupported(FeatureSupport.FK_WCDMA_PREFERRED) || !(i == 4 || i == 5);
    }

    private void queryeHRPDStatus() {
        sendAtCommand(ModemCategory.getCdmaCmdArr(new String[]{"AT+eHRPD?", "+EHRPD:", "DESTRILD:C2K"}), 103);
    }

    private void sendAtCommand(String[] strArr, int i) {
        Elog.d(TAG, "sendAtCommand: " + strArr[0]);
        EmUtils.invokeOemRilRequestStringsEm(this.mSimType, strArr, this.mHandler.obtainMessage(i));
    }

    private void seteHRPDStatus(int i) {
        String str = null;
        if (i == 0) {
            str = "AT+eHRPD=0";
        } else if (i == 1) {
            str = "AT+eHRPD=1";
        }
        sendAtCommand(ModemCategory.getCdmaCmdArr(new String[]{str, "", "DESTRILD:C2K"}), 104);
    }

    @Override // android.widget.CompoundButton.OnCheckedChangeListener
    public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
        if (compoundButton.getId() != R.id.disable_c2k_capability) {
            if (compoundButton.getId() == R.id.disable_eHRPD) {
                if (this.mEHRPDFirstEnter) {
                    this.mEHRPDFirstEnter = false;
                    return;
                } else {
                    this.mDisableeHRPDCheckBox.setChecked(z);
                    seteHRPDStatus(!z ? 1 : 0);
                    return;
                }
            }
            return;
        }
        if (this.mFirstEntry) {
            this.mFirstEntry = false;
            return;
        }
        try {
            if (this.mCbDisableC2kCapabilit.isChecked()) {
                EmUtils.getEmHidlService().setDisableC2kCap("1");
            } else {
                EmUtils.getEmHidlService().setDisableC2kCap("0");
            }
        } catch (Exception e) {
            e.printStackTrace();
            Elog.e(TAG, "set property failed ...");
        }
        showDialog(REBOOT_DIALOG);
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.networkmode_switching);
        this.mPreferredNetworkSpinner = (Spinner) findViewById(R.id.networkModeSwitching);
        findViewById(R.id.network_mode_set_hint).setVisibility(8);
        findViewById(R.id.disable_eHRPD).setVisibility(8);
        this.mSimType = getIntent().getIntExtra("mSimType", 0);
        Elog.i(TAG, "mSimType " + this.mSimType);
        boolean zIsCdma = ModemCategory.isCdma();
        if (zIsCdma) {
            CheckBox checkBox = (CheckBox) findViewById(R.id.disable_c2k_capability);
            this.mCbDisableC2kCapabilit = checkBox;
            checkBox.setVisibility(0);
            this.mCbDisableC2kCapabilit.setOnCheckedChangeListener(this);
            handleQueryCdmaCapability();
            CheckBox checkBox2 = (CheckBox) findViewById(R.id.disable_eHRPD);
            this.mDisableeHRPDCheckBox = checkBox2;
            checkBox2.setOnCheckedChangeListener(this);
        } else {
            findViewById(R.id.disable_eHRPD).setVisibility(8);
        }
        CustomAdapter customAdapter = new CustomAdapter(this, android.R.layout.simple_spinner_item, this.mNetworkTypeLabel);
        customAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mPreferredNetworkSpinner.setAdapter((SpinnerAdapter) customAdapter);
        this.mPreferredNetworkSpinner.setOnItemSelectedListener(this.mPreferredNetworkListener);
        this.mTelephonyManager = (TelephonyManager) getSystemService("phone");
        if (zIsCdma) {
            queryeHRPDStatus();
        }
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (i != REBOOT_DIALOG) {
            return null;
        }
        return new AlertDialog.Builder(this).setTitle("Disable c2k capability").setMessage("Please reboot the phone!").setPositiveButton("OK", (DialogInterface.OnClickListener) null).create();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        int intExtra = getIntent().getIntExtra("mSimType", 0);
        Elog.i(TAG, "mSimType " + intExtra);
        SimCardInfo simCardInfo = new SimCardInfo(intExtra);
        this.mSimCard = simCardInfo;
        if (!ModemCategory.isSimReady(simCardInfo.getSimType())) {
            EmUtils.showToast("The card is not ready,please check it");
            Elog.w(TAG, "The card is not ready,please check it");
            this.mPreferredNetworkSpinner.setEnabled(false);
            return;
        }
        this.mSubId = ModemCategory.getSubIdBySlot(this.mSimCard.getSimType());
        Elog.d(TAG, "mSubId = " + this.mSubId);
        if (this.mSubId < 0) {
            Elog.w(TAG, "Invalid sub id");
            return;
        }
        this.mPreferredNetworkSpinner.setEnabled(true);
        this.mModemType = ModemCategory.getModemType();
        Elog.d(TAG, "mModemType = " + this.mModemType);
        new Thread(new Runnable() { // from class: com.mediatek.engineermode.networkselect.NetworkSelectActivity93.3
            @Override // java.lang.Runnable
            public void run() {
                if (NetworkSelectActivity93.this.mTelephonyManager == null) {
                    Elog.e(NetworkSelectActivity93.TAG, "mTelephonyManager = null");
                    return;
                }
                int preferredNetworkType = NetworkSelectActivity93.this.mTelephonyManager.getPreferredNetworkType(NetworkSelectActivity93.this.mSubId);
                Message message = new Message();
                message.what = 101;
                message.arg1 = preferredNetworkType;
                NetworkSelectActivity93.this.mHandler.sendMessage(message);
            }
        }).start();
    }

    void updateNetworkType(int i) {
        int iFindSpinnerIndexByType = findSpinnerIndexByType(i);
        Elog.d(TAG, "Index = " + iFindSpinnerIndexByType);
        if (iFindSpinnerIndexByType < 0 || iFindSpinnerIndexByType >= this.mPreferredNetworkSpinner.getCount()) {
            Elog.d(TAG, "Netwok select not support the type: " + i);
            EmUtils.showToast("Netwok select not support the type: " + i);
            this.mCurrentSelected = 21;
            this.mPreferredNetworkSpinner.setSelection(21, true);
            return;
        }
        this.mCurrentSelected = iFindSpinnerIndexByType;
        this.mPreferredNetworkSpinner.setSelection(iFindSpinnerIndexByType, true);
        Elog.d(TAG, "The NetworkSpinner show: " + iFindSpinnerIndexByType + " " + this.mNetworkTypeLabel[iFindSpinnerIndexByType]);
        StringBuilder sb = new StringBuilder();
        sb.append("Netwok select type is: ");
        sb.append(i);
        EmUtils.showToast(sb.toString());
    }
}
