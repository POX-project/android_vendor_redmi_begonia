package com.mediatek.engineermode.boot;

/* JADX INFO: loaded from: classes2.dex */
public interface IBootServiceHandler {
    public static final int HANDLE_DONE = 0;
    public static final int HANDLE_INVALID = 100;
    public static final int HANDLE_ONGOING = 1;

    int handleStartRequest(EmBootStartService emBootStartService);
}
