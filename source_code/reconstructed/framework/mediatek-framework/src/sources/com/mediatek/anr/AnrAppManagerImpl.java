package com.mediatek.anr;

import android.os.Build;
import android.os.Looper;
import android.os.Process;
import android.os.RemoteException;
import android.util.Log;
import android.util.Printer;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public final class AnrAppManagerImpl extends AnrAppManager {
    private static final String TAG = "AnrAppManager";
    protected static HashMap<String, MessageLogger> sMap = new HashMap<>();
    private static AnrAppManagerImpl sInstance = null;
    private static MessageLogger sSingletonLogger = null;
    private static Object lock = new Object();

    public static void dumpAllMessageHistory() {
        if (sSingletonLogger != null) {
            Log.i(TAG, "!!! It is under multiple instance mode, but you are in singleton usage style. !!!\n");
            try {
                AnrManagerNative.getDefault().informMessageDump("!!! It is under multiple instance mode,but you are in singleton usage style. !!!\n", Process.myPid());
                return;
            } catch (RemoteException e) {
                Log.i(TAG, "informMessageDump exception " + e);
                return;
            }
        }
        HashMap<String, MessageLogger> map = sMap;
        if (map != null) {
            for (String str : map.keySet()) {
                Log.i(TAG, String.format(">>> DumpByName, Thread name: %s dump is starting <<<\n", str));
                sMap.get(str).setInitStr(String.format(">>> DumpByName, Thread name: %s dump is starting <<<\n", str));
                sMap.get(str).dumpMessageHistory();
            }
            return;
        }
        Log.i(TAG, String.format("!!! DumpAll, sMap is null\n", new Object[0]));
        try {
            AnrManagerNative.getDefault().informMessageDump("!!! DumpAll, sMap is null\n", Process.myPid());
        } catch (RemoteException e2) {
            Log.i(TAG, "informMessageDump exception " + e2);
        }
    }

    public static void dumpMessageHistory() {
        MessageLogger messageLogger = sSingletonLogger;
        if (messageLogger != null) {
            messageLogger.dumpMessageHistory();
            return;
        }
        Log.i(TAG, "!!! It is not under singleton mode, U can't use it. !!!\n");
        try {
            AnrManagerNative.getDefault().informMessageDump("!!! It is not under singleton mode, U can't use it. !!!\n", Process.myPid());
        } catch (RemoteException e) {
            Log.i(TAG, "informMessageDump exception " + e);
        }
    }

    public static AnrAppManagerImpl getInstance() {
        if (sInstance == null) {
            synchronized (lock) {
                if (sInstance == null) {
                    sInstance = new AnrAppManagerImpl();
                }
            }
        }
        return sInstance;
    }

    public static Printer newMessageLogger(boolean z) {
        MessageLogger messageLogger = new MessageLogger(z);
        sSingletonLogger = messageLogger;
        return messageLogger;
    }

    public static Printer newMessageLogger(boolean z, String str) {
        if (sMap.containsKey(str)) {
            sMap.remove(str);
        }
        MessageLogger messageLogger = new MessageLogger(z, str);
        sMap.put(str, messageLogger);
        return messageLogger;
    }

    public void dumpMessage(boolean z) {
        if (z) {
            dumpAllMessageHistory();
        } else {
            dumpMessageHistory();
        }
    }

    public void setMessageLogger(Looper looper) {
        if ("eng".equals(Build.TYPE) || "userdebug".equals(Build.TYPE)) {
            looper.setMessageLogging(newMessageLogger(false));
        }
    }
}
