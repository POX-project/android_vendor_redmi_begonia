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
import android.widget.Spinner;
import android.widget.TableRow;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class ForceTx97 extends Activity implements View.OnClickListener {
    private static final int BUTTON_BY_INDEX = 3;
    private static final int BUTTON_BY_STATE = 2;
    private static final int BUTTON_SET_BY_BAND = 0;
    private static final int BUTTON_SET_BY_RET = 1;
    private static final int DIG_WARING_WRITE_NVRAM = 1;
    private static final int FORCE_TX_DISABLE = 0;
    private static final int FORCE_TX_ENABLE = 1;
    private static final int FORCE_TX_RAT_C2K = 4;
    private static final int FORCE_TX_RAT_GSM = 1;
    private static final int FORCE_TX_RAT_LTE = 3;
    private static final int FORCE_TX_RAT_NR = 5;
    private static final int FORCE_TX_RAT_UMTS = 2;
    private static final int FORCE_TX_READ = 2;
    private static final int QUERY_ANT_INDEX_BY_STATUS = 6;
    private static final int QUERY_ANT_STATUS_BY_INDEX = 7;
    private static final String SHREDPRE_NAME = "ForceAnt97";
    private static final String TAG = "ForceAnt97";
    private static final String TAS_BAND = "TasBand";
    private static final String TAS_MODE = "TasMode";
    private static final String TAS_NVRAM = "TasNvram";
    private static final String TAS_RAT = "TasRat";
    private static final String TAS_TYPE = "TasType";
    private TableRow mAntIndexMIMOTableRow;
    private TableRow mAntIndexTxTableRow;
    private Button mEnableStatesBtnBand;
    private Button mEnableStatesBtnRet;
    private Spinner mForceAntModeSpinner;
    private int mModemType;
    private Button mQueryIndexOrStatesBtn;
    private Spinner mTasAntDrx;
    private Spinner mTasAntMIMO1;
    private Spinner mTasAntMIMO2;
    private Spinner mTasAntPrx;
    private Spinner mTasAntStatesSpinnerRx;
    private TextView mTasAntStatesSpinnerRxView;
    private Spinner mTasAntStatesSpinnerTx;
    private TextView mTasAntStatesSpinnerTxView;
    private TextView mTasAntSwitchLabel;
    private TextView mTasAntTest;
    private Spinner mTasAntTx0;
    private Spinner mTasAntTx1;
    private EditText mTasBandEdit;
    private Spinner mTasRatSpinner;
    private TextView mTextViewTx1;
    private static int mTasModeEnableStates = 0;
    private static int mtasMode = 0;
    private static int mtasRat = 1;
    private static String mtasNvram = "false";
    private static String mtasBand = "1";
    private static String mtasStatesTx = "1";
    private static String mtasStatesRx = "1";
    private static String[] mTypeArray = {"by rat", "by band"};
    private static String[] mModeArray = {"Disable", "Enable", "Read"};
    private static String[] mRatArray = {"GSM", "UTMS", "LTE", "C2K", "NR"};
    private String[] ratMapping = {"", "0", "1", "4", "3", "5"};
    private String mQueryMode = "";
    private Handler mATCmdHander = new Handler() { // from class: com.mediatek.engineermode.forceant.ForceTx97.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i;
            AsyncResult asyncResult = (AsyncResult) message.obj;
            int i2 = message.what;
            if (i2 == 0 || i2 == 1) {
                if (asyncResult.exception != null) {
                    EmUtils.showToast("AT cmd failed.");
                    Elog.d("ForceAnt97", "AT cmd failed.");
                    return;
                } else {
                    EmUtils.showToast("AT cmd successfully.");
                    Elog.d("ForceAnt97", "AT cmd successfully.");
                    return;
                }
            }
            if (i2 != 2) {
                if (i2 == 6) {
                    if (asyncResult.exception != null) {
                        EmUtils.showToast("The state not support");
                        Elog.d("ForceAnt97", "AT cmd failed,The state not support");
                        return;
                    }
                    String[] strArr = (String[]) asyncResult.result;
                    Elog.d("ForceAnt97", "receiveDate[0] = " + strArr[0]);
                    ForceTx97.this.mTasAntTest.append("\r\n" + strArr[0]);
                    if (ForceTx97.this.parseAntIndex(strArr[0]) < 0) {
                        EmUtils.showToast("query ANT index by state failed.");
                        Elog.d("ForceAnt97", "query ANT index by state failed.");
                        return;
                    } else {
                        EmUtils.showToast("query ANT index by state successfully.");
                        Elog.d("ForceAnt97", "query ANT index by state successfully.");
                        return;
                    }
                }
                if (i2 != 7) {
                    return;
                }
                if (asyncResult.exception != null) {
                    EmUtils.showToast("AT cmd failed or The Index not support");
                    Elog.d("ForceAnt97", "AT cmd failed or The Index not supportz");
                    return;
                }
                String[] strArr2 = (String[]) asyncResult.result;
                if (strArr2.length == 0) {
                    Elog.e("ForceAnt97", "Received data is 0");
                    Elog.e("ForceAnt97", "The Index not support");
                    EmUtils.showToast("The Index not support, Please check the paramer");
                    return;
                }
                Elog.d("ForceAnt97", "receiveDate[0] = " + strArr2[0]);
                ForceTx97.this.mTasAntTest.append("\r\n" + strArr2[0]);
                if (ForceTx97.this.parseAntStaus(strArr2[0]) < 0) {
                    EmUtils.showToast("Query ANT state by index failed.");
                    Elog.d("ForceAnt97", "Query ANT state by index failed.");
                    return;
                } else {
                    Elog.d("ForceAnt97", "Query ANT state by index successfully.");
                    EmUtils.showToast("Query ANT state by index successfully.");
                    return;
                }
            }
            if (asyncResult.exception != null) {
                EmUtils.showToast("AT cmd failed.");
                Elog.e("ForceAnt97", "Received data is null");
                return;
            }
            String[] strArr3 = (String[]) asyncResult.result;
            if (strArr3 == null) {
                EmUtils.showToast("Warning: Received data is null!");
                Elog.e("ForceAnt97", "Received data is null");
                return;
            }
            if (strArr3[0].length() < 1) {
                Elog.e("ForceAnt97", "Received data is 0");
                return;
            }
            Elog.d("ForceAnt97", "receiveDate[0] = " + strArr3[0]);
            int i3 = -1;
            if ("+ETXANT".startsWith(strArr3[0])) {
                try {
                    i = Integer.parseInt(strArr3[0].split(",")[1]);
                } catch (Exception e) {
                    i = 0;
                }
            } else {
                try {
                    String[] strArrSplit = strArr3[0].split(",");
                    i = Integer.parseInt(strArrSplit[1]);
                    i3 = Integer.parseInt(strArrSplit[2]);
                } catch (Exception e2) {
                    i = 0;
                    i3 = 0;
                }
            }
            Elog.d("ForceAnt97", "value_tx = " + i);
            EmUtils.showToast("Query ANT state succeed,value_tx = " + i);
            if (i < 0 || i >= 24) {
                ForceTx97.this.mTasAntStatesSpinnerTx.setSelection(24);
            } else {
                ForceTx97.this.mTasAntStatesSpinnerTx.setSelection(i);
            }
            Elog.d("ForceAnt97", "value_rx = " + i3);
            EmUtils.showToast("Query ANT state succeed,value_rx = " + i3);
            if (i3 < 0 || i3 >= 24) {
                ForceTx97.this.mTasAntStatesSpinnerRx.setSelection(24);
            } else {
                ForceTx97.this.mTasAntStatesSpinnerRx.setSelection(i3);
            }
        }
    };
    private AdapterView.OnItemSelectedListener mSpinnerListener = new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.forceant.ForceTx97.2
        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
            if (adapterView == ForceTx97.this.mForceAntModeSpinner) {
                Elog.d("ForceAnt97", "mForceAntModeSpinner changed, pos = " + i);
                if (i == 0) {
                    ForceTx97.this.mQueryIndexOrStatesBtn.setEnabled(false);
                } else if (i == 1) {
                    ForceTx97.this.mQueryIndexOrStatesBtn.setEnabled(true);
                } else if (i == 2) {
                    ForceTx97.this.mQueryIndexOrStatesBtn.setEnabled(false);
                }
                int unused = ForceTx97.mtasMode = i;
                return;
            }
            if (adapterView != ForceTx97.this.mTasRatSpinner) {
                if (adapterView == ForceTx97.this.mTasAntStatesSpinnerTx) {
                    Elog.d("ForceAnt97", "mTasAntStatesTxSpinner changed, pos = " + i);
                    String unused2 = ForceTx97.mtasStatesTx = String.valueOf(i);
                    return;
                }
                if (adapterView == ForceTx97.this.mTasAntStatesSpinnerRx) {
                    Elog.d("ForceAnt97", "mTasAntStatesRxSpinner changed, pos = " + i);
                    String unused3 = ForceTx97.mtasStatesRx = String.valueOf(i);
                    return;
                }
                return;
            }
            Elog.d("ForceAnt97", "mTasRatSpinner changed, pos = " + i);
            int unused4 = ForceTx97.mtasRat = i + 1;
            if (ForceTx97.mtasRat == 5) {
                ForceTx97.this.mAntIndexTxTableRow.setVisibility(0);
                ForceTx97.this.mAntIndexMIMOTableRow.setVisibility(0);
                ForceTx97.this.mTasAntStatesSpinnerRx.setVisibility(0);
                ForceTx97.this.mTasAntStatesSpinnerRxView.setVisibility(0);
                ForceTx97.this.mTasAntStatesSpinnerTxView.setText(R.string.tas_ant_states_tx);
                ForceTx97.this.mTextViewTx1.setVisibility(0);
                ForceTx97.this.mTasAntTx1.setVisibility(0);
                return;
            }
            if (ForceTx97.mtasRat != 3) {
                ForceTx97.this.mAntIndexTxTableRow.setVisibility(8);
                ForceTx97.this.mAntIndexMIMOTableRow.setVisibility(8);
                ForceTx97.this.mTasAntStatesSpinnerRx.setVisibility(8);
                ForceTx97.this.mTasAntStatesSpinnerRxView.setVisibility(8);
                ForceTx97.this.mTasAntStatesSpinnerTxView.setText(R.string.tas_ant_states);
                return;
            }
            ForceTx97.this.mAntIndexTxTableRow.setVisibility(0);
            ForceTx97.this.mAntIndexMIMOTableRow.setVisibility(0);
            ForceTx97.this.mTasAntStatesSpinnerRx.setVisibility(8);
            ForceTx97.this.mTasAntStatesSpinnerRxView.setVisibility(8);
            ForceTx97.this.mTasAntStatesSpinnerTxView.setText(R.string.tas_ant_states_tx);
            ForceTx97.this.mTextViewTx1.setVisibility(8);
            ForceTx97.this.mTasAntTx1.setVisibility(8);
        }

        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onNothingSelected(AdapterView adapterView) {
        }
    };

    public void execTheCmd() {
        String str = "";
        int i = mTasModeEnableStates;
        if (i == 0 || i == 2 || i == 3) {
            mtasBand = this.mTasBandEdit.getText().toString();
            str = mtasBand;
            if (str.equals("")) {
                EmUtils.showToast("By band mode,the band value should not be empty");
                return;
            }
        }
        String str2 = mtasStatesTx;
        String str3 = mtasStatesRx;
        int selectedItemPosition = this.mForceAntModeSpinner.getSelectedItemPosition();
        mtasMode = selectedItemPosition;
        if (selectedItemPosition == 0 || selectedItemPosition == 2) {
            str2 = "";
            str3 = "";
        }
        String str4 = mtasNvram.equals("true") ? "1" : "0";
        Elog.d("ForceAnt97", "mtasMode = " + mtasMode + "," + mModeArray[mtasMode]);
        Elog.d("ForceAnt97", "mtasRat = " + mtasRat + "," + mRatArray[mtasRat + (-1)]);
        StringBuilder sb = new StringBuilder();
        sb.append("mtasNvram = ");
        sb.append(str4);
        Elog.d("ForceAnt97", sb.toString());
        Elog.d("ForceAnt97", "tasBand = " + str);
        Elog.d("ForceAnt97", "mtasStatesTx = " + str2);
        Elog.d("ForceAnt97", "mtasStatesRx = " + str3);
        writeTasSettingStates();
        int i2 = mTasModeEnableStates;
        if (i2 == 2) {
            queryIndexByStates(mtasRat, str, str2, str3);
        } else if (i2 == 3) {
            queryStatesByIndex(mtasRat, str);
        } else {
            setTasForceIdx(mtasMode, mtasRat, str2, str3, str, str4);
        }
    }

    public void getTasSettingStates() {
        SharedPreferences sharedPreferences = getSharedPreferences("ForceAnt97", 0);
        mtasMode = sharedPreferences.getInt(TAS_MODE, 0);
        mtasRat = sharedPreferences.getInt(TAS_RAT, 1);
        mtasNvram = sharedPreferences.getString(TAS_NVRAM, "true");
        mtasBand = sharedPreferences.getString(TAS_BAND, "1");
        Elog.d("ForceAnt97", "\ngetTasSettingStates: ");
        Elog.d("ForceAnt97", "mtasMode = " + mtasMode);
        Elog.d("ForceAnt97", "mtasRat = " + mtasRat);
        Elog.d("ForceAnt97", "mtasNvram = " + mtasNvram);
        Elog.d("ForceAnt97", "mtasBand = " + mtasBand);
    }

    boolean isTasStatesValid(Spinner spinner) {
        return (spinner.getSelectedItemPosition() == 5 || spinner.getSelectedItemPosition() == 6) ? false : true;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view == this.mEnableStatesBtnBand) {
            Elog.d("ForceAnt97", "Set ANT state click by band");
            mTasModeEnableStates = 0;
            mtasNvram = "false";
        } else if (view == this.mEnableStatesBtnRet) {
            Elog.d("ForceAnt97", "Set ANT state click by ret");
            mTasModeEnableStates = 1;
            mtasNvram = "true";
        } else if (view == this.mQueryIndexOrStatesBtn) {
            if (this.mQueryMode.equals("by_states")) {
                mTasModeEnableStates = 2;
                Elog.d("ForceAnt97", "Query ANT index by state click");
            } else {
                mTasModeEnableStates = 3;
                Elog.d("ForceAnt97", "Query ANT state by index click");
            }
        }
        if (mTasModeEnableStates == 1) {
            showDialog(1);
        } else {
            execTheCmd();
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.force_tx_97);
        this.mModemType = ModemCategory.getModemType();
        this.mQueryMode = getIntent().getStringExtra("MODE");
        Elog.d("ForceAnt97", "MODE = " + this.mQueryMode);
        this.mForceAntModeSpinner = (Spinner) findViewById(R.id.force_ant_mode);
        this.mTasRatSpinner = (Spinner) findViewById(R.id.tas_rat);
        this.mTasBandEdit = (EditText) findViewById(R.id.tas_band);
        this.mTasAntStatesSpinnerTxView = (TextView) findViewById(R.id.tas_ant_states_tx_view);
        this.mTasAntStatesSpinnerRxView = (TextView) findViewById(R.id.tas_ant_states_rx_view);
        this.mTextViewTx1 = (TextView) findViewById(R.id.TextViewTx1);
        this.mTasAntStatesSpinnerTx = (Spinner) findViewById(R.id.tas_ant_states_tx);
        this.mTasAntStatesSpinnerRx = (Spinner) findViewById(R.id.tas_ant_states_rx);
        this.mQueryIndexOrStatesBtn = (Button) findViewById(R.id.get_ant_index_states);
        this.mEnableStatesBtnBand = (Button) findViewById(R.id.enable_ant_states);
        this.mEnableStatesBtnRet = (Button) findViewById(R.id.enable_ant_states_all);
        this.mAntIndexTxTableRow = (TableRow) findViewById(R.id.TableRowTx);
        this.mAntIndexMIMOTableRow = (TableRow) findViewById(R.id.TableRowMIM0);
        this.mTasAntTx0 = (Spinner) findViewById(R.id.tas_ant_tx0);
        this.mTasAntTx1 = (Spinner) findViewById(R.id.tas_ant_tx1);
        this.mTasAntPrx = (Spinner) findViewById(R.id.tas_ant_tx_prx);
        this.mTasAntDrx = (Spinner) findViewById(R.id.tas_ant_drx);
        this.mTasAntMIMO1 = (Spinner) findViewById(R.id.tas_ant_mimo1);
        this.mTasAntMIMO2 = (Spinner) findViewById(R.id.tas_ant_mimo2);
        this.mTasAntTest = (TextView) findViewById(R.id.tas_ant_test);
        this.mTasAntSwitchLabel = (TextView) findViewById(R.id.Ant_switch_label);
        this.mQueryIndexOrStatesBtn.setOnClickListener(this);
        this.mEnableStatesBtnBand.setOnClickListener(this);
        this.mEnableStatesBtnRet.setOnClickListener(this);
        this.mForceAntModeSpinner.setOnItemSelectedListener(this.mSpinnerListener);
        this.mTasRatSpinner.setOnItemSelectedListener(this.mSpinnerListener);
        this.mTasAntStatesSpinnerTx.setOnItemSelectedListener(this.mSpinnerListener);
        this.mTasAntStatesSpinnerRx.setOnItemSelectedListener(this.mSpinnerListener);
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        return i != 1 ? super.onCreateDialog(i) : new AlertDialog.Builder(this).setTitle("Warning").setMessage("Enable force state for all bands and write force state to NVRAM\n").setPositiveButton("Confirm", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.forceant.ForceTx97.3
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
                if (i2 == -1) {
                    ForceTx97.this.execTheCmd();
                }
                dialogInterface.dismiss();
            }
        }).setNegativeButton("Cancel", (DialogInterface.OnClickListener) null).create();
    }

    @Override // android.app.Activity
    public void onResume() {
        super.onResume();
        Elog.d("ForceAnt97", "onResume");
        getTasSettingStates();
        this.mForceAntModeSpinner.setSelection(mtasMode, true);
        this.mTasRatSpinner.setSelection(mtasRat - 1, true);
        if (this.mQueryMode.equals("by_states")) {
            this.mTasAntSwitchLabel.setText(getString(R.string.get_ant_index));
            this.mQueryIndexOrStatesBtn.setText(getString(R.string.get_ant_index));
            mTasModeEnableStates = 1;
            this.mTasAntTx0.setEnabled(false);
            this.mTasAntTx1.setEnabled(false);
            this.mTasAntPrx.setEnabled(false);
            this.mTasAntDrx.setEnabled(false);
            this.mTasAntMIMO1.setEnabled(false);
            this.mTasAntMIMO2.setEnabled(false);
            this.mTasAntStatesSpinnerTx.setEnabled(true);
            this.mTasAntStatesSpinnerRx.setEnabled(true);
        } else if (this.mQueryMode.equals("by_index")) {
            this.mTasAntSwitchLabel.setText(getString(R.string.get_ant_states));
            this.mQueryIndexOrStatesBtn.setText(getString(R.string.get_ant_states));
            mTasModeEnableStates = 2;
            this.mTasAntTx0.setEnabled(true);
            this.mTasAntTx1.setEnabled(true);
            this.mTasAntPrx.setEnabled(true);
            this.mTasAntDrx.setEnabled(true);
            this.mTasAntMIMO1.setEnabled(true);
            this.mTasAntMIMO2.setEnabled(true);
            this.mTasAntStatesSpinnerTx.setEnabled(false);
            this.mTasAntStatesSpinnerRx.setEnabled(false);
        }
        if (this.mModemType == 1) {
            this.ratMapping[2] = "1";
            Elog.d("ForceAnt97", "FDD");
        } else {
            this.ratMapping[2] = "2";
            Elog.d("ForceAnt97", "tdd");
        }
    }

    int parseAntIndex(String str) {
        try {
            String[] strArrSplit = str.split(",");
            for (String str2 : strArrSplit) {
                Elog.d("ForceAnt97", "value = " + str2);
            }
            if (strArrSplit[1].equals("255")) {
                this.mTasAntTx0.setSelection(10);
            } else {
                this.mTasAntTx0.setSelection(Integer.parseInt(strArrSplit[1]));
            }
            if (strArrSplit[2].equals("255")) {
                this.mTasAntTx1.setSelection(10);
            } else {
                this.mTasAntTx1.setSelection(Integer.parseInt(strArrSplit[2]));
            }
            if (strArrSplit[3].equals("255")) {
                this.mTasAntPrx.setSelection(10);
            } else {
                this.mTasAntPrx.setSelection(Integer.parseInt(strArrSplit[3]));
            }
            if (strArrSplit[4].equals("255")) {
                this.mTasAntDrx.setSelection(10);
            } else {
                this.mTasAntDrx.setSelection(Integer.parseInt(strArrSplit[4]));
            }
            if (strArrSplit[5].equals("255")) {
                this.mTasAntMIMO1.setSelection(10);
            } else {
                this.mTasAntMIMO1.setSelection(Integer.parseInt(strArrSplit[5]));
            }
            if (strArrSplit[6].equals("255")) {
                this.mTasAntMIMO2.setSelection(10);
            } else {
                this.mTasAntMIMO2.setSelection(Integer.parseInt(strArrSplit[6]));
            }
            return 0;
        } catch (Exception e) {
            return -1;
        }
    }

    int parseAntStaus(String str) {
        try {
            String[] strArrSplit = str.split(",");
            int i = Integer.parseInt(strArrSplit[1]);
            if (i < 0 || i >= 24) {
                this.mTasAntStatesSpinnerTx.setSelection(24);
            } else {
                this.mTasAntStatesSpinnerTx.setSelection(i);
            }
            if (strArrSplit.length <= 2) {
                return 0;
            }
            int i2 = Integer.parseInt(strArrSplit[2]);
            if (i2 < 0 || i2 >= 24) {
                this.mTasAntStatesSpinnerRx.setSelection(24);
                return 0;
            }
            this.mTasAntStatesSpinnerRx.setSelection(i2);
            return 0;
        } catch (Exception e) {
            return -1;
        }
    }

    public void queryIndexByStates(int i, String str, String str2, String str3) {
        String[] strArr = new String[2];
        if (i != 5) {
            str3 = str2;
        }
        strArr[0] = "AT+EGMC=1,\"utas_query_ant_port\"," + this.ratMapping[i] + "," + str + "," + str2 + "," + str3;
        strArr[1] = "+EGMC:";
        StringBuilder sb = new StringBuilder();
        sb.append("sendAtCommand: ");
        sb.append(strArr[0]);
        Elog.d("ForceAnt97", sb.toString());
        this.mTasAntTest.setText(strArr[0]);
        senAtCommand(strArr, 6);
    }

    public void queryStatesByIndex(int i, String str) {
        int i2;
        int selectedItemPosition;
        int i3;
        int selectedItemPosition2;
        int i4;
        int i5;
        int i6;
        int selectedItemPosition3;
        String[] strArr = new String[2];
        String[] strArr2 = {"\"gsm_utas\"", "\"wcdma_utas\"", "\"t_utas_query\"", "\"c2k_utas\"", "\"l_utas_query\"", "\"n_utas_query\""};
        int i7 = Integer.parseInt(this.ratMapping[i]);
        int i8 = 0;
        int selectedItemPosition4 = 255;
        int selectedItemPosition5 = 255;
        int selectedItemPosition6 = 255;
        if (i7 == 0) {
            int selectedItemPosition7 = this.mTasAntPrx.getSelectedItemPosition();
            if (isTasStatesValid(this.mTasAntDrx)) {
                i6 = 2;
                selectedItemPosition3 = this.mTasAntDrx.getSelectedItemPosition();
            } else {
                i6 = 1;
                selectedItemPosition3 = 0;
            }
            strArr[0] = "AT+EGMC=1," + strArr2[i7] + "," + str + "," + i6 + ",";
            if (i6 == 1) {
                strArr[0] = strArr[0] + selectedItemPosition7 + "," + selectedItemPosition7;
            } else {
                strArr[0] = strArr[0] + selectedItemPosition7 + "," + selectedItemPosition3 + "," + selectedItemPosition7;
            }
        } else if (i7 == 1) {
            int selectedItemPosition8 = this.mTasAntPrx.getSelectedItemPosition();
            if (isTasStatesValid(this.mTasAntDrx)) {
                i3 = 2;
                selectedItemPosition2 = this.mTasAntDrx.getSelectedItemPosition();
                i4 = 0;
                i5 = 0;
            } else {
                i3 = 1;
                selectedItemPosition2 = 255;
                i4 = 0;
                i5 = 0;
            }
            strArr[0] = "AT+EGMC=1," + strArr2[i7] + ",1," + str + "," + i3 + ",";
            strArr[0] = strArr[0] + selectedItemPosition8 + "," + selectedItemPosition2 + "," + i4 + "," + i5 + "," + selectedItemPosition8;
        } else if (i7 == 2) {
            int selectedItemPosition9 = this.mTasAntPrx.getSelectedItemPosition();
            if (isTasStatesValid(this.mTasAntDrx)) {
                EmUtils.showToast("The tdscdma only support 1 path： prx trx");
                return;
            }
            strArr[0] = "AT+EGMC=1," + strArr2[i7] + "," + str + ",1," + selectedItemPosition9;
        } else if (i7 == 3) {
            int selectedItemPosition10 = this.mTasAntPrx.getSelectedItemPosition();
            if (isTasStatesValid(this.mTasAntDrx)) {
                i2 = 2;
                selectedItemPosition = this.mTasAntDrx.getSelectedItemPosition();
            } else {
                i2 = 1;
                selectedItemPosition = 255;
            }
            strArr[0] = "AT+EGMC=1," + strArr2[i7] + "," + str + "," + i2 + ",";
            StringBuilder sb = new StringBuilder();
            sb.append(strArr[0]);
            sb.append(selectedItemPosition10);
            sb.append(",");
            sb.append(selectedItemPosition);
            strArr[0] = sb.toString();
        } else if (i7 == 4) {
            int selectedItemPosition11 = this.mTasAntTx0.getSelectedItemPosition();
            this.mTasAntTx1.getSelectedItemPosition();
            int selectedItemPosition12 = this.mTasAntPrx.getSelectedItemPosition();
            if (!isTasStatesValid(this.mTasAntDrx)) {
                EmUtils.showToast("The mTasAntDrx not be 255 or null in lte mode");
                return;
            }
            if ((isTasStatesValid(this.mTasAntMIMO1) && !isTasStatesValid(this.mTasAntMIMO1)) || (!isTasStatesValid(this.mTasAntMIMO1) && isTasStatesValid(this.mTasAntMIMO2))) {
                EmUtils.showToast("TasAntMimo1 or TasAntMimo2 should both 255 or not");
            } else if (isTasStatesValid(this.mTasAntMIMO1) && isTasStatesValid(this.mTasAntMIMO2)) {
                i8 = 4;
                selectedItemPosition4 = this.mTasAntDrx.getSelectedItemPosition();
                selectedItemPosition5 = this.mTasAntMIMO1.getSelectedItemPosition();
                selectedItemPosition6 = this.mTasAntMIMO2.getSelectedItemPosition();
            } else {
                i8 = 2;
                selectedItemPosition4 = this.mTasAntDrx.getSelectedItemPosition();
                selectedItemPosition5 = 0;
                selectedItemPosition6 = 0;
            }
            strArr[0] = "AT+EGMC=1," + strArr2[i7] + ",1," + str + "," + i8 + ",";
            strArr[0] = strArr[0] + selectedItemPosition12 + "," + selectedItemPosition4 + "," + selectedItemPosition5 + "," + selectedItemPosition6 + "," + selectedItemPosition11;
        } else if (i7 == 5) {
            int selectedItemPosition13 = this.mTasAntTx0.getSelectedItemPosition();
            int selectedItemPosition14 = this.mTasAntTx1.getSelectedItemPosition();
            int selectedItemPosition15 = this.mTasAntPrx.getSelectedItemPosition();
            if (!isTasStatesValid(this.mTasAntDrx)) {
                EmUtils.showToast("The mTasAntDrx not be 255 or null in lte mode");
                return;
            }
            if ((isTasStatesValid(this.mTasAntMIMO1) && !isTasStatesValid(this.mTasAntMIMO1)) || (!isTasStatesValid(this.mTasAntMIMO1) && isTasStatesValid(this.mTasAntMIMO2))) {
                EmUtils.showToast("TasAntMimo1 or TasAntMimo2 should both 255 or not");
            } else if (isTasStatesValid(this.mTasAntMIMO1) && isTasStatesValid(this.mTasAntMIMO2)) {
                i8 = 4;
                selectedItemPosition4 = this.mTasAntDrx.getSelectedItemPosition();
                selectedItemPosition5 = this.mTasAntMIMO1.getSelectedItemPosition();
                selectedItemPosition6 = this.mTasAntMIMO2.getSelectedItemPosition();
            } else {
                i8 = 2;
                selectedItemPosition4 = this.mTasAntDrx.getSelectedItemPosition();
                selectedItemPosition5 = 0;
                selectedItemPosition6 = 0;
            }
            strArr[0] = "AT+EGMC=1," + strArr2[i7] + ",1," + str + "," + i8 + ",";
            strArr[0] = strArr[0] + selectedItemPosition15 + "," + selectedItemPosition4 + "," + selectedItemPosition5 + "," + selectedItemPosition6 + "," + selectedItemPosition13 + "," + selectedItemPosition14;
        }
        strArr[1] = "+EGMC:";
        Elog.d("ForceAnt97", "sendAtCommand: " + strArr[0]);
        this.mTasAntTest.setText(strArr[0]);
        senAtCommand(strArr, 7);
    }

    public void senAtCommand(String[] strArr, int i) {
        EmUtils.invokeOemRilRequestStringsEm(strArr, this.mATCmdHander.obtainMessage(i));
    }

    public void setTasForceIdx(int i, int i2, String str, String str2, String str3, String str4) {
        String[] strArr = new String[2];
        if (i2 == 5) {
            if (mTasModeEnableStates == 0) {
                strArr[0] = "AT+EGMC=1,\"NrForceTxRx\"," + (i + 3) + "," + str + "," + str2 + "," + str3;
            } else {
                strArr[0] = "AT+EGMC=1,\"NrForceTxRx\"," + i + "," + str + "," + str2 + "," + str4;
            }
            strArr[1] = "+EGMC:";
        } else {
            if (mTasModeEnableStates == 0) {
                strArr[0] = "AT+ETXANT=" + (i + 3) + "," + i2 + "," + str + "," + str3;
            } else {
                strArr[0] = "AT+ETXANT=" + i + "," + i2 + "," + str + "," + str3 + "," + str4;
            }
            strArr[1] = "+ETXANT:";
        }
        Elog.d("ForceAnt97", "sendAtCommand: " + strArr[0]);
        this.mTasAntTest.setText(strArr[0]);
        senAtCommand(strArr, i);
    }

    public void writeTasSettingStates() {
        SharedPreferences.Editor editorEdit = getSharedPreferences("ForceAnt97", 0).edit();
        editorEdit.putInt(TAS_MODE, mtasMode);
        editorEdit.putInt(TAS_RAT, mtasRat);
        editorEdit.putString(TAS_NVRAM, mtasNvram);
        editorEdit.putString(TAS_BAND, mtasBand);
        editorEdit.commit();
    }
}
