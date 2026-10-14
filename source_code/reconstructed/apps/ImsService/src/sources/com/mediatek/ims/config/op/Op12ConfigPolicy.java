package com.mediatek.ims.config.op;

import com.mediatek.ims.config.ImsConfigPolicy;

/* JADX INFO: loaded from: classes.dex */
public class Op12ConfigPolicy extends ImsConfigPolicy {
    public Op12ConfigPolicy() {
        super("Op12ConfigPolicy");
    }

    @Override // com.mediatek.ims.config.ImsConfigPolicy
    public boolean onSetDefaultValue(int i, ImsConfigPolicy.DefaultConfig defaultConfig) {
        if (i == 1001) {
            defaultConfig.defVal = "21600";
            defaultConfig.unitId = 3;
            return true;
        }
        if (i == 1002) {
            defaultConfig.defVal = "";
            return true;
        }
        switch (i) {
            case 0:
                defaultConfig.defVal = "7";
                return true;
            case 1:
                defaultConfig.defVal = "2";
                return true;
            case 2:
                defaultConfig.defVal = "300";
                defaultConfig.unitId = 3;
                return true;
            case 3:
                defaultConfig.defVal = "300";
                defaultConfig.unitId = 3;
                return true;
            case 4:
                defaultConfig.defVal = "6";
                defaultConfig.unitId = 3;
                return true;
            case 5:
                defaultConfig.defVal = "5";
                defaultConfig.unitId = 3;
                return true;
            case 6:
                defaultConfig.defVal = "1";
                return true;
            case 7:
                defaultConfig.defVal = "3";
                defaultConfig.unitId = 3;
                return true;
            case 8:
                defaultConfig.defVal = "16";
                defaultConfig.unitId = 3;
                return true;
            case 9:
                defaultConfig.defVal = "30";
                defaultConfig.unitId = 3;
                return true;
            case 10:
                defaultConfig.defVal = "0";
                return true;
            case 11:
                defaultConfig.defVal = "1";
                return true;
            case 12:
                defaultConfig.defVal = "vzims.com";
                return true;
            case 13:
                defaultConfig.defVal = "1";
                return true;
            case 14:
                defaultConfig.defVal = "1";
                return true;
            case 15:
                defaultConfig.defVal = "1200";
                defaultConfig.unitId = 3;
                return true;
            case 16:
                defaultConfig.defVal = "86400";
                defaultConfig.unitId = 3;
                return true;
            case 17:
                defaultConfig.defVal = "1";
                return true;
            case 18:
                defaultConfig.defVal = "7776000";
                defaultConfig.unitId = 3;
                return true;
            case 19:
                defaultConfig.defVal = "60";
                defaultConfig.unitId = 3;
                return true;
            case 20:
                defaultConfig.defVal = "625000";
                defaultConfig.unitId = 3;
                return true;
            case 21:
                defaultConfig.defVal = "60";
                defaultConfig.unitId = 3;
                return true;
            case 22:
                defaultConfig.defVal = "100";
                return true;
            case 23:
                defaultConfig.defVal = "30";
                defaultConfig.unitId = 3;
                return true;
            case 24:
                defaultConfig.defVal = "1";
                return true;
            case 25:
                defaultConfig.defVal = "0";
                return true;
            case 26:
                defaultConfig.defVal = "0";
                return true;
            case 27:
                defaultConfig.defVal = String.valueOf(2);
                return true;
            default:
                return false;
        }
    }
}
