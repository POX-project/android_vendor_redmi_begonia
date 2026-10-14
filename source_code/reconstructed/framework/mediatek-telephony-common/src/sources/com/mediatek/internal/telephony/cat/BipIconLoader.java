package com.mediatek.internal.telephony.cat;

import android.graphics.Bitmap;
import android.graphics.Color;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.telephony.TelephonyManager;
import com.android.internal.telephony.HexDump;
import com.android.internal.telephony.cat.ImageDescriptor;
import com.android.internal.telephony.uicc.IccFileHandler;
import com.mediatek.internal.telephony.ppl.PplMessageManager;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
class BipIconLoader extends Handler {
    private static final int CLUT_ENTRY_SIZE = 3;
    private static final int CLUT_LOCATION_OFFSET = 4;
    private static final int EVENT_READ_CLUT_DONE = 3;
    private static final int EVENT_READ_EF_IMG_RECOED_DONE = 1;
    private static final int EVENT_READ_ICON_DONE = 2;
    private static final int STATE_MULTI_ICONS = 2;
    private static final int STATE_SINGLE_ICON = 1;
    private static final String TAG = "Stk-BipIL";
    private Bitmap mCurrentIcon;
    private int mCurrentRecordIndex;
    private Message mEndMsg;
    private byte[] mIconData;
    private Bitmap[] mIcons;
    private HashMap<Integer, Bitmap> mIconsCache;
    private ImageDescriptor mId;
    private int mRecordNumber;
    private int[] mRecordNumbers;
    private IccFileHandler mSimFH;
    private int mSlotId;
    private int mState;
    private static BipIconLoader[] sLoader = null;
    private static HandlerThread[] sThread = null;
    private static int sSimCount = 0;

    private BipIconLoader(Looper looper, IccFileHandler iccFileHandler, int i) {
        super(looper);
        this.mState = 1;
        this.mId = null;
        this.mCurrentIcon = null;
        this.mSimFH = null;
        this.mEndMsg = null;
        this.mIconData = null;
        this.mRecordNumbers = null;
        this.mCurrentRecordIndex = 0;
        this.mIcons = null;
        this.mIconsCache = null;
        this.mSimFH = iccFileHandler;
        this.mSlotId = i;
        this.mIconsCache = new HashMap<>(50);
    }

    private static int bitToBnW(int i) {
        return i == 1 ? -1 : -16777216;
    }

    static BipIconLoader getInstance(Handler handler, IccFileHandler iccFileHandler, int i) {
        BipIconLoader[] bipIconLoaderArr = sLoader;
        if (bipIconLoaderArr != null && bipIconLoaderArr[i] != null) {
            return bipIconLoaderArr[i];
        }
        if (sThread == null) {
            int simCount = TelephonyManager.getDefault().getSimCount();
            sSimCount = simCount;
            sThread = new HandlerThread[simCount];
            for (int i2 = 0; i2 < sSimCount; i2++) {
                sThread[i2] = null;
            }
        }
        if (sLoader == null) {
            int simCount2 = TelephonyManager.getDefault().getSimCount();
            sSimCount = simCount2;
            sLoader = new BipIconLoader[simCount2];
            for (int i3 = 0; i3 < sSimCount; i3++) {
                sLoader[i3] = null;
            }
        }
        if (iccFileHandler != null) {
            HandlerThread[] handlerThreadArr = sThread;
            if (handlerThreadArr[i] == null) {
                handlerThreadArr[i] = new HandlerThread("BIP Icon Loader");
                sThread[i].start();
            }
            if (sLoader[i] != null || sThread[i].getLooper() == null) {
                return null;
            }
            sLoader[i] = new BipIconLoader(sThread[i].getLooper(), iccFileHandler, i);
            return sLoader[i];
        }
        return null;
    }

    private static int getMask(int i) {
        switch (i) {
            case 1:
                return 1;
            case 2:
                return 3;
            case 3:
                return 7;
            case 4:
                return 15;
            case 5:
                return 31;
            case 6:
                return 63;
            case 7:
                return 127;
            case 8:
                return 255;
            default:
                return 0;
        }
    }

    private boolean handleImageDescriptor(byte[] bArr) {
        MtkCatLog.d(TAG, "call handleImageDescriptor");
        ImageDescriptor imageDescriptor = ImageDescriptor.parse(bArr, 1);
        this.mId = imageDescriptor;
        if (imageDescriptor == null) {
            MtkCatLog.d(TAG, "fail to parse image raw data");
            return false;
        }
        MtkCatLog.d(TAG, "success to parse image raw data");
        return true;
    }

    public static Bitmap parseToBnW(byte[] bArr, int i) {
        int i2 = 0 + 1;
        int i3 = bArr[0] & 255;
        int i4 = i2 + 1;
        int i5 = bArr[i2] & 255;
        int i6 = i3 * i5;
        int[] iArr = new int[i6];
        int i7 = 0;
        int i8 = 7;
        byte b = 0;
        while (i7 < i6) {
            if (i7 % 8 == 0) {
                i8 = 7;
                b = bArr[i4];
                i4++;
            }
            iArr[i7] = bitToBnW((b >> i8) & 1);
            i7++;
            i8--;
        }
        if (i7 != i6) {
            MtkCatLog.d("BipIconLoader", "parseToBnW; size error");
        }
        return Bitmap.createBitmap(iArr, i3, i5, Bitmap.Config.ARGB_8888);
    }

    public static Bitmap parseToRGB(byte[] bArr, int i, boolean z, byte[] bArr2) {
        int i2 = 0 + 1;
        int i3 = bArr[0] & 255;
        int i4 = i2 + 1;
        int i5 = bArr[i2] & 255;
        int i6 = i4 + 1;
        int i7 = bArr[i4] & PplMessageManager.Type.INVALID;
        int i8 = i6 + 1;
        int i9 = bArr[i6] & PplMessageManager.Type.INVALID;
        if (true == z) {
            bArr2[i9 - 1] = 0;
        }
        int i10 = i3 * i5;
        int[] iArr = new int[i10];
        int i11 = 0;
        int i12 = 8 - i7;
        int i13 = i12;
        int i14 = 6 + 1;
        byte b = bArr[6];
        int mask = getMask(i7);
        boolean z2 = 8 % i7 == 0;
        while (i11 < i10) {
            if (i13 < 0) {
                int i15 = i14 + 1;
                b = bArr[i14];
                i13 = z2 ? i12 : i13 * (-1);
                i14 = i15;
            }
            int i16 = ((b >> i13) & mask) * 3;
            iArr[i11] = Color.rgb((int) bArr2[i16], (int) bArr2[i16 + 1], (int) bArr2[i16 + 2]);
            i13 -= i7;
            i11++;
            i9 = i9;
            b = b;
            z2 = z2;
        }
        return Bitmap.createBitmap(iArr, i3, i5, Bitmap.Config.ARGB_8888);
    }

    private void postIcon() {
        int i = this.mState;
        if (i == 1) {
            this.mEndMsg.obj = this.mCurrentIcon;
            this.mEndMsg.sendToTarget();
        } else if (i == 2) {
            Bitmap[] bitmapArr = this.mIcons;
            int i2 = this.mCurrentRecordIndex;
            int i3 = i2 + 1;
            this.mCurrentRecordIndex = i3;
            bitmapArr[i2] = this.mCurrentIcon;
            int[] iArr = this.mRecordNumbers;
            if (i3 < iArr.length) {
                startLoadingIcon(iArr[i3]);
            } else {
                this.mEndMsg.obj = bitmapArr;
                this.mEndMsg.sendToTarget();
            }
        }
    }

    private void readClut() {
        int i = this.mIconData[3] * 3;
        Message messageObtainMessage = obtainMessage(3);
        IccFileHandler iccFileHandler = this.mSimFH;
        int i2 = this.mId.mImageId;
        byte[] bArr = this.mIconData;
        iccFileHandler.loadEFImgTransparent(i2, bArr[4], bArr[5], i, messageObtainMessage);
    }

    private void readIconData() {
        MtkCatLog.d(TAG, "call readIconData");
        this.mSimFH.loadEFImgTransparent(this.mId.mImageId, 0, 0, this.mId.mLength, obtainMessage(2));
    }

    private void readId() {
        MtkCatLog.d(TAG, "call readId");
        if (this.mRecordNumber < 0) {
            this.mCurrentIcon = null;
            postIcon();
        } else {
            this.mSimFH.loadEFImgLinearFixed(this.mRecordNumber, obtainMessage(1));
        }
    }

    private void startLoadingIcon(int i) {
        MtkCatLog.d(TAG, "call startLoadingIcon");
        this.mId = null;
        this.mIconData = null;
        this.mCurrentIcon = null;
        this.mRecordNumber = i;
        if (!this.mIconsCache.containsKey(Integer.valueOf(i))) {
            MtkCatLog.d(TAG, "to load icon from EFimg");
            readId();
            return;
        }
        MtkCatLog.d(TAG, "mIconsCache contains record " + i);
        this.mCurrentIcon = this.mIconsCache.get(Integer.valueOf(i));
        postIcon();
    }

    public void dispose() {
        HandlerThread[] handlerThreadArr;
        this.mSimFH = null;
        HandlerThread[] handlerThreadArr2 = sThread;
        if (handlerThreadArr2 != null) {
            int i = this.mSlotId;
            if (handlerThreadArr2[i] != null) {
                handlerThreadArr2[i].quit();
                sThread[this.mSlotId] = null;
            }
        }
        BipIconLoader[] bipIconLoaderArr = sLoader;
        if (bipIconLoaderArr != null) {
            int i2 = this.mSlotId;
            if (bipIconLoaderArr[i2] != null) {
                bipIconLoaderArr[i2] = null;
            }
        }
        int i3 = 0;
        while (i3 < sSimCount && ((handlerThreadArr = sThread) == null || handlerThreadArr[i3] == null)) {
            i3++;
        }
        if (i3 == sSimCount) {
            sThread = null;
            sLoader = null;
        }
        this.mIconsCache = null;
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        try {
            int i = message.what;
            if (i == 1) {
                MtkCatLog.d(TAG, "load EFimg done");
                if (message.obj == null) {
                    MtkCatLog.e(TAG, "msg.obj is null.");
                } else {
                    MtkCatLog.d(TAG, "msg.obj is " + message.obj.getClass().getName());
                    AsyncResult asyncResult = (AsyncResult) message.obj;
                    MtkCatLog.d(TAG, "EFimg raw data: " + HexDump.toHexString((byte[]) asyncResult.result));
                    if (!handleImageDescriptor((byte[]) asyncResult.result)) {
                        throw new Exception("Unable to parse image descriptor");
                    }
                    readIconData();
                }
            } else if (i == 2) {
                MtkCatLog.d(TAG, "load icon done");
                byte[] bArr = (byte[]) ((AsyncResult) message.obj).result;
                MtkCatLog.d(TAG, "icon raw data: " + HexDump.toHexString(bArr));
                MtkCatLog.d(TAG, "load icon CODING_SCHEME = " + this.mId.mCodingScheme);
                if (this.mId.mCodingScheme == 17) {
                    this.mCurrentIcon = parseToBnW(bArr, bArr.length);
                    this.mIconsCache.put(Integer.valueOf(this.mRecordNumber), this.mCurrentIcon);
                    postIcon();
                } else if (this.mId.mCodingScheme == 33) {
                    this.mIconData = bArr;
                    readClut();
                } else {
                    MtkCatLog.d(TAG, "else  /postIcon ");
                    postIcon();
                }
            } else if (i == 3) {
                MtkCatLog.d(TAG, "load clut done");
                this.mCurrentIcon = parseToRGB(this.mIconData, this.mIconData.length, false, (byte[]) ((AsyncResult) message.obj).result);
                this.mIconsCache.put(Integer.valueOf(this.mRecordNumber), this.mCurrentIcon);
                postIcon();
            }
        } catch (Exception e) {
            MtkCatLog.d(this, "Icon load failed");
            e.printStackTrace();
            postIcon();
        }
    }

    void loadIcon(int i, Message message) {
        if (message == null) {
            return;
        }
        this.mEndMsg = message;
        this.mState = 1;
        startLoadingIcon(i);
    }

    void loadIcons(int[] iArr, Message message) {
        if (iArr == null || iArr.length == 0 || message == null) {
            return;
        }
        this.mEndMsg = message;
        this.mIcons = new Bitmap[iArr.length];
        this.mRecordNumbers = iArr;
        this.mCurrentRecordIndex = 0;
        this.mState = 2;
        startLoadingIcon(iArr[0]);
    }
}
