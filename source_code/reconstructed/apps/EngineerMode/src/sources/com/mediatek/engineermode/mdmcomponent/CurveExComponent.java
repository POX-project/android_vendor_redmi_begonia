package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.graphics.Color;
import android.support.v4.internal.view.SupportMenu;
import android.support.v4.media.subtitle.Cea708CCParser;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import com.mediatek.engineermode.R;
import com.mediatek.engineermode.hqanfc.NfcCommand;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
abstract class CurveExComponent extends MDMComponent {
    CurveViewEx mCurveView;
    HashMap<Integer, float[]> mData;
    View mView;
    TextView mXLabel;
    TextView mYLabel;

    public CurveExComponent(Activity activity) {
        super(activity);
        this.mData = new HashMap<>();
    }

    void addData(int i, float f, float f2, float f3, float f4) {
        float[] fArr = this.mData.get(Integer.valueOf(i));
        if (fArr == null) {
            this.mData.put(Integer.valueOf(i), new float[]{f, f2, f3, f4});
        } else {
            float[] fArr2 = new float[fArr.length + 4];
            for (int i2 = 0; i2 < fArr.length; i2++) {
                fArr2[i2] = fArr[i2];
            }
            fArr2[fArr.length] = f;
            fArr2[fArr.length + 1] = f2;
            fArr2[fArr.length + 2] = f3;
            fArr2[fArr.length + 3] = f4;
            this.mData.put(Integer.valueOf(i), fArr2);
        }
        CurveViewEx curveViewEx = this.mCurveView;
        if (curveViewEx != null) {
            curveViewEx.setData(i, this.mData.get(Integer.valueOf(i)));
        }
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void clearData() {
        this.mData.clear();
    }

    CurveViewEx.AxisConfig configX() {
        this.mXLabel.setText("RSRP");
        CurveViewEx.AxisConfig axisConfig = new CurveViewEx.AxisConfig();
        axisConfig.min = -140L;
        axisConfig.max = -30L;
        axisConfig.step = 10L;
        axisConfig.configMin = true;
        axisConfig.configMax = true;
        axisConfig.configStep = true;
        return axisConfig;
    }

    CurveViewEx.AxisConfig configY() {
        this.mYLabel.setText("SNR");
        configArr[0].color = -16776961;
        configArr[0].lineWidth = 3;
        configArr[0].nodeType = CurveViewEx.Config.TYPE_CIRCLE;
        configArr[0].name = "PCell";
        configArr[1].color = SupportMenu.CATEGORY_MASK;
        configArr[1].lineWidth = 3;
        configArr[1].nodeType = CurveViewEx.Config.TYPE_CIRCLE;
        configArr[1].name = "SCell";
        configArr[2].color = Color.rgb(43, 101, 171);
        configArr[2].lineWidth = 3;
        configArr[2].nodeType = CurveViewEx.Config.TYPE_RHOMBUS;
        configArr[2].name = "Strength";
        configArr[3].color = Color.rgb(NfcCommand.CommandType.MTK_NFC_EM_MSG_END, Cea708CCParser.Const.CODE_C1_DF1, 0);
        configArr[3].lineWidth = 3;
        configArr[3].nodeType = CurveViewEx.Config.TYPE_SQUARE;
        configArr[3].name = "MediumWeak";
        CurveViewEx.Config[] configArr = {new CurveViewEx.Config(), new CurveViewEx.Config(), new CurveViewEx.Config(), new CurveViewEx.Config(), new CurveViewEx.Config()};
        configArr[4].color = Color.rgb(Cea708CCParser.Const.CODE_C1_DF0, Cea708CCParser.Const.CODE_C1_DF0, 186);
        configArr[4].lineWidth = 3;
        configArr[4].nodeType = CurveViewEx.Config.TYPE_TRIANGLE;
        configArr[4].name = "Weak";
        this.mCurveView.setConfig(configArr);
        CurveViewEx.AxisConfig axisConfig = new CurveViewEx.AxisConfig();
        axisConfig.min = -20L;
        axisConfig.max = 30L;
        axisConfig.step = 10L;
        axisConfig.configMin = true;
        axisConfig.configMax = true;
        axisConfig.configStep = true;
        return axisConfig;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    View getView() {
        if (this.mView == null) {
            View viewInflate = this.mActivity.getLayoutInflater().inflate(R.layout.mdm_em_info_curveex, (ViewGroup) null);
            this.mView = viewInflate;
            this.mXLabel = (TextView) viewInflate.findViewById(R.id.em_info_curve_x_label);
            this.mYLabel = (TextView) this.mView.findViewById(R.id.em_info_curve_y_label);
            this.mCurveView = (CurveViewEx) this.mView.findViewById(R.id.em_info_curve);
            this.mCurveView.setAxisConfig(configX(), configY());
            this.mCurveView.getRSRPSINRConfig();
        }
        return this.mView;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void removeView() {
    }
}
