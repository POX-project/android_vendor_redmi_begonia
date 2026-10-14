package com.mediatek.ims.config;

import android.content.ContentUris;
import android.net.Uri;
import android.provider.BaseColumns;
import androidx.core.app.NotificationManagerCompat;

/* JADX INFO: loaded from: classes.dex */
public class ImsConfigContract {
    public static final String ACTION_CONFIG_LOADED = "com.mediatek.ims.config.action.CONFIG_LOADED";
    public static final String ACTION_CONFIG_UPDATE = "com.mediatek.ims.config.action.CONFIG_UPDATE";
    public static final String ACTION_DYNAMIC_IMS_SWITCH_COMPLETE = "com.mediatek.ims.config.action.DYNAMIC_IMS_SWITCH_COMPLETE";
    public static final String ACTION_DYNAMIC_IMS_SWITCH_TRIGGER = "com.mediatek.ims.config.action.DYNAMIC_IMS_SWITCH_TRIGGER";
    public static final String ACTION_IMS_CONFIG_CHANGED = "com.android.intent.action.IMS_CONFIG_CHANGED";
    public static final String ACTION_IMS_FEATURE_CHANGED = "com.android.intent.action.IMS_FEATURE_CHANGED";
    public static final String AUTHORITY = "com.mediatek.ims.config.provider";
    public static final String EXTRA_CHANGED_ITEM = "item";
    public static final String EXTRA_CONFIG_ID = "config_id";
    public static final String EXTRA_MIMETYPE = "mimetype";
    public static final String EXTRA_NEW_VALUE = "value";
    public static final String EXTRA_PHONE_ID = "phone_id";
    public static final String TABLE_CONFIG_SETTING = "tb_config_setting";
    public static final String TABLE_DEFAULT = "tb_default";
    public static final String TABLE_FEATURE = "tb_feature";
    public static final String TABLE_MASTER = "tb_master";
    public static final String TABLE_PROVISION = "tb_provision";
    public static final String TABLE_RESOURCE = "tb_resource";
    public static final String VALUE_NO_DEFAULT = "n/a";
    public static final Uri CONTENT_URI = Uri.parse("content://com.mediatek.ims.config.provider");
    private static String[] sConfigNames = {"VOCODER_AMRMODESET", "VOCODER_AMRWBMODESET", "SIP_SESSION_TIMER", "MIN_SE", "CANCELLATION_TIMER", "TDELAY", "SILENT_REDIAL_ENABLE", "SIP_T1_TIMER", "SIP_T2_TIMER", "SIP_TF_TIMER", "VLT_SETTING_ENABLED", "LVC_SETTING_ENABLED", "DOMAIN_NAME", "SMS_FORMAT", "SMS_OVER_IP", "PUBLISH_TIMER", "PUBLISH_TIMER_EXTENDED", "CAPABILITY_DISCOVERY_ENABLED", "CAPABILITIES_CACHE_EXPIRATION", "AVAILABILITY_CACHE_EXPIRATION", "CAPABILITIES_POLL_INTERVAL", "SOURCE_THROTTLE_PUBLISH", "MAX_NUMENTRIES_IN_RCL", "CAPAB_POLL_LIST_SUB_EXP", "GZIP_FLAG", "EAB_SETTING_ENABLED", "VOICE_OVER_WIFI_ROAMING", "VOICE_OVER_WIFI_MODE", "VOICE_OVER_WIFI_SETTING_ENABLED", "MOBILE_DATA_ENABLED", "VOLTE_USER_OPT_IN_STATUS", "LBO_PCSCF_ADDRESS", "KEEP_ALIVE_ENABLED", "REGISTRATION_RETRY_BASE_TIME_SEC", "REGISTRATION_RETRY_MAX_TIME_SEC", "SPEECH_START_PORT", "SPEECH_END_PORT", "SIP_INVITE_REQ_RETX_INTERVAL_MSEC", "SIP_INVITE_RSP_WAIT_TIME_MSEC", "SIP_INVITE_RSP_RETX_WAIT_TIME_MSEC", "SIP_NON_INVITE_REQ_RETX_INTERVAL_MSEC", "SIP_NON_INVITE_TXN_TIMEOUT_TIMER_MSEC", "SIP_INVITE_RSP_RETX_INTERVAL_MSEC", "SIP_ACK_RECEIPT_WAIT_TIME_MSEC", "SIP_ACK_RETX_WAIT_TIME_MSEC", "SIP_NON_INVITE_REQ_RETX_WAIT_TIME_MSEC", "SIP_NON_INVITE_RSP_RETX_WAIT_TIME_MSEC", "AMR_WB_OCTET_ALIGNED_PT", "AMR_WB_BANDWIDTH_EFFICIENT_PT", "AMR_OCTET_ALIGNED_PT", "AMR_BANDWIDTH_EFFICIENT_PT", "DTMF_WB_PT", "DTMF_NB_PT", "AMR_DEFAULT_MODE", "SMS_PSI", "VIDEO_QUALITY", "TH_LTE1", "TH_LTE2", "TH_LTE3", "TH_1x", "VOWT_A", "VOWT_B", "T_EPDG_LTE", "T_EPDG_WIFI", "T_EPDG_1X", "VICE_SETTING_ENABLED", "RTT_SETTING_ENABLED"};
    private static String[] sMtkConfigNames = {"EPDG_ADDRESS", "PUBLISH_ERROR_RETRY_TIMER", "VOICE_OVER_WIFI_MDN", "VOICE_DOMAIN_PREFERENCE"};

    public static abstract class BasicConfigTable implements BaseColumns {
        public static final String CONFIG_ID = "config_id";
        public static final String DATA = "data";
        public static final String MIMETYPE_ID = "mimetype_id";
        public static final String PHONE_ID = "phone_id";
    }

    public static class ConfigSetting implements BaseColumns {
        public static final Uri CONTENT_URI = Uri.parse("content://com.mediatek.ims.config.provider/tb_config_setting");
        public static final String PHONE_ID = "phone_id";
        public static final String SETTING_ID = "setting_id";
        public static final int SETTING_ID_OPCODE = 0;
        public static final String VALUE = "value";

        public static Uri getUriWithSettingId(int i, int i2) {
            return ContentUris.withAppendedId(ContentUris.withAppendedId(CONTENT_URI, i), i2);
        }
    }

    public static class Default extends BasicConfigTable {
        public static final Uri CONTENT_URI = Uri.parse("content://com.mediatek.ims.config.provider/tb_default");
        public static final String UNIT_ID = "unit_id";

        public static Uri getUriWithConfigId(int i, int i2) {
            return Uri.withAppendedPath(ContentUris.withAppendedId(CONTENT_URI, i), ImsConfigContract.configIdToName(i2));
        }
    }

    public static class Feature implements BaseColumns {
        public static final Uri CONTENT_URI = Uri.parse("content://com.mediatek.ims.config.provider/tb_feature");
        public static final String FEATURE_ID = "feature_id";
        public static final String NETWORK_ID = "network_id";
        public static final String PHONE_ID = "phone_id";
        public static final String VALUE = "value";

        public static Uri getUriWithFeatureId(int i, int i2, int i3) {
            return ContentUris.withAppendedId(ContentUris.withAppendedId(ContentUris.withAppendedId(CONTENT_URI, i), i2), i3);
        }
    }

    public static class Master extends BasicConfigTable {
        public static final Uri CONTENT_URI = Uri.parse("content://com.mediatek.ims.config.provider/tb_master");

        public static Uri getUriWithConfigId(int i, int i2) {
            return Uri.withAppendedPath(ContentUris.withAppendedId(CONTENT_URI, i), ImsConfigContract.configIdToName(i2));
        }
    }

    public interface MimeType {
        public static final int FLOAT = 2;
        public static final int INTEGER = 0;
        public static final int JSON = 3;
        public static final int STRING = 1;
    }

    public static class Operator {
        public static final int OP_06 = 6;
        public static final int OP_08 = 8;
        public static final int OP_12 = 12;
        public static final int OP_DEFAULT = 0;
        public static final int OP_NONE = -1;
    }

    public static class Provision extends BasicConfigTable {
        public static final Uri CONTENT_URI = Uri.parse("content://com.mediatek.ims.config.provider/tb_provision");
        public static final String DATETIME = "datetime";

        public static Uri getUriWithConfigId(int i, int i2) {
            return Uri.withAppendedPath(ContentUris.withAppendedId(CONTENT_URI, i), ImsConfigContract.configIdToName(i2));
        }
    }

    public static class Resource implements BaseColumns {
        public static final Uri CONTENT_URI = Uri.parse("content://com.mediatek.ims.config.provider/tb_resource");
        public static final String FEATURE_ID = "feature_id";
        public static final String PHONE_ID = "phone_id";
        public static final String VALUE = "value";

        public static Uri getUriWithFeatureId(int i, int i2) {
            return ContentUris.withAppendedId(ContentUris.withAppendedId(CONTENT_URI, i), i2);
        }
    }

    public interface Unit {
        public static final int DAYS = 6;
        public static final int HOURS = 5;
        public static final int MICROSECONDS = 1;
        public static final int MILLISECONDS = 2;
        public static final int MINUTES = 4;
        public static final int NANOSECONDS = 0;
        public static final int SECONDS = 3;
        public static final int UNIT_NONE = -1;
    }

    public static class Validator {
        public static boolean isValidConfigId(int i) {
            if (i >= 0 && i <= 1003) {
                return i <= 66 || i >= 1000;
            }
            return false;
        }

        public static boolean isValidFeatureId(int i) {
            return i == 0 || i == 1 || i == 2 || i == 3 || i == 4 || i == 5;
        }

        public static boolean isValidFeatureValue(int i) {
            return i == 0 || i == 1;
        }

        public static boolean isValidMimeTypeId(int i) {
            return i == 0 || i == 1 || i == 2 || i == 3;
        }

        public static boolean isValidNetwork(int i) {
            return i != 0;
        }

        public static boolean isValidSettingId(int i) {
            return i == 0;
        }

        /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
        /* JADX WARN: Code duplicated, block: B:23:0x004a  */
        public static boolean isValidTable(String str) {
            byte b;
            switch (str) {
                case "tb_config_setting":
                    b = 2;
                    break;
                case "tb_feature":
                    b = 0;
                    break;
                case "tb_resource":
                    b = 5;
                    break;
                case "tb_provision":
                    b = 3;
                    break;
                case "tb_master":
                    b = 4;
                    break;
                case "tb_default":
                    b = 1;
                    break;
                default:
                    b = -1;
                    break;
            }
            return b == 0 || b == 1 || b == 2 || b == 3 || b == 4 || b == 5;
        }

        public static boolean isValidUnitId(int i) {
            switch (i) {
                case -1:
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                    return true;
                default:
                    return false;
            }
        }
    }

    public static String configIdToName(int i) {
        if (i >= 1000 && i <= 1003) {
            return sMtkConfigNames[i + NotificationManagerCompat.IMPORTANCE_UNSPECIFIED];
        }
        String[] strArr = sConfigNames;
        if (i < strArr.length) {
            return strArr[i];
        }
        throw new IllegalArgumentException("Invalid config id: " + i);
    }

    public static int configNameToId(String str) {
        int i = 0;
        while (true) {
            String[] strArr = sConfigNames;
            if (i >= strArr.length) {
                int i2 = 0;
                while (true) {
                    String[] strArr2 = sMtkConfigNames;
                    if (i2 >= strArr2.length) {
                        throw new IllegalArgumentException("Unknown config: " + str);
                    }
                    if (strArr2[i2].equals(str)) {
                        return i2 + 1000;
                    }
                    i2++;
                }
            } else {
                if (strArr[i].equals(str)) {
                    return i;
                }
                i++;
            }
        }
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    public static Uri getConfigUri(String str, int i, int i2) {
        if (!Validator.isValidTable(str)) {
            throw new IllegalArgumentException("Invalid table: " + str);
        }
        byte b = -1;
        switch (str.hashCode()) {
            case -2133078972:
                if (str.equals(TABLE_CONFIG_SETTING)) {
                    b = 0;
                }
                break;
            case 45084740:
                if (str.equals(TABLE_PROVISION)) {
                    b = 2;
                }
                break;
            case 1412604243:
                if (str.equals(TABLE_MASTER)) {
                    b = 3;
                }
                break;
            case 1545420144:
                if (str.equals(TABLE_DEFAULT)) {
                    b = 1;
                }
                break;
        }
        if (b == 0) {
            return ConfigSetting.getUriWithSettingId(i, i2);
        }
        if (b == 1) {
            return Default.getUriWithConfigId(i, i2);
        }
        if (b == 2) {
            return Provision.getUriWithConfigId(i, i2);
        }
        if (b != 3) {
            return null;
        }
        return Master.getUriWithConfigId(i, i2);
    }

    public static int getNetworkTypeByFeature(int i) {
        if (i == 0 || i == 1) {
            return 13;
        }
        return i != 2 ? 0 : 18;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    public static Uri getTableUri(String str) {
        if (!Validator.isValidTable(str)) {
            throw new IllegalArgumentException("Invalid table: " + str);
        }
        byte b = -1;
        switch (str.hashCode()) {
            case -2133078972:
                if (str.equals(TABLE_CONFIG_SETTING)) {
                    b = 0;
                }
                break;
            case 45084740:
                if (str.equals(TABLE_PROVISION)) {
                    b = 2;
                }
                break;
            case 1412604243:
                if (str.equals(TABLE_MASTER)) {
                    b = 3;
                }
                break;
            case 1545420144:
                if (str.equals(TABLE_DEFAULT)) {
                    b = 1;
                }
                break;
        }
        if (b == 0) {
            return ConfigSetting.CONTENT_URI;
        }
        if (b == 1) {
            return Default.CONTENT_URI;
        }
        if (b == 2) {
            return Provision.CONTENT_URI;
        }
        if (b != 3) {
            return null;
        }
        return Master.CONTENT_URI;
    }
}
