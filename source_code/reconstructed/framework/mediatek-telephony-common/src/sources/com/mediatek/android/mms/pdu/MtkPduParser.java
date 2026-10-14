package com.mediatek.android.mms.pdu;

import android.util.Log;
import com.google.android.mms.pdu.CharacterSets;
import com.google.android.mms.pdu.PduContentTypes;
import com.google.android.mms.pdu.PduParser;
import com.google.android.mms.pdu.PduPart;
import java.io.ByteArrayInputStream;
import java.io.UnsupportedEncodingException;
import java.util.Arrays;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public class MtkPduParser extends PduParser {
    static final /* synthetic */ boolean $assertionsDisabled = false;
    private static final String LOG_TAG = "MtkPduParser";

    public MtkPduParser(byte[] bArr, boolean z) {
        super(bArr, z);
    }

    protected void parseContentTypeParams(ByteArrayInputStream byteArrayInputStream, HashMap<Integer, Object> map, Integer num) {
        byte[] bytes;
        int iAvailable = byteArrayInputStream.available();
        int iIntValue = num.intValue();
        while (iIntValue > 0) {
            int i = byteArrayInputStream.read();
            iIntValue--;
            if (i != 129) {
                if (i != 131) {
                    if (i != 143) {
                        if (i != 133) {
                            if (i != 134) {
                                if (i != 137) {
                                    if (i != 138) {
                                        if (i != 140) {
                                            if (i != 141) {
                                                switch (i) {
                                                    case 151:
                                                        break;
                                                    case 152:
                                                        break;
                                                    case 153:
                                                        break;
                                                    default:
                                                        switch (i) {
                                                            case 155:
                                                                break;
                                                            case 156:
                                                                break;
                                                            case 157:
                                                                break;
                                                            default:
                                                                if (-1 != skipWapValue(byteArrayInputStream, iIntValue)) {
                                                                    iIntValue = 0;
                                                                } else {
                                                                    Log.e(LOG_TAG, "Corrupt Content-Type");
                                                                }
                                                                break;
                                                        }
                                                        break;
                                                }
                                            }
                                            byte[] wapString = parseWapString(byteArrayInputStream, 0);
                                            if (wapString != null && map != null) {
                                                map.put(156, wapString);
                                            }
                                            iIntValue = num.intValue() - (iAvailable - byteArrayInputStream.available());
                                        }
                                        byte[] wapString2 = parseWapString(byteArrayInputStream, 0);
                                        if (wapString2 != null && map != null) {
                                            map.put(155, wapString2);
                                        }
                                        iIntValue = num.intValue() - (iAvailable - byteArrayInputStream.available());
                                    }
                                    byte[] wapString3 = parseWapString(byteArrayInputStream, 0);
                                    if (wapString3 != null && map != null) {
                                        map.put(153, wapString3);
                                    }
                                    iIntValue = num.intValue() - (iAvailable - byteArrayInputStream.available());
                                }
                            }
                            byte[] wapString4 = parseWapString(byteArrayInputStream, 0);
                            if (wapString4 != null && map != null) {
                                map.put(152, wapString4);
                            }
                            iIntValue = num.intValue() - (iAvailable - byteArrayInputStream.available());
                        }
                        byte[] wapString5 = parseWapString(byteArrayInputStream, 0);
                        if (wapString5 != null && map != null) {
                            map.put(151, wapString5);
                        }
                        iIntValue = num.intValue() - (iAvailable - byteArrayInputStream.available());
                    }
                    byte[] wapString6 = parseWapString(byteArrayInputStream, 0);
                    if (wapString6 != null && map != null) {
                        map.put(157, wapString6);
                    }
                    iIntValue = num.intValue() - (iAvailable - byteArrayInputStream.available());
                }
                byteArrayInputStream.mark(1);
                int iExtractByteValue = extractByteValue(byteArrayInputStream);
                byteArrayInputStream.reset();
                if (iExtractByteValue > 127) {
                    int shortInteger = parseShortInteger(byteArrayInputStream);
                    if (shortInteger < PduContentTypes.contentTypes.length && (bytes = PduContentTypes.contentTypes[shortInteger].getBytes()) != null && map != null) {
                        map.put(131, bytes);
                    }
                } else {
                    byte[] wapString7 = parseWapString(byteArrayInputStream, 0);
                    if (wapString7 != null && map != null) {
                        map.put(131, wapString7);
                    }
                }
                iIntValue = num.intValue() - (iAvailable - byteArrayInputStream.available());
            } else {
                byteArrayInputStream.mark(1);
                int iExtractByteValue2 = extractByteValue(byteArrayInputStream);
                byteArrayInputStream.reset();
                if ((iExtractByteValue2 <= 32 || iExtractByteValue2 >= 127) && iExtractByteValue2 != 0) {
                    int integerValue = (int) parseIntegerValue(byteArrayInputStream);
                    if (map != null) {
                        map.put(129, Integer.valueOf(integerValue));
                    }
                } else {
                    byte[] wapString8 = parseWapString(byteArrayInputStream, 0);
                    try {
                        int mibEnumValue = CharacterSets.getMibEnumValue(new String(wapString8));
                        if (map != null) {
                            map.put(129, Integer.valueOf(mibEnumValue));
                        }
                    } catch (UnsupportedEncodingException e) {
                        Log.e(LOG_TAG, Arrays.toString(wapString8), e);
                        if (map != null) {
                            map.put(129, 0);
                        }
                    }
                }
                iIntValue = num.intValue() - (iAvailable - byteArrayInputStream.available());
            }
        }
        if (iIntValue != 0) {
            Log.e(LOG_TAG, "Corrupt Content-Type");
        }
    }

    protected boolean parsePartHeaders(ByteArrayInputStream byteArrayInputStream, PduPart pduPart, int i) {
        int iAvailable = byteArrayInputStream.available();
        int iAvailable2 = 0;
        int i2 = i;
        while (i2 > 0) {
            int i3 = byteArrayInputStream.read();
            i2--;
            Log.v(LOG_TAG, "Part headers: " + i3);
            if (i3 <= 127) {
                int i4 = iAvailable2;
                if (i3 >= 32 && i3 <= 127) {
                    byte[] wapString = parseWapString(byteArrayInputStream, 0);
                    byte[] wapString2 = parseWapString(byteArrayInputStream, 0);
                    if (true == "Content-Transfer-Encoding".equalsIgnoreCase(new String(wapString))) {
                        pduPart.setContentTransferEncoding(wapString2);
                    }
                    int iAvailable3 = byteArrayInputStream.available();
                    i2 = i - (iAvailable - iAvailable3);
                    iAvailable2 = iAvailable3;
                } else {
                    if (-1 == skipWapValue(byteArrayInputStream, i2)) {
                        Log.e(LOG_TAG, "Corrupt Part headers");
                        return false;
                    }
                    i2 = 0;
                    iAvailable2 = i4;
                }
            } else if (i3 == 142) {
                byte[] wapString3 = parseWapString(byteArrayInputStream, 0);
                if (wapString3 != null) {
                    pduPart.setContentLocation(wapString3);
                }
                int iAvailable4 = byteArrayInputStream.available();
                i2 = i - (iAvailable - iAvailable4);
                iAvailable2 = iAvailable4;
            } else if (i3 != 167) {
                if (i3 != 174) {
                    if (i3 == 192) {
                        byte[] wapString4 = parseWapString(byteArrayInputStream, 1);
                        if (wapString4 != null) {
                            pduPart.setContentId(wapString4);
                        }
                        iAvailable2 = byteArrayInputStream.available();
                        i2 = i - (iAvailable - iAvailable2);
                    } else if (i3 != 197) {
                        if (-1 == skipWapValue(byteArrayInputStream, i2)) {
                            Log.e(LOG_TAG, "Corrupt Part headers");
                            return false;
                        }
                        i2 = 0;
                    }
                }
                if (this.mParseContentDisposition) {
                    int valueLength = parseValueLength(byteArrayInputStream);
                    byteArrayInputStream.mark(1);
                    int iAvailable5 = byteArrayInputStream.available();
                    int i5 = byteArrayInputStream.read();
                    if (i5 == 128) {
                        pduPart.setContentDisposition(PduPart.DISPOSITION_FROM_DATA);
                    } else if (i5 == 129) {
                        pduPart.setContentDisposition(PduPart.DISPOSITION_ATTACHMENT);
                    } else if (i5 == 130) {
                        pduPart.setContentDisposition(PduPart.DISPOSITION_INLINE);
                    } else {
                        byteArrayInputStream.reset();
                        pduPart.setContentDisposition(parseWapString(byteArrayInputStream, 0));
                    }
                    if (iAvailable5 - byteArrayInputStream.available() < valueLength) {
                        if (byteArrayInputStream.read() == 152) {
                            pduPart.setFilename(parseWapString(byteArrayInputStream, 0));
                        }
                        int iAvailable6 = byteArrayInputStream.available();
                        if (iAvailable5 - iAvailable6 < valueLength) {
                            int i6 = valueLength - (iAvailable5 - iAvailable6);
                            int i7 = byteArrayInputStream.read(new byte[i6], 0, i6);
                            if (i7 < i6) {
                                Log.e(LOG_TAG, "Error happened when skipping paramlast = " + i6 + " but readLen = " + i7);
                            }
                        }
                    }
                    iAvailable2 = byteArrayInputStream.available();
                    i2 = i - (iAvailable - iAvailable2);
                }
            } else {
                byte[] wapString5 = parseWapString(byteArrayInputStream, 0);
                if (wapString5 != null) {
                    pduPart.setContentTransferEncoding(wapString5);
                }
                int iAvailable7 = byteArrayInputStream.available();
                i2 = i - (iAvailable - iAvailable7);
                iAvailable2 = iAvailable7;
            }
        }
        if (i2 == 0) {
            return true;
        }
        Log.e(LOG_TAG, "Corrupt Part headers");
        return false;
    }
}
