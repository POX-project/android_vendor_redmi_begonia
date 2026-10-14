package com.mediatek.internal.telephony.cat;

import android.os.AsyncResult;
import android.os.Looper;
import android.os.Message;
import com.android.internal.telephony.HexDump;
import com.android.internal.telephony.cat.IconLoader;
import com.android.internal.telephony.uicc.IccFileHandler;

/* JADX INFO: loaded from: classes.dex */
public class MtkIconLoader extends IconLoader {
    private static final String TAG = "MtkIconLoader";

    public MtkIconLoader(Looper looper, IccFileHandler iccFileHandler) {
        super(looper, iccFileHandler);
    }

    public void handleMessage(Message message) {
        try {
            int i = message.what;
            if (i == 1) {
                MtkCatLog.d(TAG, "load EFimg done");
                if (message.obj == null) {
                    MtkCatLog.e(TAG, "msg.obj is null.");
                    return;
                }
                MtkCatLog.d(TAG, "msg.obj is " + message.obj.getClass().getName());
                AsyncResult asyncResult = (AsyncResult) message.obj;
                MtkCatLog.d(TAG, "EFimg raw data: " + HexDump.toHexString((byte[]) asyncResult.result));
                if (!handleImageDescriptor((byte[]) asyncResult.result)) {
                    throw new Exception("Unable to parse image descriptor");
                }
                readIconData();
                return;
            }
            if (i != 2) {
                super.handleMessage(message);
                return;
            }
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
        } catch (Exception e) {
            MtkCatLog.d(this, "Icon load failed");
            e.printStackTrace();
            postIcon();
        }
    }
}
