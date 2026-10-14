package com.mediatek.common.util;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import dalvik.system.PathClassLoader;
import java.io.File;
import java.lang.reflect.InvocationTargetException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class OperatorCustomizationFactoryLoader {
    private static final String CUSTOM_APK_PATH = "/custom/app/";
    private static final String CUSTOM_JAR_PATH = "/custom/operator/libs/";
    private static final boolean LOG_ENABLE;
    private static final String PRODUCT_APK_PATH = "/product/app/";
    private static final String PRODUCT_JAR_PATH = "/product/operator/libs/";
    private static final String PROPERTY_OPERATOR_OPTR = "persist.vendor.operator.optr";
    private static final String PROPERTY_OPERATOR_SEG = "persist.vendor.operator.seg";
    private static final String PROPERTY_OPERATOR_SPEC = "persist.vendor.operator.spec";
    private static final String SYSTEM_APK_PATH = "/system/app/";
    private static final String SYSTEM_EXT_APK_PATH = "/system_ext/app/";
    private static final String SYSTEM_EXT_JAR_PATH = "/system_ext/operator/libs/";
    private static final String SYSTEM_JAR_PATH = "/system/operator/libs/";
    private static final String TAG = "OperatorCustomizationFactoryLoader";
    private static final Map<OperatorFactoryInfo, Object> sFactoryMap;
    private static final String USP_PACKAGE = getSysProperty("ro.vendor.mtk_carrierexpress_pack", "no");
    private static final String RSC_SYSTEM_APK_PATH = getSysProperty("ro.sys.current_rsc_path", "");
    private static final String RSC_SYSTEM_EXT_APK_PATH = getSysProperty("ro.sys_ext.current_rsc_path", "");
    private static final String RSC_PRODUCT_APK_PATH = getSysProperty("ro.product.current_rsc_path", "");

    public static class OperatorFactoryInfo {
        String mFactoryName;
        String mLibName;
        String mOperator;
        String mPackageName;
        String mSegment;
        String mSpecification;

        public OperatorFactoryInfo(String str, String str2, String str3, String str4) {
            this(str, str2, str3, str4, null, null);
        }

        public OperatorFactoryInfo(String str, String str2, String str3, String str4, String str5) {
            this(str, str2, str3, str4, str5, null);
        }

        public OperatorFactoryInfo(String str, String str2, String str3, String str4, String str5, String str6) {
            this.mLibName = str;
            this.mFactoryName = str2;
            this.mPackageName = str3;
            this.mOperator = str4;
            this.mSegment = str5;
            this.mSpecification = str6;
        }

        public String toString() {
            return "OperatorFactoryInfo(" + this.mOperator + "_" + this.mSpecification + "_" + this.mSegment + ":" + this.mLibName + ":" + this.mFactoryName + ":" + this.mPackageName + ")";
        }
    }

    private static class OperatorInfo {
        private String mOperator;
        private String mSegment;
        private String mSpecification;

        public OperatorInfo(String str, String str2, String str3) {
            this.mOperator = str;
            this.mSpecification = str2;
            this.mSegment = str3;
        }

        public String toString() {
            return this.mOperator + "_" + this.mSpecification + "_" + this.mSegment;
        }
    }

    static {
        LOG_ENABLE = "eng".equals(getSysProperty("ro.build.type", "eng")) || Log.isLoggable(TAG, 3);
        sFactoryMap = new HashMap();
    }

    private static OperatorFactoryInfo findOpertorFactoryInfo(List<OperatorFactoryInfo> list, int i) {
        OperatorFactoryInfo operatorFactoryInfo = null;
        OperatorInfo activeOperatorInfo = getActiveOperatorInfo(i);
        if (activeOperatorInfo == null || TextUtils.isEmpty(activeOperatorInfo.mOperator)) {
            logD("It's OM load or parse failed, because operator is null");
            return null;
        }
        ArrayList<OperatorFactoryInfo> arrayList = new ArrayList();
        for (OperatorFactoryInfo operatorFactoryInfo2 : list) {
            if (activeOperatorInfo.mOperator.equals(operatorFactoryInfo2.mOperator)) {
                if (operatorFactoryInfo2.mSegment == null) {
                    if (operatorFactoryInfo2.mSpecification == null || operatorFactoryInfo2.mSpecification.equals(activeOperatorInfo.mSpecification)) {
                        operatorFactoryInfo = operatorFactoryInfo2;
                        break;
                    }
                } else {
                    if (operatorFactoryInfo2.mSegment.equals(activeOperatorInfo.mSegment) && (operatorFactoryInfo2.mSpecification == null || operatorFactoryInfo2.mSpecification.equals(activeOperatorInfo.mSpecification))) {
                        operatorFactoryInfo = operatorFactoryInfo2;
                        break;
                    }
                }
            } else if (TextUtils.isEmpty(operatorFactoryInfo2.mOperator)) {
                arrayList.add(operatorFactoryInfo2);
            }
        }
        if (operatorFactoryInfo != null) {
            return operatorFactoryInfo;
        }
        for (OperatorFactoryInfo operatorFactoryInfo3 : arrayList) {
            if (!TextUtils.isEmpty(searchTargetPath(operatorFactoryInfo3.mLibName))) {
                return operatorFactoryInfo3;
            }
        }
        return operatorFactoryInfo;
    }

    private static OperatorInfo getActiveOperatorInfo() {
        return new OperatorInfo(getSysProperty(PROPERTY_OPERATOR_OPTR, ""), getSysProperty(PROPERTY_OPERATOR_SPEC, ""), getSysProperty(PROPERTY_OPERATOR_SEG, ""));
    }

    private static OperatorInfo getActiveOperatorInfo(int i) {
        String[] strArrSplit;
        OperatorInfo activeOperatorInfo = null;
        if (i == -1 || "no".equals(USP_PACKAGE)) {
            activeOperatorInfo = getActiveOperatorInfo();
        } else {
            String sysProperty = getSysProperty("persist.vendor.mtk_usp_optr_slot_" + i, "");
            logD("usp optr property is " + sysProperty);
            if (!TextUtils.isEmpty(sysProperty) && (strArrSplit = sysProperty.split("_")) != null) {
                if (strArrSplit.length == 1) {
                    activeOperatorInfo = new OperatorInfo(strArrSplit[0], "", "");
                } else if (strArrSplit.length == 3) {
                    activeOperatorInfo = new OperatorInfo(strArrSplit[0], strArrSplit[1], strArrSplit[2]);
                } else {
                    logE("usp optr property no content or wrong");
                }
            }
        }
        logD("Slot " + i + "'s OperatorInfo is" + activeOperatorInfo);
        return activeOperatorInfo;
    }

    private static String getSysProperty(String str, String str2) {
        try {
            return (String) Class.forName("android.os.SystemProperties").getMethod("get", String.class, String.class).invoke(null, str, str2);
        } catch (ClassNotFoundException e) {
            logE("Get system properties failed! " + e);
            return "";
        } catch (IllegalAccessException e2) {
            logE("Get system properties failed! " + e2);
            return "";
        } catch (NoSuchMethodException e3) {
            logE("Get system properties failed! " + e3);
            return "";
        } catch (InvocationTargetException e4) {
            logE("Get system properties failed! " + e4);
            return "";
        }
    }

    public static Object loadFactory(Context context, List<OperatorFactoryInfo> list) {
        return loadFactory(context, list, -1);
    }

    public static synchronized Object loadFactory(Context context, List<OperatorFactoryInfo> list, int i) {
        return loadFactory(null, context, list, i);
    }

    private static synchronized Object loadFactory(ClassLoader classLoader, Context context, List<OperatorFactoryInfo> list, int i) {
        try {
            if (list == null) {
                logE("loadFactory failed, because param list is null");
                return null;
            }
            OperatorFactoryInfo operatorFactoryInfoFindOpertorFactoryInfo = findOpertorFactoryInfo(list, i);
            if (operatorFactoryInfoFindOpertorFactoryInfo == null) {
                StringBuilder sb = new StringBuilder();
                for (int i2 = 0; i2 < list.size(); i2++) {
                    sb.append(i2 + ": ").append(list.get(i2)).append("\n");
                }
                logD("can not find operatorFactoryInfo by slot id " + i + " from \n" + sb.toString());
                return null;
            }
            Map<OperatorFactoryInfo, Object> map = sFactoryMap;
            Object obj = map.get(operatorFactoryInfoFindOpertorFactoryInfo);
            if (obj != null) {
                logD("return " + obj + " from cache by " + operatorFactoryInfoFindOpertorFactoryInfo);
                return obj;
            }
            String strSearchTargetPath = searchTargetPath(operatorFactoryInfoFindOpertorFactoryInfo.mLibName);
            if (TextUtils.isEmpty(strSearchTargetPath)) {
                return null;
            }
            Object objLoadFactoryInternal = loadFactoryInternal(classLoader, context, strSearchTargetPath, operatorFactoryInfoFindOpertorFactoryInfo.mFactoryName, operatorFactoryInfoFindOpertorFactoryInfo.mPackageName);
            if (objLoadFactoryInternal != null) {
                map.put(operatorFactoryInfoFindOpertorFactoryInfo, objLoadFactoryInternal);
            }
            return objLoadFactoryInternal;
        } catch (Throwable th) {
            throw th;
        }
    }

    public static Object loadFactory(ClassLoader classLoader, List<OperatorFactoryInfo> list) {
        return loadFactory(classLoader, list, -1);
    }

    public static Object loadFactory(ClassLoader classLoader, List<OperatorFactoryInfo> list, int i) {
        return loadFactory(classLoader, null, list, i);
    }

    private static Object loadFactoryInternal(ClassLoader classLoader, Context context, String str, String str2, String str3) {
        PathClassLoader pathClassLoader;
        logD("load factory " + str2 + " from " + str + " whose packageName is " + str3 + ", context is " + context);
        try {
            if (classLoader != null) {
                pathClassLoader = new PathClassLoader(str, classLoader);
            } else {
                pathClassLoader = context != null ? new PathClassLoader(str, context.getClassLoader()) : new PathClassLoader(str, ClassLoader.getSystemClassLoader().getParent());
            }
            Class<?> clsLoadClass = pathClassLoader.loadClass(str2);
            logD("Load class : " + str2 + " successfully with classLoader:" + pathClassLoader);
            if (!TextUtils.isEmpty(str3) && context != null) {
                try {
                    try {
                        return clsLoadClass.getConstructor(Context.class).newInstance(context.createPackageContext(str3, 3));
                    } catch (InvocationTargetException e) {
                        Log.e(TAG, "Exception occurs when execute constructor with Context", e);
                    }
                } catch (NoSuchMethodException e2) {
                    logD("Exception occurs when using constructor with Context");
                }
            }
            return clsLoadClass.newInstance();
        } catch (Exception e3) {
            Log.e(TAG, "Exception when initial instance", e3);
            return null;
        }
    }

    private static void logD(String str) {
        if (LOG_ENABLE) {
            Log.d(TAG, str);
        }
    }

    private static void logE(String str) {
        if (LOG_ENABLE) {
            Log.e(TAG, str);
        }
    }

    private static String searchTargetPath(String str) {
        String[] strArr;
        if (TextUtils.isEmpty(str)) {
            logE("target is null");
            return null;
        }
        String str2 = str;
        if (str.endsWith(".apk")) {
            str2 = str.substring(0, str.length() - 4) + '/' + str;
            String str3 = RSC_SYSTEM_APK_PATH;
            strArr = !TextUtils.isEmpty(str3) ? new String[]{str3 + "/app/", RSC_PRODUCT_APK_PATH + "/app/", RSC_SYSTEM_EXT_APK_PATH + "/app/", SYSTEM_APK_PATH, SYSTEM_EXT_APK_PATH, PRODUCT_APK_PATH, CUSTOM_APK_PATH} : new String[]{SYSTEM_APK_PATH, SYSTEM_EXT_APK_PATH, PRODUCT_APK_PATH, CUSTOM_APK_PATH};
        } else {
            strArr = new String[]{SYSTEM_JAR_PATH, SYSTEM_EXT_JAR_PATH, PRODUCT_JAR_PATH, CUSTOM_JAR_PATH};
        }
        for (String str4 : strArr) {
            if (new File(str4 + str2).exists()) {
                return str4 + str2;
            }
        }
        logD("can not find target " + str + " in " + Arrays.toString(strArr));
        return null;
    }
}
