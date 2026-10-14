package com.mediatek.internal.telephony.cat;

import com.android.internal.telephony.cat.ComprehensionTlv;
import com.android.internal.telephony.cat.Item;
import com.android.internal.telephony.cat.ResultCode;
import com.android.internal.telephony.cat.ResultException;
import com.android.internal.telephony.uicc.IccUtils;
import com.mediatek.internal.telephony.ppl.PplMessageManager;

/* JADX INFO: loaded from: classes.dex */
abstract class MtkValueParser {
    MtkValueParser() {
    }

    static int removeInvalidCharInItemTextString(byte[] bArr, int i, int i2) {
        Boolean bool = false;
        int i3 = i2;
        if ((i2 >= 1 && bArr[i + 1] == -128) || ((i2 >= 3 && bArr[i + 1] == -127) || (i2 >= 4 && bArr[i + 1] == -126))) {
            bool = true;
        }
        if (!bool.booleanValue() && i2 > 0) {
            for (int i4 = i2; i4 > 0 && bArr[i + i4] == -16; i4--) {
                i3--;
            }
        }
        return i3;
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.cat.ResultException */
    static String retrieveAlphaId(ComprehensionTlv comprehensionTlv, boolean z) throws ResultException {
        if (comprehensionTlv == null) {
            if (z) {
                return null;
            }
            return "Default Message";
        }
        byte[] rawValue = comprehensionTlv.getRawValue();
        int valueIndex = comprehensionTlv.getValueIndex();
        int length = comprehensionTlv.getLength();
        if (length != 0) {
            try {
                return IccUtils.adnStringFieldToString(rawValue, valueIndex, length);
            } catch (IndexOutOfBoundsException e) {
                throw new ResultException(ResultCode.CMD_DATA_NOT_UNDERSTOOD);
            }
        }
        MtkCatLog.d("ValueParser", "Alpha Id length=" + length);
        return "";
    }

    static Item retrieveItem(ComprehensionTlv comprehensionTlv) throws ResultException {
        byte[] rawValue = comprehensionTlv.getRawValue();
        int valueIndex = comprehensionTlv.getValueIndex();
        int length = comprehensionTlv.getLength();
        if (length == 0) {
            return null;
        }
        try {
            return new Item(rawValue[valueIndex] & PplMessageManager.Type.INVALID, IccUtils.adnStringFieldToString(rawValue, valueIndex + 1, removeInvalidCharInItemTextString(rawValue, valueIndex, length - 1)));
        } catch (IndexOutOfBoundsException e) {
            MtkCatLog.d("ValueParser", "retrieveItem fail");
            return null;
        }
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.cat.ResultException */
    static byte[] retrieveNextActionIndicator(ComprehensionTlv comprehensionTlv) throws ResultException {
        byte[] rawValue = comprehensionTlv.getRawValue();
        int valueIndex = comprehensionTlv.getValueIndex();
        int length = comprehensionTlv.getLength();
        byte[] bArr = new byte[length];
        int i = 0;
        while (i < length) {
            int i2 = i + 1;
            int i3 = valueIndex + 1;
            try {
                bArr[i] = rawValue[valueIndex];
                i = i2;
                valueIndex = i3;
            } catch (IndexOutOfBoundsException e) {
                throw new ResultException(ResultCode.CMD_DATA_NOT_UNDERSTOOD);
            }
        }
        return bArr;
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.internal.telephony.cat.ResultException */
    static int retrieveTarget(ComprehensionTlv comprehensionTlv) throws ResultException {
        try {
            return comprehensionTlv.getRawValue()[comprehensionTlv.getValueIndex()] & PplMessageManager.Type.INVALID;
        } catch (IndexOutOfBoundsException e) {
            throw new ResultException(ResultCode.CMD_DATA_NOT_UNDERSTOOD);
        }
    }
}
