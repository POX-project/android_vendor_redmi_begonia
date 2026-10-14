.class public Lcom/mediatek/engineermode/bluetooth/BtTestTool;
.super Landroid/app/Activity;
.source "BtTestTool.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# static fields
.field public static final BASE_UUID:Landroid/os/ParcelUuid;

.field static final PREF_BLE_ALWAYS_SCANNING:Ljava/lang/String; = "pref_ble_always_scanning"

.field static final PREF_BT_ALWAYS_VISIBLE:Ljava/lang/String; = "pref_bt_always_visible"

.field private static final TAG:Ljava/lang/String; = "BtTestTool"

.field private static mBluetoothLeScanner:Landroid/bluetooth/le/BluetoothLeScanner;

.field private static final mScanCallback:Landroid/bluetooth/le/ScanCallback;


# instance fields
.field private mBtnBluetoothInfo:Landroid/widget/Button;

.field private mCbAlwaysVisible:Landroid/widget/CheckBox;

.field private mCbBleAlwaysScan:Landroid/widget/CheckBox;

.field private mHandler:Landroid/os/Handler;

.field private mInterval:I

.field private mRgBleScanMode:Landroid/widget/RadioGroup;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 79
    nop

    .line 80
    const-string v0, "12345678-0000-1000-8000-00805F9B34FB"

    invoke-static {v0}, Landroid/os/ParcelUuid;->fromString(Ljava/lang/String;)Landroid/os/ParcelUuid;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->BASE_UUID:Landroid/os/ParcelUuid;

    .line 90
    const/4 v0, 0x0

    sput-object v0, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mBluetoothLeScanner:Landroid/bluetooth/le/BluetoothLeScanner;

    .line 234
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BtTestTool$1;

    invoke-direct {v0}, Lcom/mediatek/engineermode/bluetooth/BtTestTool$1;-><init>()V

    sput-object v0, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mScanCallback:Landroid/bluetooth/le/ScanCallback;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 76
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 91
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mInterval:I

    .line 280
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BtTestTool$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/bluetooth/BtTestTool$2;-><init>(Lcom/mediatek/engineermode/bluetooth/BtTestTool;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/bluetooth/BtTestTool;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtTestTool;
    .param p1, "x1"    # I

    .line 76
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->startBleScan(I)V

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/bluetooth/BtTestTool;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtTestTool;

    .line 76
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->stopBleScan()V

    return-void
.end method

.method public static getAlwaysScanning(Landroid/content/Context;)I
    .locals 4
    .param p0, "context"    # Landroid/content/Context;

    .line 322
    invoke-static {p0}, Landroid/preference/PreferenceManager;->getDefaultSharedPreferences(Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 323
    .local v0, "prefs":Landroid/content/SharedPreferences;
    const-string v1, "pref_ble_always_scanning"

    const/4 v2, -0x1

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    .line 324
    .local v1, "scan_mode":I
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getAlwaysScanning:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "BtTestTool"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 325
    return v1
.end method

.method public static getAlwaysVisible(Landroid/content/Context;)Z
    .locals 4
    .param p0, "context"    # Landroid/content/Context;

    .line 274
    invoke-static {p0}, Landroid/preference/PreferenceManager;->getDefaultSharedPreferences(Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 275
    .local v0, "prefs":Landroid/content/SharedPreferences;
    const-string v1, "pref_bt_always_visible"

    const/4 v2, 0x0

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v1

    .line 276
    .local v1, "on":Z
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getAlwaysVisible:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "BtTestTool"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 277
    return v1
.end method

.method public static setAlwaysScanning(I)V
    .locals 2
    .param p0, "scan_mode"    # I

    .line 307
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setAlwaysScanning scan_mode:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BtTestTool"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 308
    nop

    .line 314
    return-void
.end method

.method public static setAlwaysVisible(Z)V
    .locals 3
    .param p0, "on"    # Z

    .line 252
    invoke-static {}, Landroid/bluetooth/BluetoothAdapter;->getDefaultAdapter()Landroid/bluetooth/BluetoothAdapter;

    move-result-object v0

    .line 253
    .local v0, "adapter":Landroid/bluetooth/BluetoothAdapter;
    if-nez v0, :cond_0

    .line 254
    return-void

    .line 256
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "setAlwaysVisable on:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "BtTestTool"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 257
    const/16 v1, 0x17

    if-eqz p0, :cond_1

    .line 258
    invoke-virtual {v0}, Landroid/bluetooth/BluetoothAdapter;->getScanMode()I

    move-result v2

    if-eq v2, v1, :cond_2

    .line 259
    invoke-virtual {v0, v1}, Landroid/bluetooth/BluetoothAdapter;->setScanMode(I)Z

    goto :goto_0

    .line 262
    :cond_1
    invoke-virtual {v0}, Landroid/bluetooth/BluetoothAdapter;->getScanMode()I

    move-result v2

    if-ne v2, v1, :cond_2

    .line 263
    const/16 v1, 0x15

    invoke-virtual {v0, v1}, Landroid/bluetooth/BluetoothAdapter;->setScanMode(I)Z

    .line 266
    :cond_2
    :goto_0
    return-void
.end method

.method private startBleScan(I)V
    .locals 7
    .param p1, "scan_mode"    # I

    .line 209
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "startBleScan["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "]: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mBluetoothLeScanner:Landroid/bluetooth/le/BluetoothLeScanner;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BtTestTool"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 210
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "startBleScan - mScanCallback: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mScanCallback:Landroid/bluetooth/le/ScanCallback;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 212
    sget-object v0, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mBluetoothLeScanner:Landroid/bluetooth/le/BluetoothLeScanner;

    if-nez v0, :cond_0

    .line 213
    invoke-static {}, Landroid/bluetooth/BluetoothAdapter;->getDefaultAdapter()Landroid/bluetooth/BluetoothAdapter;

    move-result-object v0

    .line 214
    .local v0, "adapter":Landroid/bluetooth/BluetoothAdapter;
    invoke-virtual {v0}, Landroid/bluetooth/BluetoothAdapter;->getBluetoothLeScanner()Landroid/bluetooth/le/BluetoothLeScanner;

    move-result-object v2

    sput-object v2, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mBluetoothLeScanner:Landroid/bluetooth/le/BluetoothLeScanner;

    .line 218
    .end local v0    # "adapter":Landroid/bluetooth/BluetoothAdapter;
    :cond_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 219
    .local v0, "mFilters":Ljava/util/List;, "Ljava/util/List<Landroid/bluetooth/le/ScanFilter;>;"
    new-instance v2, Landroid/bluetooth/le/ScanFilter$Builder;

    invoke-direct {v2}, Landroid/bluetooth/le/ScanFilter$Builder;-><init>()V

    .line 220
    .local v2, "filterBuilder":Landroid/bluetooth/le/ScanFilter$Builder;
    sget-object v3, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->BASE_UUID:Landroid/os/ParcelUuid;

    invoke-virtual {v2, v3}, Landroid/bluetooth/le/ScanFilter$Builder;->setServiceUuid(Landroid/os/ParcelUuid;)Landroid/bluetooth/le/ScanFilter$Builder;

    .line 221
    invoke-virtual {v2}, Landroid/bluetooth/le/ScanFilter$Builder;->build()Landroid/bluetooth/le/ScanFilter;

    move-result-object v3

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 223
    new-instance v3, Landroid/bluetooth/le/ScanSettings$Builder;

    invoke-direct {v3}, Landroid/bluetooth/le/ScanSettings$Builder;-><init>()V

    .line 224
    .local v3, "settingsBuilder":Landroid/bluetooth/le/ScanSettings$Builder;
    invoke-virtual {v3, p1}, Landroid/bluetooth/le/ScanSettings$Builder;->setScanMode(I)Landroid/bluetooth/le/ScanSettings$Builder;

    .line 225
    invoke-virtual {v3}, Landroid/bluetooth/le/ScanSettings$Builder;->build()Landroid/bluetooth/le/ScanSettings;

    move-result-object v4

    .line 227
    .local v4, "mSettings":Landroid/bluetooth/le/ScanSettings;
    sget-object v5, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mBluetoothLeScanner:Landroid/bluetooth/le/BluetoothLeScanner;

    sget-object v6, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mScanCallback:Landroid/bluetooth/le/ScanCallback;

    invoke-virtual {v5, v0, v4, v6}, Landroid/bluetooth/le/BluetoothLeScanner;->startScan(Ljava/util/List;Landroid/bluetooth/le/ScanSettings;Landroid/bluetooth/le/ScanCallback;)V

    .line 228
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "start ble scan - "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v6, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mBluetoothLeScanner:Landroid/bluetooth/le/BluetoothLeScanner;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v1, v5}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 229
    return-void
.end method

.method private stopBleScan()V
    .locals 3

    .line 196
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "stopBleScan: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mBluetoothLeScanner:Landroid/bluetooth/le/BluetoothLeScanner;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BtTestTool"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 197
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "stopBleScan - mScanCallback: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mScanCallback:Landroid/bluetooth/le/ScanCallback;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 199
    sget-object v0, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mBluetoothLeScanner:Landroid/bluetooth/le/BluetoothLeScanner;

    if-nez v0, :cond_0

    .line 200
    invoke-static {}, Landroid/bluetooth/BluetoothAdapter;->getDefaultAdapter()Landroid/bluetooth/BluetoothAdapter;

    move-result-object v0

    .line 201
    .local v0, "adapter":Landroid/bluetooth/BluetoothAdapter;
    invoke-virtual {v0}, Landroid/bluetooth/BluetoothAdapter;->getBluetoothLeScanner()Landroid/bluetooth/le/BluetoothLeScanner;

    move-result-object v2

    sput-object v2, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mBluetoothLeScanner:Landroid/bluetooth/le/BluetoothLeScanner;

    .line 204
    .end local v0    # "adapter":Landroid/bluetooth/BluetoothAdapter;
    :cond_0
    sget-object v0, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mBluetoothLeScanner:Landroid/bluetooth/le/BluetoothLeScanner;

    sget-object v2, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mScanCallback:Landroid/bluetooth/le/ScanCallback;

    invoke-virtual {v0, v2}, Landroid/bluetooth/le/BluetoothLeScanner;->stopScan(Landroid/bluetooth/le/ScanCallback;)V

    .line 205
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "stop ble scan - "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mBluetoothLeScanner:Landroid/bluetooth/le/BluetoothLeScanner;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 206
    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 6
    .param p1, "v"    # Landroid/view/View;

    .line 149
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onClick: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BtTestTool"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 151
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mCbAlwaysVisible:Landroid/widget/CheckBox;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 152
    invoke-static {p0}, Landroid/preference/PreferenceManager;->getDefaultSharedPreferences(Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 153
    .local v0, "prefs":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    .line 154
    .local v1, "editor":Landroid/content/SharedPreferences$Editor;
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mCbAlwaysVisible:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    .line 155
    .local v2, "on":Z
    const-string v3, "pref_bt_always_visible"

    invoke-interface {v1, v3, v2}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 156
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 157
    invoke-static {v2}, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->setAlwaysVisible(Z)V

    .line 158
    invoke-static {p0, v2}, Lcom/mediatek/engineermode/bluetooth/BtWatchService;->enableService(Landroid/content/Context;Z)V

    .line 159
    .end local v0    # "prefs":Landroid/content/SharedPreferences;
    .end local v1    # "editor":Landroid/content/SharedPreferences$Editor;
    .end local v2    # "on":Z
    goto :goto_2

    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mCbBleAlwaysScan:Landroid/widget/CheckBox;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 160
    invoke-static {p0}, Landroid/preference/PreferenceManager;->getDefaultSharedPreferences(Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 161
    .restart local v0    # "prefs":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    .line 162
    .restart local v1    # "editor":Landroid/content/SharedPreferences$Editor;
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mCbBleAlwaysScan:Landroid/widget/CheckBox;

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    .line 164
    .restart local v2    # "on":Z
    const/4 v3, 0x2

    .line 165
    .local v3, "scan_mode":I
    iget-object v4, p0, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mRgBleScanMode:Landroid/widget/RadioGroup;

    invoke-virtual {v4}, Landroid/widget/RadioGroup;->getCheckedRadioButtonId()I

    move-result v4

    .line 166
    .local v4, "selectedId":I
    packed-switch v4, :pswitch_data_0

    goto :goto_0

    .line 171
    :pswitch_0
    const/4 v3, 0x1

    .line 172
    goto :goto_0

    .line 168
    :pswitch_1
    const/4 v3, 0x0

    .line 169
    nop

    .line 176
    :goto_0
    if-nez v2, :cond_1

    const/4 v3, -0x1

    .line 178
    :cond_1
    const-string v5, "pref_ble_always_scanning"

    invoke-interface {v1, v5, v3}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 179
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 180
    invoke-static {p0, v2}, Lcom/mediatek/engineermode/bluetooth/BleScanService;->enableService(Landroid/content/Context;Z)V

    .line 182
    if-eqz v2, :cond_2

    .line 183
    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->startBleScan(I)V

    goto :goto_1

    .line 186
    :cond_2
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->stopBleScan()V

    goto :goto_1

    .line 188
    .end local v0    # "prefs":Landroid/content/SharedPreferences;
    .end local v1    # "editor":Landroid/content/SharedPreferences$Editor;
    .end local v2    # "on":Z
    .end local v3    # "scan_mode":I
    .end local v4    # "selectedId":I
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mBtnBluetoothInfo:Landroid/widget/Button;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 189
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 190
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "com.android.bluetooth"

    const-string v2, "com.android.bluetooth.util.BtInfoActivity"

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->setClassName(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 191
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->startActivity(Landroid/content/Intent;)V

    goto :goto_2

    .line 188
    .end local v0    # "intent":Landroid/content/Intent;
    :cond_4
    :goto_1
    nop

    .line 193
    :goto_2
    return-void

    :pswitch_data_0
    .packed-switch 0x7f06020b
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 95
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 96
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onCreate: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mBluetoothLeScanner:Landroid/bluetooth/le/BluetoothLeScanner;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BtTestTool"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 98
    const v0, 0x7f080027

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->setContentView(I)V

    .line 100
    const v0, 0x7f06018d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mCbAlwaysVisible:Landroid/widget/CheckBox;

    .line 101
    invoke-static {p0}, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->getAlwaysVisible(Landroid/content/Context;)Z

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 102
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mCbAlwaysVisible:Landroid/widget/CheckBox;

    invoke-virtual {v0, p0}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 104
    const v0, 0x7f0601fd

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mCbBleAlwaysScan:Landroid/widget/CheckBox;

    .line 105
    invoke-static {p0}, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->getAlwaysScanning(Landroid/content/Context;)I

    move-result v0

    .line 106
    .local v0, "type":I
    const/4 v1, 0x0

    .line 107
    .local v1, "checked":Z
    if-ltz v0, :cond_0

    const/4 v1, 0x1

    .line 108
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mCbBleAlwaysScan:Landroid/widget/CheckBox;

    invoke-virtual {v2, v1}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 109
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mCbBleAlwaysScan:Landroid/widget/CheckBox;

    invoke-virtual {v2, p0}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 111
    const v2, 0x7f06020d

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/RadioGroup;

    iput-object v2, p0, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mRgBleScanMode:Landroid/widget/RadioGroup;

    .line 112
    const v2, 0x7f06020a

    .line 113
    .local v2, "radio_button_Id":I
    if-eqz v0, :cond_2

    const/4 v3, 0x1

    if-eq v0, v3, :cond_1

    goto :goto_0

    .line 118
    :cond_1
    const v2, 0x7f06020c

    .line 119
    goto :goto_0

    .line 115
    :cond_2
    const v2, 0x7f06020b

    .line 116
    nop

    .line 123
    :goto_0
    iget-object v3, p0, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mRgBleScanMode:Landroid/widget/RadioGroup;

    invoke-virtual {v3, v2}, Landroid/widget/RadioGroup;->check(I)V

    .line 125
    const v3, 0x7f060217

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/Button;

    iput-object v3, p0, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->mBtnBluetoothInfo:Landroid/widget/Button;

    .line 126
    invoke-virtual {v3, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 127
    return-void
.end method
