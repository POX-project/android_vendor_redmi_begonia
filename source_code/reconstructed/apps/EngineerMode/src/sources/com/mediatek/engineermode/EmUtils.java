package com.mediatek.engineermode;

import android.content.Context;
import android.content.SharedPreferences;
import android.net.ConnectivityManager;
import android.net.LocalSocketAddress;
import android.os.Handler;
import android.os.Message;
import android.os.RemoteException;
import android.os.SystemProperties;
import android.provider.Settings;
import android.widget.Toast;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneFactory;
import com.mediatek.engineermode.aospradio.EmRadioHidlAosp;
import com.mediatek.engineermode.aospradio.RadioIndication;
import com.mediatek.engineermode.mnldinterface.Debug2MnldInterface;
import com.mediatek.socket.base.UdpClient;
import java.io.File;
import java.util.NoSuchElementException;
import vendor.mediatek.hardware.engineermode.V1_3.IEmd;

/* JADX INFO: loaded from: classes2.dex */
public class EmUtils {
    private static final String BATTERY_DEFAULT_PATH = "battery/";
    private static final String BATTERY_FILE = "Power_On_Voltage";
    private static final String BATTERY_MT6357_PATH = "mt6357-gauge/";
    private static final String BATTERY_MT6359_PATH = "mt6359-gauge/";
    private static final String BATTERY_MT6359_P_PATH = "mt6359p-gauge/";
    public static final String BATTERY_ROOT_PATH = "/sys/bus/platform/devices/";
    private static final String CHANNEL_OUT = "mtk_debugService2mnld";
    private static final String DEFAULT_MNL_PROP = "00000001";
    private static final char MNL_DISABLE = '0';
    private static final char MNL_ENABLE = '1';
    private static final int MNL_INDEX_DBG2FILE = 2;
    private static final int MNL_INDEX_GNSS_PORT = 3;
    private static final String MNL_PROP_NAME = "persist.vendor.radio.mnl.prop";
    public static final int OEM_RIL_REQUEST_HIDL = 1;
    public static final int OEM_RIL_REQUEST_MODE = 1;
    public static final int OEM_RIL_REQUEST_PHOHE = 0;
    public static final int RADIO_INDICATION_TYPE_NETWORKINFO = 1;
    public static final int RADIO_INDICATION_TYPE_NONE = -1;
    public static final int RADIO_INDICATION_TYPE_PHONE_STAUS_CHANGE = 3;
    public static final int RADIO_INDICATION_TYPE_TXPOWER_INFO = 2;
    public static final int RADIO_INDICATION_TYPE_URCINFO = 0;
    public static final int RADIO_RESPONSE_MODEM_STAUS_CHANGE = 4;
    public static final String TAG = "EmUtils";
    public static Toast mToast = null;
    public static IEmd mEmHIDLService = null;
    public static Phone mPhone = null;
    public static Phone mPhoneSlot1 = null;
    public static Phone mPhoneSlot2 = null;
    public static Phone mPhoneMain = null;
    public static Phone mPhoneCdma = null;

    public static String addZeroForNum(String str, int i) {
        int length = str.length();
        while (length < i) {
            StringBuffer stringBuffer = new StringBuffer();
            stringBuffer.append(str);
            stringBuffer.append("0");
            str = stringBuffer.toString();
            length = str.length();
        }
        return str;
    }

    public static void enableDbg2File(boolean z) {
        setMnldProp(2, z);
    }

    public static void enableDbg2FileAndGnssPort(boolean z, boolean z2) {
        String str = SystemProperties.get(MNL_PROP_NAME);
        Elog.i(TAG, "getMnlProp: " + str);
        if (str == null || str.isEmpty()) {
            str = DEFAULT_MNL_PROP;
        }
        char[] charArray = str.toCharArray();
        char c = MNL_ENABLE;
        charArray[2] = z ? '1' : '0';
        if (!z2) {
            c = '0';
        }
        charArray[3] = c;
        String strValueOf = String.valueOf(charArray);
        new Debug2MnldInterface.Debug2MnldInterfaceSender().debugMnldRadioMsg(new UdpClient(CHANNEL_OUT, LocalSocketAddress.Namespace.ABSTRACT, 23), strValueOf);
        Elog.i(TAG, "setMnlProp newProp: " + strValueOf);
    }

    public static void enableGnssPort(boolean z) {
        setMnldProp(3, z);
    }

    public static String getBatteryPath() {
        if (new File("/sys/bus/platform/devices/mt6357-gauge/Power_On_Voltage").exists()) {
            Elog.v(TAG, "it is MT6357 ");
            return BATTERY_MT6357_PATH;
        }
        if (new File("/sys/bus/platform/devices/mt6359-gauge/Power_On_Voltage").exists()) {
            Elog.v(TAG, "it is MT6359 ");
            return BATTERY_MT6359_PATH;
        }
        if (!new File("/sys/bus/platform/devices/mt6359p-gauge/Power_On_Voltage").exists()) {
            return BATTERY_DEFAULT_PATH;
        }
        Elog.v(TAG, "it is MT6359 P");
        return BATTERY_MT6359_P_PATH;
    }

    public static boolean getDbg2FileValue(boolean z) {
        String str = SystemProperties.get(MNL_PROP_NAME);
        Elog.i(TAG, "getMnlProp: " + str);
        if (str == null || str.isEmpty()) {
            return z;
        }
        str.charAt(2);
        return '1' == str.charAt(2);
    }

    public static IEmd getEmHidlService() {
        Elog.v(TAG, "getEmHidlService ...");
        if (mEmHIDLService == null) {
            Elog.v(TAG, "getEmHidlService init...");
            try {
                mEmHIDLService = IEmd.getService("EmHidlServer", true);
            } catch (RemoteException e) {
                e.printStackTrace();
                Elog.e(TAG, "EmHIDLConnection exception1 ...");
                Elog.e(TAG, e.getMessage());
            } catch (NoSuchElementException e2) {
                e2.printStackTrace();
                Elog.e(TAG, "EmHIDLConnection exception2 ...");
                Elog.e(TAG, e2.getMessage());
            }
        }
        return mEmHIDLService;
    }

    public static Phone getmPhone(int i) {
        if (i == -1) {
            Phone phone = PhoneFactory.getPhone(ModemCategory.getCapabilitySim());
            mPhoneMain = phone;
            mPhone = phone;
        } else if (i == 0) {
            if (mPhoneSlot1 == null) {
                mPhoneSlot1 = PhoneFactory.getPhone(0);
            }
            mPhone = mPhoneSlot1;
        } else if (i == 1) {
            if (mPhoneSlot2 == null) {
                mPhoneSlot2 = PhoneFactory.getPhone(1);
            }
            mPhone = mPhoneSlot2;
        } else if (i == 255) {
            Phone cdmaPhone = ModemCategory.getCdmaPhone();
            mPhoneCdma = cdmaPhone;
            mPhone = cdmaPhone;
        }
        Elog.v(TAG, "getmPhone,phoneid = " + i);
        return mPhone;
    }

    public static boolean ifAirplaneModeEnabled() {
        boolean z = Settings.System.getInt(EmApplication.getContext().getContentResolver(), "airplane_mode_on", 0) != 0;
        Elog.d(TAG, "isAirplaneModeOn: " + z);
        return z;
    }

    public static void initPoweroffmdMode(boolean z, boolean z2) {
        Elog.d(TAG, "initPoweroffmdMode: " + z + ",RFonly: " + z2);
        systemPropertySet("vendor.ril.test.poweroffmd", z2 ? "0" : "1");
        systemPropertySet("vendor.ril.testmode", z ? "1" : "0");
    }

    public static void invokeOemRilRequestRawEm(int i, byte[] bArr, Message message) {
        invokeOemRilRequestRawEmHidl(i, bArr, message);
    }

    public static void invokeOemRilRequestRawEm(byte[] bArr, Message message) {
        invokeOemRilRequestRawEm(-1, bArr, message);
    }

    public static void invokeOemRilRequestRawEmHidl(int i, byte[] bArr, Message message) {
        EmRadioHidl.invokeOemRilRequestRawEm(i, bArr, message);
    }

    public static void invokeOemRilRequestRawEmPhone(int i, byte[] bArr, Message message) {
        try {
            getmPhone(i).invokeOemRilRequestRaw(bArr, message);
        } catch (Exception e) {
            Elog.v(TAG, e.getMessage());
            Elog.v(TAG, "get phone invokeOemRilRequestRaw failed");
        }
    }

    public static void invokeOemRilRequestStringsEm(int i, String[] strArr, Message message) {
        invokeOemRilRequestStringsEmHidl(i, strArr, message);
    }

    public static void invokeOemRilRequestStringsEm(boolean z, String[] strArr, Message message) {
        if (z) {
            invokeOemRilRequestStringsEm(255, strArr, message);
        } else {
            invokeOemRilRequestStringsEm(-1, strArr, message);
        }
    }

    public static void invokeOemRilRequestStringsEm(String[] strArr, Message message) {
        invokeOemRilRequestStringsEm(-1, strArr, message);
    }

    private static void invokeOemRilRequestStringsEmHidl(int i, String[] strArr, Message message) {
        EmRadioHidl.invokeOemRilRequestStringsEm(i, strArr, message);
    }

    private static void invokeOemRilRequestStringsEmPhone(int i, String[] strArr, Message message) {
        try {
            getmPhone(i).invokeOemRilRequestStrings(strArr, message);
        } catch (Exception e) {
            Elog.v(TAG, e.getMessage());
            Elog.v(TAG, "get phone invokeOemRilRequestStrings failed");
        }
    }

    public static String readSharedPreferences(String str, String str2, String str3) {
        Context context = EmApplication.getContext();
        EmApplication.getContext();
        return context.getSharedPreferences(str, 0).getString(str2, str3);
    }

    public static void rebootModem() {
        rebootModemHidl();
    }

    public static void rebootModemHidl() {
        EmRadioHidl.rebootModemHidl();
        Elog.d(TAG, "rebootModemHidl");
    }

    public static void rebootModemPhone() {
        try {
            getmPhone(-1).invokeOemRilRequestStrings(new String[]{"SET_TRM", "2"}, (Message) null);
        } catch (Exception e) {
            Elog.v(TAG, e.getMessage());
            Elog.v(TAG, "rebootModem SET_TRM 2 failed");
        }
        Elog.d(TAG, "rebootModem SET_TRM 2");
    }

    public static void registerForModemStatusChanged(int i, Handler handler, int i2) {
        EmRadioHidlAosp.mRadioIndicationType = 4;
        EmRadioHidlAosp.setRadioResponseAosp(i, handler, i2, true);
    }

    public static void registerForNetworkInfo(int i, Handler handler, int i2) {
        EmRadioHidl.mRadioIndicationType = 1;
        EmRadioHidl.mSetRadioIndicationMtk(i, handler, i2, true);
    }

    public static void registerForTxpowerInfo(Handler handler, int i) {
        EmRadioHidl.mRadioIndicationType = 2;
        EmRadioHidl.mSetRadioIndicationMtk(0, handler, i, true);
    }

    public static void registerForUrcInfo(int i, Handler handler, int i2) {
        EmRadioHidl.mRadioIndicationType = 0;
        EmRadioHidl.mSetRadioIndicationMtk(i, handler, i2, true);
    }

    public static void registerForradioStateChanged(int i, Handler handler, int i2) {
        EmRadioHidlAosp.mRadioIndicationType = 3;
        EmRadioHidlAosp.mSetRadioIndicationAosp(i, handler, i2, true);
    }

    public static void reloadModemType(int i) {
        EmRadioHidl.reloadModemType(i);
    }

    public static void setAirplaneModeEnabled(boolean z) {
        Elog.d(TAG, "setAirplaneModEnabled = " + z);
        RadioIndication.resetStateLast();
        Context context = EmApplication.getContext();
        EmApplication.getContext();
        ((ConnectivityManager) context.getSystemService("connectivity")).setAirplaneMode(z);
    }

    private static void setMnldProp(int i, boolean z) {
        String str = SystemProperties.get(MNL_PROP_NAME);
        Elog.i(TAG, "getMnlProp: " + str);
        if (str == null || str.isEmpty()) {
            str = DEFAULT_MNL_PROP;
        }
        if (str.length() > i) {
            char[] charArray = str.toCharArray();
            charArray[i] = z ? MNL_ENABLE : MNL_DISABLE;
            String strValueOf = String.valueOf(charArray);
            new Debug2MnldInterface.Debug2MnldInterfaceSender().debugMnldRadioMsg(new UdpClient(CHANNEL_OUT, LocalSocketAddress.Namespace.ABSTRACT, 23), strValueOf);
            Elog.i(TAG, "setMnlProp newProp: " + strValueOf);
        }
    }

    public static void showToast(int i) {
        Toast toast = mToast;
        if (toast != null) {
            toast.cancel();
        }
        Toast toastMakeText = Toast.makeText(EmApplication.getContext(), i, 0);
        mToast = toastMakeText;
        toastMakeText.show();
    }

    public static void showToast(int i, int i2) {
        Toast toast = mToast;
        if (toast != null) {
            toast.cancel();
        }
        Toast toastMakeText = Toast.makeText(EmApplication.getContext(), i, i2);
        mToast = toastMakeText;
        toastMakeText.show();
    }

    public static void showToast(String str) {
        Toast toast = mToast;
        if (toast != null) {
            toast.cancel();
        }
        Toast toastMakeText = Toast.makeText(EmApplication.getContext(), str, 0);
        mToast = toastMakeText;
        toastMakeText.show();
    }

    public static void showToast(String str, int i) {
        Toast toast = mToast;
        if (toast != null) {
            toast.cancel();
        }
        Toast toastMakeText = Toast.makeText(EmApplication.getContext(), str, i);
        mToast = toastMakeText;
        toastMakeText.show();
    }

    public static void showToast(String str, boolean z) {
        Toast toast;
        if (!z && (toast = mToast) != null) {
            toast.cancel();
        }
        Toast toastMakeText = Toast.makeText(EmApplication.getContext(), str, 0);
        mToast = toastMakeText;
        toastMakeText.show();
    }

    public static void storeModemType(int i) {
        EmRadioHidl.storeModemType(i);
    }

    public static String systemPropertyGet(String str, String str2) {
        try {
            return SystemProperties.get(str, str2);
        } catch (Exception e) {
            Elog.e(TAG, "EmUtils systemPropertyGet failed");
            return "";
        }
    }

    public static boolean systemPropertySet(String str, String str2) {
        try {
            SystemProperties.set(str, str2);
            return true;
        } catch (Exception e) {
            Elog.e(TAG, "EmUtils systemPropertySet failed :" + str);
            return false;
        }
    }

    public static void unregisterForModemStatusChanged(int i) {
        EmRadioHidlAosp.mRadioIndicationType = -1;
        EmRadioHidlAosp.setRadioResponseAosp(i, null, 0, false);
    }

    public static void unregisterForNetworkInfo(int i) {
        EmRadioHidl.mRadioIndicationType = -1;
        EmRadioHidl.mSetRadioIndicationMtk(i, null, 0, false);
    }

    public static void unregisterForTxpowerInfo() {
        EmRadioHidl.mRadioIndicationType = -1;
        EmRadioHidl.mSetRadioIndicationMtk(0, null, 0, false);
    }

    public static void unregisterForUrcInfo(int i) {
        EmRadioHidl.mRadioIndicationType = -1;
        EmRadioHidl.mSetRadioIndicationMtk(i, null, 0, false);
    }

    public static void unregisterradioStateChanged(int i) {
        EmRadioHidlAosp.mRadioIndicationType = -1;
        EmRadioHidlAosp.mSetRadioIndicationAosp(i, null, 0, false);
    }

    public static void writeSharedPreferences(String str, String str2, String str3) {
        Context context = EmApplication.getContext();
        EmApplication.getContext();
        SharedPreferences.Editor editorEdit = context.getSharedPreferences(str, 0).edit();
        editorEdit.putString(str2, str3);
        editorEdit.commit();
    }
}
