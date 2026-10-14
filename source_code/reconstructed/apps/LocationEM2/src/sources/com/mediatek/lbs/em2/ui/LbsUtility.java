package com.mediatek.lbs.em2.ui;

import android.content.Context;
import android.content.Intent;
import android.util.Log;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Date;

/* JADX INFO: loaded from: classes.dex */
public class LbsUtility {

    /* JADX INFO: renamed from: com.mediatek.lbs.em2.ui.LbsUtility$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$com$mediatek$lbs$em2$ui$LbsUtility$GnssBand;

        static {
            int[] iArr = new int[GnssBand.values().length];
            $SwitchMap$com$mediatek$lbs$em2$ui$LbsUtility$GnssBand = iArr;
            try {
                iArr[GnssBand.GNSS_L1.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                $SwitchMap$com$mediatek$lbs$em2$ui$LbsUtility$GnssBand[GnssBand.GNSS_L2.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                $SwitchMap$com$mediatek$lbs$em2$ui$LbsUtility$GnssBand[GnssBand.GNSS_L5.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                $SwitchMap$com$mediatek$lbs$em2$ui$LbsUtility$GnssBand[GnssBand.GNSS_E6.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
        }
    }

    private enum GnssBand {
        GNSS_L1,
        GNSS_L2,
        GNSS_L5,
        GNSS_E6
    }

    private static GnssBand frequencyToGnssBand(float f) {
        float f2 = f / 1000000.0f;
        if (f2 >= 1151.0f && f2 <= 1214.0f) {
            return GnssBand.GNSS_L5;
        }
        if (f2 <= 1214.0f || f2 > 1255.0f) {
            return (f2 <= 1255.0f || f2 > 1300.0f) ? GnssBand.GNSS_L1 : GnssBand.GNSS_E6;
        }
        return GnssBand.GNSS_L2;
    }

    static Intent getEm2LaunchIntent(Context context) {
        Intent intent = new Intent(context, (Class<?>) MyTabActivity.class);
        intent.addFlags(268435456);
        return intent;
    }

    public static String getFrequencyBand(float f) {
        int i = AnonymousClass1.$SwitchMap$com$mediatek$lbs$em2$ui$LbsUtility$GnssBand[frequencyToGnssBand(f).ordinal()];
        if (i == 1) {
            return "L1";
        }
        if (i == 2) {
            return "L2";
        }
        if (i != 3) {
            return i != 4 ? "UN" : "E6";
        }
        return "L5";
    }

    public static String getTimeString(long j) {
        Date date = new Date(j);
        return (date.getYear() + 1900) + "/" + (date.getMonth() + 1) + "/" + date.getDate() + " " + date.getHours() + ":" + date.getMinutes() + ":" + date.getSeconds();
    }

    public static String getTimeString2(long j) {
        Date date = new Date(j);
        return String.format("%04d%02d%02d_%02d%02d%02d", Integer.valueOf(date.getYear() + 1900), Integer.valueOf(date.getMonth() + 1), Integer.valueOf(date.getDate()), Integer.valueOf(date.getHours()), Integer.valueOf(date.getMinutes()), Integer.valueOf(date.getSeconds()));
    }

    public static String getTimeString3(long j) {
        Date date = new Date(j);
        return String.format("%02d/%02d/%04d %02d:%02d:%02d", Integer.valueOf(date.getMonth() + 1), Integer.valueOf(date.getDate()), Integer.valueOf(date.getYear() + 1900), Integer.valueOf(date.getHours()), Integer.valueOf(date.getMinutes()), Integer.valueOf(date.getSeconds()));
    }

    static boolean isDebugModeEnabled(Context context) {
        return new File(context.getFilesDir() + "/../show").exists();
    }

    static void launchLocationEM(Context context) {
        context.startActivity(getEm2LaunchIntent(context));
    }

    static String map2SvTypes(int i) {
        if (i == 1) {
            return "G";
        }
        if (i == 2) {
            return "S";
        }
        if (i == 3) {
            return "R";
        }
        if (i == 4) {
            return "Q";
        }
        if (i == 5) {
            return "B";
        }
        if (i == 6) {
            return "E";
        }
        return i == 7 ? "I" : "";
    }

    public static int parseInt(String str) {
        if (str.equals("")) {
            return 0;
        }
        try {
            return Integer.valueOf(removeFirstZero(str)).intValue();
        } catch (Exception e) {
            Log.d("nmeaParser", "parseDouble:" + e);
            return 0;
        }
    }

    private static String removeFirstZero(String str) {
        int i;
        int i2 = 0;
        while (true) {
            i = i2 + 1;
            if (str.charAt(i2) != '0' || i == str.length()) {
                break;
            }
            i2 = i;
        }
        return i != 0 ? str.substring(i - 1) : str;
    }

    public static String[] split(String str) {
        try {
            return str.split("[,]");
        } catch (Exception e) {
            Log.d("nmeaParser", "split:" + e);
            return null;
        }
    }

    public static boolean write2File(Context context, String str, String str2, String str3, String str4, boolean z) {
        String str5 = "/sdcard" + File.separator + str + File.separator;
        File file = new File(str5);
        if (!file.exists()) {
            file.mkdirs();
        }
        if (str2 != null) {
            str5 = str5 + "/" + str2;
            File file2 = new File(str5);
            if (!file2.exists()) {
                file2.mkdirs();
            }
        }
        String str6 = str5 + "/" + str3;
        try {
            DataOutputStream dataOutputStream = z ? new DataOutputStream(new FileOutputStream(str6, true)) : new DataOutputStream(new FileOutputStream(new File(str6)));
            dataOutputStream.writeBytes(str4);
            dataOutputStream.close();
            return true;
        } catch (FileNotFoundException e) {
            e.printStackTrace();
            return false;
        } catch (IOException e2) {
            e2.printStackTrace();
            return false;
        }
    }
}
