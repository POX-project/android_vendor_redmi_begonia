package com.mediatek.engineermode.ecc;

import android.app.Activity;
import android.content.Context;
import android.os.Bundle;
import android.os.SystemProperties;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class EmergencyNumbersActivity extends Activity {
    private static final String ECC_PROP_KEY = "persist.vendor.em.hidl.testecc";
    private static final String TAG = "EmergencyNumbersActivity";
    private Context mContext;
    private EditText mEccNumTextView;
    private Button mOkCmd;
    View.OnClickListener mSaveEccNums = new View.OnClickListener() { // from class: com.mediatek.engineermode.ecc.EmergencyNumbersActivity.1
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            String string = EmergencyNumbersActivity.this.mEccNumTextView.getText().toString();
            if (string.length() > 91) {
                Toast.makeText(EmergencyNumbersActivity.this.getApplicationContext(), "Error : Max input allowed91", 0).show();
                Elog.e(EmergencyNumbersActivity.TAG, "set persist.vendor.em.hidl.testecc failed, exceeded the maximum : " + string);
                return;
            }
            Toast.makeText(EmergencyNumbersActivity.this.getApplicationContext(), "setting ecc: " + string, 0).show();
            try {
                EmUtils.getEmHidlService().setEmConfigure(EmergencyNumbersActivity.ECC_PROP_KEY, string);
            } catch (Exception e) {
                e.printStackTrace();
                Elog.e(EmergencyNumbersActivity.TAG, "set property failed ...");
            }
            Elog.d(EmergencyNumbersActivity.TAG, "set persist.vendor.em.hidl.testecc : " + string);
        }
    };

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        this.mContext = getBaseContext();
        setContentView(R.layout.ecc_num);
        Button button = (Button) findViewById(R.id.ok_btn);
        this.mOkCmd = button;
        button.setOnClickListener(this.mSaveEccNums);
        this.mEccNumTextView = (EditText) findViewById(R.id.ecc_number);
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        String str = SystemProperties.get(ECC_PROP_KEY);
        Elog.d(TAG, "get persist.vendor.em.hidl.testecc : " + str);
        Toast.makeText(getApplicationContext(), "Enter Numbers separated by ;", 0).show();
        this.mEccNumTextView.setText(str);
    }
}
