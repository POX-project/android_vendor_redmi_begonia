package com.mediatek.ims;

/* JADX INFO: loaded from: classes.dex */
public class ImsCallInfo {
    public String mCallId;
    public String mCallNum;
    public ImsCallSessionProxy mCallSession;
    public boolean mIsConference;
    public boolean mIsConferenceHost;
    public boolean mIsEcc;
    public boolean mIsVideo;
    public State mState;

    public enum State {
        ACTIVE,
        HOLDING,
        ALERTING,
        INCOMING,
        DISCONNECTED,
        INVALID
    }

    public ImsCallInfo(String str, String str2, boolean z, boolean z2, boolean z3, boolean z4, State state, ImsCallSessionProxy imsCallSessionProxy) {
        this.mCallId = str;
        this.mCallNum = str2;
        this.mIsConference = z;
        this.mIsConferenceHost = z2;
        this.mIsVideo = z3;
        this.mIsEcc = z4;
        this.mState = state;
        this.mCallSession = imsCallSessionProxy;
    }
}
