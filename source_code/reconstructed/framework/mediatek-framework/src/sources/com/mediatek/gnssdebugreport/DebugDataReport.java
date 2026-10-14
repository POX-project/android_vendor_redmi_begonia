package com.mediatek.gnssdebugreport;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: classes.dex */
public class DebugDataReport implements Parcelable {
    public static final Parcelable.Creator<DebugDataReport> CREATOR = new Parcelable.Creator<DebugDataReport>() { // from class: com.mediatek.gnssdebugreport.DebugDataReport.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public DebugDataReport createFromParcel(Parcel parcel) {
            return new DebugDataReport(parcel);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public DebugDataReport[] newArray(int i) {
            return new DebugDataReport[i];
        }
    };
    public static final String DATA_KEY = "DebugDataReport";
    public static final String DATA_KEY_TYPE1 = "data_type1";
    public static final String JSON_TYPE = "type";
    private double mCB;
    private double mClkTemp;
    private double mCompCB;
    private int mEPOage;
    private int mHaveEPO;
    private double mInitLlhHeight;
    private double mInitLlhLati;
    private double mInitLlhLongi;
    private float mInitPacc;
    private int mInitSrc;
    private int mLsvalid;
    private int mMPEvalid;
    private int mPga;
    private int mSaturation;
    private float mSensorHACC;
    private int mSvnum;
    private long mTT4SV;
    private float mTop4CNR;
    private long mTtff;

    public static class DebugData840 {
        public static final String KEY_AID_HEIGHT = "aiding_height";
        public static final String KEY_AID_LAT = "aiding_lat";
        public static final String KEY_AID_LON = "aiding_lon";
        public static final String KEY_AID_SUMMARY = "aiding_summary";
        public static final String KEY_EPO = "epo";
        public static final String KEY_EPO_AGE = "epo_age";
        public static final String KEY_NLP = "nlp";
        public static final String KEY_NV = "nv";
        public static final String KEY_QEPO = "qepo";
        public static final String KEY_SUPL_INJECT = "supl_inject";
        public static final String KEY_VER = "ver";
    }

    public static class DebugData841 {
        public static final String KEY_BLANKING = "blanking";
        public static final String KEY_CHIP_SUMMARY = "chip_summary";
        public static final String KEY_CLKD = "clk_d";
        public static final String KEY_DIGI_I = "digi_i";
        public static final String KEY_DIGI_Q = "digi_q";
        public static final String KEY_NOISE_FLOOR = "noise_floor";
        public static final String KEY_PGA_GAIN = "pga_gain";
        public static final String KEY_SENSOR = "sensor";
        public static final String KEY_VER = "ver";
        public static final String KEY_XO_TEMPER = "xo_temper";
    }

    public DebugDataReport(double d, double d2, double d3, int i, int i2, long j, int i3, long j2, float f, double d4, double d5, double d6, int i4, float f2, int i5, int i6, float f3, int i7, int i8) {
        this.mCB = d;
        this.mCompCB = d2;
        this.mClkTemp = d3;
        this.mSaturation = i;
        this.mPga = i2;
        this.mTtff = j;
        this.mSvnum = i3;
        this.mTT4SV = j2;
        this.mTop4CNR = f;
        this.mInitLlhLongi = d4;
        this.mInitLlhLati = d5;
        this.mInitLlhHeight = d6;
        this.mInitSrc = i4;
        this.mInitPacc = f2;
        this.mHaveEPO = i5;
        this.mEPOage = i6;
        this.mSensorHACC = f3;
        this.mMPEvalid = i7;
        this.mLsvalid = i8;
    }

    public DebugDataReport(Parcel parcel) {
        this.mCB = parcel.readDouble();
        this.mCompCB = parcel.readDouble();
        this.mClkTemp = parcel.readDouble();
        this.mSaturation = parcel.readInt();
        this.mPga = parcel.readInt();
        this.mTtff = parcel.readLong();
        this.mSvnum = parcel.readInt();
        this.mTT4SV = parcel.readLong();
        this.mTop4CNR = parcel.readFloat();
        this.mInitLlhLongi = parcel.readDouble();
        this.mInitLlhLati = parcel.readDouble();
        this.mInitLlhHeight = parcel.readDouble();
        this.mInitSrc = parcel.readInt();
        this.mInitPacc = parcel.readFloat();
        this.mHaveEPO = parcel.readInt();
        this.mEPOage = parcel.readInt();
        this.mSensorHACC = parcel.readFloat();
        this.mMPEvalid = parcel.readInt();
        this.mLsvalid = parcel.readInt();
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public double getCB() {
        return this.mCB;
    }

    public double getClkTemp() {
        return this.mClkTemp;
    }

    public int getEPOage() {
        return this.mEPOage;
    }

    public int getHaveEPO() {
        return this.mHaveEPO;
    }

    public double getInitLlhHeight() {
        return this.mInitLlhHeight;
    }

    public double getInitLlhLati() {
        return this.mInitLlhLati;
    }

    public double getInitLlhLongi() {
        return this.mInitLlhLongi;
    }

    public float getInitPacc() {
        return this.mInitPacc;
    }

    public int getInitSrc() {
        return this.mInitSrc;
    }

    public int getLsvalid() {
        return this.mLsvalid;
    }

    public int getMPEvalid() {
        return this.mMPEvalid;
    }

    public int getPga() {
        return this.mPga;
    }

    public int getSaturation() {
        return this.mSaturation;
    }

    public float getSensorHACC() {
        return this.mSensorHACC;
    }

    public int getSvnum() {
        return this.mSvnum;
    }

    public long getTT4SV() {
        return this.mTT4SV;
    }

    public float getTop4CNR() {
        return this.mTop4CNR;
    }

    public long getTtff() {
        return this.mTtff;
    }

    public double getmCompCB() {
        return this.mCompCB;
    }

    public String toString() {
        return "[" + this.mCB + ", " + this.mCompCB + ", " + this.mClkTemp + ", " + this.mSaturation + ", " + this.mPga + ", " + this.mTtff + ", " + this.mSvnum + ", " + this.mTT4SV + ", " + this.mTop4CNR + ", " + this.mInitLlhLongi + ", " + this.mInitLlhLati + ", " + this.mInitLlhHeight + ", " + this.mInitSrc + ", " + this.mInitPacc + ", " + this.mHaveEPO + ", " + this.mEPOage + ", " + this.mSensorHACC + ", " + this.mMPEvalid + ", " + this.mLsvalid + "]";
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeDouble(this.mCB);
        parcel.writeDouble(this.mCompCB);
        parcel.writeDouble(this.mClkTemp);
        parcel.writeInt(this.mSaturation);
        parcel.writeInt(this.mPga);
        parcel.writeLong(this.mTtff);
        parcel.writeInt(this.mSvnum);
        parcel.writeLong(this.mTT4SV);
        parcel.writeFloat(this.mTop4CNR);
        parcel.writeDouble(this.mInitLlhLongi);
        parcel.writeDouble(this.mInitLlhLati);
        parcel.writeDouble(this.mInitLlhHeight);
        parcel.writeInt(this.mInitSrc);
        parcel.writeFloat(this.mInitPacc);
        parcel.writeInt(this.mHaveEPO);
        parcel.writeInt(this.mEPOage);
        parcel.writeFloat(this.mSensorHACC);
        parcel.writeInt(this.mMPEvalid);
        parcel.writeInt(this.mLsvalid);
    }
}
