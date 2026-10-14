package com.mediatek.engineermode.cfu;

/* JADX INFO: loaded from: classes2.dex */
public class CfuSimInfoData {
    String[] EF_Path;
    int EF_id;
    int Family;
    String name;
    String type;

    public CfuSimInfoData(String str, int i, String[] strArr, int i2, String str2) {
        this.name = str;
        this.EF_id = i;
        this.EF_Path = strArr;
        this.Family = i2;
        this.type = str2;
    }
}
