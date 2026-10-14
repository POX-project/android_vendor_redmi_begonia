package com.mediatek.emcamera;

import android.app.Activity;
import android.app.ActivityManager;
import android.app.AlertDialog;
import android.app.Notification;
import android.app.NotificationManager;
import android.content.ContentResolver;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.graphics.Matrix;
import android.graphics.Rect;
import android.graphics.RectF;
import android.provider.Settings;
import android.support.v4.app.NotificationCompat;
import android.text.format.DateFormat;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowManager;
import android.widget.EditText;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.RadioButton;
import android.widget.Toast;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

/* JADX INFO: loaded from: classes.dex */
public class Utils {
    public static final int ACTION_CAPTURE = 0;
    public static final int ACTION_GIS_CALIBRATION = 1;
    public static final String ACTION_START_CAPTURE_ACTIVITY = "com.mediatek.emcamera.key_action";
    private static final float DEFAULT_CAMERA_BRIGHTNESS = 0.7f;
    public static final int ORIENTATION_HYSTERESIS = 5;
    public static final String PREFERENCE_KEY = "camera_inter_settings";
    private static final String PROP_MONKEY = "ro.monkey";
    private static final double[] RATIOS = {1.3333d, 1.5d, 1.6667d, 1.7778d};
    public static final int ROTATION_0 = 0;
    public static final int ROTATION_180 = 180;
    public static final int ROTATION_270 = 270;
    public static final int ROTATION_90 = 90;
    private static final String TAG = "Utils";

    public static int clamp(int i, int i2, int i3) {
        if (i > i3) {
            return i3;
        }
        return i < i2 ? i2 : i;
    }

    /* JADX WARN: Code duplicated, block: B:28:0x005d A[Catch: IOException -> 0x0059, TRY_LEAVE, TryCatch #0 {IOException -> 0x0059, blocks: (B:24:0x0055, B:28:0x005d), top: B:34:0x0055 }] */
    public static void copyFile(String str, String str2) {
        File file = new File(str);
        if (file.isFile() && file.exists()) {
            FileInputStream fileInputStream = null;
            FileOutputStream fileOutputStream = null;
            try {
                try {
                    try {
                        fileInputStream = new FileInputStream(file);
                        fileOutputStream = new FileOutputStream(str2);
                        byte[] bArr = new byte[fileInputStream.available()];
                        fileInputStream.read(bArr);
                        fileOutputStream.write(bArr);
                        fileInputStream.close();
                        fileOutputStream.close();
                        fileInputStream.close();
                        fileOutputStream.close();
                    } catch (IOException e) {
                        e.printStackTrace();
                    }
                } catch (IOException e2) {
                    e2.printStackTrace();
                    if (fileInputStream != null) {
                        fileInputStream.close();
                    }
                    if (fileOutputStream != null) {
                        fileOutputStream.close();
                    }
                }
            } catch (Throwable th) {
                if (fileInputStream != null) {
                    try {
                        fileInputStream.close();
                        if (fileOutputStream != null) {
                            fileOutputStream.close();
                        }
                    } catch (IOException e3) {
                        e3.printStackTrace();
                        throw th;
                    }
                } else if (fileOutputStream != null) {
                    fileOutputStream.close();
                }
                throw th;
            }
        }
    }

    public static boolean createDir(String str) {
        File file = new File(str);
        file.mkdirs();
        if (file.isDirectory() && file.canWrite()) {
            return true;
        }
        Elog.e(TAG, "create GIS calibration folder fail");
        return false;
    }

    public static void deleteFile(String str) {
        File file = new File(str);
        if (file.exists()) {
            file.delete();
        }
    }

    public static void dumpRect(RectF rectF, String str) {
        Elog.v(TAG, str + "=(" + rectF.left + "," + rectF.top + "," + rectF.right + "," + rectF.bottom + ")");
    }

    public static int getIntegerFromEdit(EditText editText, int i, boolean z, int i2, boolean z2) {
        int iIntValue = -1;
        try {
            iIntValue = Integer.valueOf(editText.getText().toString()).intValue();
        } catch (NumberFormatException e) {
            Elog.w(TAG, "getIntegerFromEditTrunc NumberFormatException:" + e.getMessage());
        }
        boolean z3 = false;
        if (iIntValue < i && z) {
            iIntValue = i;
            Elog.w(TAG, "getIntegerFromEditTrunc, value is smaller than min value!" + iIntValue);
            z3 = true;
        } else if (iIntValue > i2 && z2) {
            iIntValue = i2;
            Elog.w(TAG, "getIntegerFromEditTrunc, value is larger than max value!" + iIntValue);
            z3 = true;
        } else if (!z && iIntValue <= i) {
            iIntValue = i + 1;
            Elog.w(TAG, "getIntegerFromEditTrunc, value is smaller than min value!" + iIntValue);
            z3 = true;
        } else if (!z2 && iIntValue >= i2) {
            iIntValue = i2 - 1;
            Elog.w(TAG, "getIntegerFromEditTrunc, value is larger than max value!" + iIntValue);
            z3 = true;
        }
        if (!z3) {
            return iIntValue;
        }
        editText.setText(String.valueOf(iIntValue));
        return -1;
    }

    public static String getProperty(String str) {
        try {
            try {
                Class<?> cls = Class.forName("android.os.SystemProperties");
                return (String) cls.getMethod("get", String.class, String.class).invoke(cls, str, "");
            } catch (Exception e) {
                e.printStackTrace();
                return "";
            }
        } catch (Throwable th) {
            return "";
        }
    }

    public static void initializeScreenBrightness(Window window, ContentResolver contentResolver) {
        if (Settings.System.getInt(contentResolver, "screen_brightness_mode", 0) == 1) {
            WindowManager.LayoutParams attributes = window.getAttributes();
            attributes.screenBrightness = DEFAULT_CAMERA_BRIGHTNESS;
            window.setAttributes(attributes);
        }
    }

    public static boolean isActivityAvailable(Context context, Intent intent) {
        return context.getPackageManager().resolveActivity(intent, 0) != null;
    }

    public static boolean isAutoTest() {
        String property = getProperty(PROP_MONKEY);
        Elog.v(TAG, "isAutoTest()-> Monkey running flag is " + property);
        boolean z = "true".equals(property) || "y".equals(property) || "yes".equals(property) || "1".equals(property) || "on".equals(property);
        boolean zIsUserAMonkey = ActivityManager.isUserAMonkey();
        Elog.v(TAG, "isAutoTest()-> isUserAMonkey=" + zIsUserAMonkey);
        return z || zIsUserAMonkey;
    }

    public static boolean isToleranceAllow(float f, float f2, float f3) {
        if (f2 > 0.0f) {
            return Math.abs(f - f2) <= f3;
        }
        return true;
    }

    public static void prepareMatrix(Matrix matrix, boolean z, int i, int i2, int i3) {
        matrix.setScale(z ? -1.0f : 1.0f, 1.0f);
        matrix.postRotate(i);
        matrix.postScale(i2 / 2000.0f, i3 / 2000.0f);
        matrix.postTranslate(i2 / 2.0f, i3 / 2.0f);
    }

    public static String readFile(String str) {
        String str2 = "";
        File file = new File(str);
        if (file.isFile() && file.exists()) {
            FileInputStream fileInputStream = null;
            try {
                try {
                    try {
                        fileInputStream = new FileInputStream(file);
                        byte[] bArr = new byte[fileInputStream.available()];
                        fileInputStream.read(bArr);
                        str2 = new String(bArr);
                        fileInputStream.close();
                        fileInputStream.close();
                    } catch (IOException e) {
                        e.printStackTrace();
                        if (fileInputStream != null) {
                            fileInputStream.close();
                        }
                        return str2;
                    }
                } catch (Throwable th) {
                    if (fileInputStream != null) {
                        try {
                            fileInputStream.close();
                        } catch (IOException e2) {
                            e2.printStackTrace();
                        }
                    }
                    throw th;
                }
            } catch (IOException e3) {
                e3.printStackTrace();
            }
        }
        return str2;
    }

    public static Rect rectFToRect(RectF rectF) {
        Rect rect = new Rect();
        rect.left = Math.round(rectF.left);
        rect.top = Math.round(rectF.top);
        rect.right = Math.round(rectF.right);
        rect.bottom = Math.round(rectF.bottom);
        return rect;
    }

    public static void rectFToRect(RectF rectF, Rect rect) {
        rect.left = Math.round(rectF.left);
        rect.top = Math.round(rectF.top);
        rect.right = Math.round(rectF.right);
        rect.bottom = Math.round(rectF.bottom);
    }

    public static void sendNotification(Context context, String str, String str2) {
        Elog.v(TAG, "!! sendNotification !!");
        NotificationCompat.Builder contentText = new NotificationCompat.Builder(context).setSmallIcon(R.drawable.ic_em_camera).setContentTitle(str).setAutoCancel(true).setContentText(str2);
        NotificationManager notificationManager = (NotificationManager) context.getSystemService("notification");
        Notification notificationBuild = contentText.build();
        notificationBuild.defaults = 1 | notificationBuild.defaults;
        notificationManager.notify(99, notificationBuild);
    }

    public static void setCheckedRadioGroup(RadioButton[] radioButtonArr, RadioButton radioButton) {
        for (RadioButton radioButton2 : radioButtonArr) {
            if (radioButton2 == radioButton) {
                radioButton2.setChecked(true);
            } else {
                radioButton2.setChecked(false);
            }
        }
    }

    public static void setLvHeight(ListView listView) {
        ListAdapter adapter = listView.getAdapter();
        if (adapter == null) {
            Elog.d(TAG, "no data in ListView");
            return;
        }
        int measuredHeight = 0;
        for (int i = 0; i < adapter.getCount(); i++) {
            View view = adapter.getView(i, null, listView);
            view.measure(0, 0);
            measuredHeight += view.getMeasuredHeight();
        }
        ViewGroup.LayoutParams layoutParams = listView.getLayoutParams();
        layoutParams.height = (listView.getDividerHeight() * (adapter.getCount() - 1)) + measuredHeight;
        listView.setLayoutParams(layoutParams);
    }

    public static void setProperty(String str, String str2) {
        try {
            Class<?> cls = Class.forName("android.os.SystemProperties");
            cls.getMethod("set", String.class, String.class).invoke(cls, str, str2);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static void setVisibleLayout(View[] viewArr, View[] viewArr2) {
        for (View view : viewArr) {
            boolean z = false;
            if (viewArr2 != null) {
                for (View view2 : viewArr2) {
                    if (view2 == view) {
                        z = true;
                        break;
                    }
                }
            }
            view.setVisibility(z ? 0 : 8);
        }
    }

    public static void showErrorAndFinish(final Activity activity, final int i) {
        activity.runOnUiThread(new Runnable() { // from class: com.mediatek.emcamera.Utils.1
            @Override // java.lang.Runnable
            public void run() {
                new AlertDialog.Builder(activity).setCancelable(false).setIconAttribute(android.R.attr.alertDialogIcon).setTitle(R.string.camera_error_title).setMessage(i).setNeutralButton(android.R.string.ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.emcamera.Utils.1.1
                    @Override // android.content.DialogInterface.OnClickListener
                    public void onClick(DialogInterface dialogInterface, int i2) {
                        activity.finish();
                    }
                }).create().show();
            }
        });
    }

    public static void showMsgDialog(Context context, String str, String str2) {
        new AlertDialog.Builder(context).setTitle(str).setMessage(str2).setPositiveButton(android.R.string.ok, (DialogInterface.OnClickListener) null).create().show();
    }

    public static void showToast(Activity activity, String str) {
        Toast.makeText(activity, str, 1).show();
    }

    public static String timeFormat(long j) {
        return DateFormat.format("yyyyMMdd-kkmmss", j).toString();
    }

    public static void toastOnUiThread(final Activity activity, final int i) {
        activity.runOnUiThread(new Runnable() { // from class: com.mediatek.emcamera.Utils.2
            @Override // java.lang.Runnable
            public void run() {
                Toast.makeText(activity, i, 1).show();
            }
        });
    }

    public static void toastOnUiThread(final Activity activity, final String str) {
        activity.runOnUiThread(new Runnable() { // from class: com.mediatek.emcamera.Utils.3
            @Override // java.lang.Runnable
            public void run() {
                Toast.makeText(activity, str, 1).show();
            }
        });
    }

    public static void writeData(String str, byte[] bArr) {
        File file = new File(str);
        FileOutputStream fileOutputStream = null;
        try {
            try {
                try {
                    fileOutputStream = new FileOutputStream(file);
                    fileOutputStream.write(bArr);
                    fileOutputStream.close();
                    fileOutputStream.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            } catch (IOException e2) {
                file.delete();
                e2.printStackTrace();
                if (fileOutputStream != null) {
                    fileOutputStream.close();
                }
            }
        } catch (Throwable th) {
            if (fileOutputStream != null) {
                try {
                    fileOutputStream.close();
                } catch (IOException e3) {
                    e3.printStackTrace();
                }
            }
            throw th;
        }
    }
}
