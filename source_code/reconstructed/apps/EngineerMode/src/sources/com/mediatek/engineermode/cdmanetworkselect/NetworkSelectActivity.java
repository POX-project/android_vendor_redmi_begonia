package com.mediatek.engineermode.cdmanetworkselect;

import android.app.Activity;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.provider.Settings;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class NetworkSelectActivity extends Activity implements CompoundButton.OnCheckedChangeListener {
    private static final int CDMA_1X_ONLY = 5;
    private static final int CDMA_1X_ONLY_INDEX = 1;
    private static final int EVDO_ONLY = 6;
    private static final int EVDO_ONLY_INDEX = 2;
    private static final int EVENT_QUERY_EHRPD_ENABLE_DONE = 103;
    private static final int EVENT_QUERY_NETWORKMODE_DONE = 101;
    private static final int EVENT_SET_EHRPD_ENABLE_DONE = 104;
    private static final int EVENT_SET_NETWORKMODE_DONE = 102;
    private static final int GLOBAL_MODE = 10;
    private static final int GLOBAL_MODE_INDEX = 3;
    private static final int HYBRID = 4;
    private static final int HYBRID_INDEX = 0;
    private static final int LTE_CDMA_MODE = 8;
    private static final int LTE_CDMA_MODE_INDEX = 4;
    private static final int LTE_GSM_UMTS_MODE = 9;
    private static final int LTE_GSM_UMTS_MODE_INDEX = 5;
    private static final String TAG = "NetworkMode_cdma";
    private int mSimType;
    int selectNetworkMode = 0;
    private boolean mFirstEnter = true;
    private boolean mEHRPDFirstEnter = true;
    private boolean mSupportMode = true;
    private int mSubId = 1;
    private Spinner mPreferredNetworkSpinner = null;
    private CheckBox mDisableeHRPDCheckBox = null;
    private ArrayAdapter<String> adapter = null;
    private String[] CdmaMode = {"Hybrid", "CDMA 1X only", "EVDO only"};
    private String[] GsmMode = {"LTE/GSM/UMTS/CDMA", "LTE/CDMA", "LTE/GSM/UMTS"};
    private TelephonyManager mTelephonyManager = null;
    private Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.cdmanetworkselect.NetworkSelectActivity.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            switch (message.what) {
                case 101:
                    Elog.d(NetworkSelectActivity.TAG, "Get response EVENT_QUERY_NETWORKMODE_DONE");
                    int i = message.arg1;
                    if (i <= 0) {
                        Elog.d(NetworkSelectActivity.TAG, "query preferred failed");
                        EmUtils.showToast("query preferred failed");
                    } else {
                        Elog.d(NetworkSelectActivity.TAG, "Get Preferred Type " + i);
                        EmUtils.showToast("Get NetworkMode Type " + i);
                        NetworkSelectActivity.this.mSupportMode = true;
                        switch (i) {
                            case 4:
                                NetworkSelectActivity.this.mPreferredNetworkSpinner.setSelection(0, true);
                                break;
                            case 5:
                                NetworkSelectActivity.this.mPreferredNetworkSpinner.setSelection(1, true);
                                break;
                            case 6:
                                NetworkSelectActivity.this.mPreferredNetworkSpinner.setSelection(2, true);
                                break;
                            case 7:
                            default:
                                NetworkSelectActivity.this.mSupportMode = false;
                                break;
                            case 8:
                                NetworkSelectActivity.this.mPreferredNetworkSpinner.setSelection(4, true);
                                break;
                            case 9:
                                NetworkSelectActivity.this.mPreferredNetworkSpinner.setSelection(5, true);
                                break;
                            case 10:
                                NetworkSelectActivity.this.mPreferredNetworkSpinner.setSelection(3, true);
                                break;
                        }
                        if (!NetworkSelectActivity.this.mSupportMode) {
                            EmUtils.showToast("cdma netwok select not support the type: " + i, 0);
                            Elog.w(NetworkSelectActivity.TAG, "cdma netwok select not support the type: ");
                        }
                    }
                    break;
                case 102:
                    String str = message.arg1 == 0 ? "set the network succeed" : "set the network failed";
                    EmUtils.showToast(str);
                    Elog.d(NetworkSelectActivity.TAG, str);
                    break;
                case 103:
                    AsyncResult asyncResult = (AsyncResult) message.obj;
                    if (asyncResult.exception != null) {
                        EmUtils.showToast(R.string.query_eHRPD_state_fail, 0);
                        Elog.e(NetworkSelectActivity.TAG, NetworkSelectActivity.this.getString(R.string.query_eHRPD_state_fail));
                        break;
                    } else if (asyncResult.result != null && (asyncResult.result instanceof String[])) {
                        String[] strArr = (String[]) asyncResult.result;
                        if (strArr.length > 0 && strArr[0] != null) {
                            Elog.d(NetworkSelectActivity.TAG, "data[0]:" + strArr[0]);
                            if (NetworkSelectActivity.this.mEHRPDFirstEnter) {
                                NetworkSelectActivity.this.mEHRPDFirstEnter = false;
                            }
                            NetworkSelectActivity.this.mDisableeHRPDCheckBox.setChecked(strArr[0].equals("+EHRPD:0"));
                            break;
                        }
                    }
                    break;
                case 104:
                    if (((AsyncResult) message.obj).exception != null) {
                        EmUtils.showToast(R.string.set_eHRPD_state_fail, 0);
                        Elog.e(NetworkSelectActivity.TAG, NetworkSelectActivity.this.getString(R.string.set_eHRPD_state_fail));
                        NetworkSelectActivity.this.queryeHRPDStatus();
                    }
                    break;
            }
        }
    };
    private AdapterView.OnItemSelectedListener mPreferredNetworkHandler = new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.cdmanetworkselect.NetworkSelectActivity.2
        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onItemSelected(AdapterView adapterView, View view, int i, long j) {
            if (i == 0) {
                NetworkSelectActivity.this.selectNetworkMode = 4;
            } else if (i == 1) {
                NetworkSelectActivity.this.selectNetworkMode = 5;
            } else if (i == 2) {
                NetworkSelectActivity.this.selectNetworkMode = 6;
            } else if (i == 3) {
                NetworkSelectActivity.this.selectNetworkMode = 10;
            } else if (i == 4) {
                NetworkSelectActivity.this.selectNetworkMode = 8;
            } else if (i == 5) {
                NetworkSelectActivity.this.selectNetworkMode = 9;
            }
            if (NetworkSelectActivity.this.mFirstEnter) {
                NetworkSelectActivity.this.mFirstEnter = false;
                return;
            }
            Elog.d(NetworkSelectActivity.TAG, "selectNetworkMode " + NetworkSelectActivity.this.selectNetworkMode);
            EmUtils.showToast("selectNetworkMode to " + NetworkSelectActivity.this.selectNetworkMode);
            new Thread(new Runnable() { // from class: com.mediatek.engineermode.cdmanetworkselect.NetworkSelectActivity.2.1
                @Override // java.lang.Runnable
                public void run() {
                    boolean preferredNetworkType = NetworkSelectActivity.this.mTelephonyManager.setPreferredNetworkType(NetworkSelectActivity.this.mSubId, NetworkSelectActivity.this.selectNetworkMode);
                    Message message = new Message();
                    message.what = 102;
                    message.arg1 = preferredNetworkType ? 0 : -1;
                    NetworkSelectActivity.this.mHandler.sendMessage(message);
                }
            }).start();
            Settings.Global.putInt(NetworkSelectActivity.this.getContentResolver(), "preferred_network_mode" + NetworkSelectActivity.this.mSubId, NetworkSelectActivity.this.selectNetworkMode);
            Elog.d(NetworkSelectActivity.TAG, "write selectNetworkMode to settings ");
        }

        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onNothingSelected(AdapterView adapterView) {
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void queryeHRPDStatus() {
        sendAtCommand(ModemCategory.getCdmaCmdArr(new String[]{"AT+eHRPD?", "+EHRPD:", "DESTRILD:C2K"}), 103);
    }

    private void sendAtCommand(String[] strArr, int i) {
        Elog.d(TAG, "sendAtCommand() " + strArr[0]);
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
        Elog.d(TAG, "m4GDataOnlyCheckBox check is" + z);
        if (this.mEHRPDFirstEnter) {
            return;
        }
        this.mDisableeHRPDCheckBox.setChecked(z);
        seteHRPDStatus(!z ? 1 : 0);
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.networkmode_switching);
        this.mPreferredNetworkSpinner = (Spinner) findViewById(R.id.networkModeSwitching);
        this.mDisableeHRPDCheckBox = (CheckBox) findViewById(R.id.disable_eHRPD);
        this.mTelephonyManager = (TelephonyManager) getSystemService("phone");
    }

    @Override // android.app.Activity
    protected void onResume() {
        this.mSimType = getIntent().getIntExtra("mSimType", 0);
        Elog.d(TAG, "onCreate mSimType " + this.mSimType);
        int[] subId = SubscriptionManager.getSubId(this.mSimType);
        if (subId != null) {
            for (int i = 0; i < subId.length; i++) {
                Elog.i(TAG, "subId[" + i + "]: " + subId[i]);
            }
        }
        if (subId == null || subId.length == 0 || !SubscriptionManager.isValidSubscriptionId(subId[0])) {
            EmUtils.showToast("Invalid sub id, please insert SIM Card!", 0);
            Elog.e(TAG, "Invalid sub id");
        } else {
            this.mSubId = subId[0];
        }
        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.adapter = arrayAdapter;
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        int i2 = 0;
        while (true) {
            String[] strArr = this.CdmaMode;
            if (i2 >= strArr.length) {
                break;
            }
            this.adapter.add(strArr[i2]);
            i2++;
        }
        int i3 = 0;
        while (true) {
            String[] strArr2 = this.GsmMode;
            if (i3 >= strArr2.length) {
                this.mPreferredNetworkSpinner.setAdapter((SpinnerAdapter) this.adapter);
                this.mPreferredNetworkSpinner.setOnItemSelectedListener(this.mPreferredNetworkHandler);
                this.mDisableeHRPDCheckBox.setOnCheckedChangeListener(this);
                this.mFirstEnter = true;
                new Thread(new Runnable() { // from class: com.mediatek.engineermode.cdmanetworkselect.NetworkSelectActivity.3
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
                queryeHRPDStatus();
                super.onResume();
                return;
            }
            this.adapter.add(strArr2[i3]);
            i3++;
        }
    }
}
