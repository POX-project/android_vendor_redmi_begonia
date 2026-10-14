package com.mediatek.internal.telephony.cat;

import com.android.internal.telephony.cat.ComprehensionTlvTag;
import java.io.ByteArrayOutputStream;
import java.net.InetAddress;
import java.util.Iterator;

/* JADX INFO: compiled from: BipResponseData.java */
/* JADX INFO: loaded from: classes.dex */
class OpenChannelResponseDataEx extends OpenChannelResponseData {
    DnsServerAddress mDnsServerAddress;
    int mProtocolType;

    OpenChannelResponseDataEx(ChannelStatus channelStatus, BearerDesc bearerDesc, int i, int i2) {
        super(channelStatus, bearerDesc, i);
        this.mProtocolType = -1;
        this.mDnsServerAddress = null;
        MtkCatLog.d("[BIP]", "OpenChannelResponseDataEx-constructor: protocolType " + i2);
        this.mProtocolType = i2;
    }

    OpenChannelResponseDataEx(ChannelStatus channelStatus, BearerDesc bearerDesc, int i, DnsServerAddress dnsServerAddress) {
        super(channelStatus, bearerDesc, i);
        this.mProtocolType = -1;
        this.mDnsServerAddress = null;
        this.mDnsServerAddress = dnsServerAddress;
    }

    @Override // com.mediatek.internal.telephony.cat.OpenChannelResponseData
    public void format(ByteArrayOutputStream byteArrayOutputStream) {
        if (byteArrayOutputStream == null) {
            MtkCatLog.e("[BIP]", "OpenChannelResponseDataEx-format: buf is null");
            return;
        }
        int i = this.mProtocolType;
        if (2 == i || 1 == i) {
            if (this.mBearerDesc == null) {
                MtkCatLog.e("[BIP]", "OpenChannelResponseDataEx-format: bearer null");
                return;
            } else if (this.mBearerDesc.bearerType != 2 && this.mBearerDesc.bearerType != 3 && this.mBearerDesc.bearerType != 9 && this.mBearerDesc.bearerType != 11) {
                MtkCatLog.e("[BIP]", "OpenChannelResponseDataEx-format: bearer type is not gprs");
            }
        }
        if (this.mChannelStatus != null) {
            MtkCatLog.d("[BIP]", "OpenChannelResponseDataEx-format: Write channel status into TR");
            int iValue = ComprehensionTlvTag.CHANNEL_STATUS.value();
            byteArrayOutputStream.write(iValue);
            byteArrayOutputStream.write(2);
            byteArrayOutputStream.write(this.mChannelStatus.mChannelId | this.mChannelStatus.mChannelStatus);
            byteArrayOutputStream.write(this.mChannelStatus.mChannelStatusInfo);
            MtkCatLog.d("[BIP]", "OpenChannel Channel status Rsp:tag[" + iValue + "],len[2],cId[" + this.mChannelStatus.mChannelId + "],status[" + this.mChannelStatus.mChannelStatus + "]");
        } else {
            MtkCatLog.d("[BIP]", "No Channel status in TR.");
        }
        if (this.mBearerDesc != null) {
            MtkCatLog.d("[BIP]", "Write bearer description into TR. bearerType: " + this.mBearerDesc.bearerType);
            int iValue2 = ComprehensionTlvTag.BEARER_DESCRIPTION.value();
            byteArrayOutputStream.write(iValue2);
            if (2 == this.mBearerDesc.bearerType) {
                if (this.mBearerDesc instanceof GPRSBearerDesc) {
                    GPRSBearerDesc gPRSBearerDesc = (GPRSBearerDesc) this.mBearerDesc;
                    byteArrayOutputStream.write(7);
                    byteArrayOutputStream.write(gPRSBearerDesc.bearerType);
                    byteArrayOutputStream.write(gPRSBearerDesc.precedence);
                    byteArrayOutputStream.write(gPRSBearerDesc.delay);
                    byteArrayOutputStream.write(gPRSBearerDesc.reliability);
                    byteArrayOutputStream.write(gPRSBearerDesc.peak);
                    byteArrayOutputStream.write(gPRSBearerDesc.mean);
                    byteArrayOutputStream.write(gPRSBearerDesc.pdpType);
                    MtkCatLog.d("[BIP]", "OpenChannelResponseDataEx-format: tag: " + iValue2 + ",length: 7,bearerType: " + gPRSBearerDesc.bearerType + ",precedence: " + gPRSBearerDesc.precedence + ",delay: " + gPRSBearerDesc.delay + ",reliability: " + gPRSBearerDesc.reliability + ",peak: " + gPRSBearerDesc.peak + ",mean: " + gPRSBearerDesc.mean + ",pdp type: " + gPRSBearerDesc.pdpType);
                } else {
                    MtkCatLog.d("[BIP]", "Not expected GPRSBearerDesc instance");
                }
            } else if (11 == this.mBearerDesc.bearerType) {
                int[] iArr = new int[10];
                int i2 = 0;
                if (this.mBearerDesc instanceof EUTranBearerDesc) {
                    EUTranBearerDesc eUTranBearerDesc = (EUTranBearerDesc) this.mBearerDesc;
                    if (eUTranBearerDesc.QCI != 0) {
                        iArr[0] = eUTranBearerDesc.QCI;
                        i2 = 0 + 1;
                    }
                    if (eUTranBearerDesc.maxBitRateU != 0) {
                        iArr[i2] = eUTranBearerDesc.maxBitRateU;
                        i2++;
                    }
                    if (eUTranBearerDesc.maxBitRateD != 0) {
                        iArr[i2] = eUTranBearerDesc.maxBitRateD;
                        i2++;
                    }
                    if (eUTranBearerDesc.guarBitRateU != 0) {
                        iArr[i2] = eUTranBearerDesc.guarBitRateU;
                        i2++;
                    }
                    if (eUTranBearerDesc.guarBitRateD != 0) {
                        iArr[i2] = eUTranBearerDesc.guarBitRateD;
                        i2++;
                    }
                    if (eUTranBearerDesc.maxBitRateUEx != 0) {
                        iArr[i2] = eUTranBearerDesc.maxBitRateUEx;
                        i2++;
                    }
                    if (eUTranBearerDesc.maxBitRateDEx != 0) {
                        iArr[i2] = eUTranBearerDesc.maxBitRateDEx;
                        i2++;
                    }
                    if (eUTranBearerDesc.guarBitRateUEx != 0) {
                        iArr[i2] = eUTranBearerDesc.guarBitRateUEx;
                        i2++;
                    }
                    if (eUTranBearerDesc.guarBitRateDEx != 0) {
                        iArr[i2] = eUTranBearerDesc.guarBitRateDEx;
                        i2++;
                    }
                    if (eUTranBearerDesc.pdnType != 0) {
                        iArr[i2] = eUTranBearerDesc.pdnType;
                        i2++;
                    }
                    MtkCatLog.d("[BIP]", "EUTranBearerDesc length: " + i2);
                    if (i2 > 0) {
                        byteArrayOutputStream.write(i2 + 1);
                    } else {
                        byteArrayOutputStream.write(1);
                    }
                    byteArrayOutputStream.write(eUTranBearerDesc.bearerType);
                    for (int i3 = 0; i3 < i2; i3++) {
                        byteArrayOutputStream.write(iArr[i3]);
                        MtkCatLog.d("[BIP]", "EUTranBearerDesc buf: " + iArr[i3]);
                    }
                } else {
                    MtkCatLog.d("[BIP]", "Not expected EUTranBearerDesc instance");
                }
            } else if (9 == this.mBearerDesc.bearerType) {
                if (this.mBearerDesc instanceof UTranBearerDesc) {
                    UTranBearerDesc uTranBearerDesc = (UTranBearerDesc) this.mBearerDesc;
                    byteArrayOutputStream.write(18);
                    byteArrayOutputStream.write(uTranBearerDesc.bearerType);
                    byteArrayOutputStream.write(uTranBearerDesc.trafficClass);
                    byteArrayOutputStream.write(uTranBearerDesc.maxBitRateUL_High);
                    byteArrayOutputStream.write(uTranBearerDesc.maxBitRateUL_Low);
                    byteArrayOutputStream.write(uTranBearerDesc.maxBitRateDL_High);
                    byteArrayOutputStream.write(uTranBearerDesc.maxBitRateDL_Low);
                    byteArrayOutputStream.write(uTranBearerDesc.guarBitRateUL_High);
                    byteArrayOutputStream.write(uTranBearerDesc.guarBitRateUL_Low);
                    byteArrayOutputStream.write(uTranBearerDesc.guarBitRateDL_High);
                    byteArrayOutputStream.write(uTranBearerDesc.guarBitRateDL_Low);
                    byteArrayOutputStream.write(uTranBearerDesc.deliveryOrder);
                    byteArrayOutputStream.write(uTranBearerDesc.maxSduSize);
                    byteArrayOutputStream.write(uTranBearerDesc.sduErrorRatio);
                    byteArrayOutputStream.write(uTranBearerDesc.residualBitErrorRadio);
                    byteArrayOutputStream.write(uTranBearerDesc.deliveryOfErroneousSdus);
                    byteArrayOutputStream.write(uTranBearerDesc.transferDelay);
                    byteArrayOutputStream.write(uTranBearerDesc.trafficHandlingPriority);
                    byteArrayOutputStream.write(uTranBearerDesc.pdpType);
                    MtkCatLog.d("[BIP]", "OpenChannelResponseDataEx-format: tag: " + iValue2 + ",length: 18,bearerType: " + uTranBearerDesc.bearerType + ",trafficClass: " + uTranBearerDesc.trafficClass + ",maxBitRateUL_High: " + uTranBearerDesc.maxBitRateUL_High + ",maxBitRateUL_Low: " + uTranBearerDesc.maxBitRateUL_Low + ",maxBitRateDL_High: " + uTranBearerDesc.maxBitRateDL_High + ",maxBitRateDL_Low: " + uTranBearerDesc.maxBitRateDL_Low + ",guarBitRateUL_High: " + uTranBearerDesc.guarBitRateUL_High + ",guarBitRateUL_Low: " + uTranBearerDesc.guarBitRateUL_Low + ",guarBitRateDL_High: " + uTranBearerDesc.guarBitRateDL_High + ",guarBitRateDL_Low: " + uTranBearerDesc.guarBitRateDL_Low + ",deliveryOrder: " + uTranBearerDesc.deliveryOrder + ",maxSduSize: " + uTranBearerDesc.maxSduSize + ",sduErrorRatio: " + uTranBearerDesc.sduErrorRatio + ",residualBitErrorRadio: " + uTranBearerDesc.residualBitErrorRadio + ",deliveryOfErroneousSdus: " + uTranBearerDesc.deliveryOfErroneousSdus + ",transferDelay: " + uTranBearerDesc.transferDelay + ",trafficHandlingPriority: " + uTranBearerDesc.trafficHandlingPriority + ",pdp type: " + uTranBearerDesc.pdpType);
                } else {
                    MtkCatLog.d("[BIP]", "Not expected UTranBearerDesc instance");
                }
            } else if (3 == this.mBearerDesc.bearerType) {
                byteArrayOutputStream.write(1);
                byteArrayOutputStream.write(((DefaultBearerDesc) this.mBearerDesc).bearerType);
            }
        } else {
            MtkCatLog.d("[BIP]", "No bearer description in TR.");
        }
        if (this.mBufferSize >= 0) {
            MtkCatLog.d("[BIP]", "Write buffer size into TR.[" + this.mBufferSize + "]");
            int iValue3 = ComprehensionTlvTag.BUFFER_SIZE.value();
            byteArrayOutputStream.write(iValue3);
            byteArrayOutputStream.write(2);
            byteArrayOutputStream.write(this.mBufferSize >> 8);
            byteArrayOutputStream.write(this.mBufferSize & 255);
            MtkCatLog.d("[BIP]", "OpenChannelResponseDataEx-format: tag: " + iValue3 + ",length: 2,buffer size(hi-byte): " + (this.mBufferSize >> 8) + ",buffer size(low-byte): " + (this.mBufferSize & 255));
        } else {
            MtkCatLog.d("[BIP]", "No buffer size in TR.[" + this.mBufferSize + "]");
        }
        DnsServerAddress dnsServerAddress = this.mDnsServerAddress;
        if (dnsServerAddress != null) {
            Iterator<InetAddress> it = dnsServerAddress.dnsAddresses.iterator();
            while (it.hasNext()) {
                byte[] address = it.next().getAddress();
                if (address != null) {
                    byteArrayOutputStream.write(ComprehensionTlvTag.DNS_SERVER_ADDRESS.value());
                    byteArrayOutputStream.write(address.length + 1);
                    if (address.length == 4) {
                        byteArrayOutputStream.write(33);
                    } else if (address.length == 16) {
                        byteArrayOutputStream.write(87);
                    } else {
                        MtkCatLog.e("[BIP]", "length error: " + address.length);
                        byteArrayOutputStream.write(33);
                    }
                    byteArrayOutputStream.write(address, 0, address.length);
                }
            }
        }
    }
}
