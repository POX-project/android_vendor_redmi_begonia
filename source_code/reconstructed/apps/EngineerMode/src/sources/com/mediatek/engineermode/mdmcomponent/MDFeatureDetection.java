package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class MDFeatureDetection extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_L4C_MD_EVENT_IND};
    String FileNamePS;
    String FileNamePS1;
    String FileNamePS2;
    String StartTime;
    String[] event;
    boolean isFirstTimeRecord;
    String title;

    public MDFeatureDetection(Activity activity) {
        super(activity);
        this.StartTime = null;
        this.isFirstTimeRecord = true;
        this.FileNamePS = "_md_feature_detection.txt";
        this.title = "Time,event";
        this.FileNamePS1 = null;
        this.FileNamePS2 = null;
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
        strArr[i] = getCurrectTime() + "," + this.event[i].trim();
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
        return new String[]{"Event"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "MD Feature Detection";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int simIdx = msg.getSimIdx() - 1;
        this.event[simIdx] = "";
        if (MDMContent.MSG_ID_EM_L4C_MD_EVENT_IND.equals(str)) {
            for (int i = 0; i < 50; i++) {
                char fieldValue = (char) getFieldValue(msg, "event[" + i + "]");
                StringBuilder sb = new StringBuilder();
                String[] strArr = this.event;
                sb.append(strArr[simIdx]);
                sb.append(fieldValue);
                strArr[simIdx] = sb.toString();
            }
            Elog.d("EmInfo/MDMComponent", "MD Event Lte,event = " + this.event[simIdx].trim());
        }
        if (ComponentSelectActivity.mAutoRecordFlag.equals("1") && simIdx < 2) {
            LogRecord(simIdx);
        }
        if (simIdx + 1 != MDMComponentDetailActivity.mModemType) {
            return;
        }
        clearData();
        addData(this.event[simIdx].trim());
    }
}
