package com.mediatek.engineermode.atci;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.os.SystemProperties;
import android.support.v4.os.EnvironmentCompat;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class atciActivity extends Activity {
    private static final String ADB_ENABLE = "persist.sys.usb.config";
    private static final String ATCI_AUTO_START = "persist.vendor.service.atci.autostart";
    private static final String ATCI_USERMODE = "persist.vendor.service.atci.usermode";
    private static final int DISABLE_ATCI = 2;
    private static final int ENABLE_ALWAYS = 1;
    private static final int ENABLE_ONCE = 0;
    private static final String RADIO_PORT_INDEX = "persist.vendor.radio.port_index";
    private static final String RO_BUILD_TYPE = "ro.build.type";
    private static final String TAG = "EM/ATCI";
    private Button mAlwaysEnableButton;
    private Button mDisableButton;
    private Button mEnableButton;
    private View.OnClickListener mEnableListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.atci.atciActivity.1
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            atciActivity.this.enable_ATCI(0);
        }
    };
    private View.OnClickListener mAlwaysEnableListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.atci.atciActivity.2
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            atciActivity.this.enable_ATCI(1);
        }
    };
    private View.OnClickListener mDisableListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.atci.atciActivity.3
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            atciActivity.this.enable_ATCI(2);
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void enable_ATCI(int i) {
        if (1 == i || i == 0) {
            SystemProperties.set(ATCI_USERMODE, "1");
            SystemProperties.set(RADIO_PORT_INDEX, "1");
        } else if (2 == i) {
            SystemProperties.set(ATCI_USERMODE, "0");
            SystemProperties.set(RADIO_PORT_INDEX, "");
        }
        String str = SystemProperties.get("ro.build.type", EnvironmentCompat.MEDIA_UNKNOWN);
        String str2 = SystemProperties.get(ATCI_AUTO_START);
        Elog.v(TAG, "action: " + i + ", build type: " + str);
        if (str.equals(FeatureSupport.ENG_LOAD)) {
            Toast.makeText(this, "Eng load, ATCI is enabled", 1).show();
        } else {
            if (2 == i) {
                SystemProperties.set(ATCI_AUTO_START, "0");
                Elog.v(TAG, "stop atcid-daemon-u");
                SystemProperties.set("ctl.stop", "atcid-daemon-u");
                Elog.v(TAG, "stop atci_service");
                SystemProperties.set("ctl.stop", "atci_service");
                Toast.makeText(this, "Disable ATCI Success", 1).show();
                return;
            }
            if (1 == i) {
                if (str2.equals("1")) {
                    Elog.v(TAG, "atuo start enabled.");
                    Toast.makeText(this, "You have enabled ATCI", 1).show();
                    return;
                } else {
                    SystemProperties.set(ATCI_AUTO_START, "1");
                    Toast.makeText(this, "Always enable ATCI Success", 1).show();
                }
            } else {
                if (i != 0) {
                    Elog.v(TAG, "unknown action.");
                    return;
                }
                SystemProperties.set(ATCI_AUTO_START, "0");
            }
            Elog.v(TAG, "start atcid-daemon-u");
            SystemProperties.set("ctl.start", "atcid-daemon-u");
            Elog.v(TAG, "start atci_service");
            SystemProperties.set("ctl.start", "atci_service");
        }
        Intent intent = new Intent("com.mediatek.atci.service.startup");
        intent.setClassName("com.mediatek.atci.service", "com.mediatek.atci.service.AtciIntentReceiver");
        sendBroadcast(intent);
        Toast.makeText(this, "Enable ATCI Success", 1).show();
    }

    protected void findViews() {
        this.mEnableButton = (Button) findViewById(R.id.ATCI_enable);
        this.mAlwaysEnableButton = (Button) findViewById(R.id.ATCI_enable_always);
        this.mDisableButton = (Button) findViewById(R.id.ATCI_disable);
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.atci);
        findViews();
        setActionListener();
    }

    protected void setActionListener() {
        this.mEnableButton.setOnClickListener(this.mEnableListener);
        this.mAlwaysEnableButton.setOnClickListener(this.mAlwaysEnableListener);
        this.mDisableButton.setOnClickListener(this.mDisableListener);
    }
}
