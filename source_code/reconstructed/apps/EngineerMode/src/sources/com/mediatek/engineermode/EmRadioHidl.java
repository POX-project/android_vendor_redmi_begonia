package com.mediatek.engineermode;

import android.os.Handler;
import android.os.Message;
import android.os.RemoteException;
import android.util.SparseArray;
import com.mediatek.engineermode.aospradio.RadioIndication;
import java.util.ArrayList;
import java.util.Arrays;
import vendor.mediatek.hardware.mtkradioex.V2_0.IMtkRadioEx;

/* JADX INFO: loaded from: classes2.dex */
public class EmRadioHidl {
    public static final String TAG = "EmRadioHidl";
    public static Handler mHandler;
    public static int mWhat;
    private static final String[] HIDL_SERVICE_NAME = {"mtkEm1", "mtkEm2", "mtkEm3", "mtkEm4"};
    public static SparseArray<Message> mRequestList = new SparseArray<>();
    public static int mRadioIndicationType = -1;
    private static MtkRadioResponseBase mRadioResponseMtk = null;
    private static MtkRadioIndication mRadioIndicationMtk = null;
    private static IMtkRadioEx[] mRadioProxyMtk = new IMtkRadioEx[4];
    private static boolean mIsRadioIndicationListen = false;

    private static IMtkRadioEx getRadioProxy(int i, Message message) {
        if (mRadioResponseMtk == null) {
            mRadioResponseMtk = new MtkRadioResponseBase(null);
        }
        if (mRadioIndicationMtk == null) {
            mRadioIndicationMtk = new MtkRadioIndication(null);
        }
        if (message != null) {
            mRequestList.append(message.what, message);
        }
        try {
            mRadioProxyMtk[i] = IMtkRadioEx.getService(HIDL_SERVICE_NAME[i], false);
            if (mRadioProxyMtk[i] != null) {
                mRadioProxyMtk[i].setResponseFunctionsEm(mRadioResponseMtk, mIsRadioIndicationListen ? mRadioIndicationMtk : null);
                Elog.d(TAG, "getMtkRadioProxy succeed");
            } else {
                Elog.e(TAG, "getMtkRadioProxy failed");
            }
        } catch (RemoteException | RuntimeException e) {
            mRadioProxyMtk[i] = null;
            Elog.d(TAG, "RadioProxy getService: " + e);
        }
        return mRadioProxyMtk[i];
    }

    public static int getSlotId(int i) {
        if (i != -1) {
            return i != 255 ? i : ModemCategory.getCdmaPhoneId();
        }
        return ModemCategory.getCapabilitySim();
    }

    public static void invokeOemRilRequestRawEm(int i, byte[] bArr, Message message) {
        IMtkRadioEx radioProxy = getRadioProxy(getSlotId(i), message);
        if (radioProxy == null) {
            Elog.e(TAG, "MTkRadioProxy is null");
            return;
        }
        try {
            radioProxy.sendRequestRaw(message.what, primitiveArrayToArrayList(bArr));
        } catch (RemoteException | RuntimeException e) {
            Elog.e(TAG, e.toString());
        }
    }

    public static void invokeOemRilRequestStringsEm(int i, String[] strArr, Message message) {
        int i2;
        IMtkRadioEx radioProxy = getRadioProxy(getSlotId(i), message);
        if (radioProxy != null) {
            if (message == null) {
                i2 = 0;
            } else {
                try {
                    i2 = message.what;
                } catch (RemoteException | RuntimeException e) {
                    Elog.e(TAG, e.toString());
                    return;
                }
            }
            radioProxy.sendRequestStrings(i2, new ArrayList(Arrays.asList(strArr)));
        }
    }

    public static void mSetRadioIndicationMtk(int i, Handler handler, int i2, boolean z) {
        mIsRadioIndicationListen = z;
        mHandler = handler;
        mWhat = i2;
        if (getRadioProxy(i, null) != null) {
            Elog.d(TAG, "SetMtkRadioIndication succeed");
        } else {
            Elog.e(TAG, "MtkRadioIndicatio is null");
        }
    }

    public static void mSetRadioIndicationType(int i) {
    }

    private static ArrayList<Byte> primitiveArrayToArrayList(byte[] bArr) {
        ArrayList<Byte> arrayList = new ArrayList<>(bArr.length);
        for (byte b : bArr) {
            arrayList.add(Byte.valueOf(b));
        }
        return arrayList;
    }

    public static void rebootModemHidl() {
        RadioIndication.resetStateLast();
        IMtkRadioEx radioProxy = getRadioProxy(0, null);
        if (radioProxy == null) {
            Elog.e(TAG, "radioProxy is null");
            return;
        }
        try {
            radioProxy.setTrm(0, 2);
        } catch (RemoteException | RuntimeException e) {
            Elog.e(TAG, e.toString());
        }
    }

    public static void reloadModemType(int i) {
        IMtkRadioEx radioProxy = getRadioProxy(getSlotId(-1), null);
        if (radioProxy == null) {
            Elog.e(TAG, "radioProxy is null");
            return;
        }
        try {
            radioProxy.modifyModemType(0, 1, i);
        } catch (RemoteException | RuntimeException e) {
            Elog.e(TAG, e.toString());
        }
    }

    public static void storeModemType(int i) {
        IMtkRadioEx radioProxy = getRadioProxy(getSlotId(-1), null);
        if (radioProxy == null) {
            Elog.e(TAG, "radioProxy is null");
            return;
        }
        try {
            radioProxy.modifyModemType(0, 2, i);
        } catch (RemoteException | RuntimeException e) {
            Elog.e(TAG, e.toString());
        }
    }
}
