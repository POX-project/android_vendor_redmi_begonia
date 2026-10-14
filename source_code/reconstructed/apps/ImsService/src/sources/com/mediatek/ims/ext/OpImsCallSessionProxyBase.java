package com.mediatek.ims.ext;

import android.content.Context;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Message;
import android.telephony.ims.ImsReasonInfo;
import com.mediatek.ims.SipMessage;
import com.mediatek.ims.internal.IMtkImsCallSession;

/* JADX INFO: loaded from: classes.dex */
public class OpImsCallSessionProxyBase implements OpImsCallSessionProxy {
    @Override // com.mediatek.ims.ext.OpImsCallSessionProxy
    public void broadcastForNotRingingMtIfRequired(boolean z, int i, int i2, String str, Context context) {
    }

    @Override // com.mediatek.ims.ext.OpImsCallSessionProxy
    public void cancelDeviceSwitch(Object obj) {
    }

    @Override // com.mediatek.ims.ext.OpImsCallSessionProxy
    public void deviceSwitch(Object obj, String str, String str2, Message message) {
    }

    @Override // com.mediatek.ims.ext.OpImsCallSessionProxy
    public ImsReasonInfo getImsReasonInfo(SipMessage sipMessage) {
        return null;
    }

    @Override // com.mediatek.ims.ext.OpImsCallSessionProxy
    public boolean handleCallStartFailed(IMtkImsCallSession iMtkImsCallSession, Object obj, boolean z) {
        return false;
    }

    @Override // com.mediatek.ims.ext.OpImsCallSessionProxy
    public void handleDeviceSwitchResponse(IMtkImsCallSession iMtkImsCallSession, AsyncResult asyncResult) {
    }

    @Override // com.mediatek.ims.ext.OpImsCallSessionProxy
    public boolean handleDeviceSwitchResult(String str, IMtkImsCallSession iMtkImsCallSession, AsyncResult asyncResult) {
        return false;
    }

    @Override // com.mediatek.ims.ext.OpImsCallSessionProxy
    public boolean handleHangup() {
        return false;
    }

    @Override // com.mediatek.ims.ext.OpImsCallSessionProxy
    public boolean isDeviceSwitching() {
        return false;
    }

    @Override // com.mediatek.ims.ext.OpImsCallSessionProxy
    public boolean isValidVtDialString(String str) {
        return true;
    }

    @Override // com.mediatek.ims.ext.OpImsCallSessionProxy
    public String normalizeVtDialString(String str) {
        return str;
    }

    @Override // com.mediatek.ims.ext.OpImsCallSessionProxy
    public void sendCallEventWithRat(Bundle bundle) {
    }
}
