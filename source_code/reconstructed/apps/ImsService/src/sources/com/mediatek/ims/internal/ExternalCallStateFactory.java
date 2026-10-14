package com.mediatek.ims.internal;

import android.net.Uri;
import android.telephony.ims.ImsExternalCallState;
import android.text.TextUtils;
import java.util.LinkedList;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class ExternalCallStateFactory {
    private static ExternalCallStateFactory sInstance;

    private Uri getAddress(DialogInfo.Dialog dialog) {
        if (dialog == null) {
            return Uri.parse("");
        }
        String targetUri = dialog.getTargetUri();
        return !TextUtils.isEmpty(targetUri) ? Uri.parse(targetUri) : Uri.parse(dialog.getIdentity());
    }

    private int getCallState(DialogInfo.Dialog dialog) {
        return (dialog != null && "confirmed".equalsIgnoreCase(dialog.getState())) ? 1 : 2;
    }

    private int getCallType(DialogInfo.Dialog dialog) {
        int i = 2;
        if (dialog == null) {
            return 2;
        }
        for (DialogInfo.MediaAttribute mediaAttribute : dialog.getMediaAttributes()) {
            if (!"audio".equalsIgnoreCase(mediaAttribute.getMediaType()) && !mediaAttribute.isDowngradedVideo()) {
                if ("inactive".equalsIgnoreCase(mediaAttribute.getMediaDirection())) {
                    i = 7;
                } else if ("sendrecv".equalsIgnoreCase(mediaAttribute.getMediaDirection())) {
                    i = 4;
                } else if ("sendonly".equalsIgnoreCase(mediaAttribute.getMediaDirection())) {
                    i = 5;
                } else if ("recvonly".equalsIgnoreCase(mediaAttribute.getMediaDirection())) {
                    i = 6;
                }
            }
        }
        return i;
    }

    public static ExternalCallStateFactory getInstance() {
        if (sInstance == null) {
            sInstance = new ExternalCallStateFactory();
        }
        return sInstance;
    }

    private boolean isCallHeld(DialogInfo.Dialog dialog) {
        if (dialog == null) {
            return false;
        }
        return ("+sip.rendering".equalsIgnoreCase(dialog.getPname()) && "no".equalsIgnoreCase(dialog.getPval())) || isCallHeld(dialog.getMediaAttributes());
    }

    private boolean isCallHeld(List<DialogInfo.MediaAttribute> list) {
        if (list == null) {
            return false;
        }
        for (DialogInfo.MediaAttribute mediaAttribute : list) {
            if ("audio".equalsIgnoreCase(mediaAttribute.getMediaType()) && !"sendrecv".equalsIgnoreCase(mediaAttribute.getMediaDirection())) {
                return true;
            }
        }
        return false;
    }

    private boolean isPullable(DialogInfo.Dialog dialog) {
        return (dialog == null || dialog.getExclusive() || isCallHeld(dialog) || isVideoCallInBackground(dialog)) ? false : true;
    }

    private boolean isVideoCallInBackground(DialogInfo.Dialog dialog) {
        if (dialog == null) {
            return false;
        }
        for (DialogInfo.MediaAttribute mediaAttribute : dialog.getMediaAttributes()) {
            if ("video".equalsIgnoreCase(mediaAttribute.getMediaType()) && "inactive".equalsIgnoreCase(mediaAttribute.getMediaDirection())) {
                return true;
            }
        }
        return false;
    }

    public List<ImsExternalCallState> makeExternalCallStates(DialogInfo dialogInfo) {
        LinkedList linkedList = new LinkedList();
        for (DialogInfo.Dialog dialog : dialogInfo.getDialogs()) {
            linkedList.add(new ImsExternalCallState(dialog.getDialogId(), getAddress(dialog), isPullable(dialog), getCallState(dialog), getCallType(dialog), isCallHeld(dialog)));
        }
        return linkedList;
    }
}
