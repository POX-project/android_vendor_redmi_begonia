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
public class VilteMenuCodec extends Activity implements View.OnClickListener {
    private TextView mVilte_customize_status_view;
    private Button mVilte_operator_codec_vdec_set;
    private EditText mVilte_operator_codec_vdec_values;
    private Button mVilte_operator_codec_venc_set;
    private EditText mVilte_operator_codec_venc_values;
    private Button mVilte_operator_media_customize_mode_disable;
    private Button mVilte_operator_media_customize_mode_enable;
    private TextView mVilte_vdec_view;
    private TextView mVilte_venc_view;
    private final String TAG = "Vilte/MenuCodec";
    private final String PROP_VILTE_OPTEST_VCODEC = "persist.vendor.vt.OPTest_vcodec";
    private final String PROP_VILTE_OPTEST_VENC = "persist.vendor.vt.OPTest_venc";
    private final String PROP_VILTE_OPTEST_VDEC = "persist.vendor.vt.OPTest_vdec";

    private void bindViews() {
        this.mVilte_operator_media_customize_mode_enable = (Button) findViewById(R.id.vilte_operator_media_customize_mode_enable);
        this.mVilte_operator_media_customize_mode_disable = (Button) findViewById(R.id.vilte_operator_media_customize_mode_disable);
        this.mVilte_operator_media_customize_mode_enable.setOnClickListener(this);
        this.mVilte_operator_media_customize_mode_disable.setOnClickListener(this);
        this.mVilte_operator_codec_venc_values = (EditText) findViewById(R.id.vilte_operator_codec_venc_values);
        Button button = (Button) findViewById(R.id.vilte_operator_codec_venc_set);
        this.mVilte_operator_codec_venc_set = button;
        button.setOnClickListener(this);
        this.mVilte_operator_codec_vdec_values = (EditText) findViewById(R.id.vilte_operator_codec_vdec_values);
        Button button2 = (Button) findViewById(R.id.vilte_operator_codec_vdec_set);
        this.mVilte_operator_codec_vdec_set = button2;
        button2.setOnClickListener(this);
        this.mVilte_customize_status_view = (TextView) findViewById(R.id.vilte_customize_status_view);
        this.mVilte_venc_view = (TextView) findViewById(R.id.vilte_venc_view);
        this.mVilte_vdec_view = (TextView) findViewById(R.id.vilte_vdec_view);
    }

    private void queryCurrentValue() {
        String strSystemPropertyGet = EmUtils.systemPropertyGet("persist.vendor.vt.OPTest_vcodec", "");
        String strSystemPropertyGet2 = EmUtils.systemPropertyGet("persist.vendor.vt.OPTest_venc", "");
        String strSystemPropertyGet3 = EmUtils.systemPropertyGet("persist.vendor.vt.OPTest_vdec", "");
        this.mVilte_customize_status_view.setText("persist.vendor.vt.OPTest_vcodec = " + strSystemPropertyGet);
        this.mVilte_venc_view.setText("persist.vendor.vt.OPTest_venc = " + strSystemPropertyGet2);
        this.mVilte_operator_codec_venc_values.setText(strSystemPropertyGet2);
        this.mVilte_vdec_view.setText("persist.vendor.vt.OPTest_vdec = " + strSystemPropertyGet3);
        this.mVilte_operator_codec_vdec_values.setText(strSystemPropertyGet3);
    }

    boolean checkValue(View view, String str) {
        if (view != this.mVilte_operator_codec_venc_set && view != this.mVilte_operator_codec_vdec_set) {
            return true;
        }
        try {
            Integer.parseInt(str, 16);
            return true;
        } catch (NumberFormatException e) {
            EmUtils.showToast("value should be 16 HEX", 0);
            return false;
        }
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view == this.mVilte_operator_media_customize_mode_enable) {
            Elog.d("Vilte/MenuCodec", "Set persist.vendor.vt.OPTest_vcodec = 1");
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.OPTest_vcodec", "1");
            } catch (Exception e) {
                e.printStackTrace();
                Elog.e("Vilte/MenuCodec", "set property failed ...");
            }
        } else if (view == this.mVilte_operator_media_customize_mode_disable) {
            Elog.d("Vilte/MenuCodec", "Set persist.vendor.vt.OPTest_vcodec = 0");
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.OPTest_vcodec", "0");
            } catch (Exception e2) {
                e2.printStackTrace();
                Elog.e("Vilte/MenuCodec", "set property failed ...");
            }
        } else if (view == this.mVilte_operator_codec_venc_set) {
            String string = this.mVilte_operator_codec_venc_values.getText().toString();
            Elog.d("Vilte/MenuCodec", "Set persist.vendor.vt.OPTest_venc = " + string);
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.OPTest_venc", string);
            } catch (Exception e3) {
                e3.printStackTrace();
                Elog.e("Vilte/MenuCodec", "set property failed ...");
            }
        } else if (view == this.mVilte_operator_codec_vdec_set) {
            String string2 = this.mVilte_operator_codec_vdec_values.getText().toString();
            Elog.d("Vilte/MenuCodec", "Set persist.vendor.vt.OPTest_vdec = " + string2);
            try {
                EmUtils.getEmHidlService().setEmConfigure("persist.vendor.vt.OPTest_vdec", string2);
            } catch (Exception e4) {
                e4.printStackTrace();
                Elog.e("Vilte/MenuCodec", "set property failed ...");
            }
        }
        queryCurrentValue();
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.vilte_menu_codec);
        bindViews();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        Elog.d("Vilte/MenuCodec", "onResume()");
        queryCurrentValue();
    }
}
