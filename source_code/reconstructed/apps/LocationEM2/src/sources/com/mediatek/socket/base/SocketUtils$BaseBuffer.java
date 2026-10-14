package com.mediatek.socket.base;

/* JADX INFO: loaded from: classes.dex */
public class SocketUtils$BaseBuffer {
    private byte[] mBuff;
    private int mOffset = 0;

    public SocketUtils$BaseBuffer(int i) {
        this.mBuff = new byte[i];
    }

    public byte[] getBuff() {
        return this.mBuff;
    }

    public int getOffset() {
        return this.mOffset;
    }

    public void putBool(boolean z) {
        putByte(z ? (byte) 1 : (byte) 0);
    }

    public void putByte(byte b) {
        byte[] bArr = this.mBuff;
        int i = this.mOffset;
        bArr[i] = b;
        this.mOffset = i + 1;
    }

    public void putInt(int i) {
        putShort((short) (i & 65535));
        putShort((short) ((i >> 16) & 65535));
    }

    public void putShort(short s) {
        putByte((byte) (s & 255));
        putByte((byte) ((s >> 8) & 255));
    }

    public void setOffset(int i) {
        this.mOffset = i;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("BaseBuffer ");
        sb.append("offset=[" + this.mOffset + "] ");
        sb.append("maxSize=[" + this.mBuff.length + "] ");
        return sb.toString();
    }
}
