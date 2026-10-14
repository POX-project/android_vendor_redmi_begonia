package com.mediatek.ims;

import android.content.Context;
import android.net.LocalSocket;
import android.os.Build;
import android.os.Handler;
import android.os.IHwBinder;
import android.os.Message;
import android.os.RemoteException;
import android.os.SystemProperties;
import android.telephony.TelephonyManager;
import android.util.Log;
import java.io.DataInputStream;
import java.io.OutputStream;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicLong;
import vendor.mediatek.hardware.imsa.V1_0.IImsa;
import vendor.mediatek.hardware.imsa.V1_0.IImsaIndication;

/* JADX INFO: loaded from: classes.dex */
public class ImsAdapter extends Handler {
    protected static final int IIMSA_GET_SERVICE_DELAY_MILLIS = 1000;
    private static final int IMSA_RETRY_SOCKET_TIME = 500;
    private static final int MSG_IMSA_EVENT_PROXY_DEAD = 3;
    private static final int MSG_IMSA_RETRY_CONNECT_SOCKET = 1;
    private static final int MSG_IMSA_RETRY_IMS_ENABLE = 2;
    private static final String MULTI_IMS_SUPPORT = "persist.vendor.mims_support";
    private static final String SOCKET_NAME1 = "volte_imsm";
    private static final String TAG = "[ImsAdapter]";
    private static ImsEventDispatcher mImsEventDispatcher;
    private static ImsAdapter mInstance;
    private static boolean[] misImsAdapterEnabled;
    private Context mContext;
    private VaSocketIO mIO;
    private static int mNumOfPhones = 0;
    private static boolean mImsServiceUp = false;
    private volatile IImsa mImsaProxy = null;
    private final ImsaProxyDeathRecipient mImsaProxyDeathRecipient = new ImsaProxyDeathRecipient();
    private final AtomicLong mImsaProxyCookie = new AtomicLong(0);
    private ImsaIndication mImsaIndication = new ImsaIndication();
    private boolean IS_USER_BUILD = "user".equals(Build.TYPE);
    private boolean IS_USERDEBUG_BUILD = "userdebug".equals(Build.TYPE);
    private boolean IS_ENG_BUILD = "eng".equals(Build.TYPE);
    private Object ImsEnabledThreadLock = new Object();

    public class ImsaIndication extends IImsaIndication.Stub {
        public ImsaIndication() {
        }

        private byte[] arrayListTobyte(ArrayList<Byte> arrayList, int i) {
            byte[] bArr = new byte[i];
            for (int i2 = 0; i2 < i; i2++) {
                bArr[i2] = arrayList.get(i2).byteValue();
            }
            Log.d("@M_[ImsAdapter]", "IMSA HIDL : arrayListTobyte, byteList = " + bArr);
            return bArr;
        }

        @Override // vendor.mediatek.hardware.imsa.V1_0.IImsaIndication
        public void readEvent(ArrayList<Byte> arrayList, int i, int i2) {
            int defaultVoltePhoneId;
            Log.d("@M_[ImsAdapter]", "readEvent : data = " + arrayList + ", request_id = " + i + ", length = " + i2);
            byte[] bArrArrayListTobyte = arrayListTobyte(arrayList, i2);
            if (SystemProperties.getInt(ImsAdapter.MULTI_IMS_SUPPORT, 1) > 1) {
                defaultVoltePhoneId = ((-16777216) & i) >> 24;
                Log.d("@M_[ImsAdapter]", "DUAL IMS Phone ID:" + defaultVoltePhoneId);
            } else {
                defaultVoltePhoneId = Util.getDefaultVoltePhoneId();
            }
            VaEvent vaEvent = new VaEvent(defaultVoltePhoneId, 16777215 & i, i2);
            vaEvent.putBytes(bArrArrayListTobyte);
            Message message = new Message();
            message.obj = vaEvent;
            ImsAdapter.mImsEventDispatcher.sendMessage(message);
        }
    }

    final class ImsaProxyDeathRecipient implements IHwBinder.DeathRecipient {
        ImsaProxyDeathRecipient() {
        }

        public void serviceDied(long j) {
            Log.d("@M_[ImsAdapter]", "IMSA HIDL serviceDied");
            ImsAdapter.mInstance.sendMessageDelayed(ImsAdapter.mInstance.obtainMessage(3, Long.valueOf(ImsAdapter.this.mImsaProxyCookie.incrementAndGet())), 1000L);
        }
    }

    public static class Util {
        public static int getDefaultVoltePhoneId() {
            int i = SystemProperties.getInt(ImsConstants.PROPERTY_CAPABILITY_SWITCH, 1) - 1;
            if (i < 0 || i >= TelephonyManager.getDefault().getPhoneCount()) {
                return -1;
            }
            return i;
        }
    }

    public static class VaEvent {
        public static final int DEFAULT_MAX_DATA_LENGTH = 40960;
        private byte[] data;
        private int data_len;
        private int event_max_data_len;
        private int mPhoneId;
        private int read_offset;
        private int request_id;

        public VaEvent(int i, int i2) {
            this(i, i2, DEFAULT_MAX_DATA_LENGTH);
        }

        public VaEvent(int i, int i2, int i3) {
            this.mPhoneId = -1;
            this.event_max_data_len = DEFAULT_MAX_DATA_LENGTH;
            this.mPhoneId = i;
            this.request_id = i2;
            this.event_max_data_len = i3;
            this.data = new byte[i3];
            this.data_len = 0;
            this.read_offset = 0;
        }

        public int getByte() {
            int i;
            synchronized (this) {
                i = this.data[this.read_offset] & 255;
                this.read_offset++;
            }
            return i;
        }

        public byte[] getBytes(int i) {
            if (i > this.data_len - this.read_offset) {
                return null;
            }
            byte[] bArr = new byte[i];
            synchronized (this) {
                for (int i2 = 0; i2 < i; i2++) {
                    bArr[i2] = this.data[this.read_offset];
                    this.read_offset++;
                }
            }
            return bArr;
        }

        public byte[] getData() {
            return this.data;
        }

        public int getDataLen() {
            return this.data_len;
        }

        public double getDouble() {
            byte[] bArr = this.data;
            int i = this.read_offset;
            byte[] bArr2 = {bArr[i + 7], bArr[i + 6], bArr[i + 5], bArr[i + 4], bArr[i + 3], bArr[i + 2], bArr[i + 1], bArr[i]};
            this.read_offset = i + 8;
            return ByteBuffer.wrap(bArr2).getDouble();
        }

        public int getInt() {
            int i;
            synchronized (this) {
                i = ((this.data[this.read_offset + 3] & 255) << 24) | ((this.data[this.read_offset + 2] & 255) << 16) | ((this.data[this.read_offset + 1] & 255) << 8) | (this.data[this.read_offset] & 255);
                this.read_offset += 4;
            }
            return i;
        }

        public int getPhoneId() {
            return this.mPhoneId;
        }

        public int getRequestID() {
            return this.request_id;
        }

        public int getShort() {
            int i;
            synchronized (this) {
                i = ((this.data[this.read_offset + 1] & 255) << 8) | (this.data[this.read_offset] & 255);
                this.read_offset += 2;
            }
            return i;
        }

        public String getString(int i) {
            byte[] bArr = new byte[i];
            synchronized (this) {
                System.arraycopy(this.data, this.read_offset, bArr, 0, i);
                this.read_offset += i;
            }
            return new String(bArr).trim();
        }

        public int putByte(int i) {
            if (this.data_len > this.event_max_data_len - 1) {
                return -1;
            }
            synchronized (this) {
                this.data[this.data_len] = (byte) (i & 255);
                this.data_len++;
            }
            return 0;
        }

        public int putBytes(byte[] bArr) {
            int length = bArr.length;
            if (length > this.event_max_data_len) {
                return -1;
            }
            synchronized (this) {
                System.arraycopy(bArr, 0, this.data, this.data_len, length);
                this.data_len += length;
            }
            return 0;
        }

        public int putDouble(double d) {
            if (this.data_len > this.event_max_data_len - 8) {
                return -1;
            }
            ByteBuffer byteBufferAllocate = ByteBuffer.allocate(8);
            byteBufferAllocate.putDouble(d);
            synchronized (this) {
                byte[] bArr = this.data;
                int i = this.data_len;
                this.data_len = i + 1;
                bArr[i] = byteBufferAllocate.get(7);
                byte[] bArr2 = this.data;
                int i2 = this.data_len;
                this.data_len = i2 + 1;
                bArr2[i2] = byteBufferAllocate.get(6);
                byte[] bArr3 = this.data;
                int i3 = this.data_len;
                this.data_len = i3 + 1;
                bArr3[i3] = byteBufferAllocate.get(5);
                byte[] bArr4 = this.data;
                int i4 = this.data_len;
                this.data_len = i4 + 1;
                bArr4[i4] = byteBufferAllocate.get(4);
                byte[] bArr5 = this.data;
                int i5 = this.data_len;
                this.data_len = i5 + 1;
                bArr5[i5] = byteBufferAllocate.get(3);
                byte[] bArr6 = this.data;
                int i6 = this.data_len;
                this.data_len = i6 + 1;
                bArr6[i6] = byteBufferAllocate.get(2);
                byte[] bArr7 = this.data;
                int i7 = this.data_len;
                this.data_len = i7 + 1;
                bArr7[i7] = byteBufferAllocate.get(1);
                byte[] bArr8 = this.data;
                int i8 = this.data_len;
                this.data_len = i8 + 1;
                bArr8[i8] = byteBufferAllocate.get(0);
            }
            return 0;
        }

        public int putInt(int i) {
            if (this.data_len > this.event_max_data_len - 4) {
                return -1;
            }
            synchronized (this) {
                for (int i2 = 0; i2 < 4; i2++) {
                    this.data[this.data_len] = (byte) ((i >> (i2 * 8)) & 255);
                    this.data_len++;
                }
            }
            return 0;
        }

        public int putLong(long j) {
            if (this.data_len > this.event_max_data_len - 8) {
                return -1;
            }
            ByteBuffer byteBufferAllocate = ByteBuffer.allocate(8);
            byteBufferAllocate.putLong(j);
            synchronized (this) {
                byte[] bArr = this.data;
                int i = this.data_len;
                this.data_len = i + 1;
                bArr[i] = byteBufferAllocate.get(7);
                byte[] bArr2 = this.data;
                int i2 = this.data_len;
                this.data_len = i2 + 1;
                bArr2[i2] = byteBufferAllocate.get(6);
                byte[] bArr3 = this.data;
                int i3 = this.data_len;
                this.data_len = i3 + 1;
                bArr3[i3] = byteBufferAllocate.get(5);
                byte[] bArr4 = this.data;
                int i4 = this.data_len;
                this.data_len = i4 + 1;
                bArr4[i4] = byteBufferAllocate.get(4);
                byte[] bArr5 = this.data;
                int i5 = this.data_len;
                this.data_len = i5 + 1;
                bArr5[i5] = byteBufferAllocate.get(3);
                byte[] bArr6 = this.data;
                int i6 = this.data_len;
                this.data_len = i6 + 1;
                bArr6[i6] = byteBufferAllocate.get(2);
                byte[] bArr7 = this.data;
                int i7 = this.data_len;
                this.data_len = i7 + 1;
                bArr7[i7] = byteBufferAllocate.get(1);
                byte[] bArr8 = this.data;
                int i8 = this.data_len;
                this.data_len = i8 + 1;
                bArr8[i8] = byteBufferAllocate.get(0);
            }
            return 0;
        }

        public int putShort(int i) {
            if (this.data_len > this.event_max_data_len - 2) {
                return -1;
            }
            synchronized (this) {
                for (int i2 = 0; i2 < 2; i2++) {
                    this.data[this.data_len] = (byte) ((i >> (i2 * 8)) & 255);
                    this.data_len++;
                }
            }
            return 0;
        }

        public int putString(String str, int i) {
            if (this.data_len > this.event_max_data_len - i) {
                return -1;
            }
            synchronized (this) {
                byte[] bytes = str.getBytes();
                if (i < str.length()) {
                    System.arraycopy(bytes, 0, this.data, this.data_len, i);
                    this.data_len += i;
                } else {
                    int length = i - str.length();
                    System.arraycopy(bytes, 0, this.data, this.data_len, str.length());
                    this.data_len += str.length();
                    for (int i2 = 0; i2 < length; i2++) {
                        this.data[this.data_len] = 0;
                        this.data_len++;
                    }
                }
            }
            return 0;
        }
    }

    public class VaSocketIO extends Thread {
        private volatile IImsa mImsaProxy;
        private int mTyp = -1;
        private int mId = -1;
        private LocalSocket mSocket = null;
        private OutputStream mOut = null;
        private DataInputStream mDin = null;
        private int mPhoneId = -1;
        private byte[] buf = new byte[8];

        public VaSocketIO(IImsa iImsa) {
            this.mImsaProxy = null;
            Log.d("@M_[ImsAdapter]", "VaSocketIO(): Enter");
            this.mImsaProxy = iImsa;
        }

        private ArrayList<Byte> byteToArrayList(int i, byte[] bArr) {
            ArrayList<Byte> arrayList = new ArrayList<>();
            Log.d("@M_[ImsAdapter]", " byteToArrayList, value.length = " + bArr.length + ", value = " + bArr + ", length = " + i);
            for (int i2 = 0; i2 < i; i2++) {
                arrayList.add(Byte.valueOf(bArr[i2]));
            }
            return arrayList;
        }

        private void dumpEvent(VaEvent vaEvent) {
            Log.d("@M_[ImsAdapter]", "dumpEvent: phone_id:" + vaEvent.getPhoneId() + ",request_id:" + ImsAdapter.requestIdToString(vaEvent.getRequestID()) + ",data_len:" + vaEvent.getDataLen() + ",event:" + vaEvent.getData());
        }

        public void clearImsaProxy() {
            Log.d("@M_[ImsAdapter]", "VaSocketIO(): clearImsaProxy");
            this.mImsaProxy = null;
        }

        @Override // java.lang.Thread, java.lang.Runnable
        public void run() {
            Log.d("@M_[ImsAdapter]", "VaSocketIO(): Run");
        }

        public void updateImsaProxy(IImsa iImsa) {
            Log.d("@M_[ImsAdapter]", "VaSocketIO(): updateImsaProxy");
            this.mImsaProxy = iImsa;
        }

        public int writeEvent(VaEvent vaEvent) {
            Log.d("@M_[ImsAdapter]", "writeEvent Enter, phoneId = " + vaEvent.getPhoneId());
            int i = -1;
            try {
                synchronized (this) {
                    if (this.mImsaProxy == null) {
                        Log.d("@M_[ImsAdapter]", "mImsaProxy is null, HIDL is not setup");
                    } else if (vaEvent.getPhoneId() == -1) {
                        Log.d("@M_[ImsAdapter]", "writeEvent event phoneId mismatch, event skipped. (event requestId=" + vaEvent.getRequestID() + ", phoneId=" + vaEvent.getPhoneId() + ", socket phoneId=" + this.mPhoneId + ")");
                    } else {
                        int requestID = vaEvent.getRequestID();
                        dumpEvent(vaEvent);
                        if (SystemProperties.getInt(ImsAdapter.MULTI_IMS_SUPPORT, 1) > 1) {
                            requestID |= vaEvent.getPhoneId() << 24;
                            Log.d("@M_[ImsAdapter]", "DUAL IMS request ID:" + requestID);
                        }
                        this.mImsaProxy.writeEvent(requestID, vaEvent.getDataLen(), byteToArrayList(vaEvent.getDataLen(), vaEvent.getData()));
                        i = 0;
                    }
                }
                return i;
            } catch (Exception e) {
                e.printStackTrace();
                return -1;
            }
        }
    }

    public ImsAdapter(Context context) {
        this.mContext = context;
        if (mInstance == null) {
            mInstance = this;
        }
        Log.d("@M_[ImsAdapter]", "ImsAdapter(): ImsAdapter Enter");
        this.mIO = new VaSocketIO(getImsaProxy());
        mImsEventDispatcher = new ImsEventDispatcher(this.mContext, this.mIO);
        int phoneCount = TelephonyManager.getDefault().getPhoneCount();
        mNumOfPhones = phoneCount;
        misImsAdapterEnabled = new boolean[phoneCount];
        for (int i = 0; i < mNumOfPhones; i++) {
            misImsAdapterEnabled[i] = false;
        }
        this.mIO.start();
    }

    private void disableImsStack(int i) {
        this.mIO.writeEvent(new VaEvent(i, VaConstants.MSG_ID_IMS_DISABLE_IND));
    }

    private void enableImsStack(int i) {
        this.mIO.writeEvent(new VaEvent(i, VaConstants.MSG_ID_IMS_ENABLE_IND));
    }

    public static ImsAdapter getInstance() {
        return mInstance;
    }

    public static String requestIdToString(int i) {
        switch (i) {
            case VaConstants.MSG_ID_WRAP_IMSPA_IMSM_INFORMATION_IND /* 900001 */:
                return "MSG_ID_WRAP_IMSPA_IMSM_INFORMATION_IND";
            case VaConstants.MSG_ID_WRAP_IMSM_IMSPA_INFORMATION_REQ /* 900002 */:
                return "MSG_ID_WRAP_IMSM_IMSPA_INFORMATION_REQ";
            case VaConstants.MSG_ID_IMS_ENABLE_IND /* 900003 */:
                return "MSG_ID_IMS_ENABLE_IND";
            case VaConstants.MSG_ID_IMS_DISABLE_IND /* 900004 */:
                return "MSG_ID_IMS_DISABLE_IND";
            default:
                switch (i) {
                    case VaConstants.MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_REQ /* 900008 */:
                        return "MSG_ID_WRAP_IMSM_IMSPA_PDN_ACT_REQ";
                    case VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_ACT_ACK_RESP /* 900009 */:
                        return "MSG_ID_WRAP_IMSPA_IMSM_PDN_ACT_ACK_RESP";
                    case VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_ACT_REJ_RESP /* 900010 */:
                        return "MSG_ID_WRAP_IMSPA_IMSM_PDN_ACT_REJ_RESP";
                    case VaConstants.MSG_ID_WRAP_IMSM_IMSPA_PDN_DEACT_REQ /* 900011 */:
                        return "MSG_ID_WRAP_IMSM_IMSPA_PDN_DEACT_REQ";
                    case VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_DEACT_ACK_RESP /* 900012 */:
                        return "MSG_ID_WRAP_IMSPA_IMSM_PDN_DEACT_ACK_RESP";
                    case VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_DEACT_REJ_RESP /* 900013 */:
                        return "MSG_ID_WRAP_IMSPA_IMSM_PDN_DEACT_REJ_RESP";
                    case VaConstants.MSG_ID_WRAP_IMSPA_IMSM_PDN_DEACT_IND /* 900014 */:
                        return "MSG_ID_WRAP_IMSPA_IMSM_PDN_DEACT_IND";
                    default:
                        switch (i) {
                            case VaConstants.MSG_ID_NOTIFY_XUI_IND /* 900401 */:
                                return "MSG_ID_NOTIFY_XUI_IND";
                            case VaConstants.MSG_ID_NOTIFY_SS_PROGRESS_INDICATION /* 900402 */:
                                return "MSG_ID_NOTIFY_SS_PROGRESS_INDICATION";
                            case VaConstants.MSG_ID_REQUEST_PCSCF_DISCOVERY /* 900403 */:
                                return "MSG_ID_REQUEST_PCSCF_DISCOVERY";
                            case VaConstants.MSG_ID_RESPONSE_PCSCF_DISCOVERY /* 900404 */:
                                return "MSG_ID_RESPONSE_PCSCF_DISCOVERY";
                            case VaConstants.MSG_ID_REJECT_PCSCF_DISCOVERY /* 900405 */:
                                return "MSG_ID_REJECT_PCSCF_DISCOVERY";
                            default:
                                return Integer.toString(i);
                        }
                }
        }
    }

    private void resetProxyAndRequestList() {
        this.mImsaProxy = null;
        this.mIO.clearImsaProxy();
        this.mImsaProxyCookie.incrementAndGet();
    }

    public void ImsServiceUp() {
        mImsServiceUp = true;
        Log.d("@M_[ImsAdapter]", "ImsServiceUp, start to ACTION_IMS_SERVICE_UP intent");
    }

    public void disableImsAdapter(int i, boolean z) {
        Log.d("@M_[ImsAdapter]", "disableImsAdapter(): misImsAdapterEnabled[phoneId]=" + misImsAdapterEnabled[i] + ", isNormalDisable = " + z + ", phoneId = " + i);
        synchronized (this.ImsEnabledThreadLock) {
            if (misImsAdapterEnabled[i]) {
                misImsAdapterEnabled[i] = false;
                disableImsStack(i);
                VaEvent vaEvent = new VaEvent(i, VaConstants.MSG_ID_IMS_DISABLE_IND);
                Message message = new Message();
                message.obj = vaEvent;
                mImsEventDispatcher.sendMessage(message);
            }
        }
    }

    public void disableImsAdapterForAllPhone(boolean z) {
        if (SystemProperties.getInt(MULTI_IMS_SUPPORT, 1) == 1) {
            disableImsAdapter(Util.getDefaultVoltePhoneId(), z);
            return;
        }
        for (int i = 0; i < mNumOfPhones; i++) {
            disableImsAdapter(i, z);
        }
    }

    public void enableImsAdapter(int i) {
        Log.d("@M_[ImsAdapter]", "enableImsAdapter: misImsAdapterEnabled[phoneId]=" + misImsAdapterEnabled[i] + ", phoneId = " + i);
        synchronized (this.ImsEnabledThreadLock) {
            if (!misImsAdapterEnabled[i]) {
                if (getImsaProxy() != null) {
                    Log.d("@M_[ImsAdapter]", "enalbeImsAdapter(): mImsaProxy success");
                    VaEvent vaEvent = new VaEvent(i, VaConstants.MSG_ID_IMS_ENABLE_IND);
                    Message message = new Message();
                    message.obj = vaEvent;
                    mImsEventDispatcher.sendMessage(message);
                    misImsAdapterEnabled[i] = true;
                    enableImsStack(i);
                } else {
                    Log.d("@M_[ImsAdapter]", "enableImsAdapter(): mImsaProxy create fail");
                }
            }
        }
    }

    public boolean getImsAdapterEnable() {
        int i = 0;
        while (true) {
            boolean[] zArr = misImsAdapterEnabled;
            if (i >= zArr.length) {
                return false;
            }
            if (zArr[i]) {
                return true;
            }
            i++;
        }
    }

    public boolean getImsServiceUp() {
        return mImsServiceUp;
    }

    public IImsa getImsaProxy() {
        if (this.mImsaProxy != null) {
            return this.mImsaProxy;
        }
        try {
            this.mImsaProxy = IImsa.getService("imsa");
            Log.d("@M_[ImsAdapter]", "IImsa.getService");
            if (this.mImsaProxy != null) {
                this.mImsaProxy.linkToDeath(this.mImsaProxyDeathRecipient, this.mImsaProxyCookie.incrementAndGet());
                Log.d("@M_[ImsAdapter]", "setResponseFunctions");
                this.mImsaProxy.setResponseFunctions(this.mImsaIndication);
            } else {
                Log.d("@M_[ImsAdapter]", "getImsaProxy: mImsaProxy == null");
            }
        } catch (RemoteException | RuntimeException e) {
            this.mImsaProxy = null;
            Log.d("@M_[ImsAdapter]", "ImsaProxy getService/setResponseFunctions: " + e);
        }
        if (this.mImsaProxy == null) {
            sendMessageDelayed(obtainMessage(3, Long.valueOf(this.mImsaProxyCookie.incrementAndGet())), 1000L);
        }
        return this.mImsaProxy;
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        int i = message.what;
        if (i == 2) {
            Log.d("@M_[ImsAdapter]", "RETRY_IMS_ENABLE, phoneId:" + ((Integer) message.obj).intValue());
            enableImsAdapter(((Integer) message.obj).intValue());
            return;
        }
        if (i != 3) {
            Log.d("@M_[ImsAdapter]", "handleMessage receive unsupported message: " + message.what);
            return;
        }
        Log.d("@M_[ImsAdapter]", "MSG_IMSA_EVENT_PROXY_DEAD");
        if (((Long) message.obj).longValue() == this.mImsaProxyCookie.get()) {
            resetProxyAndRequestList();
            getImsaProxy();
            if (this.mImsaProxy != null) {
                this.mIO.updateImsaProxy(this.mImsaProxy);
            }
        }
    }

    public void sendTestEvent(VaEvent vaEvent) {
        mImsEventDispatcher.dispatchCallback(vaEvent);
    }
}
