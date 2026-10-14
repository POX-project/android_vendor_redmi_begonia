package com.mediatek.internal.telephony.cat;

import java.net.InetAddress;
import java.net.UnknownHostException;

/* JADX INFO: loaded from: classes.dex */
public class OtherAddress {
    public InetAddress address;
    public int addressType;
    public byte[] rawAddress;

    public OtherAddress(int i, byte[] bArr, int i2) throws UnknownHostException {
        this.addressType = 0;
        this.rawAddress = null;
        this.address = null;
        try {
            this.addressType = i;
            if (33 == i) {
                byte[] bArr2 = new byte[4];
                this.rawAddress = bArr2;
                System.arraycopy(bArr, i2, bArr2, 0, bArr2.length);
                this.address = InetAddress.getByAddress(this.rawAddress);
            } else if (87 == i) {
                byte[] bArr3 = new byte[16];
                this.rawAddress = bArr3;
                System.arraycopy(bArr, i2, bArr3, 0, bArr3.length);
                this.address = InetAddress.getByAddress(this.rawAddress);
            } else {
                MtkCatLog.e("[BIP]", "OtherAddress: unknown type: " + i);
            }
        } catch (IndexOutOfBoundsException e) {
            MtkCatLog.d("[BIP]", "OtherAddress: out of bounds");
            this.rawAddress = null;
            this.address = null;
        } catch (UnknownHostException e2) {
            MtkCatLog.e("[BIP]", "OtherAddress: UnknownHostException");
            this.rawAddress = null;
            this.address = null;
        }
    }
}
