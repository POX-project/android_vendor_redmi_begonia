package com.mediatek.anr;

/* JADX INFO: loaded from: classes.dex */
public class AnrAppFactoryImpl extends AnrAppFactory {
    public AnrAppManager makeAnrAppManager() {
        return new AnrAppManagerImpl();
    }
}
