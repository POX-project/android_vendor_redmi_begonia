package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class RatAndServiceStatus extends CurveComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_RAC_INFO_IND};
    HashMap<Integer, String> mMapping;

    public RatAndServiceStatus(Activity activity) {
        super(activity);
        this.mMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.RatAndServiceStatus.1
            {
                put(0, "NO SERVICE");
                put(1, "LIMITED SERVICE");
                put(2, "GSM");
                put(3, "UMTS FDD");
                put(4, "UMTS TDD");
                put(5, "LTE  FDD");
                put(6, "LTE  TDD");
                put(7, "NR");
            }
        };
    }

    @Override // com.mediatek.engineermode.mdmcomponent.CurveComponent
    CurveView.AxisConfig configY() {
        this.mYLabel.setText("R");
        CurveView.Config[] configArr = {new CurveView.Config()};
        configArr[0].color = -16776961;
        configArr[0].lineWidth = 3;
        configArr[0].nodeType = CurveView.Config.TYPE_CIRCLE;
        configArr[0].name = "Service status";
        this.mCurveView.setConfig(configArr);
        CurveView.AxisConfig axisConfig = new CurveView.AxisConfig();
        axisConfig.min = 0L;
        axisConfig.max = 7L;
        axisConfig.step = 1L;
        axisConfig.configMin = true;
        axisConfig.configMax = true;
        axisConfig.configStep = true;
        axisConfig.customLabel = this.mMapping;
        return axisConfig;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "1. General EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "RAT and Service Status";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        addData(0, getFieldValue((Msg) obj, MDMContent.EM_RAC_ACTIVE_RAT_INFO));
    }
}
