package com.mediatek.engineermode.mcfconfig;

import java.io.File;
import java.lang.reflect.Array;

/* JADX INFO: loaded from: classes.dex */
public class McfCertification {
    private String fileList;
    private String filePath;
    private String opName;
    private int opid;
    private String opotaFileName;
    private String otaFileName;
    private int pathFleg;
    private int[] currentCmd = new int[2];
    private boolean[][] cmdResult = (boolean[][]) Array.newInstance((Class<?>) boolean.class, 2, 3);

    public boolean getCmdResult(int i, int i2) {
        return this.cmdResult[i][i2 - 1];
    }

    public boolean[][] getCmdResult() {
        return this.cmdResult;
    }

    public boolean getCurCmdResult(int i) {
        return this.cmdResult[i][getCurrentCmd(i) - 1];
    }

    public int getCurrentCmd(int i) {
        return this.currentCmd[i];
    }

    public int[] getCurrentCmd() {
        return this.currentCmd;
    }

    public String getFileList() {
        return this.fileList;
    }

    public String getFilePath() {
        return this.filePath;
    }

    public String getOpName() {
        return this.opName;
    }

    public int getOpid() {
        return this.opid;
    }

    public String getOpotaFileName() {
        return this.opotaFileName;
    }

    public String getOpotaFilePath() {
        return this.filePath + File.separator + this.opotaFileName;
    }

    public String getOtaFileName() {
        return this.otaFileName;
    }

    public String getOtaFilePath() {
        return this.filePath + File.separator + this.otaFileName;
    }

    public int getPathFleg() {
        return this.pathFleg;
    }

    public void setCmdResult(int i, int i2, boolean z) {
        this.cmdResult[i][i2 - 1] = z;
    }

    public void setCmdResult(int i, boolean[] zArr) {
        int i2 = 0;
        while (true) {
            boolean[][] zArr2 = this.cmdResult;
            if (i2 >= zArr2[i].length) {
                return;
            }
            zArr2[i][i2] = zArr[i2];
            i2++;
        }
    }

    public void setCmdResult(boolean[][] zArr) {
        this.cmdResult = zArr;
    }

    public void setCurrentCmd(int i, int i2) {
        this.currentCmd[i] = i2;
    }

    public void setCurrentCmd(int[] iArr) {
        this.currentCmd = iArr;
    }

    public void setFileList(String str) {
        this.fileList = str;
    }

    public void setFilePath(String str) {
        this.filePath = str;
    }

    public void setOpName(String str) {
        this.opName = str;
    }

    public void setOpid(int i) {
        this.opid = i;
    }

    public void setOpotaFileName(String str) {
        this.opotaFileName = str;
    }

    public void setOtaFileName(String str) {
        this.otaFileName = str;
    }

    public void setPathFleg(int i) {
        this.pathFleg = i;
    }
}
