package com.mediatek.engineermode.rfdesense;

/* JADX INFO: loaded from: classes3.dex */
public class RfDesenseServiceData {
    private int band;
    private int channel;
    private int power;
    private String rat;
    private int time;
    private int rb = -1;
    private int bw = -1;

    public RfDesenseServiceData() {
    }

    public RfDesenseServiceData(int i, int i2, int i3, int i4) {
        this.channel = i;
        this.power = i2;
        this.band = i3;
        this.time = i4;
    }

    public int getBand() {
        return this.band;
    }

    public int getBw() {
        return this.bw;
    }

    public int getChannel() {
        return this.channel;
    }

    public int getPower() {
        return this.power;
    }

    public String getRat() {
        return this.rat;
    }

    public int getRb() {
        return this.rb;
    }

    public int getTime() {
        return this.time;
    }

    public void setBand(int i) {
        this.band = i;
    }

    public void setBw(int i) {
        this.bw = i;
    }

    public void setChannel(int i) {
        this.channel = i;
    }

    public void setPower(int i) {
        this.power = i;
    }

    public void setRat(String str) {
        this.rat = str;
    }

    public void setRb(int i) {
        this.rb = i;
    }

    public void setTime(int i) {
        this.time = i;
    }

    public String toString() {
        return "RfDesenseServiceData{rat='" + this.rat + "', channel=" + this.channel + ", power=" + this.power + ", band=" + this.band + ", time=" + this.time + '}';
    }
}
