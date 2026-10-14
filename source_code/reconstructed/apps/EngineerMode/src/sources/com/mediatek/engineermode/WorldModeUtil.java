package com.mediatek.engineermode;

import android.os.SystemProperties;
import android.support.v4.os.EnvironmentCompat;
import com.mediatek.engineermode.hqanfc.NfcCommand;

/* JADX INFO: loaded from: classes2.dex */
public class WorldModeUtil {
    public static final String ACTION_WORLD_MODE_CHANGED = "mediatek.intent.action.ACTION_WORLD_MODE_CHANGED";
    private static final int ACTIVE_MD_TYPE_LTG = 4;
    private static final int ACTIVE_MD_TYPE_LWCG = 5;
    private static final int ACTIVE_MD_TYPE_LWG = 3;
    private static final int ACTIVE_MD_TYPE_LfWG = 7;
    private static final int ACTIVE_MD_TYPE_LtTG = 6;
    private static final int ACTIVE_MD_TYPE_TG = 2;
    private static final int ACTIVE_MD_TYPE_UNKNOWN = 0;
    private static final int ACTIVE_MD_TYPE_WG = 1;
    private static final String CDMA = "C";
    public static final String EXTRA_WORLD_MODE_CHANGE_STATE = "worldModeState";
    private static final int MASK_CDMA = 32;
    private static final int MASK_GSM = 1;
    private static final int MASK_LTEFDD = 16;
    private static final int MASK_LTETDD = 8;
    private static final int MASK_NR = 64;
    private static final int MASK_TDSCDMA = 2;
    private static final int MASK_WCDMA = 4;
    private static final int MD_TYPE_FDD = 100;
    private static final int MD_TYPE_LTG = 6;
    private static final int MD_TYPE_LWG = 5;
    private static final int MD_TYPE_TDD = 101;
    private static final int MD_TYPE_TG = 4;
    private static final int MD_TYPE_UNKNOWN = 0;
    private static final int MD_TYPE_WG = 3;
    public static final int MD_WM_CHANGED_END = 1;
    public static final int MD_WM_CHANGED_START = 0;
    public static final int MD_WM_CHANGED_UNKNOWN = -1;
    private static final int MD_WORLD_MODE_LCTG = 16;
    private static final int MD_WORLD_MODE_LFCTG = 21;
    private static final int MD_WORLD_MODE_LFTG = 20;
    private static final int MD_WORLD_MODE_LFWCG = 15;
    private static final int MD_WORLD_MODE_LFWG = 14;
    private static final int MD_WORLD_MODE_LTCTG = 17;
    private static final int MD_WORLD_MODE_LTG = 8;
    private static final int MD_WORLD_MODE_LTTG = 13;
    private static final int MD_WORLD_MODE_LTWCG = 19;
    private static final int MD_WORLD_MODE_LTWG = 18;
    private static final int MD_WORLD_MODE_LWCG = 11;
    private static final int MD_WORLD_MODE_LWCTG = 12;
    private static final int MD_WORLD_MODE_LWG = 9;
    private static final int MD_WORLD_MODE_LWTG = 10;
    private static final int MD_WORLD_MODE_NLTCTG = 26;
    private static final int MD_WORLD_MODE_NLWCG = 25;
    private static final int MD_WORLD_MODE_NLWCTG = 24;
    private static final int MD_WORLD_MODE_NLWG = 22;
    private static final int MD_WORLD_MODE_NLWTG = 23;
    private static final int MD_WORLD_MODE_UNKNOWN = 0;
    private static final String PROPERTY_ACTIVE_MD = "vendor.ril.active.md";
    private static final String PROPERTY_MAJOR_SIM = "persist.vendor.radio.simswitch";
    private static final String PROPERTY_RAT_CONFIG = "ro.vendor.mtk_ps1_rat";
    private static final String STATUS_SYNC_PREFIX = "STATUS_SYNC";
    private static final String TAG = "WorldModeActivity";
    private static final String TDSCDMA = "T";
    private static final int UTRAN_DIVISION_DUPLEX_MODE_FDD = 1;
    private static final int UTRAN_DIVISION_DUPLEX_MODE_TDD = 2;
    private static final int UTRAN_DIVISION_DUPLEX_MODE_UNKNOWN = 0;
    private static final String WCDMA = "W";
    private static final int WORLD_MODE_RESULT_ERROR = 101;
    private static final int WORLD_MODE_RESULT_SUCCESS = 100;
    private static final int WORLD_MODE_RESULT_WM_ID_NOT_SUPPORT = 102;

    private static boolean checkWmCapability(int i, int i2) {
        int i3 = 0;
        if (i == 8) {
            i3 = 27;
        } else if (i == 13) {
            i3 = 11;
        } else if (i == 10) {
            i3 = 31;
        } else if (i == 14) {
            i3 = 21;
        } else if (i == 9) {
            i3 = 29;
        } else if (i == 12) {
            i3 = 63;
        } else if (i == 16) {
            i3 = 59;
        } else if (i == 17) {
            i3 = 43;
        } else if (i == 15) {
            i3 = 53;
        } else if (i == 11) {
            i3 = 61;
        } else if (i == 18) {
            i3 = 13;
        } else if (i == 19) {
            i3 = 45;
        } else if (i == 20) {
            i3 = 19;
        } else if (i == 21) {
            i3 = 51;
        } else if (i == 22) {
            i3 = 93;
        } else if (i == 23) {
            i3 = 95;
        } else if (i == 24) {
            i3 = 127;
        } else if (i == 25) {
            i3 = 125;
        } else if (i == 26) {
            i3 = NfcCommand.CommandType.MTK_NFC_EM_ALS_CARD_MODE_REQ;
        }
        if (true == isNrSupported()) {
            i2 |= 64;
        }
        if (true == isC2kSupport()) {
            i2 |= 32;
        }
        Elog.d(TAG, "checkWmCapab: modem=" + i + " rat=" + i3 + " bandMode=" + i2);
        if (i3 == (i3 & i2)) {
            return true == isNrSupported() || (i3 & 32) == (i2 & 32);
        }
        return false;
    }

    public static int get3GDivisionDuplexMode() {
        switch (getActiveModemType()) {
            case 1:
            case 3:
            case 5:
            case 7:
                return 1;
            case 2:
            case 4:
            case 6:
                return 2;
            default:
                return 0;
        }
    }

    private static int getActiveModemType() {
        if (!isWorldModeSupport()) {
            int worldModeId = getWorldModeId();
            if (worldModeId == 3) {
                return 1;
            }
            if (worldModeId == 4) {
                return 2;
            }
            if (worldModeId != 5) {
                return worldModeId != 6 ? 0 : 4;
            }
            return 3;
        }
        int worldModeId2 = getWorldModeId();
        int iIntValue = Integer.valueOf(SystemProperties.get("vendor.ril.nw.worldmode.activemode", "0")).intValue();
        switch (worldModeId2) {
            case 8:
            case 16:
            case 20:
            case 21:
                return 4;
            case 9:
            case 18:
            case 22:
                return 3;
            case 10:
            case 12:
            case 23:
            case 24:
                if (iIntValue <= 0) {
                    return 0;
                }
                if (iIntValue == 1) {
                    return 3;
                }
                return iIntValue == 2 ? 4 : 0;
            case 11:
            case 15:
            case 19:
            case 25:
                return 5;
            case 13:
            case 17:
            case 26:
                return 6;
            case 14:
                return 7;
            default:
                return 0;
        }
    }

    public static int getMajorSim() {
        String str = SystemProperties.get("persist.vendor.radio.simswitch", "");
        if (str == null || str.equals("")) {
            Elog.d(TAG, "[getMajorSim]: fail to get major SIM");
            return -99;
        }
        StringBuilder sb = new StringBuilder();
        sb.append("[getMajorSim]: ");
        sb.append(Integer.parseInt(str) - 1);
        Elog.d(TAG, sb.toString());
        return Integer.parseInt(str) - 1;
    }

    public static int getWorldModeId() {
        return Integer.valueOf(SystemProperties.get(PROPERTY_ACTIVE_MD, Integer.toString(0))).intValue();
    }

    public static boolean isC2kSupport() {
        String str = SystemProperties.get(PROPERTY_RAT_CONFIG, "");
        return str.length() > 0 && str.contains(CDMA);
    }

    public static boolean isNrSupported() {
        return RatConfiguration.isNrSupported();
    }

    public static boolean isWorldModeSupport() {
        return SystemProperties.getInt(FeatureSupport.FK_MD_WM_SUPPORT, 0) == 1;
    }

    public static boolean isWorldPhoneSupport() {
        String str = SystemProperties.get(PROPERTY_RAT_CONFIG, "");
        return str.length() > 0 && str.contains(WCDMA) && str.contains(TDSCDMA);
    }

    private static void setWorldMode(int i) {
        Elog.d(TAG, "[setWorldMode] worldMode=" + i);
        if (i != getWorldModeId()) {
            int i2 = true == isNrSupported() ? 26 : 21;
            if (i < 8 || i > i2) {
                Elog.d(TAG, "Invalid world mode:" + i);
                return;
            }
            String str = "MTK worldmodeid," + String.valueOf(i);
            if (isC2kSupport() || FeatureSupport.is93Modem()) {
                EmUtils.invokeOemRilRequestStringsEm(new String[]{STATUS_SYNC_PREFIX, str}, null);
                return;
            }
            EmUtils.reloadModemType(i);
            EmUtils.storeModemType(i);
            EmUtils.rebootModem();
            return;
        }
        if (i == 8) {
            Elog.d(TAG, "Already in uTLG mode");
            return;
        }
        if (i == 9) {
            Elog.d(TAG, "Already in uLWG mode");
            return;
        }
        if (i == 10) {
            Elog.d(TAG, "Already in uLWTG mode");
            return;
        }
        if (i == 11) {
            Elog.d(TAG, "Already in uLWCG mode");
            return;
        }
        if (i == 12) {
            Elog.d(TAG, "Already in uLWTCG mode");
            return;
        }
        if (i == 13) {
            Elog.d(TAG, "Already in LtTG mode");
            return;
        }
        if (i == 14) {
            Elog.d(TAG, "Already in LfWG mode");
            return;
        }
        if (i == 15) {
            Elog.d(TAG, "Already in uLfWCG mode");
            return;
        }
        if (i == 16) {
            Elog.d(TAG, "Already in uLCTG mode");
            return;
        }
        if (i == 17) {
            Elog.d(TAG, "Already in uLtCTG mode");
            return;
        }
        if (i == 18) {
            Elog.d(TAG, "Already in uLtWG mode");
            return;
        }
        if (i == 19) {
            Elog.d(TAG, "Already in uLtWCG mode");
            return;
        }
        if (i == 20) {
            Elog.d(TAG, "Already in uLfTG mode");
            return;
        }
        if (i == 21) {
            Elog.d(TAG, "Already in uLfCTG mode");
            return;
        }
        if (i == 22) {
            Elog.d(TAG, "Already in uNLWG mode");
            return;
        }
        if (i == 23) {
            Elog.d(TAG, "Already in uNLWTG mode");
            return;
        }
        if (i == 24) {
            Elog.d(TAG, "Already in uNLWCTG mode");
        } else if (i == 25) {
            Elog.d(TAG, "Already in uNLWCG mode");
        } else if (i == 26) {
            Elog.d(TAG, "Already in uNLTCTG mode");
        }
    }

    public static int setWorldModeWithBand(int i, int i2) {
        if (checkWmCapability(i, i2)) {
            setWorldMode(i);
            return 100;
        }
        Elog.d(TAG, "setWorldModeWithBand: not match, modem=" + i + " bandMode=" + i2);
        return 102;
    }

    public static String worldModeIdToString(int i) {
        String str = EnvironmentCompat.MEDIA_UNKNOWN;
        int iIntValue = Integer.valueOf(SystemProperties.get("vendor.ril.nw.worldmode.activemode", "0")).intValue();
        if (iIntValue == 1) {
            str = "FDD";
        } else if (iIntValue == 2) {
            str = "TDD";
        }
        switch (i) {
            case 8:
                return "LTG";
            case 9:
                return "LWG";
            case 10:
                return "LWTG(Auto mode:" + str + ")";
            case 11:
                return "LWCG";
            case 12:
                return "LWCTG(Auto mode:" + str + ")";
            case 13:
                return "LtTG";
            case 14:
                return "LfWG";
            case 15:
                return "LfWCG";
            case 16:
                return "LCTG";
            case 17:
                return "LtCTG";
            case 18:
                return "LtWG";
            case 19:
                return "LtWCG";
            case 20:
                return "LfTG";
            case 21:
                return "LfCTG";
            case 22:
                return "NLWG";
            case 23:
                return "NLWTG(Auto mode:" + str + ")";
            case 24:
                return "NLWCTG(Auto Mode:" + str + ")";
            case 25:
                return "NLWCG";
            case 26:
                return "NLTCTG";
            default:
                return "unknown world mode id";
        }
    }
}
