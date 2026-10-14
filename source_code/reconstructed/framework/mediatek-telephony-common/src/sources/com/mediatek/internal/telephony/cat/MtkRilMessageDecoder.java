package com.mediatek.internal.telephony.cat;

import android.content.Context;
import android.os.Handler;
import com.android.internal.telephony.cat.BerTlv;
import com.android.internal.telephony.cat.ResultCode;
import com.android.internal.telephony.cat.ResultException;
import com.android.internal.telephony.cat.RilMessage;
import com.android.internal.telephony.cat.RilMessageDecoder;
import com.android.internal.telephony.uicc.IccFileHandler;
import com.android.internal.telephony.uicc.IccUtils;

/* JADX INFO: loaded from: classes.dex */
public class MtkRilMessageDecoder extends RilMessageDecoder {
    private int mSlotId;

    public MtkRilMessageDecoder() {
    }

    public MtkRilMessageDecoder(Handler handler, IccFileHandler iccFileHandler, Context context, int i) {
        super(handler, iccFileHandler, context);
        this.mSlotId = i;
        MtkCatLog.d(this, "mCaller is " + this.mCaller.getClass().getName());
    }

    public boolean decodeMessageParams(RilMessage rilMessage) {
        boolean z;
        MtkCatLog.d(this, "decodeMessageParams");
        this.mCurrentRilMessage = rilMessage;
        int i = rilMessage.mId;
        if (i != 1) {
            if (i != 2 && i != 3) {
                if (i != 4) {
                    if (i != 5) {
                        return false;
                    }
                }
            }
            try {
                byte[] bArrHexStringToBytes = IccUtils.hexStringToBytes((String) rilMessage.mData);
                try {
                    if (this.mCmdParamsFactory != null) {
                        this.mCmdParamsFactory.make(BerTlv.decode(bArrHexStringToBytes));
                        z = true;
                    } else {
                        z = false;
                    }
                    return z;
                } catch (ResultException e) {
                    MtkCatLog.d(this, "decodeMessageParams: caught ResultException e=" + e);
                    this.mCurrentRilMessage.mId = 1;
                    this.mCurrentRilMessage.mResCode = e.result();
                    sendCmdForExecution(this.mCurrentRilMessage);
                    return false;
                }
            } catch (Exception e2) {
                MtkCatLog.d(this, "decodeMessageParams dropping zombie messages");
                return false;
            }
        }
        this.mCurrentRilMessage.mResCode = ResultCode.OK;
        sendCmdForExecution(this.mCurrentRilMessage);
        return false;
    }

    public void dispose() {
        quitNow();
    }

    public int getSlotId() {
        return this.mSlotId;
    }

    protected void onQuitting() {
        this.mCmdParamsFactory.dispose();
        this.mCmdParamsFactory = null;
        this.mCurrentRilMessage = null;
        this.mCaller = null;
        if (mInstance != null) {
            if (mInstance[this.mSlotId] != null) {
                mInstance[this.mSlotId] = null;
            }
            int i = 0;
            while (i < mSimCount && mInstance[i] == null) {
                i++;
            }
            if (i == mSimCount) {
                mInstance = null;
            }
        }
    }

    protected void sendCmdForExecution(RilMessage rilMessage) {
        MtkCatLog.d(this, "sendCmdForExecution");
        if (rilMessage instanceof MtkRilMessage) {
            this.mCaller.obtainMessage(10, new MtkRilMessage((MtkRilMessage) rilMessage)).sendToTarget();
        } else {
            super.sendCmdForExecution(rilMessage);
        }
    }
}
