package com.mediatek.ims.ext;

import android.os.Message;
import android.telephony.ims.ImsCallProfile;
import com.mediatek.ims.SipMessage;

/* JADX INFO: loaded from: classes.dex */
public class DigitsUtilBase implements DigitsUtil {
    @Override // com.mediatek.ims.ext.DigitsUtil
    public void cancelUssiFrom(Object obj, ImsCallProfile imsCallProfile, Message message) {
    }

    @Override // com.mediatek.ims.ext.DigitsUtil
    public boolean hasDialFrom(ImsCallProfile imsCallProfile) {
        return false;
    }

    @Override // com.mediatek.ims.ext.DigitsUtil
    public boolean isRejectedByOthers(SipMessage sipMessage) {
        return false;
    }

    @Override // com.mediatek.ims.ext.DigitsUtil
    public void putMtToNumber(String str, ImsCallProfile imsCallProfile) {
    }

    @Override // com.mediatek.ims.ext.DigitsUtil
    public void sendUssiFrom(Object obj, ImsCallProfile imsCallProfile, int i, String str, Message message) {
    }

    @Override // com.mediatek.ims.ext.DigitsUtil
    public void startFrom(String str, ImsCallProfile imsCallProfile, int i, boolean z, Object obj, Message message) {
    }

    @Override // com.mediatek.ims.ext.DigitsUtil
    public void updateCallExtras(ImsCallProfile imsCallProfile, ImsCallProfile imsCallProfile2) {
    }
}
