package com.mediatek.internal.telephony.devreg;

import android.app.PendingIntent;
import android.content.Context;
import android.os.SystemProperties;
import android.text.TextUtils;
import android.util.Log;
import com.android.internal.telephony.Phone;
import com.mediatek.internal.telephony.MtkUiccSmsController;
import com.mediatek.internal.telephony.OpTelephonyCustomizationFactoryBase;
import com.mediatek.internal.telephony.OpTelephonyCustomizationUtils;
import dalvik.system.PathClassLoader;
import java.io.File;
import java.util.Arrays;

/* JADX INFO: loaded from: classes.dex */
public class DeviceRegisterController {
    private static final String TAG = "DeviceRegisterController";
    private static IDeviceRegisterExt sDeviceRegisterExt = null;
    private DeviceRegisterHandler[] mHandler;
    private MtkUiccSmsController mSmsController;

    public DeviceRegisterController(Context context, Phone[] phoneArr, MtkUiccSmsController mtkUiccSmsController) {
        this.mSmsController = null;
        this.mHandler = null;
        this.mSmsController = mtkUiccSmsController;
        try {
            sDeviceRegisterExt = ("cn".equals(SystemProperties.get("ro.miui.cust_variant", "")) ? loadFactory(context) : OpTelephonyCustomizationUtils.getOpFactory(context)).makeDeviceRegisterExt(context, this);
        } catch (Exception e) {
            e.printStackTrace();
            sDeviceRegisterExt = new DefaultDeviceRegisterExt(context, this);
        }
        this.mHandler = new DeviceRegisterHandler[phoneArr.length];
        for (int i = 0; i < phoneArr.length; i++) {
            this.mHandler[i] = new DeviceRegisterHandler(phoneArr[i], this);
        }
    }

    private static IDeviceRegisterExt getDeviceRegisterExt() {
        return sDeviceRegisterExt;
    }

    private OpTelephonyCustomizationFactoryBase loadFactory(Context context) throws ClassNotFoundException {
        String strSearchTargetPath = searchTargetPath("OP09CTelephony.jar");
        if (!TextUtils.isEmpty(strSearchTargetPath)) {
            return (OpTelephonyCustomizationFactoryBase) loadFactoryInternal(context, strSearchTargetPath, "com.mediatek.op09c.telephony.Op09CTelephonyCustomizationFactory");
        }
        throw new ClassNotFoundException("The path for OP09CTelephony.jar is empty");
    }

    private Object loadFactoryInternal(Context context, String str, String str2) {
        Log.d(TAG, "load factory " + str2 + " from " + str);
        try {
            PathClassLoader pathClassLoader = new PathClassLoader(str, context.getClassLoader());
            Class<?> clsLoadClass = pathClassLoader.loadClass(str2);
            Log.d(TAG, "Load successfully with classLoader:" + pathClassLoader);
            return clsLoadClass.newInstance();
        } catch (Exception e) {
            Log.e(TAG, "Exception when initial instance", e);
            return null;
        }
    }

    private static String searchTargetPath(String str) {
        String[] strArr = {"/system/operator/libs/", "/custom/operator/libs/"};
        for (String str2 : strArr) {
            if (new File(str2 + str).exists()) {
                return str2 + str;
            }
        }
        Log.i(TAG, "Can not find target " + str + " in " + Arrays.toString(strArr));
        return null;
    }

    public void handleAutoRegMessage(int i, String str, byte[] bArr) {
        IDeviceRegisterExt iDeviceRegisterExt = sDeviceRegisterExt;
        if (iDeviceRegisterExt != null) {
            iDeviceRegisterExt.handleAutoRegMessage(i, str, bArr);
        }
    }

    public void handleAutoRegMessage(byte[] bArr) {
        IDeviceRegisterExt iDeviceRegisterExt = sDeviceRegisterExt;
        if (iDeviceRegisterExt != null) {
            iDeviceRegisterExt.handleAutoRegMessage(bArr);
        }
    }

    public void sendDataSms(int i, String str, String str2, int i2, int i3, byte[] bArr, PendingIntent pendingIntent, PendingIntent pendingIntent2) {
        this.mSmsController.sendData(i, str, str2, i2, i3, bArr, pendingIntent, pendingIntent2);
    }

    public void setCdmaCardEsnOrMeid(String str) {
        IDeviceRegisterExt iDeviceRegisterExt = sDeviceRegisterExt;
        if (iDeviceRegisterExt != null) {
            iDeviceRegisterExt.setCdmaCardEsnOrMeid(str);
        }
    }
}
