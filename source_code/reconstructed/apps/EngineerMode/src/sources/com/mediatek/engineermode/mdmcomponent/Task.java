package com.mediatek.engineermode.mdmcomponent;

import java.nio.ByteBuffer;

/* JADX INFO: compiled from: UpdateTaskDriven.java */
/* JADX INFO: loaded from: classes.dex */
class Task {
    MDMContentICD.MDMHeaderICD mIcdHeader;
    Object mMsg;
    private int mMsgId;
    private int mTaskId;
    private int mType;

    public Task(int i) {
        this.mTaskId = -1;
        this.mType = -1;
        this.mMsgId = -1;
        this.mMsg = null;
        this.mIcdHeader = null;
        this.mTaskId = i;
    }

    public Task(int i, MDMContentICD.MDMHeaderICD mDMHeaderICD, ByteBuffer byteBuffer, int i2) {
        this.mTaskId = -1;
        this.mType = -1;
        this.mMsgId = -1;
        this.mMsg = null;
        this.mIcdHeader = null;
        this.mTaskId = i;
        this.mIcdHeader = mDMHeaderICD;
        this.mMsg = byteBuffer;
        this.mType = i2;
        this.mMsgId = mDMHeaderICD.msg_id;
    }

    public Task(int i, Object obj, int i2, int i3) {
        this.mTaskId = -1;
        this.mType = -1;
        this.mMsgId = -1;
        this.mMsg = null;
        this.mIcdHeader = null;
        this.mTaskId = i;
        this.mMsg = obj;
        this.mType = i3;
        this.mMsgId = i2;
    }

    public Object getExtraMsg() {
        return this.mMsg;
    }

    public MDMContentICD.MDMHeaderICD getIcdHeader() {
        return this.mIcdHeader;
    }

    public int getMsgId() {
        return this.mMsgId;
    }

    public int getTaskId() {
        return this.mTaskId;
    }

    public int getType() {
        return this.mType;
    }

    public void setmType(int i) {
        this.mType = i;
    }

    public String toString() {
        return "id:" + getTaskId() + ", type:" + getType() + ", msgId: " + Long.toHexString(getMsgId());
    }
}
