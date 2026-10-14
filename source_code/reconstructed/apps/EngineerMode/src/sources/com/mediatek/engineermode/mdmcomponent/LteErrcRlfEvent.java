package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class LteErrcRlfEvent extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_ERRC_RLF_EVENT_IND};
    String FileNamePS;
    String FileNamePS1;
    String FileNamePS2;
    String StartTime;
    boolean isFirstTimeRecord;
    int[] rlf_cause;
    int[] rlf_causeother;
    int[] rlf_counter;
    String title;

    public LteErrcRlfEvent(Activity activity) {
        super(activity);
        this.StartTime = null;
        this.isFirstTimeRecord = true;
        this.FileNamePS = "_LTE_ERRC_RLF_Event_Info.txt";
        this.title = "Time,rlf_counter,rlf_cause,rlf_causeother";
        this.FileNamePS1 = null;
        this.FileNamePS2 = null;
        this.rlf_counter = new int[3];
        this.rlf_cause = new int[3];
        this.rlf_causeother = new int[3];
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
        strArr[i] = getCurrectTime() + "," + this.rlf_counter[i] + "," + this.rlf_cause[i] + "," + this.rlf_causeother[i];
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
        return new String[]{"rlf_counter", "rlf_cause", "rlf_causeother"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "LTE ERRC ELF Event Info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int simIdx = msg.getSimIdx() - 1;
        this.rlf_counter[simIdx] = getFieldValue(msg, "rlf_counter");
        this.rlf_cause[simIdx] = getFieldValue(msg, "rlf_cause");
        this.rlf_causeother[simIdx] = getFieldValue(msg, "rlf_causeother");
        Elog.d("EmInfo/MDMComponent", "rlf_counter = " + this.rlf_counter[simIdx]);
        Elog.d("EmInfo/MDMComponent", "rlf_cause = " + this.rlf_cause[simIdx]);
        Elog.d("EmInfo/MDMComponent", "rlf_causeother = " + this.rlf_causeother[simIdx]);
        if (ComponentSelectActivity.mAutoRecordFlag.equals("1") && simIdx < 2) {
            LogRecord(simIdx);
        }
        if (simIdx + 1 != MDMComponentDetailActivity.mModemType) {
            return;
        }
        clearData();
        addData(Integer.valueOf(this.rlf_counter[simIdx]));
        addData(Integer.valueOf(this.rlf_cause[simIdx]));
        addData(Integer.valueOf(this.rlf_causeother[simIdx]));
    }
}
