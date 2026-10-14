package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class PrimaryCellDlResourceBlock extends CurveComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_EL1_STATUS_IND};

    public PrimaryCellDlResourceBlock(Activity activity) {
        super(activity);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.CurveComponent
    CurveView.AxisConfig configY() {
        this.mYLabel.setText("R");
        CurveView.Config[] configArr = {new CurveView.Config()};
        configArr[0].color = -16776961;
        configArr[0].lineWidth = 3;
        configArr[0].nodeType = CurveView.Config.TYPE_CIRCLE;
        configArr[0].name = "DL Resource Block";
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
        return "Primary Cell DL Resource Block";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        addData(0, getFieldValue((Msg) obj, "dl_info[0]." + MDMContent.EM_EL1_STATUS_DL_INFO_DL_RB, true));
    }
}
