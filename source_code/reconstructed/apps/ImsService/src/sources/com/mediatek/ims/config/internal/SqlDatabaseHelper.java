package com.mediatek.ims.config.internal;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class SqlDatabaseHelper extends SQLiteOpenHelper {
    static final String DATABASE_NAME = "imsconfig.db";
    private static final int DATABASE_VERSION = 2;
    private static final String TAG = "ImsConfigSqlDbHelper";
    private Context mContext;

    public SqlDatabaseHelper(Context context) {
        super(context, DATABASE_NAME, (SQLiteDatabase.CursorFactory) null, 2);
        this.mContext = context;
    }

    private void createConfigSettingTable(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL("CREATE TABLE tb_config_setting (_id INTEGER PRIMARY KEY AUTOINCREMENT,phone_id INTEGER NOT NULL,setting_id INTEGER NOT NULL,value TEXT NOT NULL,CONSTRAINT unique_id UNIQUE (phone_id, setting_id));");
    }

    private void createDefaultTable(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL("CREATE TABLE tb_default (_id INTEGER PRIMARY KEY AUTOINCREMENT,phone_id INTEGER NOT NULL,config_id INTEGER NOT NULL,mimetype_id INTEGER NOT NULL,unit_id INTEGER,data TEXT NOT NULL,CONSTRAINT unique_id UNIQUE (phone_id, config_id));");
    }

    private void createFeatureTable(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL("CREATE TABLE tb_feature (_id INTEGER PRIMARY KEY AUTOINCREMENT,phone_id INTEGER NOT NULL,feature_id INTEGER NOT NULL,network_id INTEGER NOT NULL,value INTEGER NOT NULL,CONSTRAINT unique_id UNIQUE (phone_id, feature_id, network_id));");
    }

    private void createMasterTable(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL("CREATE TABLE tb_master (_id INTEGER PRIMARY KEY AUTOINCREMENT,phone_id INTEGER NOT NULL,config_id INTEGER NOT NULL,mimetype_id INTEGER NOT NULL,data TEXT,CONSTRAINT unique_id UNIQUE (phone_id, config_id));");
    }

    private void createProvisionTable(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL("CREATE TABLE tb_provision (_id INTEGER PRIMARY KEY AUTOINCREMENT,phone_id INTEGER NOT NULL,config_id INTEGER NOT NULL,mimetype_id INTEGER NOT NULL,data TEXT NOT NULL,datetime DATETIME DEFAULT CURRENT_TIMESTAMP,CONSTRAINT unique_id UNIQUE (phone_id, config_id));");
    }

    private void createResourceTable(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL("CREATE TABLE tb_resource (_id INTEGER PRIMARY KEY AUTOINCREMENT,phone_id INTEGER NOT NULL,feature_id INTEGER NOT NULL,value INTEGER NOT NULL,CONSTRAINT unique_id UNIQUE (phone_id, feature_id));");
    }

    private void dropAllTables(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL("DROP TABLE IF EXISTS tb_config_setting");
        sQLiteDatabase.execSQL("DROP TABLE IF EXISTS tb_feature");
        sQLiteDatabase.execSQL("DROP TABLE IF EXISTS tb_default");
        sQLiteDatabase.execSQL("DROP TABLE IF EXISTS tb_provision");
        sQLiteDatabase.execSQL("DROP TABLE IF EXISTS tb_master");
        sQLiteDatabase.execSQL("DROP TABLE IF EXISTS tb_resource");
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onCreate(SQLiteDatabase sQLiteDatabase) {
        createConfigSettingTable(sQLiteDatabase);
        createFeatureTable(sQLiteDatabase);
        createProvisionTable(sQLiteDatabase);
        createMasterTable(sQLiteDatabase);
        createDefaultTable(sQLiteDatabase);
        createResourceTable(sQLiteDatabase);
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        Log.d(TAG, "Upgrading database from version " + i + " to " + i2);
        dropAllTables(sQLiteDatabase);
        onCreate(sQLiteDatabase);
    }
}
