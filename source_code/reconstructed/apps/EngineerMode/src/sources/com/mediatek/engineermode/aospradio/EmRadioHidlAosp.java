package com.mediatek.engineermode.aospradio;

import android.hardware.radio.V1_3.IRadio;
import android.os.Handler;
import android.os.IHwBinder;
import android.os.Message;
import android.os.RemoteException;
import android.util.SparseArray;
import com.mediatek.engineermode.Elog;

/* JADX INFO: loaded from: classes2.dex */
public class EmRadioHidlAosp {
    private static final int EVENT_RADIO_PROXY_DEAD = 1;
    private static final int IRADIO_GET_SERVICE_DELAY_MILLIS = 500;
    public static final String TAG = "EmRadioHidlAosp";
    public static Handler mHandler;
    public static int mWhat;
    private static final String[] HIDL_SERVICE_NAME = {"em1", "em2", "em3", "em4"};
    public static SparseArray<Message> mRequestList = new SparseArray<>();
    public static int mRadioIndicationType = -1;
    private static RadioIndication mRadioIndicationMtk = null;
    private static RadioResponse mRadioResponseMtk = null;
    private static IRadio[] mRadioProxyMtk = new IRadio[4];
    private static boolean mIsRadioIndicationListen = false;
    private static boolean mIsRadioResponseListen = false;
    private static CapRadioProxyDeathRecipient mCapRadioProxyDeathRecipient = null;
    private static Handler mHandlerRadio = new Handler() { // from class: com.mediatek.engineermode.aospradio.EmRadioHidlAosp.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (message.what != 1) {
                return;
            }
            Elog.d(EmRadioHidlAosp.TAG, "RadioProxy dead");
            EmRadioHidlAosp.getRadioProxy(0, null);
        }
    };

    static final class CapRadioProxyDeathRecipient implements IHwBinder.DeathRecipient {
        CapRadioProxyDeathRecipient() {
        }

        public void serviceDied(long j) {
            EmRadioHidlAosp.mHandlerRadio.sendMessage(EmRadioHidlAosp.mHandlerRadio.obtainMessage(1, Long.valueOf(j)));
        }
    }

    public static void getModemStatus(int i) {
        IRadio radioProxy = getRadioProxy(i, null);
        if (radioProxy == null) {
            Elog.e(TAG, "radioProxy is null");
            return;
        }
        try {
            radioProxy.getModemStackStatus(0);
        } catch (RemoteException | RuntimeException e) {
            Elog.e(TAG, e.toString());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static IRadio getRadioProxy(int i, Message message) {
        if (mCapRadioProxyDeathRecipient == null) {
            mCapRadioProxyDeathRecipient = new CapRadioProxyDeathRecipient();
        }
        if (mRadioIndicationMtk == null) {
            mRadioIndicationMtk = new RadioIndication(null);
        }
        if (mRadioResponseMtk == null) {
            mRadioResponseMtk = new RadioResponse(null);
        }
        if (message != null) {
            mRequestList.append(message.what, message);
        }
        try {
            mRadioProxyMtk[i] = IRadio.getService(HIDL_SERVICE_NAME[i], false);
            if (mRadioProxyMtk[i] != null) {
                mRadioProxyMtk[i].setResponseFunctions(mIsRadioResponseListen ? mRadioResponseMtk : null, mIsRadioIndicationListen ? mRadioIndicationMtk : null);
                mRadioProxyMtk[i].linkToDeath(mCapRadioProxyDeathRecipient, 0L);
                Elog.d(TAG, "getAospRadioProxy succeed " + i);
            } else {
                Elog.e(TAG, "getAospRadioProxy failed " + i);
            }
        } catch (RemoteException | RuntimeException e) {
            mRadioProxyMtk[i] = null;
            mRadioResponseMtk.resetModemStatus();
            Elog.d(TAG, "AospRadioProxy " + i + ", getService: " + e);
            Handler handler = mHandlerRadio;
            handler.sendMessageDelayed(handler.obtainMessage(1), 500L);
        }
        return mRadioProxyMtk[i];
    }

    public static void mSetRadioIndicationAosp(int i, Handler handler, int i2, boolean z) {
        mIsRadioIndicationListen = z;
        mHandler = handler;
        mWhat = i2;
        if (getRadioProxy(i, null) != null) {
            Elog.d(TAG, "Set AospRadioIndication succeed");
        } else {
            Elog.e(TAG, "AospRadioProxy is null");
        }
    }

    public static void setRadioResponseAosp(int i, Handler handler, int i2, boolean z) {
        mIsRadioResponseListen = z;
        mHandler = handler;
        mWhat = i2;
        if (getRadioProxy(i, null) == null) {
            Elog.e(TAG, "AospRadioProxy is null");
            return;
        }
        Elog.d(TAG, "Set AospRadioIndication succeed: " + i + ", " + z);
    }
}
