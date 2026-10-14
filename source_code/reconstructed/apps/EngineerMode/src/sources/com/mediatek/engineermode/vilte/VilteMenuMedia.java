package com.mediatek.engineermode.vilte;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes3.dex */
public class VilteMenuMedia extends Activity implements View.OnClickListener {
    private TextView mVilte_Reserved1_view;
    private TextView mVilte_Reserved2_view;
    private TextView mVilte_TX_fallback_queue_time_view;
    private TextView mVilte_customize_status_view;
    private TextView mVilte_downgrade_packetlost_view;
    private TextView mVilte_ma_view;
    private Button mVilte_operator_media_customize_mode_disable;
    private Button mVilte_operator_media_customize_mode_enable;
    private Button mVilte_operator_media_downgrade_packetlost_set;
    private EditText mVilte_operator_media_downgrade_packetlost_values;
    private Button mVilte_operator_media_ma_set;
    private EditText mVilte_operator_media_ma_values;
    private Button mVilte_operator_media_rtp_set;
    private EditText mVilte_operator_media_rtp_values;
    private Button mVilte_operator_media_tmmbr_decrease_diff_set;
    private EditText mVilte_operator_media_tmmbr_decrease_diff_values;
    private Button mVilte_operator_media_tmmbr_decrease_start_set;
    private EditText mVilte_operator_media_tmmbr_decrease_start_values;
    private Button mVilte_operator_media_tmmbr_reserved1_set;
    private EditText mVilte_operator_media_tmmbr_reserved1_values;
    private Button mVilte_operator_media_tmmbr_reserved2_set;
    private EditText mVilte_operator_media_tmmbr_reserved2_values;
    private Button mVilte_operator_media_tx_fallback_set;
    private EditText mVilte_operator_media_tx_fallback_values;
    private TextView mVilte_rtp_view;
    private TextView mVilte_tmmbr_decrease_diff_view;
    private TextView mVilte_tmmbr_decrease_start_view;
    private final String TAG = "Vilte/MenuMedia";
    private final String PROP_VILTE_OPTEST_MM = "persist.vendor.vt.OPTest_MM";
    private final String PROP_VILTE_OPTEST_RTP = "persist.vendor.vt.OPTest_RTP";
    private final String PROP_VILTE_OPTEST_MA = "persist.vendor.vt.OPTest_MA";
    private final String PROP_VILTE_VT_RTP_QDURHW = "persist.vendor.vt.rtpQDurHW";
    private final String PROP_VILTE_VT_DOWN_GRADE_TH = "persist.vendor.vt.DownGradeTH";
    private final String PROP_VILTE_VT_DE_START = "persist.vendor.vt.de_start";
    private final String PROP_VILTE_VT_DE_DIFF = "persist.vendor.vt.de_diff";
    private final String PROP_VILTE_VT_RTP_RES1 = "persist.vendor.vt.rtp_res1";
    private final String PROP_VILTE_VT_RTP_RES2 = "persist.vendor.vt.rtp_res2";

    private void bindViews() {
        this.mVilte_operator_media_customize_mode_enable = (Button) findViewById(R.id.vilte_operator_media_customize_mode_enable);
        this.mVilte_operator_media_customize_mode_disable = (Button) findViewById(R.id.vilte_operator_media_customize_mode_disable);
        this.mVilte_operator_media_customize_mode_enable.setOnClickListener(this);
        this.mVilte_operator_media_customize_mode_disable.setOnClickListener(this);
        this.mVilte_operator_media_rtp_values = (EditText) findViewById(R.id.vilte_operator_media_rtp_values);
        Button button = (Button) findViewById(R.id.vilte_operator_media_rtp_set);
        this.mVilte_operator_media_rtp_set = button;
        button.setOnClickListener(this);
        this.mVilte_operator_media_ma_values = (EditText) findViewById(R.id.vilte_operator_media_ma_values);
        Button button2 = (Button) findViewById(R.id.vilte_operator_media_ma_set);
        this.mVilte_operator_media_ma_set = button2;
        button2.setOnClickListener(this);
        this.mVilte_operator_media_tx_fallback_values = (EditText) findViewById(R.id.vilte_operator_media_tx_fallback_values);
        Button button3 = (Button) findViewById(R.id.vilte_operator_media_tx_fallback_set);
        this.mVilte_operator_media_tx_fallback_set = button3;
        button3.setOnClickListener(this);
        this.mVilte_operator_media_downgrade_packetlost_values = (EditText) findViewById(R.id.vilte_operator_media_downgrade_packetlost_values);
        Button button4 = (Button) findViewById(R.id.vilte_operator_media_downgrade_packetlost_set);
        this.mVilte_operator_media_downgrade_packetlost_set = button4;
        button4.setOnClickListener(this);
        this.mVilte_operator_media_tmmbr_decrease_start_values = (EditText) findViewById(R.id.vilte_operator_media_tmmbr_decrease_start_values);
        Button button5 = (Button) findViewById(R.id.vilte_operator_media_tmmbr_decrease_start_set);
        this.mVilte_operator_media_tmmbr_decrease_start_set = button5;
        button5.setOnClickListener(this);
        this.mVilte_operator_media_tmmbr_decrease_diff_values = (EditText) findViewById(R.id.vilte_operator_media_tmmbr_decrease_diff_values);
        Button button6 = (Button) findViewById(R.id.vilte_operator_media_tmmbr_decrease_diff_set);
        this.mVilte_operator_media_tmmbr_decrease_diff_set = button6;
        button6.setOnClickListener(this);
        this.mVilte_operator_media_tmmbr_reserved1_values = (EditText) findViewById(R.id.vilte_operator_media_tmmbr_reserved1_values);
        Button button7 = (Button) findViewById(R.id.vilte_operator_media_tmmbr_reserved1_set);
        this.mVilte_operator_media_tmmbr_reserved1_set = button7;
        button7.setOnClickListener(this);
        this.mVilte_operator_media_tmmbr_reserved2_values = (EditText) findViewById(R.id.vilte_operator_media_tmmbr_reserved2_values);
        Button button8 = (Button) findViewById(R.id.vilte_operator_media_tmmbr_reserved2_set);
        this.mVilte_operator_media_tmmbr_reserved2_set = button8;
        button8.setOnClickListener(this);
        this.mVilte_customize_status_view = (TextView) findViewById(R.id.vilte_customize_status_view);
        this.mVilte_rtp_view = (TextView) findViewById(R.id.vilte_rtp_view);
        this.mVilte_ma_view = (TextView) findViewById(R.id.vilte_ma_view);
        this.mVilte_TX_fallback_queue_time_view = (TextView) findViewById(R.id.vilte_TX_fallback_queue_time_view);
        this.mVilte_downgrade_packetlost_view = (TextView) findViewById(R.id.vilte_downgrade_packetlost_view);
        this.mVilte_tmmbr_decrease_start_view = (TextView) findViewById(R.id.vilte_tmmbr_decrease_start_view);
        this.mVilte_tmmbr_decrease_diff_view = (TextView) findViewById(R.id.vilte_tmmbr_decrease_diff_view);
        this.mVilte_Reserved1_view = (TextView) findViewById(R.id.vilte_Reserved1_view);
        this.mVilte_Reserved2_view = (TextView) findViewById(R.id.vilte_Reserved2_view);
    }

    private void queryCurrentValue() {
        String strSystemPropertyGet = EmUtils.systemPropertyGet("persist.vendor.vt.OPTest_MM", "");
        String strSystemPropertyGet2 = EmUtils.systemPropertyGet("persist.vendor.vt.OPTest_RTP", "");
        String strSystemPropertyGet3 = EmUtils.systemPropertyGet("persist.vendor.vt.OPTest_MA", "");
        String strSystemPropertyGet4 = EmUtils.systemPropertyGet("persist.vendor.vt.rtpQDurHW", "");
        String strSystemPropertyGet5 = EmUtils.systemPropertyGet("persist.vendor.vt.DownGradeTH", "");
        String strSystemPropertyGet6 = EmUtils.systemPropertyGet("persist.vendor.vt.de_start", "");
        String strSystemPropertyGet7 = EmUtils.systemPropertyGet("persist.vendor.vt.de_diff", "");
        String strSystemPropertyGet8 = EmUtils.systemPropertyGet("persist.vendor.vt.rtp_res1", "");
        String strSystemPropertyGet9 = EmUtils.systemPropertyGet("persist.vendor.vt.rtp_res2", "");
        this.mVilte_customize_status_view.setText("persist.vendor.vt.OPTest_MM = " + strSystemPropertyGet);
        this.mVilte_rtp_view.setText("persist.vendor.vt.OPTest_RTP = " + strSystemPropertyGet2);
        this.mVilte_operator_media_rtp_values.setText(strSystemPropertyGet2);
        this.mVilte_ma_view.setText("persist.vendor.vt.OPTest_MA = " + strSystemPropertyGet3);
        this.mVilte_operator_media_ma_values.setText(strSystemPropertyGet3);
        this.mVilte_TX_fallback_queue_time_view.setText("persist.vendor.vt.rtpQDurHW = " + strSystemPropertyGet4);
        this.mVilte_operator_media_tx_fallback_values.setText(strSystemPropertyGet4);
        this.mVilte_downgrade_packetlost_view.setText("persist.vendor.vt.DownGradeTH = " + strSystemPropertyGet5);
        this.mVilte_operator_media_downgrade_packetlost_values.setText(strSystemPropertyGet5);
        this.mVilte_tmmbr_decrease_start_view.setText("persist.vendor.vt.de_start = " + strSystemPropertyGet6);
        this.mVilte_operator_media_tmmbr_decrease_start_values.setText(strSystemPropertyGet6);
        this.mVilte_tmmbr_decrease_diff_view.setText("persist.vendor.vt.de_diff = " + strSystemPropertyGet7);
        this.mVilte_operator_media_tmmbr_decrease_diff_values.setText(strSystemPropertyGet7);
        this.mVilte_Reserved1_view.setText("persist.vendor.vt.rtp_res1 = " + strSystemPropertyGet8);
        this.mVilte_operator_media_tmmbr_reserved1_values.setText(strSystemPropertyGet8);
        this.mVilte_Reserved2_view.setText("persist.vendor.vt.rtp_res2 = " + strSystemPropertyGet9);
        this.mVilte_operator_media_tmmbr_reserved2_values.setText(strSystemPropertyGet9);
    }

    boolean checkValue(View view, String str) {
        if (view == this.mVilte_operator_media_ma_set || view == this.mVilte_operator_media_rtp_set) {
            try {
                Integer.parseInt(str, 16);
                return true;
            } catch (NumberFormatException e) {
                EmUtils.showToast("value should be 16 HEX", 0);
                return false;
            }
        }
        if (view != this.mVilte_operator_media_downgrade_packetlost_set && view != this.mVilte_operator_media_tmmbr_decrease_start_set && view != this.mVilte_operator_media_tmmbr_decrease_diff_set) {
            return true;
        }
        if (str.equals("")) {
            return false;
        }
        int i = Integer.parseInt(str, 10);
        if (i >= 0 && i <= 100) {
            return true;
        }
        EmUtils.showToast("value should be 16 HEX", 0);
        return false;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view == this.mVilte_operator_media_customize_mode_enable) {
            Elog.d("Vilte/MenuMedia", "Set persist.vendor.vt.OPTest_MM = 1");
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.OPTest_MM", "1");
            } catch (Exception e) {
                e.printStackTrace();
                Elog.e("Vilte/MenuMedia", "set property failed ...");
            }
        } else if (view == this.mVilte_operator_media_customize_mode_disable) {
            Elog.d("Vilte/MenuMedia", "Set persist.vendor.vt.OPTest_MM = 0");
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.OPTest_MM", "0");
            } catch (Exception e2) {
                e2.printStackTrace();
                Elog.e("Vilte/MenuMedia", "set property failed ...");
            }
        } else if (view == this.mVilte_operator_media_rtp_set) {
            String string = this.mVilte_operator_media_rtp_values.getText().toString();
            if (checkValue(this.mVilte_operator_media_rtp_set, string)) {
                Elog.d("Vilte/MenuMedia", "Set persist.vendor.vt.OPTest_RTP = " + string);
                try {
                    EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.OPTest_RTP", string);
                } catch (Exception e3) {
                    e3.printStackTrace();
                    Elog.e("Vilte/MenuMedia", "set property failed ...");
                }
            } else {
                Elog.d("Vilte/MenuMedia", "Input value format error ");
            }
        } else if (view == this.mVilte_operator_media_ma_set) {
            String string2 = this.mVilte_operator_media_ma_values.getText().toString();
            if (checkValue(this.mVilte_operator_media_ma_set, string2)) {
                Elog.d("Vilte/MenuMedia", "Set persist.vendor.vt.OPTest_MA = " + string2);
                try {
                    EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.OPTest_MA", string2);
                } catch (Exception e4) {
                    e4.printStackTrace();
                    Elog.e("Vilte/MenuMedia", "set property failed ...");
                }
            } else {
                Elog.d("Vilte/MenuMedia", "Input value format error ");
            }
        } else if (view == this.mVilte_operator_media_tx_fallback_set) {
            String string3 = this.mVilte_operator_media_tx_fallback_values.getText().toString();
            Elog.d("Vilte/MenuMedia", "Set persist.vendor.vt.rtpQDurHW = " + string3);
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.rtpQDurHW", string3);
            } catch (Exception e5) {
                e5.printStackTrace();
                Elog.e("Vilte/MenuMedia", "set property failed ...");
            }
        } else if (view == this.mVilte_operator_media_downgrade_packetlost_set) {
            String string4 = this.mVilte_operator_media_downgrade_packetlost_values.getText().toString();
            if (checkValue(this.mVilte_operator_media_downgrade_packetlost_set, string4)) {
                Elog.d("Vilte/MenuMedia", "Set persist.vendor.vt.DownGradeTH = " + string4);
                try {
                    EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.DownGradeTH", string4);
                } catch (Exception e6) {
                    e6.printStackTrace();
                    Elog.e("Vilte/MenuMedia", "set property failed ...");
                }
            } else {
                Elog.d("Vilte/MenuMedia", "Input value format error ");
            }
        } else if (view == this.mVilte_operator_media_tmmbr_decrease_start_set) {
            String string5 = this.mVilte_operator_media_tmmbr_decrease_start_values.getText().toString();
            if (checkValue(this.mVilte_operator_media_tmmbr_decrease_start_set, string5)) {
                Elog.d("Vilte/MenuMedia", "Set persist.vendor.vt.de_start = " + string5);
                try {
                    EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.de_start", string5);
                } catch (Exception e7) {
                    e7.printStackTrace();
                    Elog.e("Vilte/MenuMedia", "set property failed ...");
                }
            } else {
                Elog.d("Vilte/MenuMedia", "Input value format error ");
            }
        } else if (view == this.mVilte_operator_media_tmmbr_decrease_diff_set) {
            String string6 = this.mVilte_operator_media_tmmbr_decrease_diff_values.getText().toString();
            if (checkValue(this.mVilte_operator_media_tmmbr_decrease_diff_set, string6)) {
                Elog.d("Vilte/MenuMedia", "Set persist.vendor.vt.de_diff = " + string6);
                try {
                    EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.de_diff", string6);
                } catch (Exception e8) {
                    e8.printStackTrace();
                    Elog.e("Vilte/MenuMedia", "set property failed ...");
                }
            } else {
                Elog.d("Vilte/MenuMedia", "Input value format error ");
            }
        } else if (view == this.mVilte_operator_media_tmmbr_reserved1_set) {
            String string7 = this.mVilte_operator_media_tmmbr_reserved1_values.getText().toString();
            Elog.d("Vilte/MenuMedia", "Set persist.vendor.vt.rtp_res1 = " + string7);
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.rtp_res1", string7);
            } catch (Exception e9) {
                e9.printStackTrace();
                Elog.e("Vilte/MenuMedia", "set property failed ...");
            }
        } else if (view == this.mVilte_operator_media_tmmbr_reserved2_set) {
            String string8 = this.mVilte_operator_media_tmmbr_reserved2_values.getText().toString();
            Elog.d("Vilte/MenuMedia", "Set persist.vendor.vt.rtp_res2 = " + string8);
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.rtp_res2", string8);
            } catch (Exception e10) {
                e10.printStackTrace();
                Elog.e("Vilte/MenuMedia", "set property failed ...");
            }
        }
        queryCurrentValue();
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.vilte_menu_media);
        bindViews();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        Elog.d("Vilte/MenuMedia", "onResume()");
        queryCurrentValue();
    }
}
