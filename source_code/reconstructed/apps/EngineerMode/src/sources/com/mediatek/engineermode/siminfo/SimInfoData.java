package com.mediatek.engineermode.siminfo;

/* JADX INFO: loaded from: classes3.dex */
public class SimInfoData {
    String[] EF_Path;
    int EF_id;
    int Family;
    String name;
    boolean need_to_check;
    String num;
    String type;

    public SimInfoData() {
    }

    public SimInfoData(String str, String str2, int i, String[] strArr, int i2, String str3, boolean z) {
        this.num = str;
        this.name = str2;
        this.EF_id = i;
        this.EF_Path = strArr;
        this.Family = i2;
        this.type = str3;
        this.need_to_check = z;
    }
}
