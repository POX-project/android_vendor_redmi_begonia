package com.mediatek.engineermode.forceant;

import android.app.Activity;
import android.content.SharedPreferences;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.util.Log;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
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

/* JADX INFO: loaded from: classes2.dex */
public class ForceTx extends Activity implements View.OnClickListener, RadioGroup.OnCheckedChangeListener {
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
    private static final String SHREDPRE_NAME = "ForceTx";
    private static final String TAG = "ForceTx";
    private static final String TAS_BAND = "TasBand";
    private static final String TAS_DPDT = "TasDpdt";
    private static final String TAS_MODE = "TasMode";
    private static final String TAS_NVRAM = "TasNvram";
    private static final String TAS_RAT = "TasRat";
    private static final String TAS_TYPE = "TasType";
    private static final String TAS_VERSION = "TasVersion";
    private Spinner mForceAntSpinner;
    private Spinner mIdxSpinner;
    private Button mSetButton;
    private EditText mTasAntIdxEdit;
    private TextView mTasAntIdxView;
    private EditText mTasBandEdit;
    private TextView mTasBandText;
    private TextView mTasNvramText;
    private Spinner mTasRatSpinner;
    private Spinner mTasVerSpinner;
    private Spinner mTasnvramSpinner;
    private ArrayAdapter<String> mVersionAdatper1;
    private static int mForceType = 0;
    private static int mForceDpdt = 0;
    private static int mtasMode = 0;
    private static int mtasVersion = 0;
    private static int mtasRat = 1;
    private static String mtasNvram = "0";
    private static String mtasBand = "1";
    private static String mtasidx = "1";
    private static String[] mDpdtArray = {"signal dpdt", "double dpdt"};
    private static String[] mTypeArray = {"by rat", "by band"};
    private static String[] mModeArray = {"OFF", "ON", "QUERY"};
    private static String[] mVersionArray = {"V1.0", "V2.0"};
    private static String[] mRatArray = {"GSM", "UTMS", "LTE", "C2K"};
    private static String[][] mTasDpdt1Label = {new String[]{"LANT  X", "UANT  X"}, new String[]{"LANT  UANT", "UANT LANT"}, new String[]{"LANT X", "UANT X", "LANT(') X"}, new String[]{"LANT  UANT", "UANT  LANT", "LANT(') UANT", "UANT LANT(') "}, new String[]{"LANT  X  X  X", "UANT  X  X  X"}, new String[]{"LANT  X  UANT  X", "UANT  X  UANT  X"}, new String[]{"LANT  LANT  UANT  UANT", "LANT  UANT  UANT  LANT", "UANT  LANT  LANT  UANT", "UANT  UANT  LANT  LANT"}, new String[]{"LANT  X  UANT  X", "UANT  X  LANT  X", "LANT(')  X  UANT  X", "UANT  X  LANT(')  X"}, new String[]{"LANT  LANT  UANT  UANT", "LANT  UANT  UANT  LANT", "UANT  LANT  LANT  UANT", "UANT  UANT  LANT  LANT", "LANT(')  LANT(')  UANT  UANT", "LANT(')  UANT  UANT  LANT(')", "UANT  LANT(')  LANT(')  UANT", "UANT  UANT  LANT(')  LANT(')"}};
    private static int[][] mTasDpdt1 = {new int[]{0, 2}, new int[]{1, 3}, new int[]{1, 3}, new int[]{1, 3}};
    private static int[][] mTasDpdt2 = {new int[]{4, 2}, new int[]{5, 7}, new int[]{6, 8}, new int[]{5, 7}};
    private RadioGroup mRGForceType = null;
    private RadioButton radioBtnForceRat = null;
    private RadioButton radioBtnforceBand = null;
    private RadioGroup mRGForceDpdt = null;
    private RadioButton radioBtnForceDpdtSingle = null;
    private RadioButton radioBtnForceDpdtDouble = null;
    private AdapterView.OnItemSelectedListener mSpinnerListener = new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.forceant.ForceTx.1
        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
            if (adapterView == ForceTx.this.mForceAntSpinner) {
                Elog.d("ForceTx", "mForceAntModeSpinner changed, pos = " + i);
                if (i != 0 && i != 1 && i == 2) {
                    ForceTx.this.mTasAntIdxEdit.setText("");
                    return;
                }
            } else if (adapterView == ForceTx.this.mTasVerSpinner) {
                Elog.d("ForceTx", "mtasVersion changed, pos = " + i);
                int unused = ForceTx.mtasVersion = i == 0 ? 1 : 2;
            } else if (adapterView == ForceTx.this.mTasRatSpinner) {
                Elog.d("ForceTx", "mTasRatSpinner changed, pos = " + i);
                int unused2 = ForceTx.mtasRat = i + 1;
            } else if (adapterView == ForceTx.this.mIdxSpinner) {
                Elog.d("ForceTx", "mIdxSpinner changed, pos = " + i);
                ForceTx.this.mTasAntIdxEdit.setText(i + "");
                return;
            }
            ForceTx.this.queryTasIdxLabels();
        }

        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onNothingSelected(AdapterView adapterView) {
        }
    };
    private final Handler mATCmdHander = new Handler() { // from class: com.mediatek.engineermode.forceant.ForceTx.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i;
            AsyncResult asyncResult = (AsyncResult) message.obj;
            int i2 = message.what;
            if (i2 != 0 && i2 != 1) {
                if (i2 != 2) {
                    if (i2 != 3 && i2 != 4) {
                        if (i2 != 5) {
                            return;
                        }
                    }
                }
                if (asyncResult.exception != null) {
                    Toast.makeText(ForceTx.this, " AT cmd failed.", 1).show();
                    return;
                }
                String[] strArr = (String[]) asyncResult.result;
                int[] iArr = new int[4];
                if (strArr == null) {
                    Toast.makeText(ForceTx.this, "Warning: Received data is null!", 0).show();
                    return;
                }
                Elog.d("ForceTx", "receiveDate[0] = " + strArr[0]);
                try {
                    i = Integer.parseInt(strArr[0].split(",")[1]);
                } catch (Exception e) {
                    i = 0;
                }
                Elog.d("ForceTx", "value = " + i);
                if (i == 255) {
                    ForceTx.this.mTasAntIdxEdit.setText("disabled");
                    return;
                }
                ForceTx.this.queryTasIdxLabels();
                if (i < ForceTx.this.mIdxSpinner.getCount()) {
                    ForceTx.this.mIdxSpinner.setSelection(i);
                    return;
                }
                String str = "The return idx == " + i + " not match the version or dpdt ";
                Toast.makeText(ForceTx.this, str, 1).show();
                Elog.e("ForceTx", str);
                return;
            }
            if (asyncResult.exception != null) {
                Toast.makeText(ForceTx.this, " AT cmd failed.", 1).show();
            } else {
                Toast.makeText(ForceTx.this, " AT cmd successfully.", 1).show();
            }
        }
    };

    public void getTasSettingStatus() {
        SharedPreferences sharedPreferences = getSharedPreferences("ForceTx", 0);
        mForceType = sharedPreferences.getInt(TAS_TYPE, 0);
        mForceDpdt = sharedPreferences.getInt(TAS_DPDT, 0);
        mtasMode = sharedPreferences.getInt(TAS_MODE, 0);
        mtasVersion = sharedPreferences.getInt(TAS_VERSION, 1);
        mtasRat = sharedPreferences.getInt(TAS_RAT, 1);
        mtasNvram = sharedPreferences.getString(TAS_NVRAM, "0");
        mtasBand = sharedPreferences.getString(TAS_BAND, "1");
        Elog.d("ForceTx", "\ngetTasSettingStatus: ");
        Elog.d("ForceTx", "mForceType = " + mForceType);
        Elog.d("ForceTx", "mForceDpdt = " + mForceDpdt);
        Elog.d("ForceTx", "mtasMode = " + mtasMode);
        Elog.d("ForceTx", "mtasVersion = " + mtasVersion);
        Elog.d("ForceTx", "mtasRat = " + mtasRat);
        Elog.d("ForceTx", "mtasNvram = " + mtasNvram);
        Elog.d("ForceTx", "mtasBand = " + mtasBand);
    }

    @Override // android.widget.RadioGroup.OnCheckedChangeListener
    public void onCheckedChanged(RadioGroup radioGroup, int i) {
        if (i == R.id.force_rat) {
            mForceType = 0;
            this.mTasBandEdit.setVisibility(8);
            this.mTasBandText.setVisibility(8);
            this.mTasnvramSpinner.setVisibility(0);
            this.mTasNvramText.setVisibility(0);
            return;
        }
        if (i == R.id.force_band) {
            mForceType = 1;
            this.mTasBandEdit.setVisibility(0);
            this.mTasBandText.setVisibility(0);
            this.mTasnvramSpinner.setVisibility(8);
            this.mTasNvramText.setVisibility(8);
            return;
        }
        if (i == R.id.force_dpdt_single) {
            mForceDpdt = 0;
            queryTasIdxLabels();
        } else if (i == R.id.force_dpdt_double) {
            mForceDpdt = 1;
            queryTasIdxLabels();
        }
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view == this.mSetButton) {
            Elog.d("ForceTx", "forceAnt set: ");
            mtasMode = this.mForceAntSpinner.getSelectedItemPosition() + (mForceType == 1 ? 3 : 0);
            mtasBand = this.mTasBandEdit.getText().toString();
            mtasidx = this.mTasAntIdxEdit.getText().toString();
            mtasNvram = this.mTasnvramSpinner.getSelectedItemPosition() == 0 ? "0" : "1";
            writeTasSettingStatus();
            int i = mtasMode;
            if (i == 0 || i == 2 || i == 3 || i == 5) {
                mtasidx = "";
                mtasNvram = "";
            }
            mtasBand = mForceType == 1 ? mtasBand : "";
            mtasNvram = mForceType != 1 ? mtasNvram : "";
            Elog.d("ForceTx", "mForceType = " + mForceType + "," + mTypeArray[mForceType]);
            Elog.d("ForceTx", "mForceDpdt = " + mForceDpdt + "," + mDpdtArray[mForceDpdt]);
            StringBuilder sb = new StringBuilder();
            sb.append("mtasMode = ");
            sb.append(mtasMode);
            sb.append(",");
            String[] strArr = mModeArray;
            int i2 = mtasMode;
            if (i2 >= 3) {
                i2 -= 3;
            }
            sb.append(strArr[i2]);
            Elog.d("ForceTx", sb.toString());
            Elog.d("ForceTx", "mtasVersion = " + mtasVersion + "," + mVersionArray[mtasVersion - 1]);
            Elog.d("ForceTx", "mtasRat = " + mtasRat + "," + mRatArray[mtasRat - 1]);
            StringBuilder sb2 = new StringBuilder();
            sb2.append("mtasNvram = ");
            sb2.append(mtasNvram);
            Elog.d("ForceTx", sb2.toString());
            Elog.d("ForceTx", "mtasBand = " + mtasBand);
            setTasForceIdx(mtasMode, mtasRat, mtasidx, mtasBand, mtasNvram);
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.force_tx);
        this.mTasRatSpinner = (Spinner) findViewById(R.id.tas_rat);
        this.mTasnvramSpinner = (Spinner) findViewById(R.id.tas_nvram);
        this.mTasBandEdit = (EditText) findViewById(R.id.tas_band);
        this.mTasBandText = (TextView) findViewById(R.id.tas_band_text);
        this.mTasNvramText = (TextView) findViewById(R.id.tas_nvram_text);
        EditText editText = (EditText) findViewById(R.id.tas_ant_idx);
        this.mTasAntIdxEdit = editText;
        editText.setEnabled(false);
        this.mForceAntSpinner = (Spinner) findViewById(R.id.force_ant1);
        this.mTasVerSpinner = (Spinner) findViewById(R.id.tas_ver1);
        this.mIdxSpinner = (Spinner) findViewById(R.id.dpdt1_idx);
        this.mTasAntIdxView = (TextView) findViewById(R.id.tas_ant_idx_View);
        Button button = (Button) findViewById(R.id.force_tx_set);
        this.mSetButton = button;
        button.setOnClickListener(this);
        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item);
        this.mVersionAdatper1 = arrayAdapter;
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mIdxSpinner.setAdapter((SpinnerAdapter) this.mVersionAdatper1);
        RadioGroup radioGroup = (RadioGroup) findViewById(R.id.force_type);
        this.mRGForceType = radioGroup;
        radioGroup.setOnCheckedChangeListener(this);
        this.radioBtnForceRat = (RadioButton) findViewById(R.id.force_rat);
        this.radioBtnforceBand = (RadioButton) findViewById(R.id.force_band);
        RadioGroup radioGroup2 = (RadioGroup) findViewById(R.id.force_dpdt);
        this.mRGForceDpdt = radioGroup2;
        radioGroup2.setOnCheckedChangeListener(this);
        this.radioBtnForceDpdtSingle = (RadioButton) findViewById(R.id.force_dpdt_single);
        this.radioBtnForceDpdtDouble = (RadioButton) findViewById(R.id.force_dpdt_double);
    }

    @Override // android.app.Activity
    public void onResume() {
        super.onResume();
        this.mForceAntSpinner.setOnItemSelectedListener(this.mSpinnerListener);
        this.mTasVerSpinner.setOnItemSelectedListener(this.mSpinnerListener);
        this.mTasRatSpinner.setOnItemSelectedListener(this.mSpinnerListener);
        this.mIdxSpinner.setOnItemSelectedListener(this.mSpinnerListener);
        getTasSettingStatus();
        this.mVersionAdatper1.clear();
        this.mVersionAdatper1.addAll(mTasDpdt1Label[mTasDpdt1[mtasRat - 1][mtasVersion - 1]]);
        this.mIdxSpinner.setAdapter((SpinnerAdapter) this.mVersionAdatper1);
        if (mForceType == 0) {
            this.radioBtnForceRat.setChecked(true);
        } else {
            this.radioBtnforceBand.setChecked(true);
        }
        if (mForceDpdt == 0) {
            this.radioBtnForceDpdtSingle.setChecked(true);
        } else {
            this.radioBtnForceDpdtDouble.setChecked(true);
        }
        Spinner spinner = this.mForceAntSpinner;
        int i = mtasMode;
        if (i >= 3) {
            i -= 3;
        }
        spinner.setSelection(i, true);
        this.mTasVerSpinner.setSelection(mtasVersion - 1, true);
        this.mTasRatSpinner.setSelection(mtasRat - 1, true);
        this.mTasnvramSpinner.setSelection(Integer.parseInt(mtasNvram), true);
        this.mTasBandEdit.setText(mtasBand);
        if (FeatureSupport.is93Modem()) {
            return;
        }
        this.mRGForceType.setVisibility(8);
        this.mTasBandEdit.setVisibility(8);
        this.mTasBandText.setVisibility(8);
        this.mTasNvramText.setVisibility(8);
        this.mTasnvramSpinner.setVisibility(8);
        this.radioBtnForceRat.setChecked(true);
    }

    public void queryTasIdxLabels() {
        int i;
        String[] strArr;
        this.mVersionAdatper1.clear();
        Elog.d("ForceTx", "\nupdate TAS Idx: ");
        Elog.d("ForceTx", "mtasRat = " + mtasRat);
        Elog.d("ForceTx", "mtasVersion = " + mtasVersion);
        if (mForceDpdt == 0) {
            i = mTasDpdt1[mtasRat - 1][mtasVersion - 1];
            strArr = mTasDpdt1Label[i];
        } else {
            i = mTasDpdt2[mtasRat - 1][mtasVersion - 1];
            strArr = mTasDpdt1Label[i];
        }
        Elog.d("ForceTx", "status_index = " + i);
        if (i > 3) {
            this.mTasAntIdxView.setText("LM_Main H_Main LM_DRX H_DRX");
        } else {
            this.mTasAntIdxView.setText("LMH_Main LMH_DRX");
        }
        for (String str : strArr) {
            Elog.d("ForceTx", "mTasDpdt1Label = " + str);
        }
        this.mVersionAdatper1.addAll(strArr);
        this.mIdxSpinner.setAdapter((SpinnerAdapter) this.mVersionAdatper1);
    }

    public void sendCdmaAtCommand(String[] strArr, int i) {
        EmUtils.invokeOemRilRequestStringsEm(true, strArr, this.mATCmdHander.obtainMessage(i));
    }

    public void sendLteAtCommand(String[] strArr, int i) {
        EmUtils.invokeOemRilRequestStringsEm(strArr, this.mATCmdHander.obtainMessage(i));
    }

    public void setTasForceIdx(int i, int i2, String str, String str2, String str3) {
        String[] strArr = new String[2];
        if (FeatureSupport.is93Modem()) {
            if (mForceType == 1) {
                strArr[0] = "AT+ETXANT=" + i + "," + i2 + "," + str + "," + str2;
            } else {
                strArr[0] = "AT+ETXANT=" + i + "," + i2 + "," + str + "," + str2 + "," + str3;
            }
        } else if (str.equals("")) {
            strArr[0] = "AT+ETXANT=" + i + "," + i2;
        } else {
            strArr[0] = "AT+ETXANT=" + i + "," + i2 + "," + str;
        }
        strArr[1] = "+ETXANT:";
        if (i2 != 4) {
            Log.d("ForceTx", "sendAtCommand: " + strArr[0]);
            sendLteAtCommand(strArr, i);
            return;
        }
        String[] cdmaCmdArr = ModemCategory.getCdmaCmdArr(new String[]{strArr[0], strArr[1], "DESTRILD:C2K"});
        Log.d("ForceTx", "sendAtCommand: " + cdmaCmdArr[0] + ",cmd_s.length = " + cdmaCmdArr.length);
        sendCdmaAtCommand(cdmaCmdArr, i);
    }

    public void writeTasSettingStatus() {
        SharedPreferences.Editor editorEdit = getSharedPreferences("ForceTx", 0).edit();
        editorEdit.putInt(TAS_TYPE, mForceType);
        editorEdit.putInt(TAS_DPDT, mForceDpdt);
        editorEdit.putInt(TAS_MODE, mtasMode);
        editorEdit.putInt(TAS_VERSION, mtasVersion);
        editorEdit.putInt(TAS_RAT, mtasRat);
        editorEdit.putString(TAS_NVRAM, mtasNvram);
        editorEdit.putString(TAS_BAND, mtasBand);
        editorEdit.commit();
    }
}
