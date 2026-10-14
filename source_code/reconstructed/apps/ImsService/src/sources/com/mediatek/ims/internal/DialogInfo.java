package com.mediatek.ims.internal;

import java.util.LinkedList;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class DialogInfo {
    private List<Dialog> mDialogs = new LinkedList();

    public static class Dialog {
        private int mDialogId;
        private boolean mExclusive;
        private Local mLocal;
        private String mState;

        public Dialog(int i, boolean z, String str, Local local) {
            this.mExclusive = true;
            this.mState = "";
            this.mLocal = new Local();
            this.mDialogId = i;
            this.mExclusive = z;
            this.mState = str;
            this.mLocal = local;
        }

        int getDialogId() {
            return this.mDialogId;
        }

        boolean getExclusive() {
            return this.mExclusive;
        }

        String getIdentity() {
            return this.mLocal.getIdentity();
        }

        Local getLocal() {
            return this.mLocal;
        }

        List<MediaAttribute> getMediaAttributes() {
            return this.mLocal.getMediaAttributes();
        }

        String getPname() {
            return this.mLocal.getPname();
        }

        String getPval() {
            return this.mLocal.getPval();
        }

        String getState() {
            return this.mState;
        }

        String getTargetUri() {
            return this.mLocal.getTargetUri();
        }
    }

    public static class Local {
        private String mIdentity = "";
        private String mTargetUri = "";
        private List<MediaAttribute> mMediaAttributes = new LinkedList();
        private Param mParam = new Param();

        boolean addMediaAttribute(MediaAttribute mediaAttribute) {
            return this.mMediaAttributes.add(mediaAttribute);
        }

        String getIdentity() {
            return this.mIdentity;
        }

        List<MediaAttribute> getMediaAttributes() {
            return this.mMediaAttributes;
        }

        String getPname() {
            return this.mParam.getPname();
        }

        String getPval() {
            return this.mParam.getPval();
        }

        String getTargetUri() {
            return this.mTargetUri;
        }

        public void setIdentity(String str) {
            this.mIdentity = str;
        }

        void setParam(Param param) {
            this.mParam = param;
        }

        public void setTargetUri(String str) {
            this.mTargetUri = str;
        }
    }

    public static class MediaAttribute {
        private String mMediaDirection;
        private String mMediaType;
        private boolean mPort0;

        public MediaAttribute(String str, String str2, boolean z) {
            this.mMediaType = "";
            this.mMediaDirection = "";
            this.mPort0 = false;
            this.mMediaType = str;
            this.mMediaDirection = str2;
            this.mPort0 = z;
        }

        String getMediaDirection() {
            return this.mMediaDirection;
        }

        String getMediaType() {
            return this.mMediaType;
        }

        boolean isDowngradedVideo() {
            return this.mPort0;
        }
    }

    public static class Param {
        private String mPnam;
        private String mPval;

        public Param() {
            this.mPnam = "";
            this.mPval = "";
        }

        public Param(String str, String str2) {
            this.mPnam = "";
            this.mPval = "";
            this.mPnam = str;
            this.mPval = str2;
        }

        String getPname() {
            return this.mPnam;
        }

        String getPval() {
            return this.mPval;
        }
    }

    boolean addDialog(Dialog dialog) {
        return this.mDialogs.add(dialog);
    }

    List<Dialog> getDialogs() {
        return this.mDialogs;
    }
}
