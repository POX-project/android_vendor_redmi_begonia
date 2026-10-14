package com.mediatek.internal.telephony.test;

import java.io.IOException;
import java.io.InputStream;
import java.io.UnsupportedEncodingException;

/* JADX INFO: compiled from: MtkModelInterpreter.java */
/* JADX INFO: loaded from: classes.dex */
class LineReader {
    static final int BUFFER_SIZE = 4096;
    byte[] mBuffer = new byte[4096];
    InputStream mInStream;

    LineReader(InputStream inputStream) {
        this.mInStream = inputStream;
    }

    String getNextLine() {
        return getNextLine(false);
    }

    String getNextLine(boolean z) {
        int i;
        int i2 = 0;
        while (true) {
            try {
                int i3 = this.mInStream.read();
                if (i3 < 0) {
                    return null;
                }
                if (!z || i3 != 26) {
                    if (i3 != 13 && i3 != 10) {
                        i = i2 + 1;
                        try {
                            this.mBuffer[i2] = (byte) i3;
                            i2 = i;
                        } catch (IOException e) {
                        } catch (IndexOutOfBoundsException e2) {
                            System.err.println("ATChannel: buffer overflow");
                            i2 = i;
                            return new String(this.mBuffer, 0, i2, "US-ASCII");
                        }
                    } else if (i2 == 0) {
                    }
                }
                try {
                    return new String(this.mBuffer, 0, i2, "US-ASCII");
                } catch (UnsupportedEncodingException e3) {
                    System.err.println("ATChannel: implausable UnsupportedEncodingException");
                    return null;
                }
            } catch (IOException e4) {
            } catch (IndexOutOfBoundsException e5) {
                i = i2;
            }
            return null;
        }
    }

    String getNextLineCtrlZ() {
        return getNextLine(true);
    }
}
