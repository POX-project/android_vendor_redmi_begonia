package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class LteEmacRachFailure extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_EMAC_RACH_FAILURE_IND};
    String FileNamePS;
    String FileNamePS1;
    String FileNamePS2;
    String StartTime;
    boolean isFirstTimeRecord;
    int[] num_of_rach_try;
    String title;

    public LteEmacRachFailure(Activity activity) {
        super(activity);
        this.StartTime = null;
        this.isFirstTimeRecord = true;
        this.FileNamePS = "_LTE_EMAC_Rach_Failure_Info.txt";
        this.title = "Time,num_of_rach_try";
        this.FileNamePS1 = null;
        this.FileNamePS2 = null;
        this.num_of_rach_try = new int[3];
    }

    void LogRecord(int i) {
        String[] strArr = new String[2];
        if (this.isFirstTimeRecord) {
            this.isFirstTimeRecord = false;
            this.StartTime = getCurrectTime();
            try {
                this.FileNamePS1 = this.StartTime + "_ps_1_" + MDMComponentDetailActivity.mSimMccMnc[0] + this.FileNamePS;
                this.FileNamePS2 = this.StartTime + "_ps_2_" + MDMComponentDetailActivity.mSimMccMnc[1] + this.FileNamePS;
                saveToSDCard("/Download", this.FileNamePS1, this.title, false);
                saveToSDCard("/Download", this.FileNamePS2, this.title, false);
            } catch (Exception e) {
                e.printStackTrace();
            }
            Elog.d("EmInfo/MDMComponent", "isFirstTimeRecord = " + this.isFirstTimeRecord + "," + this.title);
        }
        strArr[i] = getCurrectTime() + "," + this.num_of_rach_try[i];
        try {
            if (i == 0) {
                Elog.d("EmInfo/MDMComponent", "save " + strArr[i] + " to " + this.FileNamePS1);
                saveToSDCard("/Download", this.FileNamePS1, strArr[i], true);
            } else {
                Elog.d("EmInfo/MDMComponent", "save " + strArr[i] + " to " + this.FileNamePS2);
                saveToSDCard("/Download", this.FileNamePS2, strArr[i], true);
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "5. LTE EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        return new String[]{"num_of_rach_try"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "LTE EMAC Rach Failure Info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int simIdx = msg.getSimIdx() - 1;
        this.num_of_rach_try[simIdx] = getFieldValue(msg, "num_of_rach_try");
        Elog.d("EmInfo/MDMComponent", "num_of_rach_try = " + this.num_of_rach_try[simIdx]);
        if (ComponentSelectActivity.mAutoRecordFlag.equals("1") && simIdx < 2) {
            LogRecord(simIdx);
        }
        if (simIdx + 1 != MDMComponentDetailActivity.mModemType) {
            return;
        }
        clearData();
        addData(Integer.valueOf(this.num_of_rach_try[simIdx]));
    }
}
