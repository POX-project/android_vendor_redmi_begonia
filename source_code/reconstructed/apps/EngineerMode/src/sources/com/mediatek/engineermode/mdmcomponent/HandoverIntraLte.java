package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class HandoverIntraLte extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_ERRC_SUCCESS_RATE_KPI_IND};
    String FileNamePS;
    String FileNamePS1;
    String FileNamePS2;
    String StartTime;
    int[] attempt;
    String[] event;
    boolean isFirstTimeRecord;
    int[] procId;
    int[] status;
    int[] success;
    String title;

    public HandoverIntraLte(Activity activity) {
        super(activity);
        this.StartTime = null;
        this.isFirstTimeRecord = true;
        this.FileNamePS = "_Handover_Intra_LTE.txt";
        this.title = "Time,success,procId,status";
        this.FileNamePS1 = null;
        this.FileNamePS2 = null;
        this.success = new int[3];
        this.procId = new int[3];
        this.status = new int[3];
        this.attempt = new int[3];
        this.event = new String[3];
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
        strArr[i] = getCurrectTime() + "," + this.success[i] + "," + this.procId[i] + "," + this.status[i];
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
        return new String[]{"Attempt", "Success", "Fail"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Handover (Intra-LTE)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int simIdx = msg.getSimIdx() - 1;
        if (MDMContent.MSG_ID_EM_ERRC_SUCCESS_RATE_KPI_IND.equals(str)) {
            this.attempt[simIdx] = getFieldValue(msg, "attempt");
            this.success[simIdx] = getFieldValue(msg, "success");
            this.procId[simIdx] = getFieldValue(msg, "proc_id");
            this.status[simIdx] = getFieldValue(msg, "status");
            Elog.d("EmInfo/MDMComponent", "HandoverIntraLte,success = " + this.success[simIdx]);
        }
        if (ComponentSelectActivity.mAutoRecordFlag.equals("1") && simIdx < 2) {
            LogRecord(simIdx);
        }
        if (simIdx + 1 != MDMComponentDetailActivity.mModemType) {
            return;
        }
        clearData();
        addData(Integer.valueOf(this.attempt[simIdx]), Integer.valueOf(this.success[simIdx]), Integer.valueOf(this.attempt[simIdx] - this.success[simIdx]));
    }
}
