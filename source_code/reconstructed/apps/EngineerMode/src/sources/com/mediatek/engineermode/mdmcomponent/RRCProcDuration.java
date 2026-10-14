package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;
import java.util.Arrays;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class RRCProcDuration extends ArrayTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_EVENT, MDMContentICD.MSG_ID_NRRC_PROCEDURE_DURATION_EVENT};
    int[][] durationAddr;
    int[][] procedureAddr;
    int[] resumeDuration;
    int resumeIndex;
    int[] setupDuration;
    int setupIndex;

    public RRCProcDuration(Activity activity) {
        super(activity);
        this.procedureAddr = new int[][]{new int[]{8, 0, 8}};
        this.durationAddr = new int[][]{new int[]{8, 24, 32}};
        this.setupDuration = new int[10];
        this.resumeDuration = new int[10];
        this.setupIndex = 0;
        this.resumeIndex = 0;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "10. Procedure Duration";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.ArrayTableComponent
    String[] getLabels() {
        return new String[]{"Procedure", "RRC Setup duration", "RRC Resume duration"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR RRC Procedure Duration";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        if (!str.equals(MDMContentICD.MSG_ID_NRRC_PROCEDURE_DURATION_EVENT)) {
            return;
        }
        int[][] iArr = this.procedureAddr;
        int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, iArr[iArr.length - 1][0]);
        int fieldValueIcd = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.procedureAddr);
        int fieldValueIcd2 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.durationAddr);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", condition = " + fieldValueIcd + ", " + fieldValueIcd2 + ", value = " + Arrays.toString(this.setupDuration) + Arrays.toString(this.resumeDuration));
        if (fieldValueIcd == 0) {
            if (this.setupIndex >= this.setupDuration.length) {
                this.setupIndex = 0;
            }
            int[] iArr2 = this.setupDuration;
            int i = this.setupIndex;
            iArr2[i] = fieldValueIcd2;
            this.setupIndex = i + 1;
            int i2 = 0;
            int i3 = 0;
            while (true) {
                int[] iArr3 = this.setupDuration;
                if (i3 >= iArr3.length) {
                    setDataAtPosition(iArr3.length, 0, "avg");
                    int[] iArr4 = this.setupDuration;
                    setDataAtPosition(iArr4.length, 1, Integer.valueOf(i2 / iArr4.length));
                    return;
                } else {
                    setDataAtPosition(i3, 1, iArr3[i3] == 0 ? "" : Integer.valueOf(iArr3[i3]));
                    setDataAtPosition(i3, 0, Integer.valueOf(i3));
                    i2 += this.setupDuration[i3];
                    i3++;
                }
            }
        } else {
            if (fieldValueIcd != 1) {
                return;
            }
            if (this.resumeIndex >= this.resumeDuration.length) {
                this.resumeIndex = 0;
            }
            int[] iArr5 = this.resumeDuration;
            int i4 = this.resumeIndex;
            iArr5[i4] = fieldValueIcd2;
            this.resumeIndex = i4 + 1;
            int i5 = 0;
            int i6 = 0;
            while (true) {
                int[] iArr6 = this.resumeDuration;
                if (i6 >= iArr6.length) {
                    setDataAtPosition(iArr6.length, 0, "avg");
                    int[] iArr7 = this.resumeDuration;
                    setDataAtPosition(iArr7.length, 2, Integer.valueOf(i5 / iArr7.length));
                    return;
                } else {
                    setDataAtPosition(i6, 2, iArr6[i6] == 0 ? "" : Integer.valueOf(iArr6[i6]));
                    setDataAtPosition(i6, 0, Integer.valueOf(i6));
                    i5 += this.resumeDuration[i6];
                    i6++;
                }
            }
        }
    }
}
