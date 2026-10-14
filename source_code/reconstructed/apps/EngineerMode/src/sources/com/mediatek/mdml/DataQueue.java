package com.mediatek.mdml;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes3.dex */
class DataQueue {
    private static final String TAG = "MDML/DataQueue";
    private int m_size = 0;
    private int m_unusedSize = 0;
    private byte[] m_data = new byte[262144];

    public void Clear() {
        this.m_size = 0;
        this.m_unusedSize = 0;
    }

    public int FrontOffset() {
        return this.m_unusedSize;
    }

    public byte[] GetData() {
        return this.m_data;
    }

    public void IncSize(int i) {
        if (i > SpaceSize()) {
            i = SpaceSize();
        }
        this.m_size += i;
    }

    public void Pop() {
        Pop(1);
    }

    public void Pop(int i) {
        int i2 = this.m_size;
        if (i2 <= i) {
            this.m_size = 0;
            this.m_unusedSize = 0;
            return;
        }
        int i3 = this.m_unusedSize + i;
        this.m_unusedSize = i3;
        int i4 = i2 - i;
        this.m_size = i4;
        if (i == 0 || i3 + i4 > (this.m_data.length >> 1)) {
            byte[] bArr = this.m_data;
            System.arraycopy(bArr, this.m_unusedSize, bArr, 0, this.m_size);
            this.m_unusedSize = 0;
        }
    }

    public boolean Push(byte[] bArr, int i, int i2) {
        if (bArr == null || i < 0) {
            return false;
        }
        if (i2 == 0) {
            return true;
        }
        int i3 = this.m_size;
        int i4 = i2 + i3;
        byte[] bArr2 = this.m_data;
        if (i4 > bArr2.length) {
            return false;
        }
        int i5 = this.m_unusedSize;
        if (i2 + i5 + i3 > bArr2.length) {
            System.arraycopy(bArr2, i5, bArr2, 0, i3);
            this.m_unusedSize = 0;
        }
        System.arraycopy(bArr, i, this.m_data, this.m_unusedSize + this.m_size, i2);
        this.m_size += i2;
        return true;
    }

    public boolean PushArrayList(ArrayList<Byte> arrayList) {
        if (arrayList == null) {
            return false;
        }
        if (arrayList.size() == 0) {
            return true;
        }
        if (arrayList.size() + this.m_size > this.m_data.length) {
            return false;
        }
        int size = arrayList.size();
        int i = this.m_unusedSize;
        int i2 = this.m_size;
        int i3 = size + i + i2;
        byte[] bArr = this.m_data;
        if (i3 > bArr.length) {
            System.arraycopy(bArr, i, bArr, 0, i2);
            this.m_unusedSize = 0;
        }
        for (int i4 = 0; i4 < arrayList.size(); i4++) {
            this.m_data[this.m_unusedSize + this.m_size + i4] = arrayList.get(i4).byteValue();
        }
        this.m_size += arrayList.size();
        return true;
    }

    public int Size() {
        return this.m_size;
    }

    public int SpaceSize() {
        return (this.m_data.length - this.m_size) - this.m_unusedSize;
    }

    public int SpaceStartOffset() {
        return this.m_unusedSize + this.m_size;
    }
}
