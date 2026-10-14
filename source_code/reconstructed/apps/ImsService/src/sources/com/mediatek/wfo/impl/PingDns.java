package com.mediatek.wfo.impl;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.LinkProperties;
import android.net.Network;
import android.net.NetworkCapabilities;
import android.net.NetworkInfo;
import android.os.AsyncTask;
import android.os.Handler;
import android.os.Message;
import android.os.SystemClock;
import android.system.ErrnoException;
import android.system.Os;
import android.system.OsConstants;
import android.system.StructPollfd;
import android.system.StructTimeval;
import android.util.Log;
import java.io.Closeable;
import java.io.FileDescriptor;
import java.io.IOException;
import java.io.InterruptedIOException;
import java.net.Inet4Address;
import java.net.Inet6Address;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.NetworkInterface;
import java.net.SocketAddress;
import java.net.SocketException;
import java.net.UnknownHostException;
import java.nio.ByteBuffer;
import libcore.io.IoUtils;

/* JADX INFO: loaded from: classes.dex */
public class PingDns {
    private static final boolean DBG = true;
    private static final String STATIC_DNS_IPV4 = "49.45.0.1";
    private static final String STATIC_DNS_IPV6 = "2405:200:800:1";
    private static final String TAG = "PingDns";
    private static final boolean VDBG = true;
    private static Integer mInterfaceIndex;
    private ConnectivityManager mConnectivityManager;
    private Context mContext;
    private InetAddress mDnsAddressIpv4;
    private InetAddress mDnsAddressIpv6;
    private Handler mHandler;
    private int mPacketLost;
    private double mPingLatency;
    private int mRat;
    private int mSimId;
    private LinkProperties mWifiLinkProp;
    private final int PING_TIME_INTERVAL = 100;
    private final int SOCKET_TIMEOUT_MS = 100;
    private final int TIMEOUT_SEND = 100;
    private final int TIMEOUT_RECV = 100;
    private final int MAX_PING_COUNT = 5;
    private final int PACKET_BUFSIZE = 40;
    private final int PORT = 9999;

    private class IcmpCheck extends SimpleSocketCheck implements Runnable {
        private static final int ICMPV4_ECHO_REQUEST = 8;
        private static final int ICMPV6_ECHO_REQUEST = 128;
        private static final int MAX_BUFFER_LOGS = 100;
        private final int mIcmpType;
        private final int mProtocol;

        public IcmpCheck(InetAddress inetAddress) {
            super(inetAddress);
            if (this.mAddressFamily == OsConstants.AF_INET6) {
                this.mProtocol = OsConstants.IPPROTO_ICMPV6;
                this.mIcmpType = 128;
            } else {
                this.mProtocol = OsConstants.IPPROTO_ICMP;
                this.mIcmpType = 8;
            }
            PingDns.this.debugInfo("IcmpCheck:" + this.mAddressFamily + ": dst{" + this.mTarget.getHostAddress() + "}, mProtocol:" + this.mProtocol);
        }

        private void retrySetupSocket() {
            try {
                PingDns.this.debugInfo("Reconnect setup");
                setupSocket(OsConstants.SOCK_DGRAM, this.mProtocol, 100L, 100L, PingDns.this.mSimId + 9999);
            } catch (ErrnoException | IOException e) {
                PingDns.this.errorInfo("icmp setupSocket:" + e.toString() + ":" + this.mTarget);
            }
        }

        /* JADX WARN: Code duplicated, block: B:117:0x0364 A[Catch: Exception -> 0x03a6, TryCatch #13 {Exception -> 0x03a6, blocks: (B:124:0x038d, B:125:0x039c, B:98:0x02fb, B:115:0x033f, B:117:0x0364, B:118:0x0373, B:91:0x02ca), top: B:168:0x038d }] */
        /* JADX WARN: Code duplicated, block: B:140:0x03fd A[ADDED_TO_REGION] */
        /* JADX WARN: Code duplicated, block: B:141:0x03ff  */
        /* JADX WARN: Code duplicated, block: B:220:0x0373 A[SYNTHETIC] */
        @Override // java.lang.Runnable
        public void run() throws ErrnoException, InterruptedIOException {
            double d;
            int i;
            long jNow;
            int iWrite;
            boolean z;
            int iPoll;
            byte[] bArr;
            byte[] bArr2;
            byte[] bArr3;
            long j;
            int i2;
            long j2 = 0;
            byte[] bArr4 = new byte[40];
            int i3 = 0;
            byte[] bArr5 = new byte[40];
            double d2 = 0.0d;
            int i4 = 0;
            PingDns.this.debugInfo("Run IcmpCheck");
            int i5 = 0;
            boolean z2 = false;
            while (i5 < 5 && !z2) {
                try {
                    j = j2;
                    i2 = i5;
                    bArr2 = bArr4;
                    bArr3 = bArr5;
                    try {
                        setupSocket(OsConstants.SOCK_DGRAM, this.mProtocol, 100L, 100L, PingDns.this.mSimId + 9999);
                        z2 = true;
                        i5 = i2;
                        j2 = j;
                        bArr4 = bArr2;
                        bArr5 = bArr3;
                    } catch (ErrnoException | IOException e) {
                        e = e;
                        Exception exc = e;
                        PingDns.this.errorInfo("icmp setupSocket:" + exc.toString() + ":" + this.mTarget);
                        if (i2 >= 5) {
                            return;
                        }
                        try {
                            Thread.sleep(1000L);
                        } catch (Exception e2) {
                            PingDns.this.errorInfo("Sleep Operation failed");
                        }
                        i5 = i2 + 1;
                        PingDns.this.errorInfo("Retry: icmp setupSocket: retryCount = " + i5);
                        j2 = j;
                        bArr4 = bArr2;
                        bArr5 = bArr3;
                    }
                } catch (ErrnoException | IOException e3) {
                    e = e3;
                    bArr2 = bArr4;
                    bArr3 = bArr5;
                    j = j2;
                    i2 = i5;
                }
            }
            byte[] bArr6 = bArr5;
            long j3 = j2;
            int i6 = 5;
            int i7 = 6;
            byte[] bArr7 = {(byte) this.mIcmpType, 0, 0, 0, 0, 0, 0, 0};
            byte[] bArr8 = bArr4;
            System.arraycopy(bArr7, 0, bArr8, 0, bArr7.length);
            try {
                PingDns.this.debugInfo("Ping " + this.mTarget);
                int i8 = 0;
                int i9 = 0;
                int i10 = 0;
                try {
                    try {
                        try {
                            while (true) {
                                i10++;
                                if (i10 >= i6) {
                                    break;
                                }
                                try {
                                    try {
                                        ByteBuffer.wrap(bArr8).putShort(i7, (short) i10);
                                        try {
                                            jNow = PingDns.now();
                                            try {
                                                PingDns.this.debugInfo("Send request icmp.seq" + i10);
                                                iWrite = Os.write(this.mFileDescriptor, bArr8, 0, bArr8.length);
                                                j3 = jNow;
                                            } catch (ErrnoException | InterruptedIOException e4) {
                                                e = e4;
                                                try {
                                                    PingDns pingDns = PingDns.this;
                                                    StringBuilder sb = new StringBuilder();
                                                    sb.append("icmp :");
                                                    try {
                                                        sb.append(e.toString());
                                                        pingDns.errorInfo(sb.toString());
                                                        iWrite = -1;
                                                        j3 = jNow;
                                                    } catch (Exception e5) {
                                                        e = e5;
                                                        i3 = i10;
                                                        PingDns.this.errorInfo("icmp :" + e.toString());
                                                        d = d2;
                                                        i = i4;
                                                        close();
                                                        PingDns.this.debugInfo("End of IcmpCheck");
                                                        Message messageObtainMessage = PingDns.this.mHandler.obtainMessage(WifiPdnHandler.EVENT_SET_WIFI_PING_RESULT, PingDns.this.mSimId, PingDns.this.mRat, new PingData(PingDns.this.mSimId, d, i));
                                                        PingDns.this.mPingLatency = d;
                                                        PingDns.this.mPacketLost = i;
                                                        PingDns.this.mHandler.sendMessage(messageObtainMessage);
                                                    }
                                                } catch (Exception e6) {
                                                    e = e6;
                                                    i3 = i10;
                                                }
                                            } catch (Exception e7) {
                                                e = e7;
                                                i3 = i10;
                                                PingDns.this.errorInfo("icmp :" + e.toString());
                                                d = d2;
                                                i = i4;
                                                close();
                                                PingDns.this.debugInfo("End of IcmpCheck");
                                                Message messageObtainMessage2 = PingDns.this.mHandler.obtainMessage(WifiPdnHandler.EVENT_SET_WIFI_PING_RESULT, PingDns.this.mSimId, PingDns.this.mRat, new PingData(PingDns.this.mSimId, d, i));
                                                PingDns.this.mPingLatency = d;
                                                PingDns.this.mPacketLost = i;
                                                PingDns.this.mHandler.sendMessage(messageObtainMessage2);
                                            }
                                        } catch (ErrnoException | InterruptedIOException e8) {
                                            e = e8;
                                            jNow = j3;
                                        } catch (Exception e9) {
                                            e = e9;
                                            i3 = i10;
                                        }
                                        if (iWrite == 0) {
                                            z = true;
                                        } else if (iWrite == -1) {
                                            z = true;
                                        } else {
                                            try {
                                                StructPollfd structPollfd = new StructPollfd();
                                                structPollfd.events = (short) OsConstants.POLLIN;
                                                structPollfd.fd = this.mFileDescriptor;
                                                try {
                                                    try {
                                                        iPoll = Os.poll(new StructPollfd[]{structPollfd}, 100);
                                                    } catch (Exception e10) {
                                                        e = e10;
                                                        i3 = i10;
                                                        PingDns.this.errorInfo("icmp :" + e.toString());
                                                        d = d2;
                                                        i = i4;
                                                        close();
                                                        PingDns.this.debugInfo("End of IcmpCheck");
                                                        Message messageObtainMessage3 = PingDns.this.mHandler.obtainMessage(WifiPdnHandler.EVENT_SET_WIFI_PING_RESULT, PingDns.this.mSimId, PingDns.this.mRat, new PingData(PingDns.this.mSimId, d, i));
                                                        PingDns.this.mPingLatency = d;
                                                        PingDns.this.mPacketLost = i;
                                                        PingDns.this.mHandler.sendMessage(messageObtainMessage3);
                                                    }
                                                } catch (ErrnoException e11) {
                                                    PingDns.this.errorInfo("Os.poll error:" + e11.toString());
                                                    iPoll = 0;
                                                }
                                                if (iPoll == 0) {
                                                    PingDns.this.errorInfo("Reply timeout: for icmp.seq " + i10 + ", ret" + iPoll);
                                                    i4++;
                                                    d2 += 100.0d;
                                                    bArr = bArr8;
                                                } else {
                                                    if (iPoll != -1) {
                                                        try {
                                                            byte[] bArr9 = bArr6;
                                                            try {
                                                                int i11 = Os.read(this.mFileDescriptor, bArr9, 0, 40);
                                                                PingDns.this.assertEquals(40, i11);
                                                                if (i11 <= 0) {
                                                                    try {
                                                                        i4++;
                                                                        d2 += 100.0d;
                                                                        try {
                                                                            PingDns.this.debugInfo("icmp.seq=" + i10 + " no response: packet lost");
                                                                            PingDns pingDns2 = PingDns.this;
                                                                            StringBuilder sb2 = new StringBuilder();
                                                                            bArr6 = bArr9;
                                                                            try {
                                                                                sb2.append("Empty reply:");
                                                                                sb2.append(i10);
                                                                                pingDns2.errorInfo(sb2.toString());
                                                                                i7 = 6;
                                                                                i6 = 5;
                                                                            } catch (ErrnoException e12) {
                                                                                e = e12;
                                                                                bArr = bArr8;
                                                                                PingDns.this.errorInfo("replyerror icmp.seq=" + i10 + ", error: " + e.toString());
                                                                                if (i8 < 5) {
                                                                                    PingDns.this.debugInfo("Read Failed five times");
                                                                                    PingDns.this.debugInfo("pingResult: writeFail : " + i9 + ", readFail : " + i8);
                                                                                    if (i9 <= 0) {
                                                                                        i4 += i9 + i8;
                                                                                        d2 += (double) (i4 * 100);
                                                                                    } else {
                                                                                        i4 += i9 + i8;
                                                                                        d2 += (double) (i4 * 100);
                                                                                    }
                                                                                    d = d2 / 5.0d;
                                                                                    i = (i4 * 100) / 5;
                                                                                    PingDns.this.debugInfo("pingResult: mPingLatency = " + d + ", no. of packet lost = " + i);
                                                                                    close();
                                                                                    PingDns.this.debugInfo("End of IcmpCheck");
                                                                                    Message messageObtainMessage4 = PingDns.this.mHandler.obtainMessage(WifiPdnHandler.EVENT_SET_WIFI_PING_RESULT, PingDns.this.mSimId, PingDns.this.mRat, new PingData(PingDns.this.mSimId, d, i));
                                                                                    PingDns.this.mPingLatency = d;
                                                                                    PingDns.this.mPacketLost = i;
                                                                                    PingDns.this.mHandler.sendMessage(messageObtainMessage4);
                                                                                }
                                                                                i8++;
                                                                                bArr8 = bArr;
                                                                                i7 = 6;
                                                                                i6 = 5;
                                                                            } catch (Exception e13) {
                                                                                e = e13;
                                                                                i3 = i10;
                                                                                PingDns.this.errorInfo("icmp :" + e.toString());
                                                                                d = d2;
                                                                                i = i4;
                                                                                close();
                                                                                PingDns.this.debugInfo("End of IcmpCheck");
                                                                                Message messageObtainMessage5 = PingDns.this.mHandler.obtainMessage(WifiPdnHandler.EVENT_SET_WIFI_PING_RESULT, PingDns.this.mSimId, PingDns.this.mRat, new PingData(PingDns.this.mSimId, d, i));
                                                                                PingDns.this.mPingLatency = d;
                                                                                PingDns.this.mPacketLost = i;
                                                                                PingDns.this.mHandler.sendMessage(messageObtainMessage5);
                                                                            }
                                                                        } catch (ErrnoException e14) {
                                                                            e = e14;
                                                                            bArr6 = bArr9;
                                                                            bArr = bArr8;
                                                                        } catch (Exception e15) {
                                                                            e = e15;
                                                                            i3 = i10;
                                                                        }
                                                                    } catch (ErrnoException e16) {
                                                                        e = e16;
                                                                        bArr6 = bArr9;
                                                                        bArr = bArr8;
                                                                    } catch (Exception e17) {
                                                                        e = e17;
                                                                        i3 = i10;
                                                                    }
                                                                } else {
                                                                    bArr6 = bArr9;
                                                                    bArr = bArr8;
                                                                    try {
                                                                        double dNow = (PingDns.now() - j3) / 1000000;
                                                                        d2 += dNow;
                                                                        try {
                                                                            try {
                                                                                PingDns.this.debugInfo("Receive reply icmp.seq=" + i10 + " TTL:" + dNow + "ms");
                                                                            } catch (ErrnoException e18) {
                                                                                e = e18;
                                                                                PingDns.this.errorInfo("replyerror icmp.seq=" + i10 + ", error: " + e.toString());
                                                                                if (i8 < 5) {
                                                                                    PingDns.this.debugInfo("Read Failed five times");
                                                                                    PingDns.this.debugInfo("pingResult: writeFail : " + i9 + ", readFail : " + i8);
                                                                                    if (i9 <= 0) {
                                                                                        i4 += i9 + i8;
                                                                                        d2 += (double) (i4 * 100);
                                                                                    } else {
                                                                                        i4 += i9 + i8;
                                                                                        d2 += (double) (i4 * 100);
                                                                                    }
                                                                                    d = d2 / 5.0d;
                                                                                    i = (i4 * 100) / 5;
                                                                                    PingDns.this.debugInfo("pingResult: mPingLatency = " + d + ", no. of packet lost = " + i);
                                                                                    close();
                                                                                    PingDns.this.debugInfo("End of IcmpCheck");
                                                                                    Message messageObtainMessage6 = PingDns.this.mHandler.obtainMessage(WifiPdnHandler.EVENT_SET_WIFI_PING_RESULT, PingDns.this.mSimId, PingDns.this.mRat, new PingData(PingDns.this.mSimId, d, i));
                                                                                    PingDns.this.mPingLatency = d;
                                                                                    PingDns.this.mPacketLost = i;
                                                                                    PingDns.this.mHandler.sendMessage(messageObtainMessage6);
                                                                                }
                                                                                i8++;
                                                                                bArr8 = bArr;
                                                                                i7 = 6;
                                                                                i6 = 5;
                                                                            } catch (Exception e19) {
                                                                                e = e19;
                                                                                i3 = i10;
                                                                                PingDns.this.errorInfo("icmp :" + e.toString());
                                                                                d = d2;
                                                                                i = i4;
                                                                                close();
                                                                                PingDns.this.debugInfo("End of IcmpCheck");
                                                                                Message messageObtainMessage7 = PingDns.this.mHandler.obtainMessage(WifiPdnHandler.EVENT_SET_WIFI_PING_RESULT, PingDns.this.mSimId, PingDns.this.mRat, new PingData(PingDns.this.mSimId, d, i));
                                                                                PingDns.this.mPingLatency = d;
                                                                                PingDns.this.mPacketLost = i;
                                                                                PingDns.this.mHandler.sendMessage(messageObtainMessage7);
                                                                            }
                                                                        } catch (ErrnoException e20) {
                                                                            e = e20;
                                                                        } catch (Exception e21) {
                                                                            e = e21;
                                                                            i3 = i10;
                                                                        }
                                                                    } catch (ErrnoException e22) {
                                                                        e = e22;
                                                                    }
                                                                }
                                                            } catch (ErrnoException e23) {
                                                                e = e23;
                                                                bArr6 = bArr9;
                                                                bArr = bArr8;
                                                            } catch (Exception e24) {
                                                                e = e24;
                                                                i3 = i10;
                                                            }
                                                        } catch (ErrnoException e25) {
                                                            e = e25;
                                                            bArr = bArr8;
                                                        }
                                                        close();
                                                        PingDns.this.debugInfo("End of IcmpCheck");
                                                        Message messageObtainMessage8 = PingDns.this.mHandler.obtainMessage(WifiPdnHandler.EVENT_SET_WIFI_PING_RESULT, PingDns.this.mSimId, PingDns.this.mRat, new PingData(PingDns.this.mSimId, d, i));
                                                        PingDns.this.mPingLatency = d;
                                                        PingDns.this.mPacketLost = i;
                                                        PingDns.this.mHandler.sendMessage(messageObtainMessage8);
                                                    }
                                                    PingDns.this.errorInfo("Reply error: for icmp.seq " + i10 + ", ret" + iPoll);
                                                    i4++;
                                                    d2 += 100.0d;
                                                    bArr = bArr8;
                                                }
                                                Thread.sleep(100L);
                                                bArr8 = bArr;
                                                i7 = 6;
                                                i6 = 5;
                                            } catch (Exception e26) {
                                                e = e26;
                                                i3 = i10;
                                                PingDns.this.errorInfo("icmp :" + e.toString());
                                                d = d2;
                                                i = i4;
                                                close();
                                                PingDns.this.debugInfo("End of IcmpCheck");
                                                Message messageObtainMessage9 = PingDns.this.mHandler.obtainMessage(WifiPdnHandler.EVENT_SET_WIFI_PING_RESULT, PingDns.this.mSimId, PingDns.this.mRat, new PingData(PingDns.this.mSimId, d, i));
                                                PingDns.this.mPingLatency = d;
                                                PingDns.this.mPacketLost = i;
                                                PingDns.this.mHandler.sendMessage(messageObtainMessage9);
                                            }
                                        }
                                        if (i9 >= 5) {
                                            PingDns.this.debugInfo("Write Failed five times");
                                            break;
                                        }
                                        try {
                                            i9++;
                                            bArr8 = bArr8;
                                            i7 = 6;
                                            i6 = 5;
                                        } catch (Exception e27) {
                                            e = e27;
                                            i3 = i10;
                                            PingDns.this.errorInfo("icmp :" + e.toString());
                                            d = d2;
                                            i = i4;
                                            close();
                                            PingDns.this.debugInfo("End of IcmpCheck");
                                            Message messageObtainMessage10 = PingDns.this.mHandler.obtainMessage(WifiPdnHandler.EVENT_SET_WIFI_PING_RESULT, PingDns.this.mSimId, PingDns.this.mRat, new PingData(PingDns.this.mSimId, d, i));
                                            PingDns.this.mPingLatency = d;
                                            PingDns.this.mPacketLost = i;
                                            PingDns.this.mHandler.sendMessage(messageObtainMessage10);
                                        }
                                    } catch (Exception e28) {
                                        e = e28;
                                        i3 = i10;
                                    }
                                } catch (Exception e29) {
                                    e = e29;
                                    i3 = i10;
                                }
                            }
                            PingDns.this.debugInfo("pingResult: mPingLatency = " + d + ", no. of packet lost = " + i);
                        } catch (Exception e30) {
                            e = e30;
                            i3 = i10;
                            d2 = d;
                            i4 = i;
                            PingDns.this.errorInfo("icmp :" + e.toString());
                            d = d2;
                            i = i4;
                        }
                        i = (i4 * 100) / 5;
                    } catch (Exception e31) {
                        e = e31;
                        i3 = i10;
                        d2 = d;
                    }
                    PingDns.this.debugInfo("pingResult: writeFail : " + i9 + ", readFail : " + i8);
                    if (i9 <= 0 || i8 > 0) {
                        i4 += i9 + i8;
                        d2 += (double) (i4 * 100);
                    }
                    d = d2 / 5.0d;
                } catch (Exception e32) {
                    e = e32;
                    i3 = i10;
                }
            } catch (Exception e33) {
                e = e33;
            }
            close();
            PingDns.this.debugInfo("End of IcmpCheck");
            Message messageObtainMessage11 = PingDns.this.mHandler.obtainMessage(WifiPdnHandler.EVENT_SET_WIFI_PING_RESULT, PingDns.this.mSimId, PingDns.this.mRat, new PingData(PingDns.this.mSimId, d, i));
            PingDns.this.mPingLatency = d;
            PingDns.this.mPacketLost = i;
            PingDns.this.mHandler.sendMessage(messageObtainMessage11);
        }
    }

    private class NetworkTask extends AsyncTask<Void, Void, Object> {
        private NetworkTask() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Object doInBackground(Void... voidArr) {
            PingDns.this.debugInfo("doInBackground");
            InetAddress imsDnsServer = PingDns.this.getImsDnsServer();
            if (imsDnsServer == null) {
                PingDns.this.debugInfo("Can't Process ping request");
                return null;
            }
            try {
                PingDns.this.runIcmpCheck(imsDnsServer);
            } catch (Exception e) {
                e.printStackTrace();
            }
            return null;
        }
    }

    private class SimpleSocketCheck implements Closeable {
        protected final int mAddressFamily;
        protected FileDescriptor mFileDescriptor;
        protected SocketAddress mSocketAddress = null;
        protected final InetAddress mTarget;

        protected SimpleSocketCheck(InetAddress inetAddress) throws UnknownHostException {
            if (inetAddress instanceof Inet6Address) {
                Inet6Address byAddress = null;
                if (inetAddress.isLinkLocalAddress() && PingDns.mInterfaceIndex != null) {
                    try {
                        byAddress = Inet6Address.getByAddress((String) null, inetAddress.getAddress(), PingDns.mInterfaceIndex.intValue());
                    } catch (UnknownHostException e) {
                        PingDns.this.errorInfo("err in SimpleSocketCheck:" + e.toString());
                    }
                }
                this.mTarget = byAddress != null ? byAddress : inetAddress;
                this.mAddressFamily = OsConstants.AF_INET6;
            } else {
                this.mTarget = inetAddress;
                this.mAddressFamily = OsConstants.AF_INET;
            }
            PingDns.this.debugInfo("mAddressFamily : " + this.mAddressFamily);
        }

        @Override // java.io.Closeable, java.lang.AutoCloseable
        public void close() {
            IoUtils.closeQuietly(this.mFileDescriptor);
        }

        protected String getSocketAddressString() {
            SocketAddress socketAddress = this.mSocketAddress;
            if (socketAddress == null) {
                return "null";
            }
            InetSocketAddress inetSocketAddress = (InetSocketAddress) socketAddress;
            InetAddress address = inetSocketAddress.getAddress();
            return String.format(address instanceof Inet6Address ? "[%s]:%d" : "%s:%d", address.getHostAddress(), Integer.valueOf(inetSocketAddress.getPort()));
        }

        protected void setupSocket(int i, int i2, long j, long j2, int i3) throws IOException, ErrnoException {
            PingDns.this.debugInfo("setupSocket: sockType = " + i + ", protocol =" + i2 + ", mAddressFamily" + this.mAddressFamily);
            FileDescriptor fileDescriptorSocket = Os.socket(this.mAddressFamily, i, i2);
            this.mFileDescriptor = fileDescriptorSocket;
            Os.setsockoptTimeval(fileDescriptorSocket, OsConstants.SOL_SOCKET, OsConstants.SO_SNDTIMEO, StructTimeval.fromMillis(j));
            Os.setsockoptTimeval(this.mFileDescriptor, OsConstants.SOL_SOCKET, OsConstants.SO_RCVTIMEO, StructTimeval.fromMillis(j2));
            InetSocketAddress inetSocketAddress = (InetSocketAddress) Os.getsockname(this.mFileDescriptor);
            PingDns.this.debugInfo("setupSocket: sockname = " + inetSocketAddress.toString() + ", PORT = " + i3 + ", fd = " + this.mFileDescriptor);
            Os.connect(this.mFileDescriptor, this.mTarget, i3);
            PingDns.this.debugInfo("socket connect succssfully");
        }
    }

    public PingDns(Context context, int i, int i2, Handler handler) {
        Log.i(TAG, "PingDns Construct for sim" + i);
        this.mContext = context;
        this.mHandler = handler;
        this.mRat = i2;
        this.mSimId = i;
        this.mConnectivityManager = (ConnectivityManager) context.getSystemService("connectivity");
        this.mPingLatency = 0.0d;
        this.mPacketLost = 0;
        this.mWifiLinkProp = null;
        this.mDnsAddressIpv6 = null;
        this.mDnsAddressIpv4 = null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void debugInfo(String str) {
        Log.i(TAG, "[" + this.mSimId + "]: " + str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void errorInfo(String str) {
        Log.e(TAG, "[" + this.mSimId + "]: " + str);
    }

    private LinkProperties getActiveLinkProp() {
        NetworkCapabilities networkCapabilities;
        Network activeNetwork = this.mConnectivityManager.getActiveNetwork();
        if (activeNetwork == null || (networkCapabilities = this.mConnectivityManager.getNetworkCapabilities(activeNetwork)) == null || !networkCapabilities.hasTransport(1)) {
            return null;
        }
        LinkProperties linkProperties = this.mConnectivityManager.getLinkProperties(activeNetwork);
        debugInfo("getActiveLinkProp: " + linkProperties);
        return linkProperties;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public InetAddress getImsDnsServer() {
        debugInfo("getImsDnsServer");
        NetworkInfo activeNetworkInfo = this.mConnectivityManager.getActiveNetworkInfo();
        if (activeNetworkInfo == null) {
            debugInfo("no active nwInfo");
            return null;
        }
        debugInfo("nwInfo =" + activeNetworkInfo + ", nwInfo.getType = " + activeNetworkInfo.getType());
        for (Network network : this.mConnectivityManager.getAllNetworks()) {
            debugInfo("Checking network:" + network);
            NetworkCapabilities networkCapabilities = this.mConnectivityManager.getNetworkCapabilities(network);
            debugInfo("nc = " + networkCapabilities + ", nwInfo = " + activeNetworkInfo);
            if (networkCapabilities != null && networkCapabilities.hasCapability(4)) {
                LinkProperties linkProperties = this.mConnectivityManager.getLinkProperties(network);
                if (linkProperties != null) {
                    debugInfo("imsLinkProp: " + linkProperties.toString());
                    for (InetAddress inetAddress : linkProperties.getDnsServers()) {
                        if ((inetAddress instanceof Inet6Address) || (inetAddress instanceof Inet4Address)) {
                            if (!inetAddress.isLoopbackAddress()) {
                                this.mDnsAddressIpv6 = inetAddress instanceof Inet6Address ? inetAddress : this.mDnsAddressIpv6;
                                this.mDnsAddressIpv4 = inetAddress instanceof Inet4Address ? inetAddress : this.mDnsAddressIpv4;
                            }
                        }
                    }
                    debugInfo("mDnsAddressIpv6 = " + this.mDnsAddressIpv6 + ", mDnsAddressIpv4 = " + this.mDnsAddressIpv4);
                    break;
                }
                debugInfo("imsLinkProp null");
                break;
            }
            debugInfo("No network found with IMS capability");
        }
        InetAddress staticDnsServer = this.mDnsAddressIpv4;
        if (this.mDnsAddressIpv4 == null) {
            staticDnsServer = this.mDnsAddressIpv6 == null ? getStaticDnsServer() : this.mDnsAddressIpv6;
        }
        debugInfo("dnsAddress = " + staticDnsServer);
        return staticDnsServer;
    }

    private static Integer getInterfaceIndex(String str) {
        try {
            return Integer.valueOf(NetworkInterface.getByName(str).getIndex());
        } catch (NullPointerException | SocketException e) {
            return null;
        }
    }

    private InetAddress getStaticDnsServer() {
        debugInfo("getStaticDnsServer");
        try {
            debugInfo("Fallback to static IPV6 = 2405:200:800:1");
            try {
                return InetAddress.getByName(STATIC_DNS_IPV6);
            } catch (UnknownHostException e) {
                debugInfo("Unable to resolve IPV6 host, Fallback to static IPV4 = 49.45.0.1");
                return InetAddress.getByName(STATIC_DNS_IPV4);
            }
        } catch (Exception e2) {
            debugInfo("Exception: " + e2);
            e2.printStackTrace();
            return null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final long now() {
        return SystemClock.elapsedRealtimeNanos();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void runIcmpCheck(InetAddress inetAddress) {
        Thread thread = new Thread(new IcmpCheck(inetAddress));
        thread.setName(IcmpCheck.class.getName());
        thread.start();
    }

    void assertEquals(int i, int i2) {
        if (i != i2) {
            debugInfo("Assertion failed! Expected: <" + i + "> Got: <" + i2 + ">");
        }
    }

    public int getPacketLoss() {
        debugInfo("mPacketLost:" + this.mPacketLost);
        return this.mPacketLost;
    }

    public double getPingLatency() {
        debugInfo("mPingLatency:" + this.mPingLatency);
        return this.mPingLatency;
    }

    public void pingWifiGateway() {
        debugInfo("pingWifiGateway");
        LinkProperties activeLinkProp = getActiveLinkProp();
        this.mWifiLinkProp = activeLinkProp;
        if (activeLinkProp == null) {
            debugInfo("No Active network");
        } else {
            mInterfaceIndex = getInterfaceIndex(activeLinkProp.getInterfaceName());
            new NetworkTask().execute(new Void[0]);
        }
    }
}
