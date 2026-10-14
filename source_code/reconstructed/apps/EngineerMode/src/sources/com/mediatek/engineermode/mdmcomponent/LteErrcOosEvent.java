package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class LteErrcOosEvent extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_ERRC_OOS_EVENT_IND};
    String FileNamePS;
    String FileNamePS1;
    String FileNamePS2;
    String StartTime;
    boolean isFirstTimeRecord;
    int[] oos_counter;
    String title;

    public LteErrcOosEvent(Activity activity) {
        super(activity);
        this.StartTime = null;
        this.isFirstTimeRecord = true;
        this.FileNamePS = "_LTE_ERRC_OOS_Event_Info.txt";
        this.FileNamePS1 = null;
        this.FileNamePS2 = null;
        this.oos_counter = new int[3];
        this.title = "Time,oos_counter";
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
        strArr[i] = getCurrectTime() + "," + this.oos_counter[i];
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
        return new String[]{"oos_counter"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "LTE ERRC OOS Event Info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int simIdx = msg.getSimIdx() - 1;
        this.oos_counter[simIdx] = getFieldValue(msg, "oos_counter");
        Elog.d("EmInfo/MDMComponent", "oos_counter = " + this.oos_counter[simIdx]);
        if (ComponentSelectActivity.mAutoRecordFlag.equals("1") && simIdx < 2) {
            LogRecord(simIdx);
        }
        if (simIdx + 1 != MDMComponentDetailActivity.mModemType) {
            return;
        }
        clearData();
        addData(Integer.valueOf(this.oos_counter[simIdx]));
    }
}
