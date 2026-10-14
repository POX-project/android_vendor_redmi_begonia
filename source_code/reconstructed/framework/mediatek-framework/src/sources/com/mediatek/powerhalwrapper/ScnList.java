package com.mediatek.powerhalwrapper;

/* JADX INFO: loaded from: classes.dex */
public class ScnList {
    public int handle;
    public int pid;
    public int uid;

    ScnList(int i, int i2, int i3) {
        this.handle = i;
        this.pid = i2;
        this.uid = i3;
    }

    public int gethandle() {
        return this.handle;
    }

    public int getpid() {
        return this.pid;
    }

    public int getuid() {
        return this.uid;
    }

    public void setPack_Name(int i) {
        this.uid = i;
    }

    public void sethandle(int i) {
        this.handle = i;
    }

    public void setpid(int i) {
        this.pid = i;
    }
}
