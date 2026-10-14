package com.mediatek.internal.telephony.cat;

import android.content.Context;
import android.os.Handler;
import android.os.Message;
import android.telephony.TelephonyManager;
import com.android.internal.telephony.State;
import com.android.internal.telephony.StateMachine;
import com.android.internal.telephony.cat.BerTlv;
import com.android.internal.telephony.cat.CommandParams;
import com.android.internal.telephony.cat.ResultCode;
import com.android.internal.telephony.cat.ResultException;
import com.android.internal.telephony.uicc.IccFileHandler;
import com.android.internal.telephony.uicc.IccUtils;

/* JADX INFO: loaded from: classes.dex */
class BipRilMessageDecoder extends StateMachine {
    private static final int CMD_PARAMS_READY = 2;
    private static final int CMD_START = 1;
    private BipCommandParamsFactory mBipCmdParamsFactory;
    private Handler mCaller;
    private MtkRilMessage mCurrentRilMessage;
    private int mSlotId;
    private StateCmdParamsReady mStateCmdParamsReady;
    private StateStart mStateStart;
    private static int mSimCount = 0;
    private static BipRilMessageDecoder[] mInstance = null;

    private class StateCmdParamsReady extends State {
        private StateCmdParamsReady() {
        }

        public boolean processMessage(Message message) {
            if (message.what != 2) {
                MtkCatLog.d(this, "StateCmdParamsReady expecting CMD_PARAMS_READY=2 got " + message.what);
                BipRilMessageDecoder.this.deferMessage(message);
                return true;
            }
            BipRilMessageDecoder.this.mCurrentRilMessage.mResCode = ResultCode.fromInt(message.arg1);
            BipRilMessageDecoder.this.mCurrentRilMessage.mData = message.obj;
            BipRilMessageDecoder bipRilMessageDecoder = BipRilMessageDecoder.this;
            bipRilMessageDecoder.sendCmdForExecution(bipRilMessageDecoder.mCurrentRilMessage);
            BipRilMessageDecoder bipRilMessageDecoder2 = BipRilMessageDecoder.this;
            bipRilMessageDecoder2.transitionTo(bipRilMessageDecoder2.mStateStart);
            return true;
        }
    }

    private class StateStart extends State {
        private StateStart() {
        }

        public boolean processMessage(Message message) {
            if (message.what != 1) {
                MtkCatLog.d(this, "StateStart unexpected expecting START=1 got " + message.what);
            } else if (BipRilMessageDecoder.this.decodeMessageParams((MtkRilMessage) message.obj)) {
                BipRilMessageDecoder bipRilMessageDecoder = BipRilMessageDecoder.this;
                bipRilMessageDecoder.transitionTo(bipRilMessageDecoder.mStateCmdParamsReady);
            }
            return true;
        }
    }

    private BipRilMessageDecoder() {
        super("BipRilMessageDecoder");
        this.mBipCmdParamsFactory = null;
        this.mCurrentRilMessage = null;
        this.mCaller = null;
        this.mStateStart = new StateStart();
        this.mStateCmdParamsReady = new StateCmdParamsReady();
    }

    private BipRilMessageDecoder(Handler handler, IccFileHandler iccFileHandler, Context context, int i) {
        super("BipRilMessageDecoder");
        this.mBipCmdParamsFactory = null;
        this.mCurrentRilMessage = null;
        this.mCaller = null;
        this.mStateStart = new StateStart();
        this.mStateCmdParamsReady = new StateCmdParamsReady();
        addState(this.mStateStart);
        addState(this.mStateCmdParamsReady);
        setInitialState(this.mStateStart);
        this.mCaller = handler;
        this.mSlotId = i;
        MtkCatLog.d(this, "mCaller is " + this.mCaller.getClass().getName());
        this.mBipCmdParamsFactory = BipCommandParamsFactory.getInstance(this, iccFileHandler, context);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean decodeMessageParams(MtkRilMessage mtkRilMessage) {
        this.mCurrentRilMessage = mtkRilMessage;
        int i = mtkRilMessage.mId;
        if (i != 18 && i != 19) {
            return false;
        }
        MtkCatLog.d(this, "decodeMessageParams raw: " + ((String) mtkRilMessage.mData));
        try {
            try {
                this.mBipCmdParamsFactory.make(BerTlv.decode(IccUtils.hexStringToBytes((String) mtkRilMessage.mData)));
                return true;
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

    public static synchronized BipRilMessageDecoder getInstance(Handler handler, IccFileHandler iccFileHandler, Context context, int i) {
        if (mInstance == null) {
            int simCount = TelephonyManager.getDefault().getSimCount();
            mSimCount = simCount;
            mInstance = new BipRilMessageDecoder[simCount];
            for (int i2 = 0; i2 < mSimCount; i2++) {
                mInstance[i2] = null;
            }
        }
        if (i != -1 && i < mSimCount) {
            if (mInstance[i] == null) {
                mInstance[i] = new BipRilMessageDecoder(handler, iccFileHandler, context, i);
            }
            return mInstance[i];
        }
        MtkCatLog.d("BipRilMessageDecoder", "invaild slot id: " + i);
        return null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendCmdForExecution(MtkRilMessage mtkRilMessage) {
        this.mCaller.obtainMessage(20, new MtkRilMessage(mtkRilMessage)).sendToTarget();
    }

    public void dispose() {
        this.mStateStart = null;
        this.mStateCmdParamsReady = null;
        this.mBipCmdParamsFactory.dispose();
        this.mBipCmdParamsFactory = null;
        this.mCurrentRilMessage = null;
        this.mCaller = null;
        BipRilMessageDecoder[] bipRilMessageDecoderArr = mInstance;
        if (bipRilMessageDecoderArr != null) {
            int i = this.mSlotId;
            if (bipRilMessageDecoderArr[i] != null) {
                bipRilMessageDecoderArr[i].quit();
                mInstance[this.mSlotId] = null;
            }
            int i2 = 0;
            while (i2 < mSimCount && mInstance[i2] == null) {
                i2++;
            }
            if (i2 == mSimCount) {
                mInstance = null;
            }
        }
    }

    public int getSlotId() {
        return this.mSlotId;
    }

    public void sendMsgParamsDecoded(ResultCode resultCode, CommandParams commandParams) {
        Message messageObtainMessage = obtainMessage(2);
        messageObtainMessage.arg1 = resultCode.value();
        messageObtainMessage.obj = commandParams;
        sendMessage(messageObtainMessage);
    }

    public void sendStartDecodingMessageParams(MtkRilMessage mtkRilMessage) {
        Message messageObtainMessage = obtainMessage(1);
        messageObtainMessage.obj = mtkRilMessage;
        sendMessage(messageObtainMessage);
    }
}
