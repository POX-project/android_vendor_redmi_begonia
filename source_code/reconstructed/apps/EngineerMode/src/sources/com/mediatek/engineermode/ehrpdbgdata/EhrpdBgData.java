package com.mediatek.engineermode.ehrpdbgdata;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.DialogInterface;
import android.os.Bundle;
import android.os.RemoteException;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;
import vendor.mediatek.hardware.netdagent.V1_0.INetdagent;

/* JADX INFO: loaded from: classes2.dex */
public class EhrpdBgData extends Activity implements CompoundButton.OnCheckedChangeListener {
    private static final String BG_DATA_DISABLED_PROPERTY = "persist.vendor.radio.bgdata.disabled";
    private static final String TAG = "EhrpdBgData";
    private CheckBox mCheckBox;
    private static boolean mEhrpdBgDataEnable = false;
    private static INetdagent agent = null;

    public static void setDataDisable(boolean z) {
        try {
            INetdagent service = INetdagent.getService();
            agent = service;
            if (service == null) {
                Elog.e(TAG, "agnet is null");
            } else if (z) {
                Elog.d(TAG, "setIotFirewall");
                agent.dispatchNetdagentCmd("netdagent firewall set_nsiot_firewall");
            } else {
                Elog.d(TAG, "clearIotFirewall");
                agent.dispatchNetdagentCmd("netdagent firewall clear_nsiot_firewall");
            }
        } catch (RemoteException e) {
            Elog.d(TAG, "RomoteException");
        }
    }

    private void showCheckInfoDlg(String str, String str2) {
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setTitle(str);
        builder.setMessage(str2);
        builder.setCancelable(false);
        builder.setPositiveButton("OK", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.ehrpdbgdata.EhrpdBgData.1
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                if (i == -1) {
                    dialogInterface.dismiss();
                }
            }
        });
        builder.show();
    }

    @Override // android.widget.CompoundButton.OnCheckedChangeListener
    public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
        if (compoundButton.getId() == R.id.ehrpd_bg_data_botton) {
            boolean zIsChecked = this.mCheckBox.isChecked();
            Elog.d(TAG, "ehrpdBgDataEnable is " + zIsChecked);
            if (z) {
                showCheckInfoDlg(getString(R.string.ehrpd_bg_data), getString(R.string.ehrpd_bg_data_disable_hint));
            }
            EmUtils.systemPropertySet(BG_DATA_DISABLED_PROPERTY, zIsChecked ? "1" : "0");
            setDataDisable(zIsChecked);
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.ehrpd_bg_data);
        CheckBox checkBox = (CheckBox) findViewById(R.id.ehrpd_bg_data_botton);
        this.mCheckBox = checkBox;
        checkBox.setOnCheckedChangeListener(this);
        boolean zEquals = EmUtils.systemPropertyGet(BG_DATA_DISABLED_PROPERTY, "0").equals("1");
        mEhrpdBgDataEnable = zEquals;
        this.mCheckBox.setChecked(zEquals);
        setDataDisable(mEhrpdBgDataEnable);
    }
}
