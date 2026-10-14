package com.mediatek.ims.config.internal;

import android.content.BroadcastReceiver;
import android.content.ContentProvider;
import android.content.ContentUris;
import android.content.ContentValues;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteFullException;
import android.net.Uri;
import android.os.Build;
import android.os.SystemProperties;
import android.os.UserManager;
import android.text.TextUtils;
import android.util.Log;
import com.mediatek.ims.config.ImsConfigContract;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes.dex */
public final class ImsConfigProvider extends ContentProvider {
    static final String AUTHORITY = "com.mediatek.ims.config.provider";
    private static final boolean DEBUG;
    static HashMap<Integer, Boolean> ECCAllowBroadcast = null;
    static HashMap<Integer, Boolean> ECCAllowSendCmd = null;
    static HashMap<Integer, String> LatestSimState = null;
    private static final String PROPERTY_IMSCONFIG_FORCE_NOTIFY = "vendor.ril.imsconfig.force.notify";
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    private static final String TAG = "ImsConfigProvider";
    private Context mContext;
    SqlDatabaseHelper mDatabaseHelper = null;
    private final BroadcastReceiver mBroadcastReceiver = new BroadcastReceiver() { // from class: com.mediatek.ims.config.internal.ImsConfigProvider.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            Log.d(ImsConfigProvider.TAG, "[onReceive] action=" + intent.getAction());
            Context contextCreateDeviceProtectedStorageContext = context.createDeviceProtectedStorageContext();
            if (!contextCreateDeviceProtectedStorageContext.moveDatabaseFrom(context, "imsconfig.db")) {
                Log.wtf(ImsConfigProvider.TAG, "[onReceive] Failed to move database");
            }
            Log.d(ImsConfigProvider.TAG, "[onReceive] Move database successfully");
            ImsConfigProvider.this.mDatabaseHelper = new SqlDatabaseHelper(contextCreateDeviceProtectedStorageContext);
            Log.d(ImsConfigProvider.TAG, "[onReceive] Create mDatabaseHelper again");
            context.unregisterReceiver(ImsConfigProvider.this.mBroadcastReceiver);
        }
    };

    private static class Arguments {
        private static final int INDEX_ITEM_ID = 2;
        private static final int INDEX_PARAM_ID = 3;
        private static final int INDEX_PHONE_ID = 1;
        private static final int INDEX_TABLE = 0;
        public String itemId;
        public String param;
        public String phoneId;
        public String selection;
        public String[] selectionArgs;
        public String table;

        Arguments(int i, ContentValues contentValues, Uri uri) {
            this(i, uri, contentValues, null, null);
        }

        Arguments(int i, Uri uri) {
            this(i, uri, null, null, null);
        }

        /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
        /* JADX WARN: Code duplicated, block: B:45:0x0144  */
        Arguments(int i, Uri uri, ContentValues contentValues, String str, String[] strArr) {
            byte b;
            this.table = null;
            this.phoneId = null;
            this.itemId = null;
            this.param = null;
            this.selection = null;
            this.selectionArgs = null;
            enforceValidUri(uri);
            String validTable = getValidTable(uri);
            this.table = validTable;
            parseContentValue(uri, validTable, i, contentValues);
            enforceOpMode(i, uri, contentValues, str, strArr);
            int size = uri.getPathSegments().size();
            if (size == 1) {
                this.selection = str;
                this.selectionArgs = strArr;
                if (i == 2 || i == 1) {
                    this.phoneId = contentValues.getAsString("phone_id");
                    return;
                }
                return;
            }
            if (size == 2) {
                String str2 = uri.getPathSegments().get(1);
                this.phoneId = str2;
                String[] strArr2 = {str2};
                this.selection = "phone_id = ?";
                if (TextUtils.isEmpty(str)) {
                    this.selectionArgs = strArr2;
                    return;
                }
                this.selection += " AND " + str;
                this.selectionArgs = join(strArr2, strArr);
                return;
            }
            if (size != 3) {
                if (size != 4) {
                    throw new IllegalArgumentException("Invalid URI: " + uri);
                }
                this.phoneId = uri.getPathSegments().get(1);
                this.itemId = uri.getPathSegments().get(2);
                String str3 = uri.getPathSegments().get(3);
                this.param = str3;
                String[] strArr3 = {this.phoneId, this.itemId, str3};
                String str4 = this.table;
                if (((str4.hashCode() == -978591195 && str4.equals(ImsConfigContract.TABLE_FEATURE)) ? (byte) 0 : (byte) -1) != 0) {
                    throw new IllegalArgumentException("Invalid URI: " + uri);
                }
                this.selection = "phone_id = ? AND feature_id = ? AND network_id = ?";
                if (TextUtils.isEmpty(str)) {
                    this.selectionArgs = strArr3;
                    return;
                }
                this.selection += " AND " + str;
                this.selectionArgs = join(strArr3, strArr);
                return;
            }
            this.phoneId = uri.getPathSegments().get(1);
            this.itemId = uri.getPathSegments().get(2);
            String[] strArr4 = new String[2];
            strArr4[0] = this.phoneId;
            switch (this.table) {
                case "tb_config_setting":
                    b = 0;
                    break;
                case "tb_resource":
                    b = 4;
                    break;
                case "tb_provision":
                    b = 2;
                    break;
                case "tb_master":
                    b = 3;
                    break;
                case "tb_default":
                    b = 1;
                    break;
                default:
                    b = -1;
                    break;
            }
            if (b == 0) {
                strArr4[1] = this.itemId;
                this.selection = "phone_id = ? AND setting_id = ?";
                if (TextUtils.isEmpty(str)) {
                    this.selectionArgs = strArr4;
                    return;
                }
                this.selection += " AND " + str;
                this.selectionArgs = join(strArr4, strArr);
                return;
            }
            if (b == 1 || b == 2 || b == 3) {
                strArr4[1] = String.valueOf(ImsConfigContract.configNameToId(this.itemId));
                this.selection = "phone_id = ? AND config_id = ?";
                if (TextUtils.isEmpty(str)) {
                    this.selectionArgs = strArr4;
                    return;
                }
                this.selection += " AND " + str;
                this.selectionArgs = join(strArr4, strArr);
                return;
            }
            if (b != 4) {
                return;
            }
            this.selection = "phone_id=? AND feature_id=?";
            strArr4[1] = this.itemId;
            if (TextUtils.isEmpty(str)) {
                this.selectionArgs = strArr4;
                return;
            }
            this.selection += " AND " + str;
            this.selectionArgs = join(strArr4, strArr);
        }

        Arguments(int i, Uri uri, String str, String[] strArr) {
            this(i, uri, null, str, strArr);
        }

        private static void enforceOpMode(int i, Uri uri, ContentValues contentValues, String str, String[] strArr) {
        }

        private static void enforceValidTable(String str) {
            if (ImsConfigContract.Validator.isValidTable(str)) {
                return;
            }
            throw new IllegalArgumentException("Bad table: " + str);
        }

        private static void enforceValidUri(Uri uri) {
            if (uri == null) {
                throw new IllegalArgumentException("Bad request: null url");
            }
            if (uri.getPathSegments().size() == 0) {
                throw new IllegalArgumentException("Operate on entire database is not supported");
            }
        }

        private String getValidTable(Uri uri) {
            String str = uri.getPathSegments().get(0);
            enforceValidTable(str);
            return str;
        }

        private static String[] join(String[]... strArr) {
            ArrayList arrayList = new ArrayList();
            for (String[] strArr2 : strArr) {
                arrayList.addAll(Arrays.asList(strArr2));
            }
            return (String[]) arrayList.toArray(new String[arrayList.size()]);
        }

        /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
        private void parseContentValue(Uri uri, String str, int i, ContentValues contentValues) {
            if (i == 0 || i == 3) {
                return;
            }
            enforceValidTable(str);
            String strValueOf = String.valueOf(contentValues.getAsInteger("phone_id"));
            this.phoneId = strValueOf;
            if (TextUtils.isEmpty(strValueOf)) {
                throw new IllegalArgumentException("Expect phone id in cv with " + uri);
            }
            byte b = -1;
            switch (str.hashCode()) {
                case -2133078972:
                    if (str.equals(ImsConfigContract.TABLE_CONFIG_SETTING)) {
                        b = 0;
                    }
                    break;
                case -978591195:
                    if (str.equals(ImsConfigContract.TABLE_FEATURE)) {
                        b = 1;
                    }
                    break;
                case 45084740:
                    if (str.equals(ImsConfigContract.TABLE_PROVISION)) {
                        b = 3;
                    }
                    break;
                case 1412604243:
                    if (str.equals(ImsConfigContract.TABLE_MASTER)) {
                        b = 4;
                    }
                    break;
                case 1545420144:
                    if (str.equals(ImsConfigContract.TABLE_DEFAULT)) {
                        b = 2;
                    }
                    break;
            }
            if (b == 0) {
                int iIntValue = contentValues.getAsInteger(ImsConfigContract.ConfigSetting.SETTING_ID).intValue();
                if (ImsConfigContract.Validator.isValidSettingId(iIntValue)) {
                    this.itemId = String.valueOf(iIntValue);
                    return;
                }
                throw new IllegalArgumentException("Invalid setting id in cv: " + iIntValue + " with " + uri);
            }
            if (b == 1) {
                int iIntValue2 = contentValues.getAsInteger("feature_id").intValue();
                if (!ImsConfigContract.Validator.isValidFeatureId(iIntValue2)) {
                    throw new IllegalArgumentException("Invalid feature id in cv: " + iIntValue2 + " with " + uri);
                }
                this.itemId = String.valueOf(iIntValue2);
                int iIntValue3 = contentValues.getAsInteger(ImsConfigContract.Feature.NETWORK_ID).intValue();
                if (!ImsConfigContract.Validator.isValidNetwork(iIntValue3)) {
                    throw new IllegalArgumentException("Invalid network in cv: " + iIntValue3 + " with " + uri);
                }
                this.param = String.valueOf(iIntValue3);
                int iIntValue4 = contentValues.getAsInteger("value").intValue();
                if (ImsConfigContract.Validator.isValidFeatureValue(iIntValue4)) {
                    return;
                }
                throw new IllegalArgumentException("Invalid value in cv: " + iIntValue4 + " with " + uri);
            }
            if (b == 2) {
                if (contentValues.containsKey(ImsConfigContract.Default.UNIT_ID)) {
                    int iIntValue5 = contentValues.getAsInteger(ImsConfigContract.Default.UNIT_ID).intValue();
                    if (!ImsConfigContract.Validator.isValidUnitId(iIntValue5)) {
                        throw new IllegalArgumentException("Invalid time unit in cv: " + iIntValue5 + " with " + uri);
                    }
                }
                int iIntValue6 = contentValues.getAsInteger("config_id").intValue();
                if (!ImsConfigContract.Validator.isValidConfigId(iIntValue6)) {
                    throw new IllegalArgumentException("Invalid config id in cv: " + iIntValue6 + " with " + uri);
                }
                this.itemId = ImsConfigContract.configIdToName(iIntValue6);
            } else if (b != 3 && b != 4) {
                return;
            }
            int iIntValue7 = contentValues.getAsInteger(ImsConfigContract.BasicConfigTable.MIMETYPE_ID).intValue();
            if (!ImsConfigContract.Validator.isValidMimeTypeId(iIntValue7)) {
                throw new IllegalArgumentException("Invalid mime type in cv: " + iIntValue7 + " with " + uri);
            }
            int iIntValue8 = contentValues.getAsInteger("config_id").intValue();
            if (ImsConfigContract.Validator.isValidConfigId(iIntValue8)) {
                this.itemId = ImsConfigContract.configIdToName(iIntValue8);
                return;
            }
            throw new IllegalArgumentException("Invalid config id in cv: " + iIntValue8 + " with " + uri);
        }
    }

    private static class OperationMode {
        static final int MODE_DELETE = 3;
        static final int MODE_INSERT = 1;
        static final int MODE_QUERY = 0;
        static final int MODE_UPDATE = 2;

        private OperationMode() {
        }
    }

    static {
        DEBUG = TextUtils.equals(Build.TYPE, "eng") || SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
        LatestSimState = new HashMap<>();
        ECCAllowSendCmd = new HashMap<>();
        ECCAllowBroadcast = new HashMap<>();
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:23:0x0057  */
    private void notifyChange(Uri uri, Arguments arguments, ContentValues contentValues) {
        byte b;
        String asString;
        int iIntValue;
        boolean z;
        switch (arguments.table) {
            case "tb_config_setting":
                b = 3;
                break;
            case "tb_feature":
                b = 4;
                break;
            case "tb_resource":
                b = 5;
                break;
            case "tb_provision":
                b = 2;
                break;
            case "tb_master":
                b = 1;
                break;
            case "tb_default":
                b = 0;
                break;
            default:
                b = -1;
                break;
        }
        if (b == 0 || b == 1 || b == 2) {
            int iConfigNameToId = ImsConfigContract.configNameToId(arguments.itemId);
            int iIntValue2 = contentValues.getAsInteger(ImsConfigContract.BasicConfigTable.MIMETYPE_ID).intValue();
            if (iIntValue2 == 0) {
                iIntValue = contentValues.getAsInteger(ImsConfigContract.BasicConfigTable.DATA).intValue();
                asString = "";
            } else {
                if (iIntValue2 != 1) {
                    Log.e(TAG, "Config " + iConfigNameToId + " not String or Integer, mimeType " + iIntValue2);
                    return;
                }
                asString = contentValues.getAsString(ImsConfigContract.BasicConfigTable.DATA);
                iIntValue = -1;
            }
            Intent intent = new Intent(ImsConfigContract.ACTION_IMS_CONFIG_CHANGED, uri);
            intent.putExtra("phone_id", Integer.parseInt(arguments.phoneId));
            intent.putExtra(ImsConfigContract.EXTRA_CHANGED_ITEM, iConfigNameToId);
            intent.addFlags(1);
            if (iIntValue2 == 0) {
                intent.putExtra("value", iIntValue);
            } else if (iIntValue2 == 1) {
                intent.putExtra("value", asString);
            }
            intent.putExtra(ImsConfigContract.EXTRA_MIMETYPE, iIntValue2);
            getContext().sendBroadcast(intent);
            getContext().getContentResolver().notifyChange(uri, null);
            if (iIntValue2 == 0 && DEBUG) {
                Log.d(TAG, "Update uri " + uri + " on phone " + arguments.phoneId + " value: " + iIntValue);
                return;
            }
            if (iIntValue2 == 1 && DEBUG) {
                Log.d(TAG, "Update uri " + uri + " on phone " + arguments.phoneId + " value: " + asString);
                return;
            }
            return;
        }
        if (b == 3) {
            Integer.parseInt(arguments.itemId);
            Log.d(TAG, "Don't Update uri " + uri + " on phone " + arguments.phoneId + " for CONFIG_SETTING");
            return;
        }
        if (b != 4) {
            if (b != 5) {
                Log.e(TAG, "Invalid table " + arguments.table + " with uri " + uri);
                return;
            }
            return;
        }
        String str = LatestSimState.get(Integer.valueOf(Integer.parseInt(arguments.phoneId)));
        StringBuilder sb = new StringBuilder();
        boolean z2 = false;
        sb.append("getSimState() for checking whether broadcast phoneId: ");
        sb.append(Integer.parseInt(arguments.phoneId));
        sb.append(", Sim state: ");
        sb.append(str);
        Log.d(TAG, sb.toString());
        int i = Integer.parseInt(arguments.itemId);
        int iIntValue3 = contentValues.getAsInteger("value").intValue();
        if (str == null) {
            str = "";
        }
        if (ECCAllowBroadcast.get(Integer.valueOf(Integer.parseInt(arguments.phoneId))) == null) {
            z = false;
        } else {
            boolean z3 = str.equals("ABSENT") && ECCAllowBroadcast.get(Integer.valueOf(Integer.parseInt(arguments.phoneId))).booleanValue() && i == 0;
            z2 = iIntValue3 == 1;
            if (z3 && !z2) {
                ECCAllowBroadcast.put(Integer.valueOf(Integer.parseInt(arguments.phoneId)), false);
                Log.d(TAG, "Sim absent but the calculated VoLTE is false, so no need broadcast");
            }
            z = z3;
        }
        boolean z4 = i == 0 && SystemProperties.getInt(PROPERTY_IMSCONFIG_FORCE_NOTIFY, 0) == 1;
        if (DEBUG) {
            Log.d(TAG, "isForceNotify " + z4);
        }
        if ((str.equals("READY") || str.equals("IMSI") || str.equals("LOADED") || str.equals("LOCKED")) || ((z && z2) || z4)) {
            Intent intent2 = new Intent(ImsConfigContract.ACTION_IMS_FEATURE_CHANGED);
            intent2.putExtra("phone_id", Integer.parseInt(arguments.phoneId));
            intent2.putExtra(ImsConfigContract.EXTRA_CHANGED_ITEM, i);
            intent2.putExtra("value", iIntValue3);
            intent2.addFlags(1);
            getContext().sendBroadcast(intent2);
            getContext().getContentResolver().notifyChange(uri, null);
            ECCAllowBroadcast.put(Integer.valueOf(Integer.parseInt(arguments.phoneId)), false);
            if (DEBUG) {
                Log.d(TAG, "Update uri " + uri + " on phone " + arguments.phoneId + " value: " + iIntValue3);
            }
        }
    }

    private void onDiskFull(SQLiteFullException sQLiteFullException) {
        Log.e(TAG, "Disk full, all write operations will be ignored", sQLiteFullException);
    }

    /* JADX WARN: Code duplicated, block: B:18:0x0057  */
    private Uri prepareResultUri(Arguments arguments, long j) {
        byte b;
        Uri uri = Uri.parse("content://com.mediatek.ims.config.provider/" + arguments.table + "/" + arguments.phoneId);
        String str = arguments.table;
        int iHashCode = str.hashCode();
        if (iHashCode != 45084740) {
            if (iHashCode != 1412604243) {
                if (iHashCode == 1545420144 && str.equals(ImsConfigContract.TABLE_DEFAULT)) {
                    b = 0;
                } else {
                    b = -1;
                }
            } else if (str.equals(ImsConfigContract.TABLE_MASTER)) {
                b = 2;
            } else {
                b = -1;
            }
        } else if (str.equals(ImsConfigContract.TABLE_PROVISION)) {
            b = 1;
        } else {
            b = -1;
        }
        Uri uriWithAppendedPath = (b == 0 || b == 1 || b == 2) ? Uri.withAppendedPath(uri, arguments.itemId) : ContentUris.withAppendedId(uri, j);
        return !TextUtils.isEmpty(arguments.param) ? ContentUris.withAppendedId(uriWithAppendedPath, Integer.parseInt(arguments.param)) : uriWithAppendedPath;
    }

    @Override // android.content.ContentProvider
    public int delete(Uri uri, String str, String[] strArr) {
        Arguments arguments = new Arguments(3, uri, str, strArr);
        try {
            return this.mDatabaseHelper.getWritableDatabase().delete(arguments.table, arguments.selection, arguments.selectionArgs);
        } catch (SQLiteFullException e) {
            onDiskFull(e);
            return 0;
        }
    }

    @Override // android.content.ContentProvider
    public String getType(Uri uri) {
        return "vnd.android.cursor.item/imsconfig";
    }

    @Override // android.content.ContentProvider
    public Uri insert(Uri uri, ContentValues contentValues) {
        Arguments arguments = new Arguments(1, contentValues, uri);
        long jInsertWithOnConflict = 0;
        try {
            jInsertWithOnConflict = this.mDatabaseHelper.getWritableDatabase().insertWithOnConflict(arguments.table, null, contentValues, 5);
        } catch (SQLiteFullException e) {
            onDiskFull(e);
        }
        return prepareResultUri(arguments, jInsertWithOnConflict);
    }

    @Override // android.content.ContentProvider
    public boolean onCreate() {
        Context context = getContext();
        Context contextCreateDeviceProtectedStorageContext = context.createDeviceProtectedStorageContext();
        if (UserManager.get(context).isUserUnlocked()) {
            if (!contextCreateDeviceProtectedStorageContext.moveDatabaseFrom(context, "imsconfig.db")) {
                Log.wtf(TAG, "[onCreate] Failed to move database");
            }
            Log.d(TAG, "[onCreate] Move database successfully");
        } else {
            Log.d(TAG, "[onCreate] User locked, register receiver for BOOT_COMPLETED");
            context.registerReceiver(this.mBroadcastReceiver, new IntentFilter("android.intent.action.BOOT_COMPLETED"));
        }
        this.mDatabaseHelper = new SqlDatabaseHelper(contextCreateDeviceProtectedStorageContext);
        this.mContext = getContext();
        return true;
    }

    @Override // android.content.ContentProvider
    public Cursor query(Uri uri, String[] strArr, String str, String[] strArr2, String str2) {
        Arguments arguments = new Arguments(0, uri);
        SQLiteDatabase readableDatabase = this.mDatabaseHelper.getReadableDatabase();
        Pattern patternCompile = Pattern.compile("[\\W]");
        for (String str3 : strArr) {
            if (str3.length() > 64) {
                Log.e(TAG, "Found column name that was too long (" + str3.length() + " characters)");
                return null;
            }
            if (patternCompile.matcher(str3).find()) {
                Log.e(TAG, "Found invalid character in column name: " + str3 + ", uri: " + uri);
                return null;
            }
        }
        return readableDatabase.query(arguments.table, strArr, arguments.selection, arguments.selectionArgs, null, null, null);
    }

    @Override // android.content.ContentProvider
    public void shutdown() {
        super.shutdown();
        SqlDatabaseHelper sqlDatabaseHelper = this.mDatabaseHelper;
        if (sqlDatabaseHelper != null) {
            sqlDatabaseHelper.close();
        }
    }

    @Override // android.content.ContentProvider
    public int update(Uri uri, ContentValues contentValues, String str, String[] strArr) {
        int iUpdate = 0;
        Arguments arguments = new Arguments(2, uri, contentValues, str, strArr);
        try {
            iUpdate = this.mDatabaseHelper.getWritableDatabase().update(arguments.table, contentValues, arguments.selection, arguments.selectionArgs);
            if (iUpdate > 0) {
                notifyChange(uri, arguments, contentValues);
            }
        } catch (SQLiteFullException e) {
            onDiskFull(e);
        }
        return iUpdate;
    }
}
