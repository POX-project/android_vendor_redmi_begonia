package com.mediatek.engineermode.iotconfig;

/* JADX INFO: loaded from: classes.dex */
public class VideoProfileModel {
    private String Iinterval;
    private String Profile;
    private String framerate;
    private String height;
    private boolean isSelected;
    private String level;
    private String maxBitRate;
    private String minBitRate;
    private String name;
    private String quality;
    private String width;

    public VideoProfileModel() {
        this.isSelected = false;
    }

    public VideoProfileModel(String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8, String str9) {
        this.name = str;
        this.Profile = str2;
        this.level = str3;
        this.width = str4;
        this.height = str5;
        this.framerate = str6;
        this.Iinterval = str7;
        this.minBitRate = str8;
        this.maxBitRate = str9;
        this.isSelected = false;
        this.quality = "";
    }

    public VideoProfileModel(String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8, String str9, boolean z) {
        this.name = str;
        this.Profile = str2;
        this.level = str3;
        this.width = str4;
        this.height = str5;
        this.framerate = str6;
        this.Iinterval = str7;
        this.minBitRate = str8;
        this.maxBitRate = str9;
        this.isSelected = z;
        this.quality = "";
    }

    public String getFramerate() {
        return this.framerate;
    }

    public String getHeight() {
        return this.height;
    }

    public String getIinterval() {
        return this.Iinterval;
    }

    public String getLevel() {
        return this.level;
    }

    public String getMaxBitRate() {
        return this.maxBitRate;
    }

    public String getMinBitRate() {
        return this.minBitRate;
    }

    public String getName() {
        return this.name;
    }

    public String getProfile() {
        return this.Profile;
    }

    public String getQuality() {
        return this.quality;
    }

    public String getWidth() {
        return this.width;
    }

    public boolean isSelected() {
        return this.isSelected;
    }

    public void setFramerate(String str) {
        this.framerate = str;
    }

    public void setHeight(String str) {
        this.height = str;
    }

    public void setIinterval(String str) {
        this.Iinterval = str;
    }

    public void setLevel(String str) {
        this.level = str;
    }

    public void setMaxBitRate(String str) {
        this.maxBitRate = str;
    }

    public void setMinBitRate(String str) {
        this.minBitRate = str;
    }

    public void setName(String str) {
        this.name = str;
    }

    public void setProfile(String str) {
        this.Profile = str;
    }

    public void setQuality(String str) {
        this.quality = str;
    }

    public void setSelected(boolean z) {
        this.isSelected = z;
    }

    public void setWidth(String str) {
        this.width = str;
    }
}
