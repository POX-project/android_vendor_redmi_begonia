package com.mediatek.engineermode.worldmode;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.app.ProgressDialog;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.CountDownTimer;
import android.os.Handler;
import android.os.Message;
import android.support.v4.os.EnvironmentCompat;
import android.telephony.PhoneStateListener;
import android.telephony.ServiceState;
import android.telephony.TelephonyManager;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;
import com.mediatek.engineermode.RatConfiguration;
import com.mediatek.engineermode.WorldModeUtil;
import com.mediatek.engineermode.bandselect.BandModeContent;

/* JADX INFO: loaded from: classes3.dex */
public class WorldModeActivity extends Activity implements View.OnClickListener {
    private static final String ACTION_SERVICE_STATE_CHANGED = "android.intent.action.SERVICE_STATE";
    private static final String ACTION_SET_RADIO_CAPABILITY_DONE = "android.intent.action.ACTION_SET_RADIO_CAPABILITY_DONE";
    private static final String ACTION_WORLD_MODE_CHANGED = "mediatek.intent.action.ACTION_WORLD_MODE_CHANGED";
    private static final int BAND_GSM_INDEX = 0;
    private static final int BAND_LTEFDD_INDEX = 2;
    private static final int BAND_LTETDD_INDEX = 3;
    private static final int BAND_UTMS_INDEX = 1;
    private static final int C2K_WORLD_MODE_AUTO = 12;
    private static final int DIALOG_WAIT = 1;
    private static final int ERROR = 3;
    private static final int EVENT_QUERY_CURRENT = 0;
    private static final int INDEX_BAND_MAX = 5;
    private static final int MASK_GSM = 1;
    private static final int MASK_LTEFDD = 16;
    private static final int MASK_LTETDD = 8;
    private static final int MASK_TDSCDMA = 2;
    private static final int MASK_WCDMA = 4;
    private static final int REBOOT_RF = 0;
    private static final String TAG = "WorldModeActivity";
    private static final int UNSUPPORT = 2;
    private static final int WORLD_MODE_AUTO = 10;
    private static final int WORLD_MODE_LFWG = 14;
    private static final int WORLD_MODE_LTCTG = 17;
    private static final int WORLD_MODE_LTG = 8;
    private static final int WORLD_MODE_LTTG = 13;
    private static final int WORLD_MODE_LWCG = 11;
    private static final int WORLD_MODE_LWG = 9;
    private static final int WORLD_MODE_RESULT_ERROR = 101;
    private static final int WORLD_MODE_RESULT_SUCCESS = 100;
    private static final int WORLD_MODE_RESULT_WM_ID_NOT_SUPPORT = 102;
    private Button mButtonSet;
    private Button mButtonSetValue;
    private ProgressDialog mProgressDialog;
    private RadioButton mRadioAuto;
    private RadioGroup mRadioGroup;
    private RadioButton mRadioLtctg;
    private RadioButton mRadioLttg;
    private RadioButton mRadioLwcg;
    private RadioButton mRadioLwg;
    private TelephonyManager mTelephonyManager;
    private TextView mTextCurrentMode;
    private TextView mTextMainProtocol;
    private TextView mTextWorldModeHint;
    private Toast mToast;
    private EditText mValue;
    private CountDownTimer timer;
    private static final boolean IS_NR_SUPPORT = RatConfiguration.isNrSupported();
    private static int mMode = 0;
    private static int mOldMode = 0;
    private static int mSetWorldMode = 0;
    private static int mBandMode = 0;
    private final int WAIT_TIME = 15;
    private String[] mWorldMode = {EnvironmentCompat.MEDIA_UNKNOWN, "lwg", "lttg"};
    private String[] mWorldModeFor6M = {EnvironmentCompat.MEDIA_UNKNOWN, "LWCG", "LtCTG"};
    private boolean mStateFlag = false;
    private final Handler mResponseHander = new Handler() { // from class: com.mediatek.engineermode.worldmode.WorldModeActivity.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (message.what != 0) {
                return;
            }
            AsyncResult asyncResult = (AsyncResult) message.obj;
            if (asyncResult.exception != null) {
                EmUtils.showToast("Failed to query band");
                Elog.e(WorldModeActivity.TAG, "Failed to query band");
                return;
            }
            String[] strArrSplit = ((String[]) asyncResult.result)[0].substring(7).split(",");
            long[] jArr = new long[5];
            if (strArrSplit != null && strArrSplit.length > 1) {
                for (int i = 0; i < jArr.length; i++) {
                    if (strArrSplit.length <= i || strArrSplit[i] == null) {
                        jArr[i] = 0;
                    } else {
                        try {
                            jArr[i] = Long.valueOf(strArrSplit[i].trim()).longValue();
                        } catch (NumberFormatException e) {
                            jArr[i] = 0;
                        }
                    }
                }
            }
            if (RatConfiguration.isGsmSupported() && jArr[0] > 0) {
                WorldModeActivity.access$012(1);
            }
            if (RatConfiguration.isTdscdmaSupported() && (jArr[1] & 63) > 0) {
                WorldModeActivity.access$012(2);
            }
            if (RatConfiguration.isWcdmaSupported() && (jArr[1] & 960) > 0) {
                WorldModeActivity.access$012(4);
            }
            if (RatConfiguration.isLteFddSupported() && jArr[2] > 0) {
                WorldModeActivity.access$012(16);
            }
            if (RatConfiguration.isLteTddSupported() && jArr[3] > 0) {
                WorldModeActivity.access$012(8);
            }
            Elog.d(WorldModeActivity.TAG, "mBandMode = " + WorldModeActivity.mBandMode);
            WorldModeActivity.this.showDialog(0);
        }
    };
    private PhoneStateListener mPhoneStateListener = new PhoneStateListener() { // from class: com.mediatek.engineermode.worldmode.WorldModeActivity.2
        public void onRadioPowerStateChanged(int i) {
            Elog.d(WorldModeActivity.TAG, "RadioPowerState:" + i);
            if (i == 1) {
                WorldModeActivity.this.updateUi();
            }
        }
    };
    private final BroadcastReceiver mBroadcastReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.worldmode.WorldModeActivity.3
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            String action = intent.getAction();
            Elog.d(WorldModeActivity.TAG, "[Receiver]+" + action);
            if (WorldModeActivity.ACTION_SET_RADIO_CAPABILITY_DONE.equals(action)) {
                WorldModeActivity.this.updateUi();
            } else if ("mediatek.intent.action.ACTION_WORLD_MODE_CHANGED".equals(action) && intent.getIntExtra(WorldModeUtil.EXTRA_WORLD_MODE_CHANGE_STATE, -1) == 1) {
                WorldModeActivity.this.updateUi();
            }
            Elog.d(WorldModeActivity.TAG, "[Receiver]-");
        }
    };
    private final BroadcastReceiver mBroadcastReceiverServiceStateChanged = new BroadcastReceiver() { // from class: com.mediatek.engineermode.worldmode.WorldModeActivity.4
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            Elog.d(WorldModeActivity.TAG, "[Receiver]+");
            ServiceState serviceStateNewFromBundle = ServiceState.newFromBundle(intent.getExtras());
            Elog.d(WorldModeActivity.TAG, "ss.getState(): " + serviceStateNewFromBundle.getState() + ",mStateFlag = " + WorldModeActivity.this.mStateFlag);
            Elog.d(WorldModeActivity.TAG, "[Receiver ACTION_SERVICE_STATE_CHANGED]");
            if (serviceStateNewFromBundle.getState() != 3) {
                if (WorldModeActivity.mSetWorldMode == 1 && WorldModeActivity.this.mStateFlag) {
                    WorldModeActivity.this.updateUi();
                    WorldModeActivity.this.mStateFlag = false;
                    if (WorldModeActivity.this.timer != null) {
                        WorldModeActivity.this.timer.cancel();
                        WorldModeActivity.this.timer = null;
                    }
                    if (WorldModeActivity.this.mProgressDialog != null) {
                        WorldModeActivity.this.mProgressDialog.dismiss();
                        int unused = WorldModeActivity.mSetWorldMode = 0;
                    }
                }
            } else if (WorldModeActivity.mSetWorldMode == 1 && !WorldModeActivity.this.mStateFlag) {
                WorldModeActivity.this.mStateFlag = true;
            }
            Elog.d(WorldModeActivity.TAG, "[Receiver]-");
        }
    };

    static /* synthetic */ int access$012(int i) {
        int i2 = mBandMode + i;
        mBandMode = i2;
        return i2;
    }

    private int getWorldMode() {
        return WorldModeUtil.getWorldModeId();
    }

    private boolean is6m() {
        return ModemCategory.isCdma();
    }

    private void queryCurrentBandModeAndSetNewWorldMode() {
        String[] strArr = {BandModeContent.QUERY_CURRENT_COMMAND, BandModeContent.SAME_COMMAND};
        Elog.d(TAG, "AT String:" + strArr[0]);
        sendATCommand(strArr, 0);
    }

    private void sendATCommand(String[] strArr, int i) {
        EmUtils.invokeOemRilRequestStringsEm(strArr, this.mResponseHander.obtainMessage(i));
    }

    private void showToast(String str) {
        Toast toast = this.mToast;
        if (toast != null) {
            toast.cancel();
        }
        Toast toastMakeText = Toast.makeText(this, str, 0);
        this.mToast = toastMakeText;
        toastMakeText.show();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateUi() {
        String string;
        int worldMode = getWorldMode();
        int i = WorldModeUtil.get3GDivisionDuplexMode();
        Elog.d(TAG, "MTK Get world mode: " + worldMode);
        if (true == IS_NR_SUPPORT) {
            string = WorldModeUtil.worldModeIdToString(worldMode);
        } else if (worldMode == 10 || worldMode == 12) {
            String string2 = getString(R.string.world_mode_auto);
            if (is6m()) {
                string = string2 + "(" + this.mWorldModeFor6M[i] + ")";
            } else {
                string = string2 + "(" + this.mWorldMode[i] + ")";
            }
            this.mRadioAuto.setChecked(true);
        } else if (worldMode == 8) {
            string = getString(R.string.world_mode_ltg);
            this.mRadioGroup.check(-1);
        } else if (worldMode == 9) {
            string = getString(R.string.world_mode_lwg);
            this.mRadioLwg.setChecked(true);
        } else if (worldMode == 13) {
            string = getString(R.string.world_mode_lttg);
            this.mRadioLttg.setChecked(true);
        } else if (worldMode == 17) {
            string = getString(R.string.world_mode_ltctg);
            this.mRadioLtctg.setChecked(true);
        } else if (worldMode == 11) {
            string = getString(R.string.world_mode_lwcg);
            this.mRadioLwcg.setChecked(true);
        } else if (worldMode == 14) {
            string = getString(R.string.world_mode_lfwg);
            this.mRadioGroup.check(-1);
        } else {
            string = this.mWorldMode[0];
            this.mRadioGroup.check(-1);
        }
        this.mTextCurrentMode.setText(getString(R.string.world_mode_current_value) + string);
        this.mValue.setText(String.valueOf(worldMode));
        mOldMode = worldMode;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view == this.mButtonSetValue) {
            try {
                mMode = Integer.parseInt(this.mValue.getText().toString());
            } catch (NumberFormatException e) {
                Elog.w(TAG, "Invalid format: " + ((Object) this.mValue.getText()));
                showToast("Invalid value");
            }
        } else if (view == this.mButtonSet) {
            if (this.mRadioLwg.isChecked()) {
                mMode = 9;
            } else if (this.mRadioLttg.isChecked()) {
                mMode = 13;
            } else if (this.mRadioAuto.isChecked()) {
                if (is6m()) {
                    mMode = 12;
                } else {
                    mMode = 10;
                }
            } else if (this.mRadioLtctg.isChecked()) {
                mMode = 17;
            } else if (!this.mRadioLwcg.isChecked()) {
                return;
            } else {
                mMode = 11;
            }
        }
        if (mOldMode == mMode) {
            Elog.i(TAG, "The mode is not changed!");
        } else {
            mBandMode = 0;
            queryCurrentBandModeAndSetNewWorldMode();
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.world_mode);
        this.mRadioLtctg = (RadioButton) findViewById(R.id.world_mode_ltctg);
        this.mRadioLttg = (RadioButton) findViewById(R.id.world_mode_lttg);
        this.mRadioLwg = (RadioButton) findViewById(R.id.world_mode_lwg);
        this.mRadioLwcg = (RadioButton) findViewById(R.id.world_mode_lwcg);
        this.mRadioAuto = (RadioButton) findViewById(R.id.world_mode_auto_switch);
        this.mRadioGroup = (RadioGroup) findViewById(R.id.world_mode_radio_group);
        this.mButtonSet = (Button) findViewById(R.id.world_mode_set);
        this.mTextCurrentMode = (TextView) findViewById(R.id.world_mode_current_value);
        this.mTextMainProtocol = (TextView) findViewById(R.id.world_mode_main_protocol);
        TextView textView = (TextView) findViewById(R.id.world_mode_hint);
        this.mTextWorldModeHint = textView;
        textView.setText(R.string.world_mode_hint_aosp);
        this.mValue = (EditText) findViewById(R.id.world_mode_value);
        this.mButtonSetValue = (Button) findViewById(R.id.world_mode_set_value);
        if (is6m()) {
            this.mRadioLwg.setVisibility(8);
            this.mRadioLttg.setVisibility(8);
        } else {
            this.mRadioLtctg.setVisibility(8);
            this.mRadioLwcg.setVisibility(8);
        }
        if (true == IS_NR_SUPPORT) {
            this.mRadioLtctg.setVisibility(8);
            this.mRadioLttg.setVisibility(8);
            this.mRadioLwg.setVisibility(8);
            this.mRadioLttg.setVisibility(8);
            this.mRadioLwcg.setVisibility(8);
            this.mRadioAuto.setVisibility(8);
            this.mButtonSet.setVisibility(8);
            this.mTextWorldModeHint.setVisibility(8);
        }
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("mediatek.intent.action.ACTION_WORLD_MODE_CHANGED");
        intentFilter.addAction(ACTION_SET_RADIO_CAPABILITY_DONE);
        registerReceiver(this.mBroadcastReceiver, intentFilter);
        IntentFilter intentFilter2 = new IntentFilter();
        intentFilter2.addAction(ACTION_SERVICE_STATE_CHANGED);
        registerReceiver(this.mBroadcastReceiverServiceStateChanged, intentFilter2);
        TelephonyManager telephonyManager = (TelephonyManager) getSystemService("phone");
        this.mTelephonyManager = telephonyManager;
        telephonyManager.listen(this.mPhoneStateListener, 8388608);
        updateUi();
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (i == 0) {
            return new AlertDialog.Builder(this).setTitle("Hint").setMessage("This will cost several seconds,\nUI will hang during reboot RF!").setPositiveButton("Confirm", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.worldmode.WorldModeActivity.6
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    if (i2 == -1) {
                        int radioPowerState = WorldModeActivity.this.mTelephonyManager.getRadioPowerState();
                        int worldModeWithBand = radioPowerState != 2 ? WorldModeUtil.setWorldModeWithBand(WorldModeActivity.mMode, WorldModeActivity.mBandMode) : 101;
                        Elog.i(WorldModeActivity.TAG, "set world mode radioState:" + radioPowerState + ", ret:" + worldModeWithBand);
                        if (worldModeWithBand == 100) {
                            int unused = WorldModeActivity.mSetWorldMode = 1;
                            WorldModeActivity.this.startTimer();
                            WorldModeActivity.this.showDialog(1);
                        } else if (worldModeWithBand == 102) {
                            WorldModeActivity.this.showDialog(2);
                        } else if (worldModeWithBand == 101) {
                            WorldModeActivity.this.showDialog(3);
                        }
                    }
                    dialogInterface.dismiss();
                }
            }).setNegativeButton("Cancel", (DialogInterface.OnClickListener) null).create();
        }
        if (i != 1) {
            if (i != 2) {
                return i != 3 ? super.onCreateDialog(i) : new AlertDialog.Builder(this).setTitle("Error").setMessage("The world mode is set error!").setPositiveButton("Confirm", (DialogInterface.OnClickListener) null).create();
            }
            return new AlertDialog.Builder(this).setTitle("Unsupport").setMessage("The band is not support the world mode id!").setPositiveButton("Confirm", (DialogInterface.OnClickListener) null).create();
        }
        ProgressDialog progressDialog = new ProgressDialog(this);
        this.mProgressDialog = progressDialog;
        progressDialog.setTitle("Waiting");
        this.mProgressDialog.setMessage("Waiting rf reboot");
        this.mProgressDialog.setCancelable(false);
        this.mProgressDialog.setIndeterminate(true);
        Elog.d(TAG, "After timer.start(");
        return this.mProgressDialog;
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        Elog.d(TAG, "onDestroy()");
        unregisterReceiver(this.mBroadcastReceiver);
        unregisterReceiver(this.mBroadcastReceiverServiceStateChanged);
        this.mResponseHander.removeCallbacksAndMessages(null);
        this.mTelephonyManager.listen(this.mPhoneStateListener, 0);
        super.onDestroy();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        if (ModemCategory.getCapabilitySim() == 0) {
            this.mTextMainProtocol.setText(String.format("%sSIM1", getResources().getString(R.string.world_mode_main_protocol)));
        } else if (ModemCategory.getCapabilitySim() == 1) {
            this.mTextMainProtocol.setText(String.format("%sSIM2", getResources().getString(R.string.world_mode_main_protocol)));
        }
    }

    public void startTimer() {
        CountDownTimer countDownTimer = new CountDownTimer(15000L, 1000L) { // from class: com.mediatek.engineermode.worldmode.WorldModeActivity.5
            @Override // android.os.CountDownTimer
            public void onFinish() {
                Elog.d(WorldModeActivity.TAG, "millisUntilFinishied finish");
                WorldModeActivity.this.mProgressDialog.dismiss();
                WorldModeActivity.this.timer.cancel();
                WorldModeActivity.this.timer = null;
            }

            @Override // android.os.CountDownTimer
            public void onTick(long j) {
                Elog.d(WorldModeActivity.TAG, "WAIT_TIME = 15");
                Elog.d(WorldModeActivity.TAG, "millisUntilFinishied = " + j);
            }
        };
        this.timer = countDownTimer;
        countDownTimer.start();
    }
}
