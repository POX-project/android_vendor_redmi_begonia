package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class UmtsRscp extends CurveComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_FDD_EM_CSCE_SERV_CELL_S_STATUS_IND, MDMContent.MSG_ID_FDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND, MDMContent.MSG_ID_FDD_EM_MEME_DCH_UMTS_CELL_INFO_IND};

    public UmtsRscp(Activity activity) {
        super(activity);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.CurveComponent
    CurveView.AxisConfig configY() {
        this.mYLabel.setText("R");
        configArr[0].color = -16776961;
        configArr[0].lineWidth = 3;
        configArr[0].nodeType = CurveView.Config.TYPE_CIRCLE;
        configArr[0].name = "RSCP(active)";
        configArr[0].newLineThreadshold = 11;
        configArr[1].color = -16776961;
        configArr[1].lineWidth = 0;
        configArr[1].nodeType = CurveView.Config.TYPE_CIRCLE;
        configArr[1].name = "RSCP(monitored)";
        configArr[1].newLineThreadshold = 11;
        CurveView.Config[] configArr = {new CurveView.Config(), new CurveView.Config(), new CurveView.Config()};
        configArr[2].color = -16776961;
        configArr[2].lineWidth = 1;
        configArr[2].lineType = CurveView.Config.LINE_DASH;
        configArr[2].nodeType = CurveView.Config.TYPE_CIRCLE;
        configArr[2].name = "RSCP(detected)";
        configArr[2].newLineThreadshold = 11;
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
        return "3. UMTS FDD EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "UMTS RSCP (UMTS FDD)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        byte b;
        Msg msg = (Msg) obj;
        if (str.equals(MDMContent.MSG_ID_FDD_EM_CSCE_SERV_CELL_S_STATUS_IND)) {
            float fieldValue = getFieldValue(msg, "serv_cell.rscp", true) / 4096.0f;
            float fieldValue2 = getFieldValue(msg, "serv_cell.ec_no", true) / 4096.0f;
            if (fieldValue <= -120.0f || fieldValue2 <= -25.0f) {
                return;
            }
            addData(0, fieldValue);
            return;
        }
        if (!str.equals(MDMContent.MSG_ID_FDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND)) {
            if (str.equals(MDMContent.MSG_ID_FDD_EM_MEME_DCH_UMTS_CELL_INFO_IND)) {
                int fieldValue3 = getFieldValue(msg, "num_cells");
                for (int i = 0; i < fieldValue3 && i < 32; i++) {
                    int fieldValue4 = getFieldValue(msg, "umts_cell_list[" + i + "].cell_type");
                    int fieldValue5 = getFieldValue(msg, "umts_cell_list[" + i + "].RSCP", true);
                    if (fieldValue4 == 0) {
                        addData(0, fieldValue5);
                    } else if (fieldValue4 == 1 || fieldValue4 == 3) {
                        addData(1, fieldValue5);
                    } else if (fieldValue4 == 2) {
                        addData(2, fieldValue5);
                    }
                }
                return;
            }
            return;
        }
        int fieldValue6 = getFieldValue(msg, MDMContent.FDD_EM_CSCE_NEIGH_CELL_OPERATION);
        int fieldValue7 = getFieldValue(msg, "RAT_type");
        if (fieldValue6 == 1 && fieldValue7 == 0) {
            int fieldValue8 = getFieldValue(msg, "neigh_cell_count");
            for (int i2 = 0; i2 < fieldValue8 && i2 < 16; i2++) {
                float fieldValue9 = getFieldValue(msg, "choice.neigh_cells[" + i2 + "].rscp", true) / 4096.0f;
                float fieldValue10 = getFieldValue(msg, "choice.neigh_cells[" + i2 + "].ec_no", true) / 4096.0f;
                if (fieldValue9 > -120.0f) {
                    b = -1043857408;
                    if (fieldValue10 > -25.0f) {
                        addData(1, fieldValue9);
                    }
                } else {
                    b = -1043857408;
                }
            }
        }
    }
}
