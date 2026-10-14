package com.mediatek.ims;

import android.telephony.Rlog;
import java.io.IOException;

/* JADX INFO: loaded from: classes.dex */
public class RttTextEncoder {
    private static final String LOG_TAG = "RttTextEncoder";
    private final byte B_10000000 = -128;
    private final byte B_11000000 = -64;
    private final byte B_11100000 = -32;
    private final byte B_11110000 = -16;
    private final byte B_00011100 = 28;
    private final byte B_00000011 = 3;
    private final byte B_00000111 = 7;
    private final byte B_00111111 = 63;
    private final byte B_00001111 = 15;
    private final byte B_00111100 = 60;
    private final byte B_00110000 = 48;
    private byte[] mRemaining = new byte[0];

    private class CharList {
        private char[] data;
        private int used;

        private CharList() {
            this.data = null;
            this.used = 0;
        }

        public void add(int i) {
            char[] cArr = this.data;
            if (cArr == null) {
                this.data = new char[16];
            } else {
                int i2 = this.used;
                if (i2 >= cArr.length) {
                    char[] cArr2 = new char[cArr.length * 2];
                    System.arraycopy(cArr, 0, cArr2, 0, i2);
                    this.data = cArr2;
                }
            }
            for (char c : Character.toChars(i)) {
                char[] cArr3 = this.data;
                int i3 = this.used;
                this.used = i3 + 1;
                cArr3[i3] = c;
            }
        }

        public char[] toArray() {
            int i = this.used;
            char[] cArr = new char[i];
            System.arraycopy(this.data, 0, cArr, 0, i);
            return cArr;
        }
    }

    private void addRemaining(byte b) {
        this.mRemaining = appendByteArray(this.mRemaining, new byte[]{b});
    }

    private byte[] appendByteArray(byte[] bArr, byte[] bArr2) {
        if (bArr.length == 0) {
            return bArr2;
        }
        if (bArr2.length == 0) {
            return bArr;
        }
        byte[] bArr3 = new byte[bArr.length + bArr2.length];
        System.arraycopy(bArr, 0, bArr3, 0, bArr.length);
        System.arraycopy(bArr2, 0, bArr3, bArr.length, bArr2.length);
        return bArr3;
    }

    private boolean checkIsRemaining(int i, byte[] bArr) {
        addRemaining(bArr[i - 1]);
        return i >= bArr.length;
    }

    private void clearRemaining() {
        this.mRemaining = new byte[0];
    }

    private boolean isNotHead(byte b) {
        return (b & (-64)) == -128;
    }

    private int makeChar(int i, int i2) {
        return (i << 8) + i2;
    }

    private int makeChar(int i, int i2, int i3) {
        return (i << 16) + (i2 << 8) + i3;
    }

    private String printBytes(byte[] bArr) {
        String str = "";
        for (byte b : bArr) {
            str = str + Integer.toString(b & 255, 16) + " ";
        }
        return str;
    }

    private String sensitiveEncode(String str) {
        return ImsServiceCallTracker.sensitiveEncode(str);
    }

    private char[] toUCS2(byte[] bArr) {
        CharList charList = new CharList();
        byte[] bArrAppendByteArray = appendByteArray(this.mRemaining, bArr);
        clearRemaining();
        int i = 0;
        while (i < bArrAppendByteArray.length) {
            try {
                byte b = bArrAppendByteArray[i];
                if (!isNotHead(b)) {
                    if (b > 0) {
                        charList.add((char) b);
                    } else if ((b & (-16)) == -16) {
                        if (checkIsRemaining(i + 1, bArrAppendByteArray)) {
                            break;
                        }
                        byte b2 = bArrAppendByteArray[i + 1];
                        if (isNotHead(b2)) {
                            i++;
                            if (checkIsRemaining(i + 1, bArrAppendByteArray)) {
                                break;
                            }
                            byte b3 = bArrAppendByteArray[i + 1];
                            if (isNotHead(b3)) {
                                i++;
                                if (checkIsRemaining(i + 1, bArrAppendByteArray)) {
                                    break;
                                }
                                byte b4 = bArrAppendByteArray[i + 1];
                                if (isNotHead(b4)) {
                                    i++;
                                    charList.add(makeChar(((b & 7) << 2) + ((b2 & 48) >> 4), ((b2 & 15) << 4) + ((b3 & 60) >> 2), ((b3 & 3) << 6) + (b4 & 63)));
                                    clearRemaining();
                                }
                            }
                        }
                    } else if ((b & (-32)) == -32) {
                        if (checkIsRemaining(i + 1, bArrAppendByteArray)) {
                            break;
                        }
                        byte b5 = bArrAppendByteArray[i + 1];
                        if (isNotHead(b5)) {
                            i++;
                            if (checkIsRemaining(i + 1, bArrAppendByteArray)) {
                                break;
                            }
                            byte b6 = bArrAppendByteArray[i + 1];
                            if (isNotHead(b6)) {
                                i++;
                                charList.add(makeChar(((b & 15) << 4) + ((b5 & 60) >> 2), ((b5 & 3) << 6) + (b6 & 63)));
                                clearRemaining();
                            }
                        }
                    } else {
                        if (checkIsRemaining(i + 1, bArrAppendByteArray)) {
                            break;
                        }
                        byte b7 = bArrAppendByteArray[i + 1];
                        if (isNotHead(b7)) {
                            i++;
                            charList.add(makeChar((b & 28) >> 2, ((b & 3) << 6) + (b7 & 63)));
                            clearRemaining();
                        }
                    }
                }
                i++;
            } catch (IndexOutOfBoundsException e) {
                Rlog.e(LOG_TAG, "IndexOutOfBoundsException: toUCS2");
            }
        }
        return charList.toArray();
    }

    public String getUnicodeFromUTF8(String str) {
        try {
            String str2 = new String(str);
            int length = str2.length();
            if (length <= 0) {
                return null;
            }
            byte[] bArr = new byte[length / 2];
            for (int i = 0; i < length; i += 2) {
                bArr[i / 2] = (byte) ((Character.digit(str2.charAt(i), 16) << 4) + Character.digit(str2.charAt(i + 1), 16));
            }
            String str3 = new String(toUCS2(bArr));
            Rlog.d(LOG_TAG, "Decode len = " + sensitiveEncode(String.valueOf(str3.length())) + ", textMessage = " + sensitiveEncode(printBytes(str3.getBytes())) + ", remain len: " + sensitiveEncode(String.valueOf(this.mRemaining.length)) + ", " + sensitiveEncode(printBytes(this.mRemaining)));
            String str4 = null;
            try {
                str4 = new String(new byte[]{-17, -69, -65}, "utf-8");
            } catch (IOException e) {
                Rlog.e(LOG_TAG, "Exception when transcode bom to string.");
            }
            if (str3.length() != 1 || !str3.equals(str4) || this.mRemaining.length != 0) {
                return str3;
            }
            Rlog.d(LOG_TAG, "found BOM, ignore it");
            return null;
        } catch (Exception e2) {
            Rlog.e(LOG_TAG, "Exception: handleRttTextReceivedIndication");
            return null;
        }
    }
}
