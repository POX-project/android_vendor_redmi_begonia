package com.mediatek.engineermode.usbtethering;

import android.app.Activity;
import android.os.Bundle;
import android.os.SystemProperties;
import android.view.View;
import android.widget.Button;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes3.dex */
public class UsbTethering extends Activity implements View.OnClickListener {
    private static final String TAG = "UsbTethering";
    private static final String USB_TETHERING_PROPERTY = "persist.vendor.net.tethering";
    private Button mSetButton;

    private boolean writeSystemProperties(String str) {
        SystemProperties.set(USB_TETHERING_PROPERTY, str);
        Elog.v(TAG, "persist.vendor.net.tethering,set to: " + str);
        String str2 = SystemProperties.get(USB_TETHERING_PROPERTY);
        Elog.v(TAG, "persist.vendor.net.tethering,read from system is: " + str2);
        return str2.equals(str);
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view == this.mSetButton) {
            if (getString(R.string.UsbTethering_enable).equals(this.mSetButton.getText())) {
                if (!writeSystemProperties("true")) {
                    Elog.v(TAG, "set failed");
                    EmUtils.showToast("set tethering to true failed");
                    return;
                } else {
                    this.mSetButton.setText(R.string.UsbTethering_disable);
                    Elog.v(TAG, "set succeed");
                    EmUtils.showToast("set tethering to true succeed");
                    return;
                }
            }
            if (!writeSystemProperties("false")) {
                Elog.v(TAG, "set failed");
                EmUtils.showToast("set tethering to false failed");
            } else {
                this.mSetButton.setText(R.string.UsbTethering_enable);
                Elog.v(TAG, "set succeed");
                EmUtils.showToast("set tethering to false succeed");
            }
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.usb_tethering);
        Button button = (Button) findViewById(R.id.usbtethering_switch);
        this.mSetButton = button;
        button.setOnClickListener(this);
        String str = SystemProperties.get(USB_TETHERING_PROPERTY, "false");
        Elog.v(TAG, "buttonFlag is:" + str);
        if (str.equals("true")) {
            this.mSetButton.setText(R.string.UsbTethering_disable);
        } else {
            this.mSetButton.setText(R.string.UsbTethering_enable);
        }
    }
}
