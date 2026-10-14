package com.mediatek.engineermode.vilte;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.DialogInterface;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes3.dex */
public class ViLTEVtService extends Activity implements View.OnClickListener {
    private Button mButtonTestOpCode;
    private TextView mTextviewTestOpCode;
    private final String TAG = "Vilte/VtService";
    private final int TEST_OP_CODE = 100;
    private final String PROP_VILTE_TEST_OP_CODE = "persist.vendor.vt.lab_op_code";
    private final String[] Test_OP_CODE_label = {"Null(0)", "CMCC(1)", "CU(2)", "Orange(3)", "DTAG(5)", "Vodafone(6)", "AT&T(7)", "TMO US(8)", "CT(9)", "H3G(11)", "Verizon(12)", "DoCoMo(17)", "Reliance Jio(18)", "Telstra(19)", "Softbank(50)", "CSL(100)", "3HK(106)", "Smartfren(117)", "APTG(124)", "SmartTone(138)", "CMHK(149)"};
    private final String[][] Test_OP_CODE_VALUES = {new String[]{"Null", "0"}, new String[]{"CMCC", "1"}, new String[]{"CU", "2"}, new String[]{"Orange", "3"}, new String[]{"DTAG", "5"}, new String[]{"Vodafone", "6"}, new String[]{"AT&T", "7"}, new String[]{"TMO US", "8"}, new String[]{"CT", "9"}, new String[]{"H3G", "11"}, new String[]{"Verizon", "12"}, new String[]{"DoCoMo", "17"}, new String[]{"Reliance Jio", "18"}, new String[]{"Telstra", "19"}, new String[]{"Softbank", "50"}, new String[]{"CSL", "100"}, new String[]{"3HK", "106"}, new String[]{"Smartfren", "117"}, new String[]{"APTG", "124"}, new String[]{"SmartTone", "138"}, new String[]{"CMHK", "149"}};
    private AlertDialog M = null;
    private int test_op_index = 0;

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view == this.mButtonTestOpCode) {
            queryTestOpMode();
            showDialog(100);
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.vilte_menu_vt_service);
        this.mTextviewTestOpCode = (TextView) findViewById(R.id.vilte_test_op_code_status);
        Button button = (Button) findViewById(R.id.vilte_test_op_code);
        this.mButtonTestOpCode = button;
        button.setOnClickListener(this);
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (i != 100) {
            return null;
        }
        AlertDialog alertDialogCreate = new AlertDialog.Builder(this).setCancelable(false).setTitle("test op code").setSingleChoiceItems(this.Test_OP_CODE_label, this.test_op_index, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.vilte.ViLTEVtService.2
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
                Elog.d("Vilte/VtService", "Set test op code: " + ViLTEVtService.this.Test_OP_CODE_VALUES[i2][0] + ": " + ViLTEVtService.this.Test_OP_CODE_VALUES[i2][1]);
                try {
                    EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.lab_op_code", ViLTEVtService.this.Test_OP_CODE_VALUES[i2][1]);
                } catch (Exception e) {
                    e.printStackTrace();
                    Elog.e("Vilte/VtService", "set property failed ...");
                }
            }
        }).setPositiveButton("Set", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.vilte.ViLTEVtService.1
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
                ViLTEVtService.this.queryTestOpMode();
            }
        }).create();
        this.M = alertDialogCreate;
        return alertDialogCreate;
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        Elog.d("Vilte/VtService", "onResume()");
        queryTestOpMode();
    }

    void queryTestOpMode() {
        String strSystemPropertyGet = EmUtils.systemPropertyGet("persist.vendor.vt.lab_op_code", "0");
        this.mTextviewTestOpCode.setText("persist.vendor.vt.lab_op_code = " + strSystemPropertyGet);
        int i = 0;
        while (true) {
            String[][] strArr = this.Test_OP_CODE_VALUES;
            if (i >= strArr.length) {
                break;
            }
            if (strSystemPropertyGet.equals(strArr[i][1])) {
                this.test_op_index = i;
                break;
            }
            i++;
        }
        Elog.d("Vilte/VtService", "test_op_index: " + this.test_op_index);
    }
}
