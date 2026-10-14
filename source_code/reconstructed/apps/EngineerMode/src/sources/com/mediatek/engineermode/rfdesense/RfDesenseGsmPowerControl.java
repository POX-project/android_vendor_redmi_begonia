package com.mediatek.engineermode.rfdesense;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.DialogInterface;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;
import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
public class RfDesenseGsmPowerControl extends Activity implements AdapterView.OnItemSelectedListener, View.OnClickListener {
    private static final String BUNDLE_GSM_QUERY_RESULT = "pcl_result";
    private static final int DIALOG_CONFIRM = 0;
    private static final int DIALOG_QUERY_PCL = 0;
    private static final int RF_DESENSE_GSM_QUERY = 2;
    private static final int RF_DESENSE_GSM_SET = 0;
    private static final int RF_DESENSE_GSM_SET_MAX_POWER = 1;
    public static final String TAG = "RfDesense/GsmPowerControl";
    private ArrayAdapter<CharSequence> adapterLevel;
    private ArrayAdapter<CharSequence> adapterPower;
    private Button btnQuery;
    private Button btnSet;
    private Button btnSetMaxPower;
    private Spinner mSpPowerBand;
    private Spinner mSpPowerLevel;
    private int selectedGsmBand;
    private int selectedGsmLevel;
    private boolean mIsActive = true;
    private final HashMap<Integer, String> gsmBandMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.rfdesense.RfDesenseGsmPowerControl.1
        {
            put(1, "Band 850");
            put(2, "Band 900");
            put(3, "Band 1800");
            put(4, "Band 1900");
        }
    };
    private final HashMap<Integer, String> gsmModTypeMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.rfdesense.RfDesenseGsmPowerControl.2
        {
            put(0, "GMSK");
            put(1, "8PSK");
        }
    };
    private final Handler mATHandler = new Handler() { // from class: com.mediatek.engineermode.rfdesense.RfDesenseGsmPowerControl.3
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            String str;
            if (RfDesenseGsmPowerControl.this.mIsActive) {
                AsyncResult asyncResult = (AsyncResult) message.obj;
                int i = message.what;
                if (i == 0) {
                    String str2 = "Set PCL Value ";
                    if (asyncResult == null || asyncResult.exception != null) {
                        str2 = "Set PCL Value Failed.";
                    } else if (asyncResult.result != null) {
                        str2 = "Set PCL Value Succeed.";
                    }
                    RfDesenseGsmPowerControl.this.showToast(str2);
                    Elog.d(RfDesenseGsmPowerControl.TAG, str2);
                    return;
                }
                if (i == 1) {
                    String str3 = "Set Max PCL Value ";
                    if (asyncResult == null || asyncResult.exception != null) {
                        str3 = "Set Max PCL Value Failed.";
                    } else if (asyncResult.result != null) {
                        str3 = "Set Max PCL Value Succeed.";
                    }
                    RfDesenseGsmPowerControl.this.showToast(str3);
                    Elog.d(RfDesenseGsmPowerControl.TAG, str3);
                    return;
                }
                if (i != 2) {
                    return;
                }
                if (asyncResult == null || asyncResult.exception != null || asyncResult.result == null) {
                    str = "Query PCL Value Failed.";
                    RfDesenseGsmPowerControl.this.showToast(str);
                } else {
                    String strTrim = ((String[]) asyncResult.result)[0].substring("+EPCL:".length()).trim();
                    Elog.d(RfDesenseGsmPowerControl.TAG, strTrim);
                    Bundle bundle = new Bundle();
                    bundle.putString(RfDesenseGsmPowerControl.BUNDLE_GSM_QUERY_RESULT, strTrim);
                    RfDesenseGsmPowerControl.this.showDialog(0, bundle);
                    str = "Query PCL Value Succeed.";
                }
                Elog.d(RfDesenseGsmPowerControl.TAG, str);
            }
        }
    };

    private void initUI() {
        this.mSpPowerBand = (Spinner) findViewById(R.id.rf_desense_power_band);
        ArrayAdapter<CharSequence> arrayAdapterCreateFromResource = ArrayAdapter.createFromResource(this, R.array.rf_desense_test_gsm_power_control_band, android.R.layout.simple_spinner_item);
        this.adapterPower = arrayAdapterCreateFromResource;
        arrayAdapterCreateFromResource.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpPowerBand.setAdapter((SpinnerAdapter) this.adapterPower);
        this.mSpPowerBand.setOnItemSelectedListener(this);
        this.btnSet = (Button) findViewById(R.id.rf_desense_gsm_set);
        this.btnSetMaxPower = (Button) findViewById(R.id.rf_desense_gsm_set_max_power);
        this.btnQuery = (Button) findViewById(R.id.rf_desense_gsm_query);
        this.btnSet.setOnClickListener(this);
        this.btnSetMaxPower.setOnClickListener(this);
        this.btnQuery.setOnClickListener(this);
        this.mSpPowerLevel = (Spinner) findViewById(R.id.rf_desense_gsm_power_level);
        ArrayAdapter<CharSequence> arrayAdapterCreateFromResource2 = ArrayAdapter.createFromResource(this, R.array.rf_desense_test_gsm_power_control_level, android.R.layout.simple_spinner_item);
        this.adapterLevel = arrayAdapterCreateFromResource2;
        arrayAdapterCreateFromResource2.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpPowerLevel.setAdapter((SpinnerAdapter) this.adapterLevel);
        this.mSpPowerLevel.setOnItemSelectedListener(this);
    }

    private void sendAtCommand(String[] strArr, int i) {
        Elog.d(TAG, "sendAtCommand() " + strArr[0]);
        showToast("sendAtCommand: " + strArr[0]);
        EmUtils.invokeOemRilRequestStringsEm(strArr, this.mATHandler.obtainMessage(i));
    }

    private void setOptionalGsmLevel(int i, AdapterView<?> adapterView) {
        int i2 = this.selectedGsmBand;
        if (i2 == 1 || i2 == 2) {
            String[] strArr = new String[15];
            for (int i3 = 0; i3 < strArr.length; i3++) {
                strArr[i3] = String.valueOf(i3 + 5);
            }
            this.adapterLevel = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item, strArr);
        } else if (i2 == 3 || i2 == 4) {
            String[] strArr2 = new String[16];
            for (int i4 = 0; i4 < strArr2.length; i4++) {
                strArr2[i4] = String.valueOf(i4);
            }
            this.adapterLevel = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item, strArr2);
        }
        this.adapterLevel.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpPowerLevel.setAdapter((SpinnerAdapter) this.adapterLevel);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showToast(String str) {
        Toast.makeText(this, str, 0).show();
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        String[] strArr = new String[2];
        switch (view.getId()) {
            case R.id.rf_desense_gsm_query /* 2131101306 */:
                strArr[0] = "AT+EPCL=2";
                strArr[1] = "+EPCL:";
                sendAtCommand(strArr, 2);
                break;
            case R.id.rf_desense_gsm_set /* 2131101307 */:
                strArr[0] = "AT+EPCL=0," + this.selectedGsmBand + "," + this.selectedGsmLevel;
                strArr[1] = "";
                sendAtCommand(strArr, 0);
                break;
            case R.id.rf_desense_gsm_set_max_power /* 2131101308 */:
                strArr[0] = "AT+EPCL=1," + this.selectedGsmBand;
                strArr[1] = "";
                sendAtCommand(strArr, 1);
                break;
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.rf_desense_gsm_power_control);
        initUI();
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i, Bundle bundle) {
        String str;
        if (i != 0) {
            return null;
        }
        int[] iArrStringToIntArray = stringToIntArray((String) bundle.getSerializable(BUNDLE_GSM_QUERY_RESULT));
        DialogInterface.OnClickListener onClickListener = new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.rfdesense.RfDesenseGsmPowerControl.5
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
                dialogInterface.dismiss();
            }
        };
        String str2 = "GSM Band: " + this.gsmBandMapping.get(Integer.valueOf(iArrStringToIntArray[0]));
        StringBuilder sb = new StringBuilder();
        sb.append("PCL Value: ");
        String str3 = "Invalid";
        if (iArrStringToIntArray[1] == -1) {
            str = "Invalid";
        } else {
            str = "" + iArrStringToIntArray[1];
        }
        sb.append(str);
        String string = sb.toString();
        String str4 = "Mod Type: " + this.gsmModTypeMapping.get(Integer.valueOf(iArrStringToIntArray[2]));
        StringBuilder sb2 = new StringBuilder();
        sb2.append("APC DAC: ");
        if (iArrStringToIntArray[3] != -1) {
            str3 = "" + iArrStringToIntArray[3];
        }
        sb2.append(str3);
        String string2 = sb2.toString();
        return new AlertDialog.Builder(this).setTitle("PCL Query Result").setMessage(str2 + "\n\n" + string + "\n\n" + str4 + "\n\n" + string2).setPositiveButton("OK", onClickListener).create();
    }

    @Override // android.app.Activity
    public void onDestroy() {
        this.mIsActive = false;
        super.onDestroy();
    }

    @Override // android.widget.AdapterView.OnItemSelectedListener
    public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
        if (adapterView.getId() == R.id.rf_desense_power_band) {
            int i2 = i + 1;
            this.selectedGsmBand = i2;
            setOptionalGsmLevel(i2, adapterView);
        } else if (adapterView.getId() == R.id.rf_desense_gsm_power_level) {
            this.selectedGsmLevel = Integer.valueOf(adapterView.getItemAtPosition(i).toString()).intValue();
        }
    }

    @Override // android.widget.AdapterView.OnItemSelectedListener
    public void onNothingSelected(AdapterView<?> adapterView) {
    }

    @Override // android.app.Activity
    protected void onPrepareDialog(int i, Dialog dialog, Bundle bundle) {
        String str;
        if (i == 0) {
            int[] iArrStringToIntArray = stringToIntArray((String) bundle.getSerializable(BUNDLE_GSM_QUERY_RESULT));
            new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.rfdesense.RfDesenseGsmPowerControl.4
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    dialogInterface.dismiss();
                }
            };
            String str2 = "GSM Band: " + this.gsmBandMapping.get(Integer.valueOf(iArrStringToIntArray[0]));
            StringBuilder sb = new StringBuilder();
            sb.append("PCL Value: ");
            String str3 = "Invalid";
            if (iArrStringToIntArray[1] == -1) {
                str = "Invalid";
            } else {
                str = "" + iArrStringToIntArray[1];
            }
            sb.append(str);
            String string = sb.toString();
            String str4 = "Mod Type: " + this.gsmModTypeMapping.get(Integer.valueOf(iArrStringToIntArray[2]));
            StringBuilder sb2 = new StringBuilder();
            sb2.append("APC DAC: ");
            if (iArrStringToIntArray[3] != -1) {
                str3 = "" + iArrStringToIntArray[3];
            }
            sb2.append(str3);
            ((AlertDialog) dialog).setMessage(str2 + "\n\n" + string + "\n\n" + str4 + "\n\n" + sb2.toString());
        }
        super.onPrepareDialog(i, dialog, bundle);
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
    }

    public int[] stringToIntArray(String str) {
        String[] strArrSplit = str.split(",");
        int[] iArr = new int[strArrSplit.length];
        for (int i = 0; i < strArrSplit.length; i++) {
            try {
                iArr[i] = Integer.parseInt(strArrSplit[i].trim());
            } catch (NumberFormatException e) {
                iArr[i] = -1;
            }
        }
        return iArr;
    }
}
