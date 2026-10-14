package com.mediatek.engineermode.rfdesense;

/* JADX INFO: loaded from: classes3.dex */
public class RfDesenseRatInfo {
    public final int DEFAULT_BAND_WIDTH = 3;
    public final int DEFAULT_VRB_LENGTH = 1;
    private Boolean RatCheckState;
    private String RatCmdAntSwitch;
    private int RatCmdLteBw;
    private int RatCmdLteRb;
    private String RatCmdPowerRead;
    private String RatCmdStart;
    private String RatCmdStop;
    private String RatCmdSwitch;
    private String RatName;
    private String RatPowerSet;
    private Boolean RatSendState;
    private int RatTxtimes;
    private String Ratband;

    public Boolean getRatCheckState() {
        return this.RatCheckState;
    }

    public String getRatCmdAntSwitch() {
        return this.RatCmdAntSwitch;
    }

    public String getRatCmdPowerRead() {
        return this.RatCmdPowerRead;
    }

    public String getRatCmdStart() {
        return this.RatCmdStart;
    }

    public String getRatCmdStop() {
        return this.RatCmdStop;
    }

    public String getRatCmdSwitch() {
        return this.RatCmdSwitch;
    }

    public String getRatName() {
        return this.RatName;
    }

    public String getRatPowerSet() {
        return this.RatPowerSet;
    }

    public Boolean getRatSendState() {
        return this.RatSendState;
    }

    public int getRatTxtimes() {
        return this.RatTxtimes;
    }

    public String getRatband() {
        return this.Ratband;
    }

    public void setRatCheckState(Boolean bool) {
        this.RatCheckState = bool;
    }

    public void setRatCmdAntSwitch(String str) {
        this.RatCmdAntSwitch = str;
    }

    public void setRatCmdLteBwRb(int i, int i2) {
        if (i == -1) {
            this.RatCmdLteBw = 3;
        } else {
            this.RatCmdLteBw = i;
        }
        if (i2 == -1) {
            this.RatCmdLteRb = 1;
        } else {
            this.RatCmdLteRb = i2;
        }
    }

    public void setRatCmdStart(String str) {
        if (str != null) {
            this.RatCmdStart = str;
        }
    }

    public void setRatCmdStart(String str, int i, int i2, int i3) {
        String str2 = "";
        if (str.equals(RfDesenseTxTest.mRatName[0])) {
            str2 = "AT+ERFTX=2,1," + i + ",4100," + i3 + ",0," + i2 + ",0";
        } else if (str.equals(RfDesenseTxTest.mRatName[1])) {
            str2 = "AT+ERFTX=0,0," + i3 + "," + i + "," + i2;
        } else if (str.equals(RfDesenseTxTest.mRatName[2])) {
            str2 = "AT+ERFTX=0,0," + i3 + "," + i + "," + i2;
        } else if (str.equals(RfDesenseTxTest.mRatName[3])) {
            str2 = "AT+ERFTX=6,0,2," + i3 + "," + this.RatCmdLteBw + "," + i + ",1,0,0,0," + this.RatCmdLteRb + ",0," + i2;
        } else if (str.equals(RfDesenseTxTest.mRatName[4])) {
            str2 = "AT+ERFTX=6,0,2," + i3 + "," + this.RatCmdLteBw + "," + i + ",0,0,0,0," + this.RatCmdLteRb + ",0," + i2;
        } else if (str.equals(RfDesenseTxTest.mRatName[5])) {
            str2 = "AT+ERFTX=13,4," + i + "," + i3 + "," + i2;
        } else if (str.equals(RfDesenseTxTest.mRatName[6])) {
            str2 = "AT+ECRFTX=1," + i + "," + i3 + "," + i2 + ",0";
        }
        this.RatCmdStart = str2;
    }

    public void setRatCmdStop(String str) {
        if (str != null) {
            this.RatCmdStop = str;
        }
    }

    public void setRatCmdSwitch(String str) {
        this.RatCmdSwitch = str;
    }

    public void setRatName(String str) {
        if (str != null) {
            this.RatName = str;
        }
    }

    public void setRatPowerRead(String str) {
        this.RatCmdPowerRead = str;
    }

    public void setRatPowerSet(String str) {
        this.RatPowerSet = str;
    }

    public void setRatSendState(Boolean bool) {
        this.RatSendState = bool;
    }

    public void setRatTxtimes(int i) {
        this.RatTxtimes = i;
    }

    public void setRatband(String str) {
        this.Ratband = str;
    }
}
