package com.mediatek.engineermode.wificalling;

import android.app.Activity;
import android.os.AsyncTask;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.RadioGroup;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes3.dex */
public class EntitlementConfigActivity extends Activity {
    private static final String KEY_ENTITLEMENT_ENABLES = "persist.vendor.entitlement_enabled";
    private static final String KEY_ENTITLEMENT_SERVER = "persist.vendor.entitlement.sesurl";
    private static final String KEY_EPDG_ADDRESS = "persist.vendor.net.wo.epdg_fqdn";
    private static final String TAG = "EM/WifiCallingConfigActivity";
    private boolean entitlementEnable;
    private String entitlementServer;
    private EditText entitlementServerEt;
    private RadioGroup entitlementStatus;
    private Button getBtn;
    private Button setBtn;

    protected class DoSystemPropTask extends AsyncTask<String, String, String> {
        protected DoSystemPropTask() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public String doInBackground(String... strArr) {
            if (!strArr[0].equals("set")) {
                if (!strArr[0].equals("get")) {
                    return "UnKnown";
                }
                EntitlementConfigActivity.this.entitlementServer = EmUtils.systemPropertyGet(EntitlementConfigActivity.KEY_ENTITLEMENT_SERVER, "");
                EntitlementConfigActivity.this.entitlementEnable = EmUtils.systemPropertyGet(EntitlementConfigActivity.KEY_ENTITLEMENT_ENABLES, "0").equals("1");
                return "get";
            }
            Elog.d(EntitlementConfigActivity.TAG, "[Set]entitlementServer: " + EntitlementConfigActivity.this.entitlementServer + ",entitlementEnable:" + EntitlementConfigActivity.this.entitlementEnable);
            return (EmUtils.systemPropertySet(EntitlementConfigActivity.KEY_ENTITLEMENT_SERVER, EntitlementConfigActivity.this.entitlementServer) && EmUtils.systemPropertySet(EntitlementConfigActivity.KEY_ENTITLEMENT_ENABLES, EntitlementConfigActivity.this.entitlementEnable ? "1" : "0")) ? "Set succeed!" : "Set failed!";
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(String str) {
            if (!str.equals("get")) {
                Toast.makeText(EntitlementConfigActivity.this.getApplicationContext(), str, 1).show();
                return;
            }
            EntitlementConfigActivity.this.entitlementStatus.check(EntitlementConfigActivity.this.entitlementEnable ? R.id.entitlement_enable : R.id.entitlement_disable);
            EntitlementConfigActivity.this.entitlementServerEt.setText(EntitlementConfigActivity.this.entitlementServer);
            Elog.d(EntitlementConfigActivity.TAG, "[Get]EntitlementServer: " + EntitlementConfigActivity.this.entitlementServer + ",entitlementEnable:" + EntitlementConfigActivity.this.entitlementEnable);
        }
    }

    private void initView() {
        this.entitlementStatus = (RadioGroup) findViewById(R.id.entitlement_status);
        this.entitlementStatus.setOnCheckedChangeListener(new RadioGroup.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.wificalling.EntitlementConfigActivity.1
            @Override // android.widget.RadioGroup.OnCheckedChangeListener
            public void onCheckedChanged(RadioGroup radioGroup, int i) {
                switch (i) {
                    case R.id.entitlement_disable /* 2131100548 */:
                        EntitlementConfigActivity.this.entitlementEnable = false;
                        break;
                    case R.id.entitlement_enable /* 2131100549 */:
                        EntitlementConfigActivity.this.entitlementEnable = true;
                        break;
                }
            }
        });
        this.entitlementServerEt = (EditText) findViewById(R.id.entitlement_server);
        Button button = (Button) findViewById(R.id.wificalling_set);
        this.setBtn = button;
        button.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.wificalling.EntitlementConfigActivity.2
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                EntitlementConfigActivity entitlementConfigActivity = EntitlementConfigActivity.this;
                entitlementConfigActivity.entitlementServer = entitlementConfigActivity.entitlementServerEt.getText().toString();
                EntitlementConfigActivity.this.new DoSystemPropTask().execute("set");
            }
        });
        Button button2 = (Button) findViewById(R.id.wificalling_get);
        this.getBtn = button2;
        button2.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.wificalling.EntitlementConfigActivity.3
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                EntitlementConfigActivity.this.new DoSystemPropTask().execute("get");
            }
        });
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.wificalling_config);
        initView();
        new DoSystemPropTask().execute("get");
    }
}
