package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.support.v4.internal.view.SupportMenu;
import android.support.v4.view.InputDeviceCompat;
import android.support.v4.view.ViewCompat;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class RsrpLteCandidateCellUmtsFddCurve extends CurveComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_FDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND};

    public RsrpLteCandidateCellUmtsFddCurve(Activity activity) {
        super(activity);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.CurveComponent
    CurveView.AxisConfig configY() {
        this.mYLabel.setText("R");
        int[] iArr = {-16776961, -16711936, SupportMenu.CATEGORY_MASK, -16711681, -65281, InputDeviceCompat.SOURCE_ANY, -16777080, -16742400, -7864320, -16742264, -7864184, -7829504, -16777148, -16759808, -12320768, ViewCompat.MEASURED_STATE_MASK};
        CurveView.Config[] configArr = new CurveView.Config[16];
        for (int i = 0; i < 16; i++) {
            configArr[i] = new CurveView.Config();
            configArr[i].color = iArr[i];
            configArr[i].lineWidth = 3;
            configArr[i].nodeType = CurveView.Config.TYPE_CIRCLE;
            configArr[i].name = "";
        }
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
        return "RSRP (LTE candidate cell)(UMTS FDD)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        if (getFieldValue(msg, "RAT_type") == 2) {
            int fieldValue = getFieldValue(msg, "neigh_cell_count");
            for (int i = 0; i < fieldValue && i < 16; i++) {
                addData(i, getFieldValue(msg, "choice.LTE_neigh_cells[" + i + "].rsrp", true) / 4096.0f);
            }
        }
    }
}
