.class public Lcom/mediatek/engineermode/wifi/WiFi;
.super Landroid/app/Activity;
.source "WiFi.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/wifi/WiFi$WifiType;
    }
.end annotation


# static fields
.field private static final BIT_16:I = 0x10

.field private static final BIT_8:I = 0x8

.field private static final BRANCH_PATTERN:Ljava/lang/String; = "t-neptune[\\w-]*SOC[a-zA-Z0-9]*_[a-zA-Z0-9]*_"

.field private static final CHIP_6632:Ljava/lang/String; = "6632"

.field private static final CHIP_ADV:Ljava/lang/String; = "0"

.field private static final CHIP_FORMAT:Ljava/lang/String; = "1"

.field private static final DIALOG_WIFI_ENABLE_FAIL:I = 0x2

.field private static final DIALOG_WIFI_ENTER_TEST_MODE_FAILED:I = 0x3

.field private static final DIALOG_WIFI_INIT:I = 0x0

.field private static final DIALOG_WIFI_WARN:I = 0x1

.field private static final FUNC_INDEX_VERSION:J = 0x2fL

.field static final KEY_11AC_CAP:Ljava/lang/String; = "key_11ac"

.field static final KEY_11AX_CAP:Ljava/lang/String; = "key_11ax"

.field static final KEY_2BY2_CAP:Ljava/lang/String; = "key_2by2"

.field static final KEY_ANT_SWAP:Ljava/lang/String; = "key_ant_swap"

.field static final KEY_HW_TX_CAP:Ljava/lang/String; = "key_hw_tx"

.field static final KEY_WIFI_TYPE:Ljava/lang/String; = "key_wifi_type"

.field private static final MASK_32_BIT:J = -0x1L

.field private static final MASK_8_BIT:J = 0xffL

.field private static final MASK_HIGH_16_BIT:J = -0x10000L

.field private static final MASK_HIGH_8_BIT:J = 0xff00L

.field private static final TAG:Ljava/lang/String; = "WifiMainpage"

.field private static final VER_SPLIT:Ljava/lang/String; = "-"


# instance fields
.field private mCapability:Lcom/mediatek/engineermode/wifi/WifiCapability;

.field private mListData:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mLoadTask:Landroid/os/AsyncTask;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/AsyncTask<",
            "Ljava/lang/Void;",
            "Ljava/lang/Void;",
            "Lcom/mediatek/engineermode/wifi/WifiEmState;",
            ">;"
        }
    .end annotation
.end field

.field private mLvTestItem:Landroid/widget/ListView;

.field private mWifiChip:Ljava/lang/String;

.field private mWifiManager:Landroid/net/wifi/WifiManager;

.field private mWifiType:Lcom/mediatek/engineermode/wifi/WiFi$WifiType;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 68
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 88
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi;->mWifiManager:Landroid/net/wifi/WifiManager;

    .line 114
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi;->mWifiType:Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    .line 116
    new-instance v0, Lcom/mediatek/engineermode/wifi/WiFi$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/wifi/WiFi$1;-><init>(Lcom/mediatek/engineermode/wifi/WiFi;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi;->mLoadTask:Landroid/os/AsyncTask;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/wifi/WiFi;)Ljava/util/ArrayList;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFi;

    .line 68
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi;->mListData:Ljava/util/ArrayList;

    return-object v0
.end method

.method static synthetic access$002(Lcom/mediatek/engineermode/wifi/WiFi;Ljava/util/ArrayList;)Ljava/util/ArrayList;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFi;
    .param p1, "x1"    # Ljava/util/ArrayList;

    .line 68
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFi;->mListData:Ljava/util/ArrayList;

    return-object p1
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/wifi/WiFi;)Lcom/mediatek/engineermode/wifi/WiFi$WifiType;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFi;

    .line 68
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi;->mWifiType:Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    return-object v0
.end method

.method static synthetic access$102(Lcom/mediatek/engineermode/wifi/WiFi;Lcom/mediatek/engineermode/wifi/WiFi$WifiType;)Lcom/mediatek/engineermode/wifi/WiFi$WifiType;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFi;
    .param p1, "x1"    # Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    .line 68
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFi;->mWifiType:Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    return-object p1
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/wifi/WiFi;)Lcom/mediatek/engineermode/wifi/WifiCapability;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFi;

    .line 68
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi;->mCapability:Lcom/mediatek/engineermode/wifi/WifiCapability;

    return-object v0
.end method

.method static synthetic access$202(Lcom/mediatek/engineermode/wifi/WiFi;Lcom/mediatek/engineermode/wifi/WifiCapability;)Lcom/mediatek/engineermode/wifi/WifiCapability;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFi;
    .param p1, "x1"    # Lcom/mediatek/engineermode/wifi/WifiCapability;

    .line 68
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFi;->mCapability:Lcom/mediatek/engineermode/wifi/WifiCapability;

    return-object p1
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/wifi/WiFi;)Landroid/widget/ListView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFi;

    .line 68
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi;->mLvTestItem:Landroid/widget/ListView;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/wifi/WiFi;)Landroid/net/wifi/WifiManager;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFi;

    .line 68
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi;->mWifiManager:Landroid/net/wifi/WifiManager;

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/wifi/WiFi;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFi;

    .line 68
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi;->mWifiChip:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$502(Lcom/mediatek/engineermode/wifi/WiFi;Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WiFi;
    .param p1, "x1"    # Ljava/lang/String;

    .line 68
    iput-object p1, p0, Lcom/mediatek/engineermode/wifi/WiFi;->mWifiChip:Ljava/lang/String;

    return-object p1
.end method

.method public static getWifiChip()Ljava/lang/String;
    .locals 6

    .line 455
    const/4 v0, 0x2

    new-array v0, v0, [J

    .line 456
    .local v0, "version":[J
    const-wide/16 v1, 0x2f

    invoke-static {v1, v2, v0}, Lcom/mediatek/engineermode/wifi/EMWifi;->getATParam(J[J)I

    move-result v1

    .line 457
    .local v1, "result":I
    if-eqz v1, :cond_0

    .line 458
    const/4 v2, 0x0

    return-object v2

    .line 460
    :cond_0
    const/4 v2, 0x0

    aget-wide v2, v0, v2

    const-wide/32 v4, -0x10000

    and-long/2addr v2, v4

    const/16 v4, 0x10

    shr-long/2addr v2, v4

    invoke-static {v2, v3}, Ljava/lang/Long;->toHexString(J)Ljava/lang/String;

    move-result-object v2

    return-object v2
.end method

.method public static getWifiType(Ljava/lang/String;)Lcom/mediatek/engineermode/wifi/WiFi$WifiType;
    .locals 1
    .param p0, "wifiChip"    # Ljava/lang/String;

    .line 284
    const-string v0, "6632"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 285
    const-string v0, "0"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 287
    :cond_0
    const-string v0, "1"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 288
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;->WIFI_FORMAT:Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    return-object v0

    .line 290
    :cond_1
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;->WIFI_6620:Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    return-object v0

    .line 286
    :cond_2
    :goto_0
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;->WIFI_6632:Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    return-object v0
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 296
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 297
    const v0, 0x7f080100

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFi;->setContentView(I)V

    .line 299
    nop

    .line 300
    const-string v0, "wifi"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFi;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/wifi/WifiManager;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi;->mWifiManager:Landroid/net/wifi/WifiManager;

    .line 301
    invoke-virtual {v0}, Landroid/net/wifi/WifiManager;->getWifiState()I

    move-result v0

    const/4 v1, 0x1

    if-ne v1, v0, :cond_1

    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi;->mWifiManager:Landroid/net/wifi/WifiManager;

    .line 302
    invoke-virtual {v0}, Landroid/net/wifi/WifiManager;->isScanAlwaysAvailable()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->ifAirplaneModeEnabled()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 306
    :cond_0
    const v0, 0x7f060858

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFi;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ListView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi;->mLvTestItem:Landroid/widget/ListView;

    .line 307
    invoke-virtual {v0, p0}, Landroid/widget/ListView;->setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V

    .line 308
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFi;->mLoadTask:Landroid/os/AsyncTask;

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Void;

    invoke-virtual {v0, v1}, Landroid/os/AsyncTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 309
    return-void

    .line 303
    :cond_1
    :goto_0
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFi;->showDialog(I)V

    .line 304
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 5
    .param p1, "id"    # I

    .line 313
    const/4 v0, 0x0

    .line 314
    .local v0, "builder":Landroid/app/AlertDialog$Builder;
    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz p1, :cond_3

    const v3, 0x7f0a02e8

    const v4, 0x7f0a0714

    if-eq p1, v1, :cond_2

    const/4 v1, 0x2

    if-eq p1, v1, :cond_1

    const/4 v1, 0x3

    if-eq p1, v1, :cond_0

    .line 360
    const/4 v1, 0x0

    return-object v1

    .line 348
    :cond_0
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    move-object v0, v1

    .line 349
    invoke-virtual {v0, v4}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    .line 350
    invoke-virtual {v0, v2}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    .line 351
    const v1, 0x7f0a072f

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFi;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 352
    new-instance v1, Lcom/mediatek/engineermode/wifi/WiFi$4;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/wifi/WiFi$4;-><init>(Lcom/mediatek/engineermode/wifi/WiFi;)V

    invoke-virtual {v0, v3, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 358
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v1

    return-object v1

    .line 336
    :cond_1
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    move-object v0, v1

    .line 337
    invoke-virtual {v0, v4}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    .line 338
    invoke-virtual {v0, v2}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    .line 339
    const v1, 0x7f0a0715

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFi;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 340
    new-instance v1, Lcom/mediatek/engineermode/wifi/WiFi$3;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/wifi/WiFi$3;-><init>(Lcom/mediatek/engineermode/wifi/WiFi;)V

    invoke-virtual {v0, v3, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 346
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v1

    return-object v1

    .line 324
    :cond_2
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    move-object v0, v1

    .line 325
    invoke-virtual {v0, v4}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    .line 326
    invoke-virtual {v0, v2}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    .line 327
    const v1, 0x7f0a0719

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WiFi;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 328
    new-instance v1, Lcom/mediatek/engineermode/wifi/WiFi$2;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/wifi/WiFi$2;-><init>(Lcom/mediatek/engineermode/wifi/WiFi;)V

    invoke-virtual {v0, v3, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 334
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v1

    return-object v1

    .line 316
    :cond_3
    new-instance v3, Landroid/app/ProgressDialog;

    invoke-direct {v3, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    .line 317
    .local v3, "innerDialog":Landroid/app/ProgressDialog;
    const v4, 0x7f0a0716

    invoke-virtual {v3, v4}, Landroid/app/ProgressDialog;->setTitle(I)V

    .line 318
    const v4, 0x7f0a0717

    .line 319
    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/wifi/WiFi;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 320
    invoke-virtual {v3, v2}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 321
    invoke-virtual {v3, v1}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 322
    return-object v3
.end method

.method public onItemClick(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 13
    .param p2, "arg1"    # Landroid/view/View;
    .param p3, "arg2"    # I
    .param p4, "arg3"    # J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;",
            "Landroid/view/View;",
            "IJ)V"
        }
    .end annotation

    .line 367
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    move-object v1, p0

    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFi;->mListData:Ljava/util/ArrayList;

    move/from16 v2, p3

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    move-object v3, v0

    check-cast v3, Ljava/lang/String;

    .line 368
    .local v3, "itemName":Ljava/lang/String;
    if-nez v3, :cond_0

    .line 369
    return-void

    .line 372
    :cond_0
    const/4 v4, 0x0

    .line 374
    .local v4, "intent":Landroid/content/Intent;
    const v0, 0x7f0a0735

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFi;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const-string v5, "key_11ax"

    const-string v6, "key_2by2"

    const-string v7, "key_11ac"

    const/4 v8, 0x3

    const/4 v9, 0x2

    const/4 v10, 0x1

    const-string v11, "key_ant_swap"

    if-eqz v0, :cond_4

    .line 375
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFi$5;->$SwitchMap$com$mediatek$engineermode$wifi$WiFi$WifiType:[I

    iget-object v12, v1, Lcom/mediatek/engineermode/wifi/WiFi;->mWifiType:Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    invoke-virtual {v12}, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;->ordinal()I

    move-result v12

    aget v0, v0, v12

    if-eq v0, v10, :cond_3

    if-eq v0, v9, :cond_2

    if-eq v0, v8, :cond_1

    .line 393
    return-void

    .line 386
    :cond_1
    new-instance v0, Landroid/content/Intent;

    const-class v7, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-direct {v0, p0, v7}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    move-object v4, v0

    .line 387
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFi;->mCapability:Lcom/mediatek/engineermode/wifi/WifiCapability;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WifiCapability;->is2by2Support()Z

    move-result v0

    invoke-virtual {v4, v6, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 388
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFi;->mCapability:Lcom/mediatek/engineermode/wifi/WifiCapability;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WifiCapability;->isAntSwapSupport()Z

    move-result v0

    invoke-virtual {v4, v11, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 389
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFi;->mCapability:Lcom/mediatek/engineermode/wifi/WifiCapability;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WifiCapability;->is11AxSupport()Z

    move-result v0

    invoke-virtual {v4, v5, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 390
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFi;->mCapability:Lcom/mediatek/engineermode/wifi/WifiCapability;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WifiCapability;->isHwTxSupport()Z

    move-result v0

    const-string v5, "key_hw_tx"

    invoke-virtual {v4, v5, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 391
    goto/16 :goto_1

    .line 382
    :cond_2
    new-instance v0, Landroid/content/Intent;

    const-class v5, Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-direct {v0, p0, v5}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    move-object v4, v0

    .line 383
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFi;->mCapability:Lcom/mediatek/engineermode/wifi/WifiCapability;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WifiCapability;->isAntSwapSupport()Z

    move-result v0

    invoke-virtual {v4, v11, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 384
    goto/16 :goto_1

    .line 377
    :cond_3
    new-instance v0, Landroid/content/Intent;

    const-class v5, Lcom/mediatek/engineermode/wifi/WiFiTx6620;

    invoke-direct {v0, p0, v5}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    move-object v4, v0

    .line 378
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFi;->mCapability:Lcom/mediatek/engineermode/wifi/WifiCapability;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WifiCapability;->is11AcSupport()Z

    move-result v0

    invoke-virtual {v4, v7, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 379
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFi;->mCapability:Lcom/mediatek/engineermode/wifi/WifiCapability;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WifiCapability;->isAntSwapSupport()Z

    move-result v0

    invoke-virtual {v4, v11, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 380
    goto/16 :goto_1

    .line 395
    :cond_4
    const v0, 0x7f0a0734

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFi;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_8

    .line 396
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFi$5;->$SwitchMap$com$mediatek$engineermode$wifi$WiFi$WifiType:[I

    iget-object v12, v1, Lcom/mediatek/engineermode/wifi/WiFi;->mWifiType:Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    invoke-virtual {v12}, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;->ordinal()I

    move-result v12

    aget v0, v0, v12

    if-eq v0, v10, :cond_7

    if-eq v0, v9, :cond_6

    if-eq v0, v8, :cond_5

    .line 413
    return-void

    .line 407
    :cond_5
    new-instance v0, Landroid/content/Intent;

    const-class v7, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;

    invoke-direct {v0, p0, v7}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    move-object v4, v0

    .line 408
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFi;->mCapability:Lcom/mediatek/engineermode/wifi/WifiCapability;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WifiCapability;->is2by2Support()Z

    move-result v0

    invoke-virtual {v4, v6, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 409
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFi;->mCapability:Lcom/mediatek/engineermode/wifi/WifiCapability;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WifiCapability;->isAntSwapSupport()Z

    move-result v0

    invoke-virtual {v4, v11, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 410
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFi;->mCapability:Lcom/mediatek/engineermode/wifi/WifiCapability;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WifiCapability;->is11AxSupport()Z

    move-result v0

    invoke-virtual {v4, v5, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 411
    goto/16 :goto_1

    .line 403
    :cond_6
    new-instance v0, Landroid/content/Intent;

    const-class v5, Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-direct {v0, p0, v5}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    move-object v4, v0

    .line 404
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFi;->mCapability:Lcom/mediatek/engineermode/wifi/WifiCapability;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WifiCapability;->isAntSwapSupport()Z

    move-result v0

    invoke-virtual {v4, v11, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 405
    goto/16 :goto_1

    .line 398
    :cond_7
    new-instance v0, Landroid/content/Intent;

    const-class v5, Lcom/mediatek/engineermode/wifi/WiFiRx6620;

    invoke-direct {v0, p0, v5}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    move-object v4, v0

    .line 399
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFi;->mCapability:Lcom/mediatek/engineermode/wifi/WifiCapability;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WifiCapability;->is11AcSupport()Z

    move-result v0

    invoke-virtual {v4, v7, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 400
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFi;->mCapability:Lcom/mediatek/engineermode/wifi/WifiCapability;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WifiCapability;->isAntSwapSupport()Z

    move-result v0

    invoke-virtual {v4, v11, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 401
    goto/16 :goto_1

    .line 415
    :cond_8
    const v0, 0x7f0a0731

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFi;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 416
    const/4 v5, 0x0

    .line 418
    .local v5, "mcrClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    :try_start_0
    const-string v0, "com.mediatek.engineermode.wifi.WiFiMcr"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    .line 422
    .end local v5    # "mcrClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    .local v0, "mcrClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    nop

    .line 423
    new-instance v5, Landroid/content/Intent;

    invoke-direct {v5, p0, v0}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    move-object v4, v5

    .line 424
    .end local v0    # "mcrClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    goto :goto_1

    .line 419
    .restart local v5    # "mcrClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    :catch_0
    move-exception v0

    .line 420
    .local v0, "e":Ljava/lang/ClassNotFoundException;
    invoke-virtual {v0}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    .line 421
    return-void

    .line 424
    .end local v0    # "e":Ljava/lang/ClassNotFoundException;
    .end local v5    # "mcrClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    :cond_9
    const v0, 0x7f0a0733

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFi;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_a

    .line 425
    const/4 v5, 0x0

    .line 427
    .local v5, "rfcrClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    :try_start_1
    const-string v0, "com.mediatek.engineermode.wifi.WiFiRFCR"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0
    :try_end_1
    .catch Ljava/lang/ClassNotFoundException; {:try_start_1 .. :try_end_1} :catch_1

    .line 431
    .end local v5    # "rfcrClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    .local v0, "rfcrClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    nop

    .line 432
    new-instance v5, Landroid/content/Intent;

    invoke-direct {v5, p0, v0}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    move-object v4, v5

    .line 433
    .end local v0    # "rfcrClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    goto :goto_1

    .line 428
    .restart local v5    # "rfcrClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    :catch_1
    move-exception v0

    .line 429
    .local v0, "e":Ljava/lang/ClassNotFoundException;
    invoke-virtual {v0}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    .line 430
    return-void

    .line 433
    .end local v0    # "e":Ljava/lang/ClassNotFoundException;
    .end local v5    # "rfcrClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    :cond_a
    const v0, 0x7f0a0732

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFi;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_b

    .line 434
    const/4 v5, 0x0

    .line 436
    .local v5, "eepromClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    :try_start_2
    const-string v0, "com.mediatek.engineermode.wifi.WiFiEeprom"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0
    :try_end_2
    .catch Ljava/lang/ClassNotFoundException; {:try_start_2 .. :try_end_2} :catch_2

    .line 440
    .end local v5    # "eepromClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    .local v0, "eepromClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    nop

    .line 441
    new-instance v5, Landroid/content/Intent;

    invoke-direct {v5, p0, v0}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    move-object v4, v5

    .end local v0    # "eepromClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    goto :goto_0

    .line 437
    .restart local v5    # "eepromClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    :catch_2
    move-exception v0

    .line 438
    .local v0, "e":Ljava/lang/ClassNotFoundException;
    invoke-virtual {v0}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    .line 439
    return-void

    .line 442
    .end local v0    # "e":Ljava/lang/ClassNotFoundException;
    .end local v5    # "eepromClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    :cond_b
    const v0, 0x7f0a0730

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WiFi;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_c

    .line 443
    new-instance v0, Landroid/content/Intent;

    const-class v5, Lcom/mediatek/engineermode/wifi/WiFiDBDC;

    invoke-direct {v0, p0, v5}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    move-object v4, v0

    .line 444
    iget-object v0, v1, Lcom/mediatek/engineermode/wifi/WiFi;->mWifiType:Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;->ordinal()I

    move-result v0

    const-string v5, "key_wifi_type"

    invoke-virtual {v4, v5, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    goto :goto_1

    .line 442
    :cond_c
    :goto_0
    nop

    .line 447
    :goto_1
    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/wifi/WiFi;->startActivity(Landroid/content/Intent;)V

    .line 448
    return-void
.end method
