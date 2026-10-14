package com.mediatek.engineermode.forceant;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.DialogInterface;
import android.content.SharedPreferences;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.view.View;
import android.widget.AdapterView;
import android.widget.Button;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Spinner;
import android.widget.TableRow;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class ForceTx95 extends Activity implements View.OnClickListener, RadioGroup.OnCheckedChangeListener {
    private static final int DIG_WARING_WRITE_NVRAM = 1;
    private static final int FORCE_TX_DISABLED_BAND = 3;
    private static final int FORCE_TX_DISABLE_RAT = 0;
    private static final int FORCE_TX_ENABLE_BAND = 4;
    private static final int FORCE_TX_ENABLE_RAT = 1;
    private static final int FORCE_TX_QUERY_BAND = 5;
    private static final int FORCE_TX_QUERY_RAT = 2;
    private static final int FORCE_TX_RAT_C2K = 4;
    private static final int FORCE_TX_RAT_GSM = 1;
    private static final int FORCE_TX_RAT_LTE = 3;
    private static final int FORCE_TX_RAT_UMTS = 2;
    private static final int FORCE_TYPE_BY_BAND = 1;
    private static final int FORCE_TYPE_BY_RAT = 0;
    private static final int QUERY_ANT_INDEX_BY_STATUS = 6;
    private static final int QUERY_ANT_STATUS_BY_INDEX = 7;
    private static final String SHREDPRE_NAME = "ForceAnt95";
    private static final String TAG = "ForceAnt95";
    private static final String TAS_BAND = "TasBand";
    private static final String TAS_MODE = "TasMode";
    private static final String TAS_NVRAM = "TasNvram";
    private static final String TAS_RAT = "TasRat";
    private static final String TAS_TYPE = "TasType";
    private TableRow mAntIndexDRxTableRow;
    private Button mEnableStatesBtn;
    private Spinner mForceAntModeSpinner;
    private Button mQueryIndexOrStatesBtn;
    private Spinner mTasAntDrx;
    private Spinner mTasAntDrx1;
    private Spinner mTasAntDrx2;
    private Spinner mTasAntStatesSpinner;
    private TextView mTasAntSwitchLabel;
    private TextView mTasAntTest;
    private Spinner mTasAntTxPrx;
    private EditText mTasBandEdit;
    private EditText mTasNvramEdit;
    private Spinner mTasRatSpinner;
    private static int mForceType = 0;
    private static int mTasModeEnableStates = 0;
    private static int mtasMode = 0;
    private static int mtasRat = 1;
    private static String mtasNvram = "false";
    private static String mtasBand = "1";
    private static String mtasStates = "1";
    private static String[] mTypeArray = {"by rat", "by band"};
    private static String[] mModeArray = {"Disable", "Enable", "Read"};
    private static String[] mRatArray = {"GSM", "UTMS", "LTE", "C2K"};
    private String mQueryMode = "";
    private RadioGroup mRGForceType = null;
    private RadioButton mForceRatRadioBtn = null;
    private RadioButton mForceBandRadioBtn = null;
    private Handler mATCmdHander = new Handler() { // from class: com.mediatek.engineermode.forceant.ForceTx95.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i;
            AsyncResult asyncResult = (AsyncResult) message.obj;
            switch (message.what) {
                case 0:
                case 1:
                case 3:
                case 4:
                    if (asyncResult.exception == null) {
                        EmUtils.showToast("AT cmd successfully.");
                        Elog.d("ForceAnt95", "AT cmd successfully.");
                    } else {
                        EmUtils.showToast("AT cmd failed.");
                        Elog.d("ForceAnt95", "AT cmd failed.");
                    }
                    break;
                case 2:
                case 5:
                    if (asyncResult.exception != null) {
                        EmUtils.showToast("AT cmd failed.");
                        Elog.e("ForceAnt95", "Received data is null");
                    } else {
                        String[] strArr = (String[]) asyncResult.result;
                        if (strArr != null) {
                            Elog.d("ForceAnt95", "receiveDate[0] = " + strArr[0]);
                            try {
                                i = Integer.parseInt(strArr[0].split(",")[1]);
                            } catch (Exception e) {
                                i = 0;
                            }
                            Elog.d("ForceAnt95", "value = " + i);
                            EmUtils.showToast("Query ANT states succeed,value = " + i);
                            if (i >= 0 && i < 8) {
                                ForceTx95.this.mTasAntStatesSpinner.setSelection(i);
                            } else {
                                ForceTx95.this.mTasAntStatesSpinner.setSelection(8);
                            }
                        } else {
                            EmUtils.showToast("Warning: Received data is null!");
                            Elog.e("ForceAnt95", "Received data is null");
                        }
                    }
                    break;
                case 6:
                    if (asyncResult.exception == null) {
                        String[] strArr2 = (String[]) asyncResult.result;
                        Elog.d("ForceAnt95", "receiveDate[0] = " + strArr2[0]);
                        ForceTx95.this.mTasAntTest.append("\r\n" + strArr2[0]);
                        if (ForceTx95.this.parseAntIndex(strArr2[0]) >= 0) {
                            EmUtils.showToast("query ANT index by states successfully.");
                            Elog.d("ForceAnt95", "query ANT index by states successfully.");
                        } else {
                            EmUtils.showToast("query ANT index by states failed.");
                            Elog.d("ForceAnt95", "query ANT index by states failed.");
                        }
                    } else {
                        EmUtils.showToast("The states not support");
                        Elog.d("ForceAnt95", "AT cmd failed,The States not support");
                    }
                    break;
                case 7:
                    if (asyncResult.exception == null) {
                        String[] strArr3 = (String[]) asyncResult.result;
                        if (strArr3.length != 0) {
                            Elog.d("ForceAnt95", "receiveDate[0] = " + strArr3[0]);
                            ForceTx95.this.mTasAntTest.append("\r\n" + strArr3[0]);
                            if (ForceTx95.this.parseAntStaus(strArr3[0]) >= 0) {
                                Elog.d("ForceAnt95", "Query ANT states by index successfully.");
                                EmUtils.showToast("Query ANT states by index successfully.");
                            } else {
                                EmUtils.showToast("Query ANT states by index failed.");
                                Elog.d("ForceAnt95", "Query ANT states by index failed.");
                            }
                        } else {
                            Elog.e("ForceAnt95", "The Index not support");
                            EmUtils.showToast("The Index not support, Please check the paramer");
                        }
                    } else {
                        EmUtils.showToast("AT cmd failed or The Index not support");
                        Elog.d("ForceAnt95", "AT cmd failed or The Index not supportz");
                    }
                    break;
            }
        }
    };
    private AdapterView.OnItemSelectedListener mSpinnerListener = new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.forceant.ForceTx95.2
        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
            if (adapterView != ForceTx95.this.mForceAntModeSpinner) {
                if (adapterView == ForceTx95.this.mTasRatSpinner) {
                    Elog.d("ForceAnt95", "mTasRatSpinner changed, pos = " + i);
                    int unused = ForceTx95.mtasRat = i + 1;
                    if (ForceTx95.mtasRat == 3) {
                        ForceTx95.this.mAntIndexDRxTableRow.setVisibility(0);
                        return;
                    } else {
                        ForceTx95.this.mAntIndexDRxTableRow.setVisibility(8);
                        return;
                    }
                }
                if (adapterView == ForceTx95.this.mTasAntStatesSpinner) {
                    Elog.d("ForceAnt95", "mTasAntStatesSpinner changed, pos = " + i);
                    String unused2 = ForceTx95.mtasStates = String.valueOf(i);
                    if (ForceTx95.mTasModeEnableStates == 1) {
                        ForceTx95.this.mTasAntTxPrx.setSelection(6);
                        ForceTx95.this.mTasAntDrx.setSelection(6);
                        ForceTx95.this.mTasAntDrx1.setSelection(6);
                        ForceTx95.this.mTasAntDrx2.setSelection(6);
                        return;
                    }
                    return;
                }
                return;
            }
            Elog.d("ForceAnt95", "mForceAntModeSpinner changed, pos = " + i);
            if (i == 0) {
                ForceTx95.this.mQueryIndexOrStatesBtn.setEnabled(false);
                int unused3 = ForceTx95.mtasMode = ForceTx95.mForceType != 1 ? 0 : 3;
                ForceTx95.this.mTasAntTxPrx.setSelection(6);
                ForceTx95.this.mTasAntDrx.setSelection(6);
                ForceTx95.this.mTasAntDrx1.setSelection(6);
                ForceTx95.this.mTasAntDrx2.setSelection(6);
                ForceTx95.this.mTasAntStatesSpinner.setSelection(9);
            } else if (i == 1) {
                ForceTx95.this.mQueryIndexOrStatesBtn.setEnabled(true);
                int unused4 = ForceTx95.mtasMode = ForceTx95.mForceType == 1 ? 4 : 1;
            } else {
                if (i == 2) {
                    ForceTx95.this.mQueryIndexOrStatesBtn.setEnabled(false);
                    int unused5 = ForceTx95.mtasMode = ForceTx95.mForceType == 1 ? 5 : 2;
                    ForceTx95.this.mTasAntTxPrx.setSelection(6);
                    ForceTx95.this.mTasAntDrx.setSelection(6);
                    ForceTx95.this.mTasAntDrx1.setSelection(6);
                    ForceTx95.this.mTasAntDrx2.setSelection(6);
                    ForceTx95.this.mTasNvramEdit.setText("");
                    ForceTx95.this.mTasAntStatesSpinner.setSelection(9);
                }
            }
            ForceTx95.this.forceTypeUpdate();
        }

        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onNothingSelected(AdapterView adapterView) {
        }
    };

    public void execTheCmd() {
        String str;
        if (mForceType == 1) {
            mtasBand = this.mTasBandEdit.getText().toString();
            str = mtasBand;
            if (str.equals("")) {
                EmUtils.showToast("By band mode,the band value should not be empty");
                return;
            }
        } else {
            str = "";
        }
        int selectedItemPosition = this.mForceAntModeSpinner.getSelectedItemPosition() + (mForceType == 1 ? 3 : 0);
        mtasMode = selectedItemPosition;
        String str2 = mtasStates;
        if (selectedItemPosition == 0 || selectedItemPosition == 2 || selectedItemPosition == 3 || selectedItemPosition == 5) {
            str2 = "";
        } else if (mTasModeEnableStates != 2 && ((selectedItemPosition == 1 || selectedItemPosition == 4) && (mtasStates.equals("8") || mtasStates.equals("9")))) {
            EmUtils.showToast("The ANT states should be 0~7");
            return;
        }
        String str3 = mtasNvram.equals("true") ? "1" : "0";
        Elog.d("ForceAnt95", "mForceType = " + mForceType + "," + mTypeArray[mForceType]);
        StringBuilder sb = new StringBuilder();
        sb.append("mtasMode = ");
        sb.append(mtasMode);
        sb.append(",");
        String[] strArr = mModeArray;
        int i = mtasMode;
        if (i >= 3) {
            i -= 3;
        }
        sb.append(strArr[i]);
        Elog.d("ForceAnt95", sb.toString());
        Elog.d("ForceAnt95", "mtasRat = " + mtasRat + "," + mRatArray[mtasRat - 1]);
        StringBuilder sb2 = new StringBuilder();
        sb2.append("mtasNvram = ");
        sb2.append(str3);
        Elog.d("ForceAnt95", sb2.toString());
        Elog.d("ForceAnt95", "tasBand = " + str);
        Elog.d("ForceAnt95", "mtasStates = " + str2);
        writeTasSettingStates();
        int i2 = mTasModeEnableStates;
        if (i2 == 1) {
            queryIndexByStates(mtasRat, str, str2);
        } else if (i2 == 2) {
            queryStatesByIndex(mtasRat, str);
        } else {
            setTasForceIdx(mtasMode, mtasRat, str2, str, str3);
        }
    }

    void forceTypeUpdate() {
        int i;
        int i2 = mForceType;
        if (i2 == 0) {
            this.mForceRatRadioBtn.setChecked(true);
            this.mTasNvramEdit.setText("true");
            mtasNvram = "true";
            this.mTasBandEdit.setEnabled(false);
            this.mTasBandEdit.setText("all band");
        } else if (i2 == 1) {
            this.mForceBandRadioBtn.setChecked(true);
            this.mTasNvramEdit.setText("false");
            mtasNvram = "false";
            this.mTasBandEdit.setEnabled(true);
            this.mTasBandEdit.setText(mtasBand);
        }
        int i3 = mtasMode;
        if (i3 == 2 || i3 == 5) {
            this.mTasNvramEdit.setText("");
            mtasNvram = "false";
        }
        if (mForceType == 1 && ((i = mtasMode) == 1 || i == 4)) {
            this.mQueryIndexOrStatesBtn.setEnabled(true);
        } else {
            this.mQueryIndexOrStatesBtn.setEnabled(false);
        }
    }

    public void getTasSettingStates() {
        SharedPreferences sharedPreferences = getSharedPreferences("ForceAnt95", 0);
        mForceType = sharedPreferences.getInt(TAS_TYPE, 0);
        mtasMode = sharedPreferences.getInt(TAS_MODE, 0);
        mtasRat = sharedPreferences.getInt(TAS_RAT, 1);
        mtasNvram = sharedPreferences.getString(TAS_NVRAM, "true");
        mtasBand = sharedPreferences.getString(TAS_BAND, "1");
        Elog.d("ForceAnt95", "\ngetTasSettingStates: ");
        Elog.d("ForceAnt95", "mForceType = " + mForceType);
        Elog.d("ForceAnt95", "mtasMode = " + mtasMode);
        Elog.d("ForceAnt95", "mtasRat = " + mtasRat);
        Elog.d("ForceAnt95", "mtasNvram = " + mtasNvram);
        Elog.d("ForceAnt95", "mtasBand = " + mtasBand);
    }

    boolean isTasStatesValid(Spinner spinner) {
        return (spinner.getSelectedItemPosition() == 5 || spinner.getSelectedItemPosition() == 6) ? false : true;
    }

    @Override // android.widget.RadioGroup.OnCheckedChangeListener
    public void onCheckedChanged(RadioGroup radioGroup, int i) {
        if (i == R.id.force_rat) {
            mForceType = 0;
        } else if (i == R.id.force_band) {
            mForceType = 1;
        }
        Elog.d("ForceAnt95", "forceTypeChanged, mForceType = " + mForceType + "," + mTypeArray[mForceType]);
        forceTypeUpdate();
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view == this.mEnableStatesBtn) {
            Elog.d("ForceAnt95", "Set ANT States click:.");
            mTasModeEnableStates = 0;
        } else if (view == this.mQueryIndexOrStatesBtn) {
            if (this.mQueryMode.equals("by_states")) {
                mTasModeEnableStates = 1;
                Elog.d("ForceAnt95", "Query ANT index by states click.");
            } else {
                mTasModeEnableStates = 2;
                Elog.d("ForceAnt95", "Query ANT states by index click.");
            }
        }
        if (mtasNvram.equals("true") && mTasModeEnableStates == 0) {
            showDialog(1);
        } else {
            execTheCmd();
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.force_tx_95);
        this.mQueryMode = getIntent().getStringExtra("MODE");
        Elog.d("ForceAnt95", "MODE = " + this.mQueryMode);
        this.mRGForceType = (RadioGroup) findViewById(R.id.force_type);
        this.mForceRatRadioBtn = (RadioButton) findViewById(R.id.force_rat);
        this.mForceBandRadioBtn = (RadioButton) findViewById(R.id.force_band);
        this.mForceAntModeSpinner = (Spinner) findViewById(R.id.force_ant_mode);
        this.mTasRatSpinner = (Spinner) findViewById(R.id.tas_rat);
        this.mTasBandEdit = (EditText) findViewById(R.id.tas_band);
        this.mTasNvramEdit = (EditText) findViewById(R.id.tas_nvram);
        this.mTasAntStatesSpinner = (Spinner) findViewById(R.id.tas_ant_states);
        this.mQueryIndexOrStatesBtn = (Button) findViewById(R.id.get_ant_index_states);
        this.mEnableStatesBtn = (Button) findViewById(R.id.enable_ant_states);
        this.mTasAntTxPrx = (Spinner) findViewById(R.id.tas_ant_tx_prx);
        this.mTasAntDrx = (Spinner) findViewById(R.id.tas_ant_drx);
        this.mTasAntDrx1 = (Spinner) findViewById(R.id.tas_ant_drx1);
        this.mTasAntDrx2 = (Spinner) findViewById(R.id.tas_ant_drx2);
        this.mTasAntTest = (TextView) findViewById(R.id.tas_ant_test);
        this.mTasAntSwitchLabel = (TextView) findViewById(R.id.Ant_switch_label);
        this.mAntIndexDRxTableRow = (TableRow) findViewById(R.id.TableRow08);
        this.mTasNvramEdit.setEnabled(false);
        this.mQueryIndexOrStatesBtn.setOnClickListener(this);
        this.mEnableStatesBtn.setOnClickListener(this);
        this.mRGForceType.setOnCheckedChangeListener(this);
        this.mForceAntModeSpinner.setOnItemSelectedListener(this.mSpinnerListener);
        this.mTasRatSpinner.setOnItemSelectedListener(this.mSpinnerListener);
        this.mTasAntStatesSpinner.setOnItemSelectedListener(this.mSpinnerListener);
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        return i != 1 ? super.onCreateDialog(i) : new AlertDialog.Builder(this).setTitle("Warning").setMessage("Enable force state for all bands and write force state to NVRAM\n").setPositiveButton("Confirm", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.forceant.ForceTx95.3
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
                if (i2 == -1) {
                    ForceTx95.this.execTheCmd();
                }
                dialogInterface.dismiss();
            }
        }).setNegativeButton("Cancel", (DialogInterface.OnClickListener) null).create();
    }

    @Override // android.app.Activity
    public void onResume() {
        super.onResume();
        Elog.d("ForceAnt95", "onResume");
        getTasSettingStates();
        Spinner spinner = this.mForceAntModeSpinner;
        int i = mtasMode;
        if (i >= 3) {
            i -= 3;
        }
        spinner.setSelection(i, true);
        this.mTasRatSpinner.setSelection(mtasRat - 1, true);
        forceTypeUpdate();
        if (this.mQueryMode.equals("by_states")) {
            this.mTasAntSwitchLabel.setText(getString(R.string.get_ant_index));
            this.mQueryIndexOrStatesBtn.setText(getString(R.string.get_ant_index));
            mTasModeEnableStates = 1;
            this.mTasAntTxPrx.setEnabled(false);
            this.mTasAntDrx.setEnabled(false);
            this.mTasAntDrx1.setEnabled(false);
            this.mTasAntDrx2.setEnabled(false);
            this.mTasAntStatesSpinner.setEnabled(true);
            return;
        }
        if (this.mQueryMode.equals("by_index")) {
            this.mTasAntSwitchLabel.setText(getString(R.string.get_ant_states));
            this.mQueryIndexOrStatesBtn.setText(getString(R.string.get_ant_states));
            mTasModeEnableStates = 2;
            this.mTasAntTxPrx.setEnabled(true);
            this.mTasAntDrx.setEnabled(true);
            this.mTasAntDrx1.setEnabled(true);
            this.mTasAntDrx2.setEnabled(true);
            this.mTasAntStatesSpinner.setEnabled(false);
        }
    }

    int parseAntIndex(String str) {
        try {
            String[] strArrSplit = str.split(",");
            for (String str2 : strArrSplit) {
                Elog.d("ForceAnt95", "value = " + str2);
            }
            if (strArrSplit[2].equals("255")) {
                this.mTasAntTxPrx.setSelection(5);
            } else {
                this.mTasAntTxPrx.setSelection(Integer.parseInt(strArrSplit[2]));
            }
            if (strArrSplit[3].equals("255")) {
                this.mTasAntDrx.setSelection(5);
            } else {
                this.mTasAntDrx.setSelection(Integer.parseInt(strArrSplit[3]));
            }
            if (strArrSplit[4].equals("255")) {
                this.mTasAntDrx1.setSelection(5);
            } else {
                this.mTasAntDrx1.setSelection(Integer.parseInt(strArrSplit[4]));
            }
            if (strArrSplit[5].equals("255")) {
                this.mTasAntDrx2.setSelection(5);
            } else {
                this.mTasAntDrx2.setSelection(Integer.parseInt(strArrSplit[5]));
            }
            return 0;
        } catch (Exception e) {
            return -1;
        }
    }

    int parseAntStaus(String str) {
        try {
            int i = Integer.parseInt(str.split(",")[1]);
            if (i < 0 || i >= 6) {
                this.mTasAntStatesSpinner.setSelection(6);
                return 0;
            }
            this.mTasAntStatesSpinner.setSelection(i);
            return 0;
        } catch (Exception e) {
            return -1;
        }
    }

    public void queryIndexByStates(int i, String str, String str2) {
        String[] strArr = {"AT+EGMC=1,\"utas_query_ant_port\"," + new String[]{"", "0", "1", "4", "3"}[i] + "," + str + "," + str2, "+EGMC:"};
        StringBuilder sb = new StringBuilder();
        sb.append("sendAtCommand: ");
        sb.append(strArr[0]);
        Elog.d("ForceAnt95", sb.toString());
        this.mTasAntTest.setText(strArr[0]);
        senAtCommand(strArr, 6);
    }

    public void queryStatesByIndex(int i, String str) {
        int i2;
        int selectedItemPosition;
        int i3;
        int i4;
        int selectedItemPosition2;
        int i5;
        int selectedItemPosition3;
        int i6;
        String[] strArr = new String[2];
        String[] strArr2 = {"\"gsm_utas\"", "\"wcdma_utas\"", "\"t_utas_query\"", "\"c2k_utas\"", "\"l_utas_query\""};
        String[] strArr3 = {"", "0", "1", "4", "3"};
        if (ModemCategory.getModemType() == 1) {
            strArr3[2] = "1";
            Elog.d("ForceAnt95", "3G WCDMA");
        } else {
            strArr3[2] = "2";
            Elog.d("ForceAnt95", "3G TDSCDMA");
        }
        int i7 = Integer.parseInt(strArr3[i]);
        int i8 = 0;
        int selectedItemPosition4 = 255;
        int i9 = 255;
        int selectedItemPosition5 = 255;
        if (!isTasStatesValid(this.mTasAntTxPrx)) {
            EmUtils.showToast("The TxPrxshould not be 255 or null");
            return;
        }
        int selectedItemPosition6 = this.mTasAntTxPrx.getSelectedItemPosition();
        if (i7 == 0) {
            int i10 = selectedItemPosition6 + 1;
            if (isTasStatesValid(this.mTasAntDrx)) {
                selectedItemPosition3 = this.mTasAntDrx.getSelectedItemPosition() + 1;
                i6 = 2;
            } else {
                selectedItemPosition3 = 0;
                i6 = 1;
            }
            strArr[0] = "AT+EGMC=1," + strArr2[i7] + "," + str + "," + i6 + ",";
            if (i6 == 1) {
                strArr[0] = strArr[0] + i10 + ",," + i10;
            } else {
                strArr[0] = strArr[0] + i10 + "," + selectedItemPosition3 + "," + i10;
            }
        } else if (i7 == 1) {
            int i11 = selectedItemPosition6 + 1;
            if (isTasStatesValid(this.mTasAntDrx)) {
                i3 = 0;
                i4 = 0;
                selectedItemPosition2 = this.mTasAntDrx.getSelectedItemPosition() + 1;
                i5 = 2;
            } else {
                i3 = 0;
                i4 = 0;
                selectedItemPosition2 = 255;
                i5 = 1;
            }
            strArr[0] = "AT+EGMC=1," + strArr2[i7] + ",1," + str + "," + i5 + ",";
            strArr[0] = strArr[0] + i11 + "," + selectedItemPosition2 + "," + i4 + "," + i3 + "," + i11;
        } else if (i7 == 2) {
            if (isTasStatesValid(this.mTasAntDrx)) {
                EmUtils.showToast("The tdscdma only support 1 path： prx trx");
                return;
            }
            strArr[0] = "AT+EGMC=1," + strArr2[i7] + "," + str + ",1," + selectedItemPosition6;
        } else if (i7 == 3) {
            int i12 = selectedItemPosition6 + 1;
            if (isTasStatesValid(this.mTasAntDrx)) {
                i2 = 2;
                selectedItemPosition = this.mTasAntDrx.getSelectedItemPosition() + 1;
            } else {
                i2 = 1;
                selectedItemPosition = 255;
            }
            strArr[0] = "AT+EGMC=1," + strArr2[i7] + "," + str + "," + i2 + ",";
            StringBuilder sb = new StringBuilder();
            sb.append(strArr[0]);
            sb.append(i12);
            sb.append(",");
            sb.append(selectedItemPosition);
            strArr[0] = sb.toString();
        } else if (i7 == 4) {
            if (!isTasStatesValid(this.mTasAntDrx)) {
                EmUtils.showToast("The mTasAntDrx not be 255 or null in lte mode");
                return;
            }
            int i13 = selectedItemPosition6 + 1;
            if ((isTasStatesValid(this.mTasAntDrx1) && !isTasStatesValid(this.mTasAntDrx2)) || (!isTasStatesValid(this.mTasAntDrx1) && isTasStatesValid(this.mTasAntDrx2))) {
                EmUtils.showToast("TasAntDrx1 or TasAntDrx2 should both 255 or not");
            } else if (isTasStatesValid(this.mTasAntDrx1) && isTasStatesValid(this.mTasAntDrx2)) {
                int selectedItemPosition7 = this.mTasAntDrx.getSelectedItemPosition() + 1;
                int selectedItemPosition8 = this.mTasAntDrx1.getSelectedItemPosition() + 1;
                selectedItemPosition5 = this.mTasAntDrx2.getSelectedItemPosition() + 1;
                i9 = selectedItemPosition8;
                selectedItemPosition4 = selectedItemPosition7;
                i8 = 4;
            } else {
                selectedItemPosition5 = 0;
                i9 = 0;
                selectedItemPosition4 = this.mTasAntDrx.getSelectedItemPosition() + 1;
                i8 = 2;
            }
            strArr[0] = "AT+EGMC=1," + strArr2[i7] + ",1," + str + "," + i8 + ",";
            strArr[0] = strArr[0] + i13 + "," + selectedItemPosition4 + "," + i9 + "," + selectedItemPosition5 + "," + i13;
        }
        strArr[1] = "+EGMC:";
        Elog.d("ForceAnt95", "sendAtCommand: " + strArr[0]);
        this.mTasAntTest.setText(strArr[0]);
        senAtCommand(strArr, 7);
    }

    public void senAtCommand(String[] strArr, int i) {
        EmUtils.invokeOemRilRequestStringsEm(strArr, this.mATCmdHander.obtainMessage(i));
    }

    public void setTasForceIdx(int i, int i2, String str, String str2, String str3) {
        String[] strArr = new String[2];
        if (mForceType == 1) {
            strArr[0] = "AT+ETXANT=" + i + "," + i2 + "," + str + "," + str2;
        } else {
            strArr[0] = "AT+ETXANT=" + i + "," + i2 + "," + str + "," + str2 + "," + str3;
        }
        strArr[1] = "+ETXANT:";
        Elog.d("ForceAnt95", "sendAtCommand: " + strArr[0]);
        this.mTasAntTest.setText(strArr[0]);
        senAtCommand(strArr, i);
    }

    public void writeTasSettingStates() {
        SharedPreferences.Editor editorEdit = getSharedPreferences("ForceAnt95", 0).edit();
        editorEdit.putInt(TAS_TYPE, mForceType);
        editorEdit.putInt(TAS_MODE, mtasMode);
        editorEdit.putInt(TAS_RAT, mtasRat);
        editorEdit.putString(TAS_NVRAM, mtasNvram);
        editorEdit.putString(TAS_BAND, mtasBand);
        editorEdit.commit();
    }
}
