package com.mediatek.internal.telephony;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class PseudoCellInfo implements Parcelable {
    public static final Parcelable.Creator<PseudoCellInfo> CREATOR = new Parcelable.Creator<PseudoCellInfo>() { // from class: com.mediatek.internal.telephony.PseudoCellInfo.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public PseudoCellInfo createFromParcel(Parcel parcel) {
            return new PseudoCellInfo(parcel);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public PseudoCellInfo[] newArray(int i) {
            return new PseudoCellInfo[i];
        }
    };
    public int mApcMode;
    public boolean mApcReport;
    public int mCellCount;
    public ArrayList<CellInfo> mCellInfos;
    public int mReportInterval;

    class CellInfo {
        public int arfcn;
        public int bsic;
        public int cid;
        public int lac;
        public int plmn;
        public int type;

        CellInfo() {
        }
    }

    protected PseudoCellInfo() {
        this.mApcMode = 0;
        this.mApcReport = false;
        this.mReportInterval = 0;
        this.mCellCount = 0;
        this.mCellInfos = null;
    }

    protected PseudoCellInfo(int i, boolean z, int i2, int[] iArr) {
        this.mApcMode = i;
        this.mApcReport = z;
        this.mReportInterval = i2;
        setCellInfo(iArr);
    }

    protected PseudoCellInfo(Parcel parcel) {
        this.mApcMode = parcel.readInt();
        this.mApcReport = parcel.readInt() == 1;
        this.mReportInterval = parcel.readInt();
        this.mCellCount = parcel.readInt();
        this.mCellInfos = new ArrayList<>();
        for (int i = 0; i < this.mCellCount; i++) {
            CellInfo cellInfo = new CellInfo();
            cellInfo.type = parcel.readInt();
            cellInfo.plmn = parcel.readInt();
            cellInfo.lac = parcel.readInt();
            cellInfo.cid = parcel.readInt();
            cellInfo.arfcn = parcel.readInt();
            cellInfo.bsic = parcel.readInt();
            this.mCellInfos.add(cellInfo);
        }
    }

    protected PseudoCellInfo(int[] iArr) {
        this.mApcMode = iArr[0];
        this.mApcReport = iArr[1] == 1;
        this.mReportInterval = iArr[2];
        this.mCellCount = iArr[3];
        this.mCellInfos = new ArrayList<>();
        for (int i = 0; i < this.mCellCount; i++) {
            CellInfo cellInfo = new CellInfo();
            cellInfo.type = iArr[(i * 6) + 4];
            cellInfo.plmn = iArr[(i * 6) + 5];
            cellInfo.lac = iArr[(i * 6) + 6];
            cellInfo.cid = iArr[(i * 6) + 7];
            cellInfo.arfcn = iArr[(i * 6) + 8];
            cellInfo.bsic = iArr[(i * 6) + 9];
            this.mCellInfos.add(cellInfo);
        }
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public int getApcMode() {
        return this.mApcMode;
    }

    public int getArfcn(int i) {
        ArrayList<CellInfo> arrayList;
        if (i < 0 || i >= this.mCellCount || (arrayList = this.mCellInfos) == null || arrayList.get(i) == null) {
            return 0;
        }
        return this.mCellInfos.get(i).arfcn;
    }

    public int getBsic(int i) {
        ArrayList<CellInfo> arrayList;
        if (i < 0 || i >= this.mCellCount || (arrayList = this.mCellInfos) == null || arrayList.get(i) == null) {
            return 0;
        }
        return this.mCellInfos.get(i).bsic;
    }

    public int getCellCount() {
        return this.mCellCount;
    }

    public int getCid(int i) {
        ArrayList<CellInfo> arrayList;
        if (i < 0 || i >= this.mCellCount || (arrayList = this.mCellInfos) == null || arrayList.get(i) == null) {
            return 0;
        }
        return this.mCellInfos.get(i).cid;
    }

    public int getLac(int i) {
        ArrayList<CellInfo> arrayList;
        if (i < 0 || i >= this.mCellCount || (arrayList = this.mCellInfos) == null || arrayList.get(i) == null) {
            return 0;
        }
        return this.mCellInfos.get(i).lac;
    }

    public int getPlmn(int i) {
        ArrayList<CellInfo> arrayList;
        if (i < 0 || i >= this.mCellCount || (arrayList = this.mCellInfos) == null || arrayList.get(i) == null) {
            return 0;
        }
        return this.mCellInfos.get(i).plmn;
    }

    public boolean getReportEnable() {
        return this.mApcReport;
    }

    public int getReportInterval() {
        return this.mReportInterval;
    }

    public int getType(int i) {
        ArrayList<CellInfo> arrayList;
        if (i < 0 || i >= this.mCellCount || (arrayList = this.mCellInfos) == null || arrayList.get(i) == null) {
            return 0;
        }
        return this.mCellInfos.get(i).type;
    }

    public void setCellInfo(int[] iArr) {
        this.mCellCount = iArr[0];
        this.mCellInfos = new ArrayList<>();
        for (int i = 0; i < this.mCellCount; i++) {
            CellInfo cellInfo = new CellInfo();
            cellInfo.type = iArr[(i * 6) + 1];
            cellInfo.plmn = iArr[(i * 6) + 2];
            cellInfo.lac = iArr[(i * 6) + 3];
            cellInfo.cid = iArr[(i * 6) + 4];
            cellInfo.arfcn = iArr[(i * 6) + 5];
            cellInfo.bsic = iArr[(i * 6) + 6];
            this.mCellInfos.add(cellInfo);
        }
    }

    public String toString() {
        ArrayList<CellInfo> arrayList;
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append("[");
        stringBuffer.append(this.mApcMode);
        stringBuffer.append(", ");
        stringBuffer.append(this.mApcReport);
        stringBuffer.append(", ");
        stringBuffer.append(this.mReportInterval);
        stringBuffer.append(", ");
        stringBuffer.append(this.mCellCount);
        stringBuffer.append("]");
        for (int i = 0; i < this.mCellCount && (arrayList = this.mCellInfos) != null && arrayList.get(i) != null; i++) {
            stringBuffer.append("[");
            stringBuffer.append(this.mCellInfos.get(i).type);
            stringBuffer.append(", ");
            stringBuffer.append(this.mCellInfos.get(i).plmn);
            stringBuffer.append(", ");
            stringBuffer.append(this.mCellInfos.get(i).lac);
            stringBuffer.append(", ");
            stringBuffer.append(this.mCellInfos.get(i).cid);
            stringBuffer.append(", ");
            stringBuffer.append(this.mCellInfos.get(i).arfcn);
            stringBuffer.append(", ");
            stringBuffer.append(this.mCellInfos.get(i).bsic);
            stringBuffer.append("]");
        }
        return stringBuffer.toString();
    }

    public void updateApcSetting(int i, boolean z, int i2) {
        this.mApcMode = i;
        this.mApcReport = z;
        this.mReportInterval = i2;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        ArrayList<CellInfo> arrayList;
        parcel.writeInt(this.mApcMode);
        parcel.writeInt(this.mApcReport ? 1 : 0);
        parcel.writeInt(this.mReportInterval);
        parcel.writeInt(this.mCellCount);
        for (int i2 = 0; i2 < this.mCellCount && (arrayList = this.mCellInfos) != null && arrayList.get(i2) != null; i2++) {
            parcel.writeInt(this.mCellInfos.get(i2).type);
            parcel.writeInt(this.mCellInfos.get(i2).plmn);
            parcel.writeInt(this.mCellInfos.get(i2).lac);
            parcel.writeInt(this.mCellInfos.get(i2).cid);
            parcel.writeInt(this.mCellInfos.get(i2).arfcn);
            parcel.writeInt(this.mCellInfos.get(i2).bsic);
        }
    }
}
