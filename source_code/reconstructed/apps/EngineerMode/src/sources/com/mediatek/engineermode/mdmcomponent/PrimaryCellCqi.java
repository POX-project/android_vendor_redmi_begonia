package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class PrimaryCellCqi extends CurveComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_EL1_STATUS_IND};

    public PrimaryCellCqi(Activity activity) {
        super(activity);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.CurveComponent
    CurveView.AxisConfig configY() {
        this.mYLabel.setText("R");
        configArr[0].color = -16776961;
        configArr[0].lineWidth = 3;
        configArr[0].nodeType = CurveView.Config.TYPE_CIRCLE;
        configArr[0].name = "CQI_CW0";
        CurveView.Config[] configArr = {new CurveView.Config(), new CurveView.Config()};
        configArr[1].color = -16711936;
        configArr[1].lineWidth = 3;
        configArr[1].lineType = CurveView.Config.LINE_DASH;
        configArr[1].nodeType = CurveView.Config.TYPE_CROSS;
        configArr[1].name = "CQI_CW1";
        this.mCurveView.setConfig(configArr);
        CurveView.AxisConfig axisConfig = new CurveView.AxisConfig();
        axisConfig.min = -100L;
        axisConfig.max = 100L;
        axisConfig.step = 10L;
        axisConfig.configMin = true;
        axisConfig.configMax = true;
        axisConfig.configStep = true;
        return axisConfig;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "5. LTE EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Primary Cell CQI";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, "dl_info[0]." + MDMContent.EM_EL1_STATUS_DL_INFO_CQI_CW0, true);
        int fieldValue2 = getFieldValue(msg, "dl_info[0]." + MDMContent.EM_EL1_STATUS_DL_INFO_CQI_CW1, true);
        addData(0, (float) fieldValue);
        addData(0, (float) fieldValue2);
    }
}
