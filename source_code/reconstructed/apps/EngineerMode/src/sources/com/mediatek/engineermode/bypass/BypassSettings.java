package com.mediatek.engineermode.bypass;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.os.SystemProperties;
import android.support.v4.content.LocalBroadcastManager;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.BaseAdapter;
import android.widget.CheckBox;
import android.widget.CheckedTextView;
import android.widget.CompoundButton;
import android.widget.ListAdapter;
import android.widget.ListView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;

/* JADX INFO: loaded from: classes2.dex */
public class BypassSettings extends Activity {
    private static final String ACTION_MTK_LOGGER = "com.mediatek.mtklogger.bypass";
    private static final String ACTION_MTK_LOGGER_RESULT = "com.via.bypass.loggerui";
    private static final String ACTION_USB_BYPASS_GETBYPASS = "com.via.bypass.action.getbypass";
    private static final String ACTION_USB_BYPASS_GETBYPASS_RESULT = "com.via.bypass.action.getbypass_result";
    private static final String ACTION_USB_BYPASS_SETBYPASS = "com.via.bypass.action.setbypass";
    private static final String ACTION_USB_BYPASS_SETBYPASS_RESULT = "com.via.bypass.action.setbypass_result";
    private static final String ACTION_USB_BYPASS_SETFUNCTION = "com.via.bypass.action.setfunction";
    private static final String ACTION_USB_BYPASS_SETTETHERFUNCTION = "com.via.bypass.action.settetherfunction";
    private static final int BYPASS_CODE_ETS = 8;
    private static final String CMD_CODE = "cmd_code";
    private static final String CMD_CODE_ALL = "all";
    private static final String CMD_FILE = "cmd_file";
    private static final String CMD_NAME = "cmd_name";
    private static final String CMD_NAME_C2K_STATUS = "get_c2klog_status";
    private static final String CMD_NAME_DISABLE = "disable";
    private static final String CMD_NAME_ENABLE = "enable";
    private static final String CMD_NAME_QUERY = "query";
    private static final String CMD_RESULT = "cmd_result";
    private static final boolean DBG = true;
    private static final int DIALOG_WARNING = 1;
    private static final int OPT_MENU_ITEM_BYPASS_ALL = 1;
    private static final int OPT_MENU_ITEM_CLOSS_BYPASS = 2;
    public static final String PREF_SERV_ENABLE = "service_enable";
    private static final String TAG = "BypassSettings";
    public static final String USBMANAGER_ACTION_USB_STATE = "android.hardware.usb.action.USB_STATE";
    private static final String USBMANAGER_USB_CONNECTED = "connected";
    private static final String USB_FUNCTION_BYPASS = "via_bypass";
    private static final String VALUE_BYPASS_CODE = "com.via.bypass.bypass_code";
    private static final String VALUE_ENABLE_BYPASS = "com.via.bypass.enable_bypass";
    private static final String VALUE_ISSET_BYPASS = "com.via.bypass.isset_bypass";
    private BypassAdapter<String> mBypassAdapter;
    private int[] mBypassCodes;
    private String[] mBypassNames;
    private CheckBox mCBBypassServiceEnable;
    private CheckBox mCbRndis;
    private String mCmdCode;
    private String mCmdFile;
    private String mCmdName;
    private boolean mLaunchByCommand;
    private ListView mLvBypass;
    private final int mBypassNone = 0;
    private boolean mBypassEnabled = false;
    private int mBypassAllCode = 0;
    private int mBypassCode = 0;
    private boolean mIsBypassMode = false;
    private boolean mUsbConnected = false;
    private boolean mIsSettingBypass = false;
    private boolean mIsSettingUsb = false;
    private boolean mIsQueryingBypass = false;
    private Object mLock = new Object();
    private Dialog mDialog = null;
    private boolean mIsQueryingMtkLogger = false;
    private int mPendingBypassCode = 0;
    private boolean mIsPreparingForRndis = false;
    private boolean mIsSettingRndis = false;
    private final BroadcastReceiver mReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.bypass.BypassSettings.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            synchronized (BypassSettings.this.mLock) {
                Elog.i(BypassSettings.TAG, "onReceive = " + intent.getAction());
                if (intent.getAction().equals(BypassSettings.USBMANAGER_ACTION_USB_STATE)) {
                    BypassSettings.this.mIsSettingUsb = false;
                    BypassSettings.this.mUsbConnected = intent.getExtras().getBoolean(BypassSettings.USBMANAGER_USB_CONNECTED);
                    BypassSettings.this.mIsBypassMode = intent.getExtras().getBoolean(BypassSettings.USB_FUNCTION_BYPASS);
                    BypassSettings.this.queryBypassMode();
                    Elog.w(BypassSettings.TAG, "UsbConnected = " + BypassSettings.this.mUsbConnected + ", mIsBypassMode = " + BypassSettings.this.mIsBypassMode);
                } else if (intent.getAction().equals(BypassSettings.ACTION_USB_BYPASS_SETBYPASS_RESULT)) {
                    boolean z = intent.getExtras().getBoolean(BypassSettings.VALUE_ISSET_BYPASS);
                    Elog.w(BypassSettings.TAG, "Set bypass mode is " + z);
                    BypassSettings.this.mIsSettingBypass = false;
                    if (z) {
                        EmUtils.showToast(R.string.success, 0);
                    } else {
                        EmUtils.showToast(R.string.failed, 0);
                    }
                    BypassSettings.this.mBypassCode = intent.getIntExtra(BypassSettings.VALUE_BYPASS_CODE, BypassSettings.this.mBypassCode);
                    BypassSettings.this.updateBypassList(BypassSettings.this.mBypassCode);
                    if (BypassSettings.this.mIsPreparingForRndis) {
                        BypassSettings.this.mIsPreparingForRndis = false;
                        BypassSettings.this.enableRndis(Boolean.valueOf(BypassSettings.DBG));
                    }
                } else if (intent.getAction().equals(BypassSettings.ACTION_USB_BYPASS_GETBYPASS_RESULT)) {
                    BypassSettings.this.mIsQueryingBypass = false;
                    BypassSettings.this.mBypassCode = intent.getIntExtra(BypassSettings.VALUE_BYPASS_CODE, BypassSettings.this.mBypassCode);
                    BypassSettings.this.updateBypassList(BypassSettings.this.mBypassCode);
                    if (BypassSettings.this.mLaunchByCommand) {
                        BypassSettings.this.doCommand();
                    }
                } else if (intent.getAction().equals(BypassSettings.ACTION_MTK_LOGGER_RESULT)) {
                    Elog.w(BypassSettings.TAG, "mIsQueryingMtkLogger is " + BypassSettings.this.mIsQueryingMtkLogger);
                    if (!BypassSettings.this.mIsQueryingMtkLogger) {
                        return;
                    }
                    BypassSettings.this.mIsQueryingMtkLogger = false;
                    String stringExtra = intent.getStringExtra(BypassSettings.CMD_NAME);
                    int intExtra = intent.getIntExtra(BypassSettings.CMD_RESULT, 0);
                    Elog.w(BypassSettings.TAG, "cmd_nameis " + stringExtra + ", " + BypassSettings.CMD_RESULT + " is " + intExtra);
                    if (stringExtra != null && stringExtra.equals(BypassSettings.CMD_NAME_C2K_STATUS)) {
                        if (intExtra == 1) {
                            BypassSettings.this.showDialog(1);
                        } else {
                            if (!BypassSettings.this.mIsBypassMode) {
                                if (BypassSettings.this.mIsSettingRndis) {
                                    BypassSettings.this.enableBypassTether(Boolean.valueOf(BypassSettings.DBG));
                                } else {
                                    BypassSettings.this.enableBypass(Boolean.valueOf(BypassSettings.DBG));
                                }
                            }
                            BypassSettings.this.setBypassMode(BypassSettings.this.mPendingBypassCode);
                        }
                    }
                    BypassSettings.this.updateBypassList(BypassSettings.this.mBypassCode);
                }
            }
        }
    };
    private AdapterView.OnItemClickListener mListener = new AdapterView.OnItemClickListener() { // from class: com.mediatek.engineermode.bypass.BypassSettings.2
        @Override // android.widget.AdapterView.OnItemClickListener
        public void onItemClick(AdapterView adapterView, View view, int i, long j) {
            int i2 = BypassSettings.this.mBypassCode;
            if ((BypassSettings.this.mBypassCode & BypassSettings.this.mBypassCodes[i]) != 0) {
                int i3 = i2 ^ BypassSettings.this.mBypassCodes[i];
                if (BypassSettings.this.mIsBypassMode && i3 == 0) {
                    BypassSettings.this.enableBypass(false);
                }
                BypassSettings.this.setBypassMode(i3);
                return;
            }
            if (BypassSettings.this.mBypassCodes[i] != 8) {
                int i4 = i2 | BypassSettings.this.mBypassCodes[i];
                if (!BypassSettings.this.mIsBypassMode) {
                    BypassSettings.this.enableBypass(Boolean.valueOf(BypassSettings.DBG));
                }
                BypassSettings.this.setBypassMode(i4);
                return;
            }
            BypassSettings.this.mPendingBypassCode = i2 | 8;
            BypassSettings.this.mIsSettingRndis = false;
            BypassSettings.this.queryMtkLogger();
            BypassSettings bypassSettings = BypassSettings.this;
            bypassSettings.updateBypassList(bypassSettings.mBypassCode);
        }
    };
    private CompoundButton.OnCheckedChangeListener mCheckedChangeListener = new CompoundButton.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.bypass.BypassSettings.3
        @Override // android.widget.CompoundButton.OnCheckedChangeListener
        public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
            if (compoundButton.getId() == R.id.cb_ets_rndis) {
                BypassSettings.this.mLvBypass.setEnabled(z ^ BypassSettings.DBG);
                if (!z) {
                    BypassSettings.this.enableRndis(false);
                    return;
                }
                if (BypassSettings.this.mBypassCode <= 0) {
                    BypassSettings.this.enableRndis(Boolean.valueOf(BypassSettings.DBG));
                    return;
                }
                BypassSettings.this.enableBypass(false);
                BypassSettings.this.setBypassMode(0);
                BypassSettings.this.updateBypassList(0);
                BypassSettings.this.mIsPreparingForRndis = BypassSettings.DBG;
            }
        }
    };
    private View.OnClickListener mServEnablePressed = new View.OnClickListener() { // from class: com.mediatek.engineermode.bypass.BypassSettings.4
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Elog.w(BypassSettings.TAG, "isChecked " + ((CheckBox) view).isChecked());
            BypassSettings.this.savePrefs();
            EmUtils.showToast("reboot to make change available", 0);
        }
    };

    private class BypassAdapter<T> extends BaseAdapter {
        public BypassAdapter(Context context) {
        }

        @Override // android.widget.Adapter
        public int getCount() {
            return BypassSettings.this.mBypassNames.length;
        }

        @Override // android.widget.Adapter
        public Object getItem(int i) {
            return BypassSettings.this.mBypassNames[i];
        }

        @Override // android.widget.Adapter
        public long getItemId(int i) {
            return BypassSettings.this.mBypassCodes[i];
        }

        @Override // android.widget.Adapter
        public View getView(int i, View view, ViewGroup viewGroup) {
            boolean z = false;
            CheckedTextView checkedTextView = (CheckedTextView) ((LayoutInflater) BypassSettings.this.getSystemService("layout_inflater")).inflate(android.R.layout.simple_list_item_multiple_choice, viewGroup, false);
            checkedTextView.setText(BypassSettings.this.mBypassNames[i]);
            if (BypassSettings.this.mBypassEnabled && !BypassSettings.this.mCbRndis.isChecked()) {
                z = BypassSettings.DBG;
            }
            checkedTextView.setEnabled(z);
            return checkedTextView;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void doCommand() {
        int i;
        if (this.mCmdName == null || this.mCmdCode == null || this.mCmdFile == null) {
            return;
        }
        Elog.w(TAG, "mCmdName is " + this.mCmdName);
        Elog.w(TAG, "mCmdCode is " + this.mCmdCode);
        Elog.w(TAG, "mCmdFile is " + this.mCmdFile);
        int i2 = -1;
        String str = SystemProperties.get("sys.usb.config");
        Elog.i(TAG, "sys.usb.config: " + str);
        boolean z = str.contains("rndis") && str.contains(USB_FUNCTION_BYPASS);
        byte b = -1;
        if (this.mCmdCode.equals("rndis")) {
            String str2 = this.mCmdName;
            int iHashCode = str2.hashCode();
            if (iHashCode != -1298848381) {
                if (iHashCode != 107944136) {
                    if (iHashCode == 1671308008 && str2.equals(CMD_NAME_DISABLE)) {
                        b = 2;
                    }
                } else if (str2.equals(CMD_NAME_QUERY)) {
                    b = 0;
                }
            } else if (str2.equals(CMD_NAME_ENABLE)) {
                b = 1;
            }
            if (b == 0) {
                i2 = z ? 1 : 0;
            } else if (b == 1) {
                if (!z) {
                    this.mLvBypass.setEnabled(false);
                    if (this.mBypassCode > 0) {
                        enableBypass(false);
                        setBypassMode(0);
                        updateBypassList(0);
                        this.mIsPreparingForRndis = DBG;
                    } else {
                        enableRndis(Boolean.valueOf(DBG));
                    }
                }
                i2 = 0;
            } else if (b == 2) {
                if (z) {
                    this.mLvBypass.setEnabled(DBG);
                    enableRndis(false);
                }
                i2 = 0;
            }
            i = i2;
        } else {
            int i3 = -1;
            if (!this.mCmdCode.equals(CMD_CODE_ALL)) {
                int i4 = 0;
                while (true) {
                    String[] strArr = this.mBypassNames;
                    if (i4 >= strArr.length) {
                        break;
                    }
                    if (this.mCmdCode.equals(strArr[i4])) {
                        i3 = this.mBypassCodes[i4];
                    }
                    i4++;
                }
            } else {
                i3 = this.mBypassAllCode;
            }
            Elog.w(TAG, "code is " + i3);
            Elog.w(TAG, "mBypassCode is " + this.mBypassCode);
            Elog.w(TAG, "mBypassAllCode is " + this.mBypassAllCode);
            if (i3 != -1) {
                int i5 = this.mBypassCode;
                String str3 = this.mCmdName;
                int iHashCode2 = str3.hashCode();
                if (iHashCode2 != -1298848381) {
                    if (iHashCode2 != 107944136) {
                        if (iHashCode2 == 1671308008 && str3.equals(CMD_NAME_DISABLE)) {
                            b = 2;
                        }
                    } else if (str3.equals(CMD_NAME_QUERY)) {
                        b = 0;
                    }
                } else if (str3.equals(CMD_NAME_ENABLE)) {
                    b = 1;
                }
                if (b == 0) {
                    if (i3 == this.mBypassAllCode) {
                        i = this.mBypassCode;
                    } else {
                        i = (this.mBypassCode & i3) > 0 ? 1 : 0;
                    }
                } else if (b != 1) {
                    if (b == 2 && !z) {
                        if ((this.mBypassCode & i3) != 0) {
                            int i6 = i5 & (~i3);
                            if (this.mIsBypassMode && i6 == 0) {
                                enableBypass(false);
                            }
                            setBypassMode(i6);
                        }
                        i = 0;
                    } else {
                        i = -1;
                    }
                } else if (z) {
                    i = -1;
                } else {
                    if ((this.mBypassCode & i3) != i3) {
                        int i7 = i5 | i3;
                        if (!this.mIsBypassMode) {
                            enableBypass(Boolean.valueOf(DBG));
                        }
                        setBypassMode(i7);
                    }
                    i = 0;
                }
            } else {
                i = -1;
            }
        }
        File file = new File(this.mCmdFile + ".tmp");
        FileOutputStream fileOutputStream = null;
        try {
            try {
                try {
                    fileOutputStream = new FileOutputStream(file, DBG);
                    fileOutputStream.write(String.valueOf(i).getBytes());
                    fileOutputStream.close();
                } catch (IOException e) {
                    e.printStackTrace();
                    file.delete();
                    if (fileOutputStream != null) {
                        fileOutputStream.close();
                    }
                }
            } catch (Throwable th) {
                if (fileOutputStream == null) {
                    throw th;
                }
                try {
                    fileOutputStream.close();
                    throw th;
                } catch (IOException e2) {
                    e2.printStackTrace();
                    throw th;
                }
            }
        } catch (IOException e3) {
            e3.printStackTrace();
        }
        file.renameTo(new File(this.mCmdFile));
        this.mCmdName = null;
        this.mCmdCode = null;
        this.mCmdFile = null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void enableBypass(Boolean bool) {
        Elog.i(TAG, "enableBypass(" + bool + ")");
        this.mIsSettingUsb = DBG;
        Intent intent = new Intent(ACTION_USB_BYPASS_SETFUNCTION);
        intent.putExtra(VALUE_ENABLE_BYPASS, bool);
        LocalBroadcastManager.getInstance(this).sendBroadcast(intent);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void enableBypassTether(Boolean bool) {
        Elog.i(TAG, "enableBypassTether(" + bool + ")");
        this.mIsSettingUsb = DBG;
        Intent intent = new Intent(ACTION_USB_BYPASS_SETTETHERFUNCTION);
        intent.putExtra(VALUE_ENABLE_BYPASS, bool);
        LocalBroadcastManager.getInstance(this).sendBroadcast(intent);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void enableRndis(Boolean bool) {
        Elog.i(TAG, "enableRndis(" + bool + ")");
        if (!bool.booleanValue()) {
            enableBypassTether(false);
            setBypassMode(0);
            updateBypassList(0);
        } else if (this.mLaunchByCommand) {
            enableBypassTether(Boolean.valueOf(DBG));
            setBypassMode(8);
            updateBypassList(8);
        } else {
            this.mPendingBypassCode = 8;
            this.mIsSettingRndis = DBG;
            queryMtkLogger();
            updateBypassList(this.mBypassCode);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void queryBypassMode() {
        Elog.i(TAG, "queryBypassMode()");
        this.mIsQueryingBypass = DBG;
        LocalBroadcastManager.getInstance(this).sendBroadcast(new Intent(ACTION_USB_BYPASS_GETBYPASS));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void queryMtkLogger() {
        Elog.i(TAG, "queryBypassMode()");
        this.mIsQueryingMtkLogger = DBG;
        Intent intent = new Intent(ACTION_MTK_LOGGER);
        intent.putExtra(CMD_NAME, CMD_NAME_C2K_STATUS);
        LocalBroadcastManager.getInstance(this).sendBroadcast(intent);
        EmUtils.showToast("Checking MTK logger status...", 0);
    }

    private void restorePrefsAndUpdateCheckBox() {
        boolean z = getSharedPreferences(PREF_SERV_ENABLE, 0).getBoolean(PREF_SERV_ENABLE, false);
        Elog.w(TAG, "prefServEnable : " + z);
        if (z) {
            this.mCBBypassServiceEnable.setChecked(DBG);
        } else {
            this.mCBBypassServiceEnable.setChecked(false);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void savePrefs() {
        SharedPreferences.Editor editorEdit = getSharedPreferences(PREF_SERV_ENABLE, 0).edit();
        editorEdit.putBoolean(PREF_SERV_ENABLE, this.mCBBypassServiceEnable.isChecked());
        editorEdit.commit();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setBypassMode(int i) {
        Elog.i(TAG, "setBypassMode(" + i + ")");
        this.mIsSettingBypass = DBG;
        Intent intent = new Intent(ACTION_USB_BYPASS_SETBYPASS);
        intent.putExtra(VALUE_BYPASS_CODE, i);
        LocalBroadcastManager.getInstance(this).sendBroadcast(intent);
    }

    private void setBypassStatus(int i) {
        Elog.i(TAG, "setEnabled " + this.mBypassEnabled);
        this.mLvBypass.setEnabled(this.mBypassEnabled);
        for (int i2 = 0; i2 < this.mLvBypass.getCount(); i2++) {
            this.mLvBypass.setItemChecked(i2, (this.mBypassCodes[i2] & i) != 0 ? DBG : false);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateBypassList(int i) {
        Elog.i(TAG, "updateBypassList() mUsbConnected = " + this.mUsbConnected + ", mIsSettingBypass = " + this.mIsSettingBypass + ", mIsSettingUsb = " + this.mIsSettingUsb + ", mIsQueryingBypass = " + this.mIsQueryingBypass + ", mIsQueryingMtkLogger = " + this.mIsQueryingMtkLogger);
        this.mBypassEnabled = (!this.mUsbConnected || this.mIsSettingBypass || this.mIsSettingUsb || this.mIsQueryingBypass || this.mIsQueryingMtkLogger) ? false : DBG;
        Elog.i(TAG, "updateBypassList() bypassmode = " + i + ", mBypassEnabled = " + this.mBypassEnabled);
        setBypassStatus(i);
        this.mBypassAdapter.notifyDataSetChanged();
    }

    private void waitForFinished() {
        while (true) {
            if (!this.mIsSettingBypass && !this.mIsSettingUsb && !this.mIsQueryingBypass) {
                return;
            }
            Elog.i(TAG, "wait... " + this.mIsSettingBypass + " " + this.mIsSettingUsb + " " + this.mIsQueryingBypass);
            try {
                this.mLock.wait(100L);
            } catch (InterruptedException e) {
            }
        }
    }

    public int disableBypassModeWait(int i) {
        int i2;
        synchronized (this.mLock) {
            queryBypassModeWait(i);
            int i3 = this.mBypassCode & (~i);
            i2 = 0;
            if (i3 == 0) {
                enableBypass(false);
            }
            setBypassMode(i3);
            waitForFinished();
            if ((this.mBypassCode & i) != 0) {
                i2 = -1;
            }
        }
        return i2;
    }

    public int enableBypassModeWait(int i) {
        int i2;
        synchronized (this.mLock) {
            queryBypassModeWait(i);
            int i3 = this.mBypassCode | i;
            if (!this.mIsBypassMode) {
                enableBypass(Boolean.valueOf(DBG));
            }
            setBypassMode(i3);
            waitForFinished();
            i2 = (this.mBypassCode & i) != 0 ? 0 : -1;
        }
        return i2;
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.bypass_settings);
        this.mBypassNames = getResources().getStringArray(R.array.bypass_names);
        this.mBypassCodes = getResources().getIntArray(R.array.bypass_codes);
        int i = 0;
        while (true) {
            int[] iArr = this.mBypassCodes;
            if (i >= iArr.length) {
                break;
            }
            this.mBypassAllCode += iArr[i];
            i++;
        }
        this.mLvBypass = (ListView) findViewById(R.id.lv_bypass);
        BypassAdapter<String> bypassAdapter = new BypassAdapter<>(this);
        this.mBypassAdapter = bypassAdapter;
        this.mLvBypass.setAdapter((ListAdapter) bypassAdapter);
        boolean z = false;
        this.mLvBypass.setItemsCanFocus(false);
        this.mLvBypass.setChoiceMode(2);
        this.mLvBypass.setOnItemClickListener(this.mListener);
        CheckBox checkBox = (CheckBox) findViewById(R.id.cb_ets_rndis);
        this.mCbRndis = checkBox;
        checkBox.setOnCheckedChangeListener(this.mCheckedChangeListener);
        CheckBox checkBox2 = (CheckBox) findViewById(R.id.bypass_service_eanble);
        this.mCBBypassServiceEnable = checkBox2;
        checkBox2.setOnClickListener(this.mServEnablePressed);
        restorePrefsAndUpdateCheckBox();
        this.mCbRndis.setVisibility(8);
        this.mCmdName = getIntent().getStringExtra(CMD_NAME);
        this.mCmdCode = getIntent().getStringExtra(CMD_CODE);
        this.mCmdFile = getIntent().getStringExtra(CMD_FILE);
        String str = this.mCmdName;
        if (str != null && str.length() > 0) {
            z = DBG;
        }
        this.mLaunchByCommand = z;
    }

    @Override // android.app.Activity
    public Dialog onCreateDialog(int i) {
        if (i != 1) {
            return super.onCreateDialog(i);
        }
        AlertDialog alertDialogCreate = new AlertDialog.Builder(this).setTitle("Warning").setMessage("MD logger is running, enable ETS may cause Elog lost. Please stop MD logger first.\n\nEnable ETS anyway? (Not recommended)").setCancelable(false).setPositiveButton("Yes", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.bypass.BypassSettings.5
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
                boolean z = BypassSettings.this.mIsSettingRndis;
                Boolean boolValueOf = Boolean.valueOf(BypassSettings.DBG);
                if (z) {
                    BypassSettings.this.enableBypassTether(boolValueOf);
                } else {
                    BypassSettings.this.enableBypass(boolValueOf);
                }
                BypassSettings bypassSettings = BypassSettings.this;
                bypassSettings.setBypassMode(bypassSettings.mPendingBypassCode);
            }
        }).setNegativeButton("No", (DialogInterface.OnClickListener) null).create();
        this.mDialog = alertDialogCreate;
        return alertDialogCreate;
    }

    @Override // android.app.Activity
    public boolean onCreateOptionsMenu(Menu menu) {
        menu.add(0, 1, 0, "Bypass all");
        menu.add(0, 2, 0, "Close bypass");
        return super.onCreateOptionsMenu(menu);
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        if (this.mLaunchByCommand) {
            LocalBroadcastManager.getInstance(this).unregisterReceiver(this.mReceiver);
        }
    }

    @Override // android.app.Activity
    public boolean onOptionsItemSelected(MenuItem menuItem) {
        int i;
        int i2;
        Elog.i(TAG, "onOptionsItemSelected");
        if (menuItem.getItemId() != 1 || (i = this.mBypassCode) == (i2 = this.mBypassAllCode)) {
            if (menuItem.getItemId() == 2 && this.mIsBypassMode) {
                enableBypass(false);
                setBypassMode(0);
            }
        } else {
            if ((i & 8) == 0) {
                this.mPendingBypassCode = i2;
                this.mIsSettingRndis = false;
                queryMtkLogger();
                updateBypassList(this.mBypassCode);
                return super.onOptionsItemSelected(menuItem);
            }
            if (!this.mIsBypassMode) {
                enableBypass(Boolean.valueOf(DBG));
            }
            setBypassMode(this.mBypassAllCode);
        }
        return super.onOptionsItemSelected(menuItem);
    }

    @Override // android.app.Activity
    public void onPause() {
        super.onPause();
        Elog.i(TAG, "onPause()");
        if (!this.mLaunchByCommand) {
            LocalBroadcastManager.getInstance(this).unregisterReceiver(this.mReceiver);
        }
        Dialog dialog = this.mDialog;
        if (dialog != null) {
            dialog.dismiss();
        }
    }

    @Override // android.app.Activity
    public boolean onPrepareOptionsMenu(Menu menu) {
        Elog.i(TAG, "onPrepareOptionsMenu() Enable = " + this.mBypassEnabled);
        boolean z = DBG;
        menu.findItem(1).setEnabled(this.mBypassEnabled && !this.mCbRndis.isChecked());
        MenuItem menuItemFindItem = menu.findItem(2);
        if (!this.mBypassEnabled || this.mCbRndis.isChecked()) {
            z = false;
        }
        menuItemFindItem.setEnabled(z);
        return super.onPrepareOptionsMenu(menu);
    }

    @Override // android.app.Activity
    public void onResume() {
        super.onResume();
        Elog.w(TAG, "onResume()");
        queryBypassMode();
        updateBypassList(this.mBypassCode);
        restorePrefsAndUpdateCheckBox();
        registerReceiver(this.mReceiver, new IntentFilter(USBMANAGER_ACTION_USB_STATE));
        IntentFilter intentFilter = new IntentFilter(ACTION_USB_BYPASS_SETBYPASS_RESULT);
        intentFilter.addAction(ACTION_USB_BYPASS_GETBYPASS_RESULT);
        intentFilter.addAction(ACTION_MTK_LOGGER_RESULT);
        LocalBroadcastManager.getInstance(this).registerReceiver(this.mReceiver, intentFilter);
    }

    public int queryBypassModeWait(int i) {
        synchronized (this.mLock) {
            registerReceiver(this.mReceiver, new IntentFilter(USBMANAGER_ACTION_USB_STATE));
            IntentFilter intentFilter = new IntentFilter(ACTION_USB_BYPASS_SETBYPASS_RESULT);
            intentFilter.addAction(ACTION_USB_BYPASS_GETBYPASS_RESULT);
            LocalBroadcastManager.getInstance(this).registerReceiver(this.mReceiver, intentFilter);
            Elog.i(TAG, "registerReceiver");
            queryBypassMode();
            waitForFinished();
            int i2 = this.mBypassCode & i;
            if ((i & 15) != 15) {
                return i2 > 0 ? 1 : 0;
            }
            return i2;
        }
    }
}
