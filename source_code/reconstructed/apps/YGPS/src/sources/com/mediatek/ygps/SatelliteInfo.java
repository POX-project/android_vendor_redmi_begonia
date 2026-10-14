package com.mediatek.ygps;

import java.util.LinkedHashMap;
import java.util.Set;

/* JADX INFO: loaded from: classes.dex */
public class SatelliteInfo {
    private static LinkedHashMap<String, SatellitesSystem> sMapSystem = new LinkedHashMap<String, SatellitesSystem>() { // from class: com.mediatek.ygps.SatelliteInfo.1
        {
            put("$GP", SatellitesSystem.SYS_GP);
            put("$GL", SatellitesSystem.SYS_GL);
            put("$BD", SatellitesSystem.SYS_BD);
            put("$GA", SatellitesSystem.SYS_GA);
            put("$QZ", SatellitesSystem.SYS_QZ);
            put("$L1S", SatellitesSystem.SYS_L1S);
            put("$IR", SatellitesSystem.SYS_IR);
            put("$GP_SBAS", SatellitesSystem.SYS_SBAS);
        }
    };
    float mAzimuth;
    float mElevation;
    int mPrn;
    float mSnr;
    SatellitesSystem mSystem;
    boolean mUsedInFix = false;
    private String mFq = "L1";

    enum SatellitesSystem {
        SYS_GP(-16711681, R.drawable.icon_gp, "G", "GPS"),
        SYS_GL(-256, R.drawable.icon_gl, "R", "GLN"),
        SYS_GA(-16711936, R.drawable.icon_ga, "E", "GAL"),
        SYS_BD(-32640, R.drawable.icon_bd, "B", "BD"),
        SYS_QZ(-13057, R.drawable.icon_qz, "Q", "QZS"),
        SYS_L1S(-7829368, R.drawable.icon_ir, "L", "L1S"),
        SYS_IR(-7829504, R.drawable.icon_ir, "I", "IRNSS"),
        SYS_SBAS(-5197569, R.drawable.icon_sbas, "S", "SBAS");

        private float mAveL1Cnr = -1.0f;
        private float mAveL5Cnr = -1.0f;
        private int mColor;
        private int mIcon;
        private String mName;
        private String mTag;

        SatellitesSystem(int i, int i2, String str, String str2) {
            this.mColor = i;
            this.mIcon = i2;
            this.mTag = str;
            this.mName = str2;
        }

        String getCnr() {
            float f = this.mAveL1Cnr;
            String str = f < 0.0f ? "-" : String.format("%3.1f", Float.valueOf(f));
            float f2 = this.mAveL5Cnr;
            return str + "/" + (f2 >= 0.0f ? String.format("%3.1f", Float.valueOf(f2)) : "-");
        }

        int getColor() {
            return this.mColor;
        }

        String getName() {
            return this.mName;
        }

        String getTag() {
            return this.mTag;
        }

        void setAveL1Cnr(float f) {
            this.mAveL1Cnr = f;
        }

        void setAveL5Cnr(float f) {
            this.mAveL5Cnr = f;
        }
    }

    SatelliteInfo(int i, SatellitesSystem satellitesSystem) {
        this.mPrn = i;
        this.mSystem = satellitesSystem;
    }

    static SatellitesSystem getSystem(String str) {
        return sMapSystem.get(str);
    }

    static Set<String> getTalker() {
        return sMapSystem.keySet();
    }

    int getColor() {
        return this.mSystem.mColor;
    }

    String getFq() {
        return this.mFq;
    }

    int getIcon() {
        return this.mSystem.mIcon;
    }

    String getTag() {
        return this.mSystem.mTag + this.mPrn;
    }

    void setFq(String str) {
        this.mFq = str;
    }

    public String toString() {
        return "[" + this.mPrn + ", " + this.mSnr + ", " + this.mUsedInFix + "]";
    }
}
