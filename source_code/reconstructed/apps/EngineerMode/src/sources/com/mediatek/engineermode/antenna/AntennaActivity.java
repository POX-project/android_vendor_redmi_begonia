package com.mediatek.engineermode.antenna;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.DialogInterface;
import android.content.res.Resources;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.LinearLayout;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;
import java.util.Arrays;

/* JADX INFO: loaded from: classes2.dex */
public class AntennaActivity extends Activity {
    private static final int ANT_INDEX_4G = 0;
    private static final int ANT_INDEX_NR = 1;
    private static final int CELL_2RX_LENGTH = 2;
    private static final int CELL_4RX_LENGTH = 4;
    private static final String CMD_INIT_EGMC_4G = "AT+EGMC=1,\"rx_path\",1,0,3,15,3,15";
    private static final String CMD_QUERY_EGMC_4G = "AT+EGMC=0,\"rx_path\"";
    private static final String CMD_QUERY_EGMC_NR = "AT+EGMC=0,\"nr_rx_path\"";
    private static final String CMD_SET_EGMC_4G = "AT+EGMC=1,\"rx_path\"";
    private static final String CMD_SET_EGMC_NR = "AT+EGMC=1,\"nr_rx_path\"";
    private static final int DIALOG_EGMC_SET_FAIL = 0;
    private static final int MODE_2G_COUNT = 4;
    private static final int MODE_EPCM_VALID = 255;
    private static final int MODE_INDEX_BASE_2G = 20;
    private static final int MODE_INDEX_BASE_3G = 10;
    private static final int MSG_CONFIRM_ANTENNA_EGMC_NR = 10;
    private static final int MSG_INIT_ANTENNA_EGMC_4G = 9;
    private static final int MSG_QUERY_ANTENNA_EGMC_4G = 5;
    private static final int MSG_QUERY_ANTENNA_EGMC_NR = 6;
    private static final int MSG_QUERY_ANTENNA_MODE = 1;
    private static final int MSG_QUERY_ANTENNA_MODE_C2K = 4;
    private static final int MSG_SET_ANTENNA_EGMC_4G = 7;
    private static final int MSG_SET_ANTENNA_EGMC_NR = 8;
    private static final int MSG_SET_ANTENNA_MODE = 2;
    private static final String TAG = "AntennaActivity";
    private RadioButton SfpDisable;
    private RadioButton SfpEnable;
    private AntennaEgmcInfo antEgmc4gObj;
    private RadioGroup.OnCheckedChangeListener antEgmcModeChangeListener;
    private AntennaEgmcInfo antEgmcNrObj;
    private CompoundButton.OnCheckedChangeListener antEgmcStatusChangeListener;
    private LinearLayout antennaLayout2G;
    private LinearLayout antennaLayout4G;
    private LinearLayout antennaLayoutEgmc;
    private RadioGroup egmcForceRxMode;
    private View.OnClickListener mOnClickListener;
    private Button queryEgmcBtn;
    private RadioButton rxDisable;
    private RadioButton rxEnable;
    private RadioGroup sccFollowPccMode;
    private Button setEgmcBtn;
    private Spinner mSpinner4G = null;
    private Spinner mSpinner3G = null;
    private Spinner mSpinner2G = null;
    private Spinner mSpinnerC2kMode = null;
    private Spinner mSpAntSelect = null;
    private CheckBox[] pCell2Rx = new CheckBox[2];
    private CheckBox[] pCell4Rx = new CheckBox[4];
    private CheckBox[] sCell2Rx = new CheckBox[2];
    private CheckBox[] sCell4Rx = new CheckBox[4];
    private boolean G95Valid = false;
    private Toast mToast = null;
    private int mCurrentPos = 0;
    private int mCurrent3GPos = 0;
    private int mCurrentPosCdma = 0;
    private int mCurrent2GPos = 0;
    private int emgcView = 0;
    private final AdapterView.OnItemSelectedListener mItemSelectedListener = new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.antenna.AntennaActivity.1
        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
            if (adapterView == AntennaActivity.this.mSpinner4G) {
                if (AntennaActivity.this.mCurrentPos == adapterView.getSelectedItemPosition()) {
                    return;
                }
                AntennaActivity.this.mCurrentPos = adapterView.getSelectedItemPosition();
                AntennaActivity.this.setMode(i);
                return;
            }
            if (adapterView == AntennaActivity.this.mSpinner3G) {
                if (AntennaActivity.this.mCurrent3GPos == adapterView.getSelectedItemPosition() || i == 0) {
                    return;
                }
                AntennaActivity.this.mCurrent3GPos = adapterView.getSelectedItemPosition();
                AntennaActivity.this.setMode((i + 10) - 1);
                return;
            }
            if (adapterView == AntennaActivity.this.mSpinnerC2kMode) {
                if (AntennaActivity.this.mCurrentPosCdma == adapterView.getSelectedItemPosition()) {
                    return;
                }
                AntennaActivity.this.mCurrentPosCdma = adapterView.getSelectedItemPosition();
                AntennaActivity.this.setCdmaMode(i);
                return;
            }
            if (adapterView == AntennaActivity.this.mSpinner2G) {
                if (AntennaActivity.this.mCurrent2GPos == adapterView.getSelectedItemPosition() || i == 0) {
                    return;
                }
                AntennaActivity.this.mCurrent2GPos = adapterView.getSelectedItemPosition();
                AntennaActivity.this.setMode((i + 20) - 1);
                return;
            }
            if (adapterView != AntennaActivity.this.mSpAntSelect || AntennaActivity.this.emgcView == adapterView.getSelectedItemPosition()) {
                return;
            }
            Elog.d(AntennaActivity.TAG, "onItemSelected : " + adapterView.getSelectedItemPosition());
            AntennaActivity.this.emgcView = adapterView.getSelectedItemPosition();
            if (AntennaActivity.this.emgcView == 0) {
                AntennaActivity antennaActivity = AntennaActivity.this;
                antennaActivity.updateAntEgmcView(antennaActivity.antEgmc4gObj);
                AntennaActivity.this.queryCurrentMode();
                AntennaActivity.this.antEgmc4gObj.show();
                AntennaActivity.this.antEgmcNrObj.hide();
                return;
            }
            if (AntennaActivity.this.emgcView == 1) {
                AntennaActivity antennaActivity2 = AntennaActivity.this;
                antennaActivity2.updateAntEgmcView(antennaActivity2.antEgmcNrObj);
                AntennaActivity.this.queryEgmcAntNR();
                AntennaActivity.this.antEgmc4gObj.hide();
                AntennaActivity.this.antEgmcNrObj.show();
            }
        }

        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onNothingSelected(AdapterView<?> adapterView) {
        }
    };
    private final Handler mCommandHander = new Handler() { // from class: com.mediatek.engineermode.antenna.AntennaActivity.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            switch (message.what) {
                case 1:
                    AsyncResult asyncResult = (AsyncResult) message.obj;
                    if (asyncResult == null || asyncResult.exception != null || asyncResult.result == null) {
                        EmUtils.showToast("Query 3G/4G/NR antenna currect mode failed.", 0);
                        Elog.e(AntennaActivity.TAG, "Query 3G/4G/NR antenna currect mode failed.");
                    } else {
                        String[] strArr = (String[]) asyncResult.result;
                        Elog.d(AntennaActivity.TAG, "Query Ant Mode return: " + Arrays.toString(strArr));
                        AntennaActivity.this.antennaLayout2G.setVisibility(8);
                        for (String str : strArr) {
                            if (AntennaActivity.this.isMode2G(AntennaActivity.this.parseCurrentMode(str))) {
                                AntennaActivity.this.antennaLayout2G.setVisibility(0);
                            }
                        }
                    }
                    break;
                case 2:
                    if (((AsyncResult) message.obj).exception == null) {
                        EmUtils.showToast("Set successful.", 0);
                        Elog.d(AntennaActivity.TAG, "set antenna mode succeed.");
                    } else {
                        EmUtils.showToast("Set failed.", 0);
                        Elog.e(AntennaActivity.TAG, "set antenna mode failed.");
                    }
                    break;
                case 4:
                    AsyncResult asyncResult2 = (AsyncResult) message.obj;
                    if (asyncResult2 == null || asyncResult2.exception != null || asyncResult2.result == null) {
                        EmUtils.showToast("Query cdma antenna currect mode failed.", 0);
                        Elog.e(AntennaActivity.TAG, "Query cdma antenna currect mode failed.");
                    } else {
                        String[] strArr2 = (String[]) asyncResult2.result;
                        Elog.d(AntennaActivity.TAG, "Query Ant Mode C2K return: " + Arrays.toString(strArr2));
                        for (String str2 : strArr2) {
                            AntennaActivity.this.parseCurrentCdmaMode(str2);
                        }
                    }
                    break;
                case 5:
                case 6:
                    AsyncResult asyncResult3 = (AsyncResult) message.obj;
                    if (asyncResult3 == null || asyncResult3.exception != null || asyncResult3.result == null) {
                        if (message.what - 5 == AntennaActivity.this.emgcView) {
                            AntennaActivity.this.resetAntEgmcView(message.what == 5 ? AntennaActivity.this.antEgmc4gObj : AntennaActivity.this.antEgmcNrObj);
                        }
                        EmUtils.showToast("Query EGMC currect mode failed.", 0);
                        Elog.e(AntennaActivity.TAG, "Query EGMC ant" + AntennaActivity.this.emgcView + " currect mode failed.");
                    } else {
                        String[] strArr3 = (String[]) asyncResult3.result;
                        Elog.d(AntennaActivity.TAG, "Query Ant Mode EGMC ant " + AntennaActivity.this.emgcView + " return: " + Arrays.toString(strArr3) + " for : " + message.what);
                        for (String str3 : strArr3) {
                            AntennaActivity.this.parseCurEgmcMode(message.what - 5, str3);
                        }
                    }
                    break;
                case 7:
                case 8:
                    AsyncResult asyncResult4 = (AsyncResult) message.obj;
                    if (asyncResult4.exception == null) {
                        EmUtils.showToast("Set EGMC ant " + AntennaActivity.this.emgcView + " successful.", 0);
                        Elog.d(AntennaActivity.TAG, "set EGMC ant" + AntennaActivity.this.emgcView + " antenna mode succeed.");
                    } else {
                        if (message.what == 8) {
                            AntennaActivity.this.confirmEgmcAntNR();
                        } else {
                            EmUtils.showToast("Set EGMC ant " + AntennaActivity.this.emgcView + " failed " + asyncResult4.exception, 0);
                        }
                        Elog.e(AntennaActivity.TAG, "set EGMC ant" + AntennaActivity.this.emgcView + " antenna mode failed: " + asyncResult4.exception);
                    }
                    break;
                case 9:
                    if (((AsyncResult) message.obj).exception == null && AntennaActivity.this.emgcView == 0) {
                        AntennaActivity.this.setEgmcAntForUser(0);
                        Elog.d(AntennaActivity.TAG, "Init EGMC antenna mode for ant" + AntennaActivity.this.emgcView + " succeed.");
                    } else {
                        EmUtils.showToast("Init EGMC ant" + AntennaActivity.this.emgcView + " failed.", 0);
                        Elog.e(AntennaActivity.TAG, "Init EGMC antenna mode for ant" + AntennaActivity.this.emgcView + " failed.");
                    }
                    break;
                case 10:
                    AsyncResult asyncResult5 = (AsyncResult) message.obj;
                    boolean z = false;
                    if (asyncResult5 != null && asyncResult5.exception == null && asyncResult5.result != null) {
                        String[] strArr4 = (String[]) asyncResult5.result;
                        Elog.d(AntennaActivity.TAG, "Query Ant Mode EGMC ant " + AntennaActivity.this.emgcView + " return: " + Arrays.toString(strArr4) + " for : " + message.what);
                        for (String str4 : strArr4) {
                            if (AntennaActivity.this.confirmCurrentMode(1, str4)) {
                                z = true;
                            }
                        }
                    }
                    if (z) {
                        EmUtils.showToast("Set EGMC ant " + AntennaActivity.this.emgcView + " succeed!", 0);
                        Elog.e(AntennaActivity.TAG, "Confirm EGMC ant" + AntennaActivity.this.emgcView + " succeed.");
                    } else {
                        EmUtils.showToast("Set EGMC ant " + AntennaActivity.this.emgcView + " failed!", 0);
                        Elog.e(AntennaActivity.TAG, "Confirm EGMC ant" + AntennaActivity.this.emgcView + " currect mode failed.");
                    }
                    break;
            }
        }
    };

    private boolean checkValidEgmcInfo(AntennaEgmcInfo antennaEgmcInfo) {
        if (antennaEgmcInfo == null) {
            return false;
        }
        String string = this.emgcView == 0 ? getResources().getString(R.string.antenna_title_4g) : getResources().getString(R.string.antenna_title_nr);
        if (!antennaEgmcInfo.getForceRx()) {
            return true;
        }
        if (antennaEgmcInfo.getPCell4Rx() == 0 || antennaEgmcInfo.getPCell2Rx() == 0) {
            showDialog(0, string, getResources().getString(R.string.pcell_set_rx0_warn));
            return false;
        }
        if (antennaEgmcInfo.getSCell4Rx() == 0 || antennaEgmcInfo.getSCell2Rx() == 0) {
            showDialog(0, string, getResources().getString(R.string.scell_set_rx0_warn));
            return false;
        }
        if (antennaEgmcInfo.getPCell4Rx() == 7 || antennaEgmcInfo.getPCell4Rx() == 11 || antennaEgmcInfo.getPCell4Rx() == 13 || antennaEgmcInfo.getPCell4Rx() == 14) {
            showDialog(0, string, getResources().getString(R.string.pcell_set_rx3_warn));
            return false;
        }
        if (antennaEgmcInfo.getSCell4Rx() != 7 && antennaEgmcInfo.getSCell4Rx() != 11 && antennaEgmcInfo.getSCell4Rx() != 13 && antennaEgmcInfo.getSCell4Rx() != 14) {
            return true;
        }
        showDialog(0, string, getResources().getString(R.string.scell_set_rx3_warn));
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean confirmCurrentMode(int i, String str) {
        AntennaEgmcInfo antennaEgmcInfo = i == 0 ? this.antEgmc4gObj : this.antEgmcNrObj;
        String[] strArrSplit = str.substring("+EGMC:".length()).trim().replace(" ", "").split(",");
        if (strArrSplit.length < 4 || strArrSplit.length > 7) {
            return false;
        }
        int[] iArr = new int[6];
        int i2 = strArrSplit.length % 2 == 0 ? 0 : 1;
        Elog.d(TAG, "confirmCurrentMode: " + antennaEgmcInfo.getPCell2Rx() + "," + antennaEgmcInfo.getPCell4Rx() + "," + antennaEgmcInfo.getSCell2Rx() + "," + antennaEgmcInfo.getSCell4Rx());
        if (strArrSplit[i2 + 0].equals(antennaEgmcInfo.getPCell2Rx() + "")) {
            if (strArrSplit[i2 + 1].equals(antennaEgmcInfo.getPCell4Rx() + "")) {
                if (strArrSplit[i2 + 2].equals(antennaEgmcInfo.getSCell2Rx() + "")) {
                    if (strArrSplit[i2 + 3].equals(antennaEgmcInfo.getSCell4Rx() + "")) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    private void initEgmcAnt4G() {
        sendCommand(new String[]{CMD_INIT_EGMC_4G, ""}, 9);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isMode2G(int i) {
        return i >= 20 && i < (this.mSpinner2G.getCount() + 20) - 1;
    }

    private boolean isMode3G(int i) {
        return i >= 20 && i < this.mSpinner2G.getCount() + 20;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void parseCurEgmcMode(int i, String str) {
        AntennaEgmcInfo antennaEgmcInfo = i == 0 ? this.antEgmc4gObj : this.antEgmcNrObj;
        Elog.d(TAG, "parseCurEgmcMode data= " + str);
        try {
            String[] strArrSplit = str.substring("+EGMC:".length()).replace(" ", "").split(",");
            if (strArrSplit.length >= 4 && strArrSplit.length <= 7) {
                int[] iArr = new int[6];
                int i2 = strArrSplit.length % 2 == 0 ? 0 : 1;
                Elog.d(TAG, "start: " + i2 + ", origArray: " + Arrays.toString(strArrSplit));
                if (strArrSplit.length < 6) {
                    iArr[0] = 0;
                    iArr[1] = 0;
                    for (int i3 = i2; i3 < strArrSplit.length; i3++) {
                        if (!strArrSplit[i3].equals("0")) {
                            iArr[0] = 1;
                        }
                        iArr[(iArr.length - strArrSplit.length) + i3] = Integer.valueOf(strArrSplit[i3]).intValue();
                    }
                } else {
                    for (int i4 = i2; i4 < strArrSplit.length; i4++) {
                        iArr[i4 - i2] = Integer.valueOf(strArrSplit[i4]).intValue();
                    }
                }
                Elog.d(TAG, "" + Arrays.toString(iArr));
                if (antennaEgmcInfo == null) {
                    antennaEgmcInfo = new AntennaEgmcInfo(iArr);
                } else {
                    antennaEgmcInfo.updateAntennaEgmcInfo(iArr);
                }
                updateAntEgmcView(antennaEgmcInfo);
            }
        } catch (Exception e) {
            Elog.e(TAG, "Wrong current mode format: " + str + "\n" + e.getMessage());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int parseCurrentCdmaMode(String str) {
        int iIntValue = -1;
        Elog.d(TAG, "parseCurrentCdmaMode data= " + str);
        try {
            iIntValue = Integer.valueOf(str.substring("+ERXTESTMODE:".length()).trim()).intValue();
        } catch (Exception e) {
            Elog.e(TAG, "Wrong current mode format: " + str);
        }
        if (iIntValue < 0 || iIntValue >= this.mSpinnerC2kMode.getCount()) {
            EmUtils.showToast("Modem returned invalid mode: " + str, 0);
            return -1;
        }
        this.mCurrentPosCdma = iIntValue;
        Elog.d(TAG, "parseCurrentCDMAMode is: " + this.mCurrentPosCdma);
        this.mSpinnerC2kMode.setSelection(iIntValue);
        this.mSpinnerC2kMode.setEnabled(true);
        return iIntValue;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int parseCurrentMode(String str) {
        int iIntValue = -1;
        Elog.i(TAG, "parseCurrentMode data= " + str);
        try {
            iIntValue = Integer.valueOf(str.substring("+ERXPATH:".length()).trim()).intValue();
        } catch (Exception e) {
            Elog.e(TAG, "Wrong current mode format: " + str);
        }
        if (iIntValue < 0 || ((iIntValue >= 24 || ((iIntValue >= this.mSpinner4G.getCount() && iIntValue < 10) || (iIntValue >= this.mSpinner3G.getCount() + 10 && iIntValue < 20))) && iIntValue != 255)) {
            EmUtils.showToast("Modem returned invalid mode: " + str, 0);
            return -1;
        }
        if (iIntValue == 255) {
            this.antennaLayout4G.setVisibility(8);
            if (this.emgcView == 0) {
                this.antEgmc4gObj.show();
                this.antEgmcNrObj.hide();
                this.antennaLayoutEgmc.setVisibility(0);
            }
            Elog.d(TAG, "parseCurrentMode is: " + iIntValue + " index is: " + this.emgcView);
            queryEgmcAnt4G();
        } else if (iIntValue >= 20) {
            this.mCurrent2GPos = (iIntValue - 20) + 1;
            Elog.d(TAG, "parseCurrent2GMode is: " + this.mCurrent2GPos);
            this.mSpinner2G.setSelection(this.mCurrent2GPos);
        } else if (iIntValue >= 10) {
            this.mCurrent3GPos = (iIntValue - 10) + 1;
            Elog.d(TAG, "parseCurrent3GMode is: " + this.mCurrent3GPos);
            this.mSpinner3G.setSelection(this.mCurrent3GPos);
        } else {
            if (this.emgcView == 0) {
                this.antennaLayout4G.setVisibility(0);
                this.antennaLayoutEgmc.setVisibility(8);
                this.antEgmc4gObj.hide();
                this.antEgmcNrObj.hide();
            }
            Elog.d(TAG, "parseCurrentLteMode is: " + iIntValue);
            this.mCurrentPos = iIntValue;
            this.mSpinner4G.setSelection(iIntValue);
            this.mSpinner4G.setEnabled(true);
        }
        return iIntValue;
    }

    private void queryCurrentCdmaMode() {
        sendCdmaCommand(ModemCategory.getCdmaCmdArr(new String[]{"AT+ERXTESTMODE?", "+ERXTESTMODE:", "DESTRILD:C2K"}), 4);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void queryCurrentMode() {
        sendCommand(new String[]{"AT+ERXPATH?", "+ERXPATH:"}, 1);
    }

    private void sendCdmaCommand(String[] strArr, int i) {
        Elog.d(TAG, "send cdma cmd: " + i + "," + Arrays.toString(strArr) + ",command.length = " + strArr.length);
        EmUtils.invokeOemRilRequestStringsEm(true, strArr, this.mCommandHander.obtainMessage(i));
    }

    private void sendCommand(String[] strArr, int i) {
        Elog.d(TAG, "sendCommand " + i + "," + Arrays.toString(strArr));
        EmUtils.invokeOemRilRequestStringsEm(strArr, this.mCommandHander.obtainMessage(i));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setCdmaMode(int i) {
        sendCdmaCommand(ModemCategory.getCdmaCmdArr(new String[]{"AT+ERXTESTMODE=" + i, "+ERXTESTMODE:", "DESTRILD:C2K"}), 2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setMode(int i) {
        Elog.i(TAG, "Set mode " + i);
        sendCommand(new String[]{"AT+ERXPATH=" + i, ""}, 2);
    }

    public void confirmEgmcAntNR() {
        sendCommand(new String[]{CMD_QUERY_EGMC_NR, "+EGMC:"}, 10);
    }

    public void initAnt2GView() {
        this.antennaLayout2G = (LinearLayout) findViewById(R.id.antenna_2g);
        Spinner spinner = (Spinner) findViewById(R.id.spinner_antenna_2g);
        this.mSpinner2G = spinner;
        spinner.setOnItemSelectedListener(this.mItemSelectedListener);
        this.antennaLayout2G.setVisibility(8);
    }

    public void initAnt3GView() {
        Spinner spinner = (Spinner) findViewById(R.id.spinner_antenna_3g);
        this.mSpinner3G = spinner;
        spinner.setOnItemSelectedListener(this.mItemSelectedListener);
        if (ModemCategory.getModemType() == 2) {
            findViewById(R.id.antenna_title_3g).setVisibility(8);
            this.mSpinner3G.setVisibility(8);
        }
    }

    public void initAntC2KView() {
        Spinner spinner = (Spinner) findViewById(R.id.spinner_antenna_c2k_mode);
        this.mSpinnerC2kMode = spinner;
        spinner.setOnItemSelectedListener(this.mItemSelectedListener);
        if (!ModemCategory.isCdma() || FeatureSupport.is90Modem()) {
            findViewById(R.id.antenna_title_c2k).setVisibility(8);
            this.mSpinnerC2kMode.setVisibility(8);
        }
    }

    public void initAntEgmcView() {
        this.antEgmcModeChangeListener = new RadioGroup.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.antenna.AntennaActivity.3
            @Override // android.widget.RadioGroup.OnCheckedChangeListener
            public void onCheckedChanged(RadioGroup radioGroup, int i) {
                AntennaEgmcInfo antennaEgmcInfo = AntennaActivity.this.emgcView == 0 ? AntennaActivity.this.antEgmc4gObj : AntennaActivity.this.antEgmcNrObj;
                if (antennaEgmcInfo == null) {
                    return;
                }
                switch (i) {
                    case R.id.force_rx_disable /* 2131100609 */:
                        antennaEgmcInfo.setForceRx(false);
                        break;
                    case R.id.force_rx_enable /* 2131100610 */:
                        antennaEgmcInfo.setForceRx(true);
                        break;
                    case R.id.scc_follow_pcc_disable /* 2131101329 */:
                        antennaEgmcInfo.setCssFollowPcc(false);
                        break;
                    case R.id.scc_follow_pcc_enable /* 2131101330 */:
                        antennaEgmcInfo.setCssFollowPcc(true);
                        break;
                }
                if (AntennaActivity.this.emgcView == 0) {
                    AntennaActivity.this.antEgmc4gObj = antennaEgmcInfo;
                } else {
                    AntennaActivity.this.antEgmcNrObj = antennaEgmcInfo;
                }
            }
        };
        this.antEgmcStatusChangeListener = new CompoundButton.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.antenna.AntennaActivity.4
            @Override // android.widget.CompoundButton.OnCheckedChangeListener
            public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
                AntennaEgmcInfo antennaEgmcInfo = AntennaActivity.this.emgcView == 0 ? AntennaActivity.this.antEgmc4gObj : AntennaActivity.this.antEgmcNrObj;
                if (antennaEgmcInfo == null) {
                    antennaEgmcInfo = new AntennaEgmcInfo();
                }
                int id = compoundButton.getId();
                switch (id) {
                    case R.id.pcell_2rx_rx1 /* 2131101176 */:
                        antennaEgmcInfo.updatePCell2Rx(z, 0);
                        break;
                    case R.id.pcell_2rx_rx2 /* 2131101177 */:
                        antennaEgmcInfo.updatePCell2Rx(z, 1);
                        break;
                    case R.id.pcell_4rx_rx1 /* 2131101178 */:
                        antennaEgmcInfo.updatePCell4Rx(z, 0);
                        break;
                    case R.id.pcell_4rx_rx2 /* 2131101179 */:
                        antennaEgmcInfo.updatePCell4Rx(z, 1);
                        break;
                    case R.id.pcell_4rx_rx3 /* 2131101180 */:
                        antennaEgmcInfo.updatePCell4Rx(z, 2);
                        break;
                    case R.id.pcell_4rx_rx4 /* 2131101181 */:
                        antennaEgmcInfo.updatePCell4Rx(z, 3);
                        break;
                    default:
                        switch (id) {
                            case R.id.scell_2rx_rx1 /* 2131101332 */:
                                antennaEgmcInfo.updateSCell2Rx(z, 0);
                                break;
                            case R.id.scell_2rx_rx2 /* 2131101333 */:
                                antennaEgmcInfo.updateSCell2Rx(z, 1);
                                break;
                            case R.id.scell_4rx_rx1 /* 2131101334 */:
                                antennaEgmcInfo.updateSCell4Rx(z, 0);
                                break;
                            case R.id.scell_4rx_rx2 /* 2131101335 */:
                                antennaEgmcInfo.updateSCell4Rx(z, 1);
                                break;
                            case R.id.scell_4rx_rx3 /* 2131101336 */:
                                antennaEgmcInfo.updateSCell4Rx(z, 2);
                                break;
                            case R.id.scell_4rx_rx4 /* 2131101337 */:
                                antennaEgmcInfo.updateSCell4Rx(z, 3);
                                break;
                        }
                        break;
                }
                if (AntennaActivity.this.emgcView == 0) {
                    AntennaActivity.this.antEgmc4gObj = antennaEgmcInfo;
                } else {
                    AntennaActivity.this.antEgmcNrObj = antennaEgmcInfo;
                }
            }
        };
        this.mOnClickListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.antenna.AntennaActivity.5
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                switch (view.getId()) {
                    case R.id.antenna_query_4g /* 2131100106 */:
                        if (AntennaActivity.this.emgcView != 0) {
                            AntennaActivity.this.queryEgmcAntNR();
                        } else {
                            AntennaActivity.this.queryEgmcAnt4G();
                        }
                        break;
                    case R.id.antenna_set_4g /* 2131100107 */:
                        if (AntennaActivity.this.emgcView != 0) {
                            AntennaActivity.this.setEgmcAntNR();
                        } else {
                            AntennaActivity.this.setEgmcAnt4G();
                        }
                        break;
                    default:
                        Elog.d(AntennaActivity.TAG, "OnClickListener: " + view.getLabelFor());
                        break;
                }
            }
        };
        Button button = (Button) findViewById(R.id.antenna_query_4g);
        this.queryEgmcBtn = button;
        button.setOnClickListener(this.mOnClickListener);
        Button button2 = (Button) findViewById(R.id.antenna_set_4g);
        this.setEgmcBtn = button2;
        button2.setOnClickListener(this.mOnClickListener);
        this.egmcForceRxMode = (RadioGroup) findViewById(R.id.force_rx_mode);
        this.sccFollowPccMode = (RadioGroup) findViewById(R.id.scc_follow_pcc_mode);
        this.egmcForceRxMode.setOnCheckedChangeListener(this.antEgmcModeChangeListener);
        this.sccFollowPccMode.setOnCheckedChangeListener(this.antEgmcModeChangeListener);
        this.pCell2Rx[0] = (CheckBox) findViewById(R.id.pcell_2rx_rx1);
        this.pCell2Rx[1] = (CheckBox) findViewById(R.id.pcell_2rx_rx2);
        this.pCell4Rx[0] = (CheckBox) findViewById(R.id.pcell_4rx_rx1);
        this.pCell4Rx[1] = (CheckBox) findViewById(R.id.pcell_4rx_rx2);
        this.pCell4Rx[2] = (CheckBox) findViewById(R.id.pcell_4rx_rx3);
        this.pCell4Rx[3] = (CheckBox) findViewById(R.id.pcell_4rx_rx4);
        this.sCell2Rx[0] = (CheckBox) findViewById(R.id.scell_2rx_rx1);
        this.sCell2Rx[1] = (CheckBox) findViewById(R.id.scell_2rx_rx2);
        this.sCell4Rx[0] = (CheckBox) findViewById(R.id.scell_4rx_rx1);
        this.sCell4Rx[1] = (CheckBox) findViewById(R.id.scell_4rx_rx2);
        this.sCell4Rx[2] = (CheckBox) findViewById(R.id.scell_4rx_rx3);
        this.sCell4Rx[3] = (CheckBox) findViewById(R.id.scell_4rx_rx4);
        for (int i = 0; i < 2; i++) {
            this.pCell2Rx[i].setOnCheckedChangeListener(this.antEgmcStatusChangeListener);
            this.sCell2Rx[i].setOnCheckedChangeListener(this.antEgmcStatusChangeListener);
        }
        for (int i2 = 0; i2 < 4; i2++) {
            this.pCell4Rx[i2].setOnCheckedChangeListener(this.antEgmcStatusChangeListener);
            this.sCell4Rx[i2].setOnCheckedChangeListener(this.antEgmcStatusChangeListener);
        }
    }

    public void initAntLteNrData() {
        this.emgcView = 0;
        this.antEgmc4gObj = new AntennaEgmcInfo();
        this.antEgmcNrObj = new AntennaEgmcInfo();
    }

    public void initAntLteNrView() {
        this.antennaLayout4G = (LinearLayout) findViewById(R.id.antenna_4g);
        this.antennaLayoutEgmc = (LinearLayout) findViewById(R.id.antanna_egmc);
        Spinner spinner = (Spinner) findViewById(R.id.spinner_antenna_4g);
        this.mSpinner4G = spinner;
        spinner.setOnItemSelectedListener(this.mItemSelectedListener);
        this.mSpinner4G.setEnabled(false);
        this.antennaLayout4G.setVisibility(8);
        this.mSpAntSelect = (Spinner) findViewById(R.id.spinner_antenna_select);
        this.rxEnable = (RadioButton) findViewById(R.id.force_rx_enable);
        this.rxDisable = (RadioButton) findViewById(R.id.force_rx_disable);
        this.SfpEnable = (RadioButton) findViewById(R.id.scc_follow_pcc_enable);
        this.SfpDisable = (RadioButton) findViewById(R.id.scc_follow_pcc_disable);
        initAntLteNrData();
        initAntEgmcView();
        if (!ModemCategory.isLteSupport() && !ModemCategory.isNrSupport()) {
            this.mSpAntSelect.setVisibility(8);
            findViewById(R.id.antenna_title_4g).setVisibility(8);
            findViewById(R.id.antenna_hint).setVisibility(8);
            this.antennaLayout4G.setVisibility(8);
            this.antennaLayoutEgmc.setVisibility(8);
            return;
        }
        boolean zIsLteSupport = ModemCategory.isLteSupport();
        int i = R.string.antenna_title_nr;
        if (zIsLteSupport && ModemCategory.isNrSupport()) {
            findViewById(R.id.antenna_title_4g).setVisibility(8);
            ArrayAdapter arrayAdapter = new ArrayAdapter(this, android.R.layout.simple_spinner_item, new String[]{getResources().getString(R.string.antenna_title_4g), getResources().getString(R.string.antenna_title_nr)});
            arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
            this.emgcView = 0;
            this.mSpAntSelect.setAdapter((SpinnerAdapter) arrayAdapter);
            this.mSpAntSelect.setOnItemSelectedListener(this.mItemSelectedListener);
            return;
        }
        this.mSpAntSelect.setVisibility(8);
        this.emgcView = ModemCategory.isLteSupport() ? 0 : 1;
        TextView textView = (TextView) findViewById(R.id.antenna_title_4g);
        Resources resources = getResources();
        if (this.emgcView == 0) {
            i = R.string.antenna_title_4g;
        }
        textView.setText(resources.getString(i));
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.antena_test);
        initAntLteNrView();
        initAnt3GView();
        initAntC2KView();
        initAnt2GView();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        queryCurrentMode();
        if (ModemCategory.isCdma() && !FeatureSupport.is90Modem()) {
            queryCurrentCdmaMode();
        }
        if (this.emgcView == 1 && ModemCategory.isNrSupport()) {
            queryEgmcAntNR();
        }
    }

    public void queryEgmcAnt4G() {
        sendCommand(new String[]{CMD_QUERY_EGMC_4G, "+EGMC:"}, 5);
    }

    public void queryEgmcAntNR() {
        sendCommand(new String[]{CMD_QUERY_EGMC_NR, "+EGMC:"}, 6);
    }

    public void resetAntEgmcView() {
        this.rxEnable.setChecked(false);
        this.rxDisable.setChecked(false);
        this.SfpEnable.setChecked(false);
        this.SfpDisable.setChecked(false);
        for (int i = 0; i < 2; i++) {
            this.pCell2Rx[i].setChecked(false);
            this.sCell2Rx[i].setChecked(false);
        }
        for (int i2 = 0; i2 < 4; i2++) {
            this.pCell4Rx[i2].setChecked(false);
            this.sCell4Rx[i2].setChecked(false);
        }
    }

    public void resetAntEgmcView(AntennaEgmcInfo antennaEgmcInfo) {
        Elog.d(TAG, "resetAntEgmcView");
        if (antennaEgmcInfo.isShow()) {
            this.antennaLayoutEgmc.setVisibility(0);
            this.antennaLayout4G.setVisibility(8);
            ((RadioButton) findViewById(R.id.force_rx_enable)).setChecked(false);
            ((RadioButton) findViewById(R.id.force_rx_disable)).setChecked(false);
            ((RadioButton) findViewById(R.id.scc_follow_pcc_enable)).setChecked(false);
            ((RadioButton) findViewById(R.id.scc_follow_pcc_disable)).setChecked(false);
            for (int i = 0; i < 2; i++) {
                this.pCell2Rx[i].setChecked(false);
                this.sCell2Rx[i].setChecked(false);
            }
            for (int i2 = 0; i2 < 4; i2++) {
                this.pCell4Rx[i2].setChecked(false);
                this.sCell4Rx[i2].setChecked(false);
            }
        }
    }

    public void setEgmcAnt4G() {
        Elog.d(TAG, "setEgmcAnt4G");
        if (this.antEgmc4gObj == null) {
            this.antEgmc4gObj = new AntennaEgmcInfo();
        }
        if (!this.antEgmc4gObj.getForceRx()) {
            this.antEgmc4gObj.CloseForceRxFor();
            updateAntEgmcView(this.antEgmc4gObj);
        }
        initEgmcAnt4G();
    }

    public void setEgmcAntForUser(int i) {
        String str = i == 0 ? CMD_SET_EGMC_4G : CMD_SET_EGMC_NR;
        AntennaEgmcInfo antennaEgmcInfo = i == 0 ? this.antEgmc4gObj : this.antEgmcNrObj;
        if (checkValidEgmcInfo(antennaEgmcInfo)) {
            String[] strArr = new String[2];
            if (antennaEgmcInfo.getForceRx()) {
                strArr[0] = str + "," + antennaEgmcInfo.getIntForceRx() + "," + antennaEgmcInfo.getIntCssFollowPcc() + "," + antennaEgmcInfo.getPCell2Rx() + "," + antennaEgmcInfo.getPCell4Rx() + "," + antennaEgmcInfo.getSCell2Rx() + "," + antennaEgmcInfo.getSCell4Rx();
            } else {
                strArr[0] = str + ",0";
            }
            strArr[1] = "";
            Elog.d(TAG, "setEgmcAntForUser : " + strArr[0]);
            sendCommand(strArr, i == 0 ? 7 : 8);
        }
    }

    public void setEgmcAntNR() {
        Elog.d(TAG, "setEgmcAntNR");
        if (this.antEgmcNrObj == null) {
            this.antEgmcNrObj = new AntennaEgmcInfo();
        }
        if (!this.antEgmcNrObj.getForceRx()) {
            this.antEgmcNrObj.CloseForceRxFor();
            updateAntEgmcView(this.antEgmcNrObj);
        }
        setEgmcAntForUser(1);
    }

    protected Dialog showDialog(int i, String str, String str2) {
        if (i != 0) {
            return null;
        }
        return new AlertDialog.Builder(this).setTitle(str).setMessage(str2).setPositiveButton(android.R.string.ok, (DialogInterface.OnClickListener) null).show();
    }

    public void updateAntEgmcView(AntennaEgmcInfo antennaEgmcInfo) {
        if (antennaEgmcInfo.isShow()) {
            if (antennaEgmcInfo == null) {
                resetAntEgmcView();
                return;
            }
            this.antennaLayoutEgmc.setVisibility(0);
            this.antennaLayout4G.setVisibility(8);
            Elog.d(TAG, "updateAntEgmcView: " + antennaEgmcInfo.getForceRx() + "," + antennaEgmcInfo.getCssFollowPcc() + ", " + Arrays.toString(antennaEgmcInfo.getBoolArrayPCell2Rx()) + ", " + Arrays.toString(antennaEgmcInfo.getBoolArraySCell2Rx()) + ", " + Arrays.toString(antennaEgmcInfo.getBoolArrayPCell4Rx()) + ", " + Arrays.toString(antennaEgmcInfo.getBoolArraySCell4Rx()));
            this.rxEnable.setChecked(antennaEgmcInfo.getForceRx());
            this.rxDisable.setChecked(antennaEgmcInfo.getForceRx() ^ true);
            this.SfpEnable.setChecked(antennaEgmcInfo.getCssFollowPcc());
            this.SfpDisable.setChecked(antennaEgmcInfo.getCssFollowPcc() ^ true);
            for (int i = 0; i < 2; i++) {
                this.pCell2Rx[i].setChecked(antennaEgmcInfo.getBoolArrayPCell2Rx()[i]);
                this.sCell2Rx[i].setChecked(antennaEgmcInfo.getBoolArraySCell2Rx()[i]);
            }
            for (int i2 = 0; i2 < 4; i2++) {
                this.pCell4Rx[i2].setChecked(antennaEgmcInfo.getBoolArrayPCell4Rx()[i2]);
                this.sCell4Rx[i2].setChecked(antennaEgmcInfo.getBoolArraySCell4Rx()[i2]);
            }
        }
    }
}
