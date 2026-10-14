package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import com.mediatek.engineermode.R;
import java.util.HashMap;
import java.util.Random;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
abstract class CurveComponent extends MDMComponent {
    CurveView mCurveView;
    HashMap<Integer, float[]> mData;
    long mStartTime;
    boolean mStarted;
    View mView;
    TextView mXLabel;
    TextView mYLabel;
    Random rand;

    public CurveComponent(Activity activity) {
        super(activity);
        this.mData = new HashMap<>();
        this.rand = new Random();
    }

    void addData(int i, float f) {
        if (!this.mStarted) {
            this.mStartTime = (System.currentTimeMillis() / 10000) * 10;
            this.mStarted = true;
        }
        long jCurrentTimeMillis = System.currentTimeMillis() / 1000;
        float[] fArr = this.mData.get(Integer.valueOf(i));
        if (fArr == null) {
            this.mData.put(Integer.valueOf(i), new float[]{jCurrentTimeMillis - this.mStartTime, f});
        } else {
            float[] fArr2 = new float[fArr.length + 2];
            for (int i2 = 0; i2 < fArr.length; i2++) {
                fArr2[i2] = fArr[i2];
            }
            fArr2[fArr.length] = jCurrentTimeMillis - this.mStartTime;
            fArr2[fArr.length + 1] = f;
            this.mData.put(Integer.valueOf(i), fArr2);
        }
        CurveView curveView = this.mCurveView;
        if (curveView != null) {
            curveView.setData(i, this.mData.get(Integer.valueOf(i)));
        }
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void clearData() {
    }

    CurveView.AxisConfig configY() {
        this.mYLabel.setText("dBm");
        CurveView.Config[] configArr = {new CurveView.Config()};
        configArr[0].color = -7864320;
        configArr[0].lineWidth = 2;
        configArr[0].nodeType = CurveView.Config.TYPE_CIRCLE;
        this.mCurveView.setConfig(configArr);
        CurveView.AxisConfig axisConfig = new CurveView.AxisConfig();
        axisConfig.min = 0L;
        axisConfig.max = 30L;
        axisConfig.step = 2L;
        axisConfig.configMin = true;
        axisConfig.configMax = true;
        axisConfig.configStep = true;
        return axisConfig;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    View getView() {
        if (this.mView == null) {
            View viewInflate = this.mActivity.getLayoutInflater().inflate(R.layout.mdm_em_info_curve, (ViewGroup) null);
            this.mView = viewInflate;
            this.mXLabel = (TextView) viewInflate.findViewById(R.id.em_info_curve_x_label);
            this.mYLabel = (TextView) this.mView.findViewById(R.id.em_info_curve_y_label);
            this.mCurveView = (CurveView) this.mView.findViewById(R.id.em_info_curve);
            if (!this.mStarted) {
                this.mStartTime = (System.currentTimeMillis() / 10000) * 10;
                this.mStarted = true;
            }
            this.mXLabel.setText("Time");
            CurveView.AxisConfig axisConfig = new CurveView.AxisConfig();
            axisConfig.base = this.mStartTime;
            axisConfig.min = 0L;
            axisConfig.max = 200L;
            axisConfig.step = 1L;
            axisConfig.configMin = true;
            axisConfig.configMax = true;
            axisConfig.configStep = true;
            axisConfig.type = CurveView.AxisConfig.TYPE_TIME;
            this.mCurveView.setAxisConfig(axisConfig, configY());
        }
        return this.mView;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void removeView() {
    }
}
