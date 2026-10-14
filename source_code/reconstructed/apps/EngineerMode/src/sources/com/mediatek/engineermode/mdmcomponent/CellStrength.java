package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.graphics.Color;
import android.support.v4.internal.view.SupportMenu;
import android.support.v4.media.subtitle.Cea708CCParser;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.hqanfc.NfcCommand;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class CellStrength extends CurveExComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_EL1_STATUS_IND};

    public CellStrength(Activity activity) {
        super(activity);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.CurveExComponent
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

    @Override // com.mediatek.engineermode.mdmcomponent.CurveExComponent
    CurveViewEx.AxisConfig configY() {
        this.mYLabel.setText("SNR");
        configArr[0].color = SupportMenu.CATEGORY_MASK;
        configArr[0].lineWidth = 3;
        configArr[0].nodeType = CurveViewEx.Config.TYPE_CIRCLE;
        configArr[0].name = "CC0";
        configArr[1].color = -16776961;
        configArr[1].lineWidth = 3;
        configArr[1].nodeType = CurveViewEx.Config.TYPE_TRIANGLE;
        configArr[1].name = "CC1";
        configArr[2].color = Color.rgb(43, 101, 171);
        configArr[2].lineWidth = 3;
        configArr[2].nodeType = CurveViewEx.Config.TYPE_NONE;
        configArr[2].name = "Strong";
        configArr[3].color = Color.rgb(NfcCommand.CommandType.MTK_NFC_EM_MSG_END, Cea708CCParser.Const.CODE_C1_DF1, 0);
        configArr[3].lineWidth = 3;
        configArr[3].nodeType = CurveViewEx.Config.TYPE_NONE;
        configArr[3].name = "MediumWeak";
        CurveViewEx.Config[] configArr = {new CurveViewEx.Config(), new CurveViewEx.Config(), new CurveViewEx.Config(), new CurveViewEx.Config(), new CurveViewEx.Config()};
        configArr[4].color = Color.rgb(Cea708CCParser.Const.CODE_C1_DF0, Cea708CCParser.Const.CODE_C1_DF0, 186);
        configArr[4].lineWidth = 3;
        configArr[4].nodeType = CurveViewEx.Config.TYPE_NONE;
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
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "5. LTE EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "CC0/CC1 RSRP and SINR";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, MDMContent.EM_EL1_STATUS_DL_INFO + "[0].rsrp", true);
        int fieldValue2 = getFieldValue(msg, MDMContent.EM_EL1_STATUS_DL_INFO + "[0]." + MDMContent.EM_EL1_STATUS_DL_INFO_SINR, true);
        int fieldValue3 = getFieldValue(msg, "cell_info[0].pci", true);
        long fieldValue4 = getFieldValue(msg, "cell_info[0].earfcn");
        int fieldValue5 = getFieldValue(msg, MDMContent.EM_EL1_STATUS_DL_INFO + "[1].rsrp", true);
        int fieldValue6 = getFieldValue(msg, MDMContent.EM_EL1_STATUS_DL_INFO + "[1]." + MDMContent.EM_EL1_STATUS_DL_INFO_SINR, true);
        int fieldValue7 = getFieldValue(msg, "cell_info[1].pci", true);
        long fieldValue8 = getFieldValue(msg, "cell_info[1].earfcn");
        clearData();
        Elog.d("EmInfo/MDMComponent", "pcellRsrp" + fieldValue + " pcellSinr" + fieldValue2 + " pcellPci" + fieldValue3 + " pcellEarfcn" + fieldValue4 + " scellRsrp" + fieldValue5 + " scellSinr" + fieldValue6 + " scellPci" + fieldValue7 + " scellEarfcn" + fieldValue8);
        addData(0, (float) fieldValue, (float) fieldValue2, (float) fieldValue3, (float) fieldValue4);
        addData(1, (float) fieldValue5, (float) fieldValue6, (float) fieldValue7, (float) fieldValue8);
    }
}
