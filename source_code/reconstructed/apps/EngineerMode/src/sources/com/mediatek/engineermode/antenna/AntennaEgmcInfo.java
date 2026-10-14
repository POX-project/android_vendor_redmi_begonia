package com.mediatek.engineermode.antenna;

/* JADX INFO: loaded from: classes2.dex */
public class AntennaEgmcInfo {
    private boolean cssFollowPcc;
    private boolean forceRx;
    private boolean[] pCell2Rx;
    private boolean[] pCell4Rx;
    private boolean[] sCell2Rx;
    private boolean[] sCell4Rx;
    private boolean showStatus;

    public AntennaEgmcInfo() {
        this.pCell2Rx = new boolean[2];
        this.pCell4Rx = new boolean[4];
        this.sCell2Rx = new boolean[2];
        this.sCell4Rx = new boolean[4];
        this.showStatus = false;
        setForceRx(0);
        setCssFollowPcc(0);
        setPCell2Rx(0);
        setPCell4Rx(0);
        setSCell2Rx(0);
        setSCell4Rx(0);
        hide();
    }

    public AntennaEgmcInfo(int i, int i2, int i3, int i4, int i5, int i6) {
        this.pCell2Rx = new boolean[2];
        this.pCell4Rx = new boolean[4];
        this.sCell2Rx = new boolean[2];
        this.sCell4Rx = new boolean[4];
        this.showStatus = false;
        setForceRx(i);
        setCssFollowPcc(i2);
        setPCell2Rx(i3);
        setPCell4Rx(i4);
        setSCell2Rx(i5);
        setSCell4Rx(i6);
    }

    public AntennaEgmcInfo(int[] iArr) {
        this.pCell2Rx = new boolean[2];
        this.pCell4Rx = new boolean[4];
        this.sCell2Rx = new boolean[2];
        this.sCell4Rx = new boolean[4];
        this.showStatus = false;
        setForceRx(iArr[0]);
        setCssFollowPcc(iArr[1]);
        setPCell2Rx(iArr[2]);
        setPCell4Rx(iArr[3]);
        setSCell2Rx(iArr[4]);
        setSCell4Rx(iArr[5]);
    }

    public static int booleanToInt(boolean[] zArr) {
        int i = 0;
        for (int i2 = 0; i2 < zArr.length; i2++) {
            i = zArr[i2] ? i | (1 << i2) : i & (~(1 << i2));
        }
        return i;
    }

    public static boolean[] intToBoolean(int i, int i2) {
        boolean[] zArr = new boolean[i2];
        char[] charArray = Integer.toBinaryString(i).toCharArray();
        for (int i3 = 0; i3 < i2 - charArray.length; i3++) {
            zArr[(i2 - 1) - i3] = false;
        }
        for (int i4 = 0; i4 < charArray.length; i4++) {
            boolean z = true;
            int length = (charArray.length - 1) - i4;
            if (charArray[i4] != '1') {
                z = false;
            }
            zArr[length] = z;
        }
        return zArr;
    }

    public void CloseForceRxFor() {
        setForceRx(false);
        setCssFollowPcc(false);
        setPCell2Rx(0);
        setPCell4Rx(0);
        setSCell2Rx(0);
        setSCell4Rx(0);
    }

    public boolean[] getBoolArrayPCell2Rx() {
        return this.pCell2Rx;
    }

    public boolean[] getBoolArrayPCell4Rx() {
        return this.pCell4Rx;
    }

    public boolean[] getBoolArraySCell2Rx() {
        return this.sCell2Rx;
    }

    public boolean[] getBoolArraySCell4Rx() {
        return this.sCell4Rx;
    }

    public boolean getCssFollowPcc() {
        return this.cssFollowPcc;
    }

    public boolean getForceRx() {
        return this.forceRx;
    }

    public int getIntCssFollowPcc() {
        return this.cssFollowPcc ? 1 : 0;
    }

    public int getIntForceRx() {
        return this.forceRx ? 1 : 0;
    }

    public int getPCell2Rx() {
        return booleanToInt(this.pCell2Rx);
    }

    public int getPCell4Rx() {
        return booleanToInt(this.pCell4Rx);
    }

    public int getSCell2Rx() {
        return booleanToInt(this.sCell2Rx);
    }

    public int getSCell4Rx() {
        return booleanToInt(this.sCell4Rx);
    }

    public void hide() {
        this.showStatus = false;
    }

    public boolean isShow() {
        return this.showStatus;
    }

    public void setCssFollowPcc(int i) {
        this.cssFollowPcc = i != 0;
    }

    public void setCssFollowPcc(boolean z) {
        this.cssFollowPcc = z;
    }

    public void setForceRx(int i) {
        this.forceRx = i != 0;
    }

    public void setForceRx(boolean z) {
        this.forceRx = z;
    }

    public void setPCell2Rx(int i) {
        this.pCell2Rx = intToBoolean(i, 2);
    }

    public void setPCell4Rx(int i) {
        this.pCell4Rx = intToBoolean(i, 4);
    }

    public void setSCell2Rx(int i) {
        this.sCell2Rx = intToBoolean(i, 2);
    }

    public void setSCell4Rx(int i) {
        this.sCell4Rx = intToBoolean(i, 4);
    }

    public void show() {
        this.showStatus = true;
    }

    public void updateAntennaEgmcInfo(int i, int i2, int i3, int i4, int i5, int i6) {
        setForceRx(i);
        setCssFollowPcc(i2);
        setPCell2Rx(i3);
        setPCell4Rx(i4);
        setSCell2Rx(i5);
        setSCell4Rx(i6);
        hide();
    }

    public void updateAntennaEgmcInfo(int[] iArr) {
        setForceRx(iArr[0]);
        setCssFollowPcc(iArr[1]);
        setPCell2Rx(iArr[2]);
        setPCell4Rx(iArr[3]);
        setSCell2Rx(iArr[4]);
        setSCell4Rx(iArr[5]);
    }

    public void updatePCell2Rx(boolean z, int i) {
        boolean[] zArr = this.pCell2Rx;
        if (i >= zArr.length) {
            return;
        }
        zArr[i] = z;
    }

    public void updatePCell4Rx(boolean z, int i) {
        boolean[] zArr = this.pCell4Rx;
        if (i >= zArr.length) {
            return;
        }
        zArr[i] = z;
    }

    public void updateSCell2Rx(boolean z, int i) {
        boolean[] zArr = this.sCell2Rx;
        if (i >= zArr.length) {
            return;
        }
        zArr[i] = z;
    }

    public void updateSCell4Rx(boolean z, int i) {
        boolean[] zArr = this.sCell4Rx;
        if (i >= zArr.length) {
            return;
        }
        zArr[i] = z;
    }
}
