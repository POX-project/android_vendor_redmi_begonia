package com.mediatek.engineermode.wifi;

import android.R;
import android.app.Activity;
import android.app.AlertDialog;
import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.net.wifi.WifiManager;
import android.os.Bundle;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmApplication;

/* JADX INFO: loaded from: classes3.dex */
public class MtkCTIATestDialog extends AlertDialog implements DialogInterface.OnClickListener, AdapterView.OnItemSelectedListener {
    private static final String CTIA_PREF = "CTIA_PREF";
    private static final int NEGATIVE_BUTTON = -2;
    private static final int NOTIF_ID_ENABLE_CTIA = 10;
    private static final int POSITIVE_BUTTON = -1;
    private static final String PREF_CTIA_DUMP_BEACON = "CTIA_DUMP_1";
    private static final String PREF_CTIA_DUMP_COUNTER = "CTIA_DUMP_2";
    private static final String PREF_CTIA_DUMP_INTERVAL = "CTIA_DUMP_3";
    private static final String PREF_CTIA_ENABLE = "CTIA_ENABLE";
    private static final String PREF_CTIA_RATE = "CTIA_RATE";
    private static final String TAG = "WifiCTIA";
    private View.OnClickListener mBtnClickListener;
    private CheckBox mCheckbox;
    private Context mContext;
    private CheckBox mDumpBeaconCheckbox;
    private CheckBox mDumpCounterCheckbox;
    private Button mGetBtn;
    private EditText mIdEditText;
    private EditText mIntervalEditText;
    private String[] mRate;
    private Spinner mRateSpinner;
    private int mRateVal;
    private Button mSetBtn;
    private EditText mValEditText;
    private View mView;
    private WifiManager mWm;

    protected MtkCTIATestDialog(Context context) {
        super(context);
        this.mView = null;
        this.mWm = null;
        this.mContext = null;
        this.mRate = new String[]{"Automatic", "1M", "2M", "5_5M", "11M", "6M", "9M", "12M", "18M", "24M", "36M", "48M", "54M", "20MCS0800", "20MCS01800", "20MCS2800", "20MCS3800", "20MCS4800", "20MCS5800", "20MCS6800", "20MCS7800", "20MCS0400", "20MCS1400", "20MCS2400", "20MCS3400", "20MCS4400", "20MCS5400", "20MCS6400", "20MCS7400", "40MCS0800", "40MCS1800", "40MCS2800", "40MCS3800", "40MCS4800", "40MCS5800", "40MCS6800", "40MCS7800", "40MCS32800", "40MCS0400", "40MCS1400", "40MCS2400", "40MCS3400", "40MCS4400", "40MCS5400", "40MCS6400", "40MCS7400", "40MCS32400"};
        this.mCheckbox = null;
        this.mRateSpinner = null;
        this.mRateVal = 0;
        this.mGetBtn = null;
        this.mSetBtn = null;
        this.mIdEditText = null;
        this.mValEditText = null;
        this.mIntervalEditText = null;
        this.mDumpBeaconCheckbox = null;
        this.mDumpCounterCheckbox = null;
        this.mBtnClickListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.wifi.MtkCTIATestDialog.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (view == MtkCTIATestDialog.this.mSetBtn) {
                    try {
                        int i = (int) Long.parseLong(MtkCTIATestDialog.this.mIdEditText.getText().toString(), 16);
                        int i2 = (int) Long.parseLong(MtkCTIATestDialog.this.mValEditText.getText().toString(), 16);
                        int iDoCTIATestSet = EMWifi.doCTIATestSet(i, i2);
                        if (iDoCTIATestSet != 0) {
                            MtkCTIATestDialog.this.mValEditText.setText("ERROR");
                        }
                        Elog.i(MtkCTIATestDialog.TAG, "Set ret: " + iDoCTIATestSet + " ID: " + i + " VAL: " + i2);
                        return;
                    } catch (NumberFormatException e) {
                        e.printStackTrace();
                        MtkCTIATestDialog.this.mValEditText.setText("0");
                        return;
                    }
                }
                if (view == MtkCTIATestDialog.this.mGetBtn) {
                    try {
                        int i3 = (int) Long.parseLong(MtkCTIATestDialog.this.mIdEditText.getText().toString(), 16);
                        long[] jArr = {0};
                        int iDoCTIATestGet = EMWifi.doCTIATestGet(i3, jArr);
                        Elog.i(MtkCTIATestDialog.TAG, "Get ret: " + iDoCTIATestGet + " ID: " + i3 + " VAL: " + jArr[0]);
                        MtkCTIATestDialog.this.mValEditText.setText(iDoCTIATestGet == 0 ? Long.toString(jArr[0], 16) : "UNKNOWN");
                    } catch (NumberFormatException e2) {
                        e2.printStackTrace();
                        MtkCTIATestDialog.this.mValEditText.setText("0");
                    }
                }
            }
        };
        this.mContext = context;
        this.mWm = (WifiManager) context.getSystemService("wifi");
    }

    static void dismissCtiaEnabledNotify(Context context) {
        ((NotificationManager) context.getSystemService("notification")).cancel(10);
    }

    static void emitNotif(Context context, int i, String str, String str2, Class<? extends Activity> cls) {
        Notification notificationBuild = new Notification.Builder(context, EmApplication.getSilentNotificationChannelID()).setSmallIcon(R.drawable.ic_dialog_info).setContentTitle(str).build();
        notificationBuild.flags |= 32;
        Intent intent = new Intent(context, cls);
        intent.setFlags(335544320);
        notificationBuild.setLatestEventInfo(context, str, str2, PendingIntent.getActivity(context, 0, intent, 0));
        ((NotificationManager) context.getSystemService("notification")).notify(i, notificationBuild);
    }

    private int getRateFromSpinner() {
        return this.mRateSpinner.getSelectedItemPosition();
    }

    private void handleRateChange(int i) {
        this.mRateVal = i;
    }

    private void initLayout() {
        setLayout(com.mediatek.engineermode.R.layout.ctiasetting);
        setButtons(com.mediatek.engineermode.R.string.em_ok, com.mediatek.engineermode.R.string.wifi_cancel, 0);
    }

    static void initWifiCtiaOnEnabled(Context context) {
        SharedPreferences sharedPreferences = context.getSharedPreferences(CTIA_PREF, 0);
        boolean z = sharedPreferences.getBoolean(PREF_CTIA_ENABLE, false);
        int i = sharedPreferences.getInt(PREF_CTIA_RATE, 0);
        boolean z2 = sharedPreferences.getBoolean(PREF_CTIA_DUMP_BEACON, false);
        boolean z3 = sharedPreferences.getBoolean(PREF_CTIA_DUMP_COUNTER, false);
        int i2 = sharedPreferences.getInt(PREF_CTIA_DUMP_INTERVAL, 1);
        if (z) {
            Elog.i(TAG, "doCTIATestOn: " + EMWifi.doCtiaTestOn());
        } else {
            Elog.i(TAG, "doCTIATestOff: " + EMWifi.doCtiaTestOff());
        }
        Elog.i(TAG, "doCTIATestRate: " + EMWifi.doCtiaTestRate(i));
        int i3 = (int) Long.parseLong("10020000", 16);
        Elog.i(TAG, "doCTIATestSet: id: " + i3 + " val: " + (z2 ? 1 : 0) + " result: " + EMWifi.doCTIATestSet(i3, z2 ? 1L : 0L));
        int i4 = (int) Long.parseLong("10020001", 16);
        StringBuilder sb = new StringBuilder();
        sb.append("0000");
        sb.append(Integer.toHexString(i2));
        sb.append(z3 ? "01" : "00");
        int i5 = (int) Long.parseLong(sb.toString(), 16);
        Elog.i(TAG, "doCTIATestSet: id: " + i4 + " val: " + i5 + " result: " + EMWifi.doCTIATestSet(i4, i5));
    }

    public static boolean isWifiCtiaEnabled(Context context) {
        return context.getSharedPreferences(CTIA_PREF, 0).getBoolean(PREF_CTIA_ENABLE, false);
    }

    static void notifyCtiaEnabled(Context context) {
        emitNotif(context, 10, "WIFI CTIA is Enabled", "click here to switch CTIA mode", WifiTestSetting.class);
    }

    private void onReferenceViews(View view) {
        Spinner spinner = (Spinner) view.findViewById(com.mediatek.engineermode.R.id.rate_spinner);
        this.mRateSpinner = spinner;
        setSpinnerAdapter(spinner, this.mRate);
        this.mGetBtn = (Button) view.findViewById(com.mediatek.engineermode.R.id.get_btn);
        Button button = (Button) view.findViewById(com.mediatek.engineermode.R.id.set_btn);
        this.mSetBtn = button;
        button.setOnClickListener(this.mBtnClickListener);
        this.mGetBtn.setOnClickListener(this.mBtnClickListener);
        this.mRateSpinner.setOnItemSelectedListener(this);
        this.mCheckbox = (CheckBox) view.findViewById(com.mediatek.engineermode.R.id.enable_checkbox);
        this.mIdEditText = (EditText) view.findViewById(com.mediatek.engineermode.R.id.idedittext);
        this.mValEditText = (EditText) view.findViewById(com.mediatek.engineermode.R.id.valedittext);
        this.mIntervalEditText = (EditText) view.findViewById(com.mediatek.engineermode.R.id.interval_edittext);
        this.mDumpBeaconCheckbox = (CheckBox) view.findViewById(com.mediatek.engineermode.R.id.enable_dump_checkbox);
        this.mDumpCounterCheckbox = (CheckBox) view.findViewById(com.mediatek.engineermode.R.id.enable_dump_counter_checkbox);
    }

    private void restorePrefs() {
        SharedPreferences sharedPreferences = this.mContext.getSharedPreferences(CTIA_PREF, 0);
        boolean z = sharedPreferences.getBoolean(PREF_CTIA_ENABLE, false);
        int i = sharedPreferences.getInt(PREF_CTIA_RATE, 0);
        boolean z2 = sharedPreferences.getBoolean(PREF_CTIA_DUMP_BEACON, false);
        boolean z3 = sharedPreferences.getBoolean(PREF_CTIA_DUMP_COUNTER, false);
        int i2 = sharedPreferences.getInt(PREF_CTIA_DUMP_INTERVAL, 1);
        this.mCheckbox.setChecked(z);
        this.mRateSpinner.setSelection(i);
        this.mDumpBeaconCheckbox.setChecked(z2);
        this.mDumpCounterCheckbox.setChecked(z3);
        this.mIntervalEditText.setText(i2 + "");
    }

    private void savePrefs() {
        int i;
        SharedPreferences.Editor editorEdit = this.mContext.getSharedPreferences(CTIA_PREF, 0).edit();
        editorEdit.putBoolean(PREF_CTIA_ENABLE, this.mCheckbox.isChecked());
        editorEdit.putInt(PREF_CTIA_RATE, getRateFromSpinner());
        editorEdit.putBoolean(PREF_CTIA_DUMP_BEACON, this.mDumpBeaconCheckbox.isChecked());
        editorEdit.putBoolean(PREF_CTIA_DUMP_COUNTER, this.mDumpCounterCheckbox.isChecked());
        try {
            i = Integer.parseInt(this.mIntervalEditText.getText().toString());
        } catch (NumberFormatException e) {
            i = 1;
        }
        if (i > 255) {
            i = 255;
        } else if (i < 1) {
            i = 1;
        }
        editorEdit.putInt(PREF_CTIA_DUMP_INTERVAL, i);
        editorEdit.commit();
    }

    private void setButtons(int i, int i2, int i3) {
        Context context = getContext();
        if (i > 0) {
            setButton(context.getString(i), this);
        }
        if (i2 > 0) {
            setButton2(context.getString(i2), this);
        }
        if (i3 > 0) {
            setButton3(context.getString(i3), this);
        }
    }

    private void setLayout(int i) {
        View viewInflate = getLayoutInflater().inflate(i, (ViewGroup) null);
        this.mView = viewInflate;
        setView(viewInflate);
        onReferenceViews(this.mView);
    }

    private void setSpinnerAdapter(Spinner spinner, String[] strArr) {
        if (strArr != null) {
            ArrayAdapter arrayAdapter = new ArrayAdapter(getContext(), R.layout.simple_spinner_item, strArr);
            arrayAdapter.setDropDownViewResource(R.layout.simple_spinner_dropdown_item);
            spinner.setAdapter((SpinnerAdapter) arrayAdapter);
        }
    }

    @Override // android.content.DialogInterface.OnClickListener
    public void onClick(DialogInterface dialogInterface, int i) {
        int i2;
        if (i != -1) {
            if (i == -2) {
                Elog.v(TAG, "cancel");
                dismiss();
                return;
            }
            return;
        }
        savePrefs();
        if (this.mCheckbox.isChecked()) {
            Elog.i(TAG, "doCTIATestOn: " + EMWifi.doCtiaTestOn());
            if (((WifiManager) getContext().getSystemService("wifi")).getWifiState() == 3) {
                notifyCtiaEnabled(getContext());
            }
            Elog.i(TAG, "enableService true");
            WifiWatchService.enableService(this.mContext, true);
        } else {
            Elog.i(TAG, "doCTIATestOff: " + EMWifi.doCtiaTestOff());
            dismissCtiaEnabledNotify(getContext());
            Elog.i(TAG, "enableService false");
            WifiWatchService.enableService(this.mContext, false);
        }
        Elog.i(TAG, "doCTIATestRate: " + EMWifi.doCtiaTestRate(this.mRateVal));
        int i3 = (int) Long.parseLong("10020000", 16);
        boolean zIsChecked = this.mDumpBeaconCheckbox.isChecked();
        Elog.i(TAG, "doCTIATestSet: id: " + i3 + " val: " + (zIsChecked ? 1 : 0) + " result: " + EMWifi.doCTIATestSet(i3, zIsChecked ? 1L : 0L));
        try {
            i2 = Integer.parseInt(this.mIntervalEditText.getText().toString());
        } catch (NumberFormatException e) {
            this.mIntervalEditText.setText("1");
            i2 = 1;
        }
        if (i2 > 255) {
            this.mIntervalEditText.setText("255");
            i2 = 255;
        } else if (i2 < 1) {
            this.mIntervalEditText.setText("1");
            i2 = 1;
        }
        int i4 = (int) Long.parseLong("10020001", 16);
        StringBuilder sb = new StringBuilder();
        sb.append("0000");
        sb.append(Integer.toHexString(i2));
        sb.append(this.mDumpCounterCheckbox.isChecked() ? "01" : "00");
        int i5 = (int) Long.parseLong(sb.toString(), 16);
        Elog.i(TAG, "doCTIATestSet: id: " + i4 + " val: " + i5 + " result: " + EMWifi.doCTIATestSet(i4, i5));
        dismiss();
    }

    @Override // android.app.AlertDialog, android.app.Dialog
    protected void onCreate(Bundle bundle) {
        initLayout();
        restorePrefs();
        super.onCreate(bundle);
    }

    @Override // android.widget.AdapterView.OnItemSelectedListener
    public void onItemSelected(AdapterView adapterView, View view, int i, long j) {
        if (adapterView == this.mRateSpinner) {
            handleRateChange(getRateFromSpinner());
        }
    }

    @Override // android.widget.AdapterView.OnItemSelectedListener
    public void onNothingSelected(AdapterView<?> adapterView) {
    }
}
