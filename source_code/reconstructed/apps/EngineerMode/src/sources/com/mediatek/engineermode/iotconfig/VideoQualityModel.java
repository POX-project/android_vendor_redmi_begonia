package com.mediatek.engineermode.iotconfig;

/* JADX INFO: loaded from: classes.dex */
public class VideoQualityModel {
    private String format;
    private String level;
    private String name;
    private String profile;

    public VideoQualityModel(String str, String str2, String str3, String str4) {
        this.format = str2;
        this.level = str4;
        this.profile = str3;
        this.name = str;
    }

    public String getFormat() {
        return this.format;
    }

    public String getLevel() {
        return this.level;
    }

    public String getName() {
        return this.name;
    }

    public String getProfile() {
        return this.profile;
    }

    public void setFormat(String str) {
        this.format = str;
    }

    public void setLevel(String str) {
        this.level = str;
    }

    public void setName(String str) {
        this.name = str;
    }

    public void setProfile(String str) {
        this.profile = str;
    }
}
