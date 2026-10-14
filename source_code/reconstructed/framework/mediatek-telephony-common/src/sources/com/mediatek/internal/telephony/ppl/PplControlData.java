package com.mediatek.internal.telephony.ppl;

import android.util.Log;
import java.util.Arrays;
import java.util.Comparator;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class PplControlData {
    private static final int HEADER_SIZE = 60;
    public static final int SALT_LIST_LENGTH = 40;
    public static final int SALT_SIZE = 20;
    public static final int SECRET_LIST_LENGTH = 40;
    public static final int SECRET_SIZE = 32;
    public static final int SIM_FINGERPRINT_LENGTH = 40;
    public static final byte STATUS_ENABLED = 2;
    public static final byte STATUS_LOCKED = 4;
    public static final byte STATUS_PROVISIONED = 1;
    public static final byte STATUS_SIM_LOCKED = 8;
    public static final byte STATUS_WIPE_REQUESTED = 16;
    private static final String TAG = "PPL/ControlData";
    public static final int TRUSTED_NUMBER_LENGTH = 40;
    public static final byte VERSION = 1;
    private static Comparator<byte[]> mSIMComparator = new Comparator<byte[]>() { // from class: com.mediatek.internal.telephony.ppl.PplControlData.1
        @Override // java.util.Comparator
        public int compare(byte[] bArr, byte[] bArr2) {
            return PplControlData.compareSIMFingerprints(bArr, bArr2);
        }
    };
    public byte version = 1;
    public byte status = 0;
    public byte[] secret = new byte[32];
    public byte[] salt = new byte[20];
    public List<byte[]> SIMFingerprintList = null;
    public List<String> TrustedNumberList = null;
    public List<PplMessageManager.PendingMessage> PendingMessageList = null;

    public static PplControlData buildControlData(byte[] bArr) {
        PplControlData pplControlData = new PplControlData();
        if (bArr == null || bArr.length == 0) {
            Log.w(TAG, "buildControlData: data is empty, return empty instance");
        } else {
            pplControlData.decode(bArr);
        }
        return pplControlData;
    }

    public static int compareSIMFingerprints(byte[] bArr, byte[] bArr2) {
        if (bArr.length != bArr2.length) {
            throw new Error("The two fingerprints must have the same length");
        }
        for (int i = 0; i < bArr.length; i++) {
            int i2 = bArr[i] - bArr2[i];
            if (i2 != 0) {
                return i2;
            }
        }
        return 0;
    }

    private int getDataSize() {
        List<byte[]> list = this.SIMFingerprintList;
        int size = list != null ? 60 + (list.size() * 40) : 60;
        List<String> list2 = this.TrustedNumberList;
        if (list2 != null) {
            size += list2.size() * 40;
        }
        List<PplMessageManager.PendingMessage> list3 = this.PendingMessageList;
        return list3 != null ? size + (list3.size() * 49) : size;
    }

    public static byte[][] sortSIMFingerprints(byte[][] bArr) {
        byte[][] bArr2 = (byte[][]) bArr.clone();
        for (int i = 0; i < bArr2.length; i++) {
            bArr2[i] = (byte[]) bArr2[i].clone();
        }
        Arrays.sort(bArr2, mSIMComparator);
        return bArr2;
    }

    public void clear() {
        this.version = (byte) 1;
        this.status = (byte) 0;
        this.secret = new byte[32];
        this.salt = new byte[20];
        this.SIMFingerprintList = null;
        this.TrustedNumberList = null;
        this.PendingMessageList = null;
    }

    /* JADX INFO: renamed from: clone, reason: merged with bridge method [inline-methods] */
    public PplControlData m3clone() {
        PplControlData pplControlData = new PplControlData();
        pplControlData.version = this.version;
        pplControlData.status = this.status;
        pplControlData.secret = (byte[]) this.secret.clone();
        pplControlData.salt = (byte[]) this.salt.clone();
        if (this.SIMFingerprintList != null) {
            pplControlData.SIMFingerprintList = new LinkedList();
            for (int i = 0; i < this.SIMFingerprintList.size(); i++) {
                pplControlData.SIMFingerprintList.add((byte[]) this.SIMFingerprintList.get(i).clone());
            }
        } else {
            pplControlData.SIMFingerprintList = null;
        }
        if (this.TrustedNumberList != null) {
            pplControlData.TrustedNumberList = new LinkedList();
            Iterator<String> it = this.TrustedNumberList.iterator();
            while (it.hasNext()) {
                pplControlData.TrustedNumberList.add(it.next());
            }
        } else {
            pplControlData.TrustedNumberList = null;
        }
        if (this.PendingMessageList != null) {
            pplControlData.PendingMessageList = new LinkedList();
            Iterator<PplMessageManager.PendingMessage> it2 = this.PendingMessageList.iterator();
            while (it2.hasNext()) {
                pplControlData.PendingMessageList.add(it2.next().m4clone());
            }
        } else {
            this.PendingMessageList = null;
        }
        return pplControlData;
    }

    public void decode(byte[] bArr) {
        this.version = bArr[0];
        this.status = bArr[1];
        byte b = bArr[2];
        byte b2 = bArr[3];
        byte b3 = bArr[4];
        byte[] bArr2 = this.secret;
        System.arraycopy(bArr, 8, bArr2, 0, bArr2.length);
        int length = 8 + this.secret.length;
        byte[] bArr3 = this.salt;
        System.arraycopy(bArr, length, bArr3, 0, bArr3.length);
        int length2 = length + this.salt.length;
        if (b != 0) {
            this.SIMFingerprintList = new LinkedList();
            for (int i = 0; i < b; i++) {
                byte[] bArr4 = new byte[40];
                System.arraycopy(bArr, length2, bArr4, 0, 40);
                this.SIMFingerprintList.add(bArr4);
                length2 += 40;
            }
        } else {
            this.SIMFingerprintList = null;
        }
        if (b2 != 0) {
            this.TrustedNumberList = new LinkedList();
            for (int i2 = 0; i2 < b2; i2++) {
                int i3 = length2;
                while (i3 < length2 + 40 && bArr[i3] != 0) {
                    i3++;
                }
                this.TrustedNumberList.add(new String(bArr, length2, i3 - length2));
                length2 += 40;
            }
        } else {
            this.TrustedNumberList = null;
        }
        if (b3 == 0) {
            this.PendingMessageList = null;
            return;
        }
        this.PendingMessageList = new LinkedList();
        for (int i4 = 0; i4 < b3; i4++) {
            this.PendingMessageList.add(new PplMessageManager.PendingMessage(bArr, length2));
            length2 += 49;
        }
    }

    public byte[] encode() {
        byte[] bArr = new byte[getDataSize()];
        bArr[0] = this.version;
        bArr[1] = this.status;
        List<byte[]> list = this.SIMFingerprintList;
        bArr[2] = list == null ? (byte) 0 : (byte) list.size();
        List<String> list2 = this.TrustedNumberList;
        bArr[3] = list2 == null ? (byte) 0 : (byte) list2.size();
        List<PplMessageManager.PendingMessage> list3 = this.PendingMessageList;
        bArr[4] = list3 == null ? (byte) 0 : (byte) list3.size();
        bArr[5] = 0;
        bArr[6] = 0;
        bArr[7] = 0;
        byte[] bArr2 = this.secret;
        System.arraycopy(bArr2, 0, bArr, 8, bArr2.length);
        int length = 8 + this.secret.length;
        byte[] bArr3 = this.salt;
        System.arraycopy(bArr3, 0, bArr, length, bArr3.length);
        int length2 = length + this.salt.length;
        if (this.SIMFingerprintList != null) {
            for (int i = 0; i < this.SIMFingerprintList.size(); i++) {
                System.arraycopy(this.SIMFingerprintList.get(i), 0, bArr, length2, 40);
                length2 += 40;
            }
        }
        if (this.TrustedNumberList != null) {
            for (int i2 = 0; i2 < this.TrustedNumberList.size(); i2++) {
                byte[] bytes = this.TrustedNumberList.get(i2).getBytes();
                if (bytes.length > 40) {
                    throw new Error("Trusted number is too long");
                }
                System.arraycopy(Arrays.copyOf(bytes, 40), 0, bArr, length2, 40);
                length2 += 40;
            }
        }
        if (this.PendingMessageList != null) {
            for (int i3 = 0; i3 < this.PendingMessageList.size(); i3++) {
                this.PendingMessageList.get(i3).encode(bArr, length2);
                length2 += 49;
            }
        }
        return bArr;
    }

    public boolean hasWipeFlag() {
        return (this.status & STATUS_WIPE_REQUESTED) == 16;
    }

    public boolean isEnabled() {
        return (this.status & 2) == 2;
    }

    public boolean isLocked() {
        return (this.status & 4) == 4;
    }

    public boolean isProvisioned() {
        return (this.status & 1) == 1;
    }

    public boolean isSIMLocked() {
        return (this.status & 8) == 8;
    }

    public void setEnable(boolean z) {
        if (z) {
            this.status = (byte) (this.status | 2);
        } else {
            this.status = (byte) (this.status & (-3));
        }
    }

    public void setLock(boolean z) {
        if (z) {
            this.status = (byte) (this.status | 4);
        } else {
            this.status = (byte) (this.status & (-5));
        }
    }

    public void setProvision(boolean z) {
        if (z) {
            this.status = (byte) (this.status | 1);
        } else {
            this.status = (byte) (this.status & (-2));
        }
    }

    public void setSIMLock(boolean z) {
        if (z) {
            this.status = (byte) (this.status | 8);
        } else {
            this.status = (byte) (this.status & (-9));
        }
    }

    public void setWipeFlag(boolean z) {
        if (z) {
            this.status = (byte) (this.status | STATUS_WIPE_REQUESTED);
        } else {
            this.status = (byte) (this.status & (-17));
        }
    }

    public String toString() {
        return "PplControlData " + hashCode() + " {" + Integer.toHexString(this.version) + ", " + Integer.toHexString(this.status) + ", " + this.SIMFingerprintList + ", " + this.TrustedNumberList + ", " + this.PendingMessageList + "}";
    }
}
