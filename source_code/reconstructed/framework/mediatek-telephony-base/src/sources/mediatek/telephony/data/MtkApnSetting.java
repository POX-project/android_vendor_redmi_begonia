package mediatek.telephony.data;

import android.database.Cursor;
import android.net.Uri;
import android.os.Parcel;
import android.os.SystemProperties;
import android.telephony.MtkRadioAccessFamily;
import android.telephony.Rlog;
import android.telephony.ServiceState;
import android.telephony.data.ApnSetting;
import android.text.TextUtils;
import com.mediatek.internal.telephony.MtkPhoneConstants;
import mediatek.telephony.MtkTelephony;

/* JADX INFO: loaded from: classes.dex */
public class MtkApnSetting extends ApnSetting {
    private static final boolean DBG = true;
    private static final String LOG_TAG = "MtkApnSetting";
    private static final int[] MTK_SUPPORTED_APN_TYPES;
    public static final int MVNO_TYPE_PNN = 4;
    public static final int TYPE_BIP = 8192;
    public static final int TYPE_RCS = 4096;
    public static final int TYPE_VSIM = 16384;
    private static final boolean VDBG;
    public final int inactiveTimer;

    static {
        VDBG = SystemProperties.get("ro.build.type").equals("eng") ? DBG : false;
        MTK_SUPPORTED_APN_TYPES = new int[]{17, 2, 32, 64, 128, 4, MtkRadioAccessFamily.RAF_HSPA, 2048};
        APN_TYPE_STRING_MAP.put(MtkPhoneConstants.APN_TYPE_RCS, 4096);
        APN_TYPE_STRING_MAP.put(MtkPhoneConstants.APN_TYPE_BIP, 8192);
        APN_TYPE_STRING_MAP.put(MtkPhoneConstants.APN_TYPE_VSIM, 16384);
        APN_TYPE_INT_MAP.put(4096, MtkPhoneConstants.APN_TYPE_RCS);
        APN_TYPE_INT_MAP.put(8192, MtkPhoneConstants.APN_TYPE_BIP);
        APN_TYPE_INT_MAP.put(16384, MtkPhoneConstants.APN_TYPE_VSIM);
        MVNO_TYPE_STRING_MAP.put("pnn", 4);
        MVNO_TYPE_INT_MAP.put(4, "pnn");
    }

    public MtkApnSetting(int i, String str, String str2, String str3, String str4, int i2, Uri uri, String str5, int i3, String str6, String str7, int i4, int i5, int i6, int i7, boolean z, int i8, int i9, boolean z2, int i10, int i11, int i12, int i13, int i14, String str8, int i15, int i16, int i17, int i18) {
        super(new ApnSetting.Builder().setId(i).setOperatorNumeric(str).setEntryName(str2).setApnName(str3).setProxyAddress(str4).setProxyPort(i2).setMmsc(uri).setMmsProxyAddress(str5).setMmsProxyPort(i3).setUser(str6).setPassword(str7).setAuthType(i4).setApnTypeBitmask(i5).setProtocol(i6).setRoamingProtocol(i7).setCarrierEnabled(z).setNetworkTypeBitmask(i8).setProfileId(i9).setModemCognitive(DBG).setMaxConns(i10).setWaitTime(i11).setMaxConnsTime(i12).setMtu(i13).setMvnoType(i14).setMvnoMatchData(str8).setApnSetId(i15).setCarrierId(i16).setSkip464Xlat(i17));
        this.inactiveTimer = i18;
    }

    private static String emptyToNull(String str) {
        if (TextUtils.equals(str, "")) {
            return null;
        }
        return str;
    }

    private static ApnSetting fromStringEx(String[] strArr, int i, int i2, int i3, int i4, boolean z, int i5, int i6, boolean z2, int i7, int i8, int i9, int i10, int i11, String str, int i12, int i13, int i14) {
        int i15 = 0;
        if (strArr.length > 30) {
            try {
                i15 = Integer.parseInt(strArr[30]);
            } catch (NumberFormatException e) {
                Rlog.e(LOG_TAG, "NumberFormatException, inactive timer = " + strArr[30]);
            }
        }
        return new MtkApnSetting(-1, strArr[10] + strArr[11], strArr[0], strArr[1], strArr[2], portFromString(strArr[3]), UriFromString(strArr[7]), strArr[8], portFromString(strArr[9]), strArr[4], strArr[5], i, i2, i3, i4, z, i5, i6, z2, i7, i8, i9, i10, i11, str, i12, i13, i14, i15);
    }

    public static ApnSetting makeApnSetting(Cursor cursor, int i) {
        int apnTypesBitmaskFromString = getApnTypesBitmaskFromString(cursor.getString(cursor.getColumnIndexOrThrow("type")));
        int i2 = cursor.getInt(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.NETWORK_TYPE_BITMASK));
        int iConvertBearerBitmaskToNetworkTypeBitmask = i2 == 0 ? ServiceState.convertBearerBitmaskToNetworkTypeBitmask(cursor.getInt(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.BEARER_BITMASK))) : i2;
        return new MtkApnSetting(cursor.getInt(cursor.getColumnIndexOrThrow("_id")), cursor.getString(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.NUMERIC)), cursor.getString(cursor.getColumnIndexOrThrow("name")), cursor.getString(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.APN)), emptyToNull(cursor.getString(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.PROXY))), portFromString(cursor.getString(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.PORT))), UriFromString(cursor.getString(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.MMSC))), emptyToNull(cursor.getString(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.MMSPROXY))), portFromString(cursor.getString(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.MMSPORT))), cursor.getString(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.USER)), cursor.getString(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.PASSWORD)), cursor.getInt(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.AUTH_TYPE)), apnTypesBitmaskFromString, getProtocolIntFromString(cursor.getString(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.PROTOCOL))), getProtocolIntFromString(cursor.getString(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.ROAMING_PROTOCOL))), cursor.getInt(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.CARRIER_ENABLED)) == 1, iConvertBearerBitmaskToNetworkTypeBitmask, cursor.getInt(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.PROFILE_ID)), cursor.getInt(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.MODEM_PERSIST)) == 1, cursor.getInt(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.MAX_CONNECTIONS)), cursor.getInt(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.WAIT_TIME_RETRY)), cursor.getInt(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.TIME_LIMIT_FOR_MAX_CONNECTIONS)), cursor.getInt(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.MTU)), getMvnoTypeIntFromString(cursor.getString(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.MVNO_TYPE))), cursor.getString(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.MVNO_MATCH_DATA)), cursor.getInt(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.APN_SET_ID)), cursor.getInt(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.CARRIER_ID)), cursor.getInt(cursor.getColumnIndexOrThrow(MtkTelephony.Carriers.SKIP_464XLAT)), i);
    }

    protected boolean hasApnType(int i) {
        if (this.mApnTypeBitmask == 255) {
            if (i == 64) {
                return false;
            }
        } else if (i == 8) {
            if (this.mApnTypeBitmask == 8) {
                return DBG;
            }
            return false;
        }
        return super.hasApnType(i);
    }

    @Override // android.telephony.data.ApnSetting
    public String toString() {
        return super.toString() + ", " + this.inactiveTimer;
    }

    @Override // android.telephony.data.ApnSetting, android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        super.writeToParcel(parcel, i);
        parcel.writeInt(this.inactiveTimer);
    }
}
