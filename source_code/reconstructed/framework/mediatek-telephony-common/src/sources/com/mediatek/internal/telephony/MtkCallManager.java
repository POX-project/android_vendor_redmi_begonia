package com.mediatek.internal.telephony;

import android.os.AsyncResult;
import android.os.Message;
import android.telephony.Rlog;
import com.android.internal.telephony.CallManager;
import com.android.internal.telephony.Connection;
import com.android.internal.telephony.Phone;
import com.mediatek.internal.telephony.uicc.MtkSIMRecords;

/* JADX INFO: loaded from: classes.dex */
public class MtkCallManager extends CallManager {

    public class MtkCallManagerHandler extends CallManager.CallManagerHandler {
        public MtkCallManagerHandler() {
            super(MtkCallManager.this);
        }

        public void handleMessage(Message message) {
            if (message.what != 102) {
                super.handleMessage(message);
                return;
            }
            if (MtkCallManager.this.getActiveFgCallState(((Connection) ((AsyncResult) message.obj).result).getCall().getPhone().getSubId()).isDialing() || MtkCallManager.this.hasMoreThanOneRingingCall()) {
                return;
            }
            MtkCallManager.this.mNewRingingConnectionRegistrants.notifyRegistrants((AsyncResult) message.obj);
        }
    }

    protected void registerForPhoneStates(Phone phone) {
        if (((CallManager.CallManagerHandler) this.mHandlerMap.get(phone)) != null) {
            Rlog.d("CallManager", "This phone has already been registered.");
            return;
        }
        CallManager.CallManagerHandler mtkCallManagerHandler = new MtkCallManagerHandler();
        this.mHandlerMap.put(phone, mtkCallManagerHandler);
        phone.registerForPreciseCallStateChanged(mtkCallManagerHandler, 101, this.mRegistrantidentifier);
        phone.registerForDisconnect(mtkCallManagerHandler, 100, this.mRegistrantidentifier);
        phone.registerForNewRingingConnection(mtkCallManagerHandler, 102, this.mRegistrantidentifier);
        phone.registerForUnknownConnection(mtkCallManagerHandler, MtkSIMRecords.EVENT_OPL5G, this.mRegistrantidentifier);
        phone.registerForIncomingRing(mtkCallManagerHandler, 104, this.mRegistrantidentifier);
        phone.registerForRingbackTone(mtkCallManagerHandler, 105, this.mRegistrantidentifier);
        phone.registerForInCallVoicePrivacyOn(mtkCallManagerHandler, 106, this.mRegistrantidentifier);
        phone.registerForInCallVoicePrivacyOff(mtkCallManagerHandler, 107, this.mRegistrantidentifier);
        phone.registerForDisplayInfo(mtkCallManagerHandler, 109, this.mRegistrantidentifier);
        phone.registerForSignalInfo(mtkCallManagerHandler, 110, this.mRegistrantidentifier);
        phone.registerForResendIncallMute(mtkCallManagerHandler, 112, this.mRegistrantidentifier);
        phone.registerForMmiInitiate(mtkCallManagerHandler, 113, this.mRegistrantidentifier);
        phone.registerForMmiComplete(mtkCallManagerHandler, 114, this.mRegistrantidentifier);
        phone.registerForSuppServiceFailed(mtkCallManagerHandler, 117, this.mRegistrantidentifier);
        phone.registerForServiceStateChanged(mtkCallManagerHandler, 118, this.mRegistrantidentifier);
        phone.setOnPostDialCharacter(mtkCallManagerHandler, 119, (Object) null);
        phone.registerForCdmaOtaStatusChange(mtkCallManagerHandler, MtkGsmCdmaPhone.EVENT_UNSOL_RADIO_CAPABILITY_CHANGED, (Object) null);
        phone.registerForSubscriptionInfoReady(mtkCallManagerHandler, 116, (Object) null);
        phone.registerForCallWaiting(mtkCallManagerHandler, 108, (Object) null);
        phone.registerForEcmTimerReset(mtkCallManagerHandler, 115, (Object) null);
        phone.registerForOnHoldTone(mtkCallManagerHandler, 120, (Object) null);
        phone.registerForSuppServiceFailed(mtkCallManagerHandler, 117, (Object) null);
        phone.registerForTtyModeReceived(mtkCallManagerHandler, 122, (Object) null);
    }
}
