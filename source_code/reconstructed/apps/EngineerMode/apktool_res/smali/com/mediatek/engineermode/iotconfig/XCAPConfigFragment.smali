.class public Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;
.super Landroid/support/v4/app/Fragment;
.source "XCAPConfigFragment.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$LoadModelThread;
    }
.end annotation


# static fields
.field protected static final DEFAULT_DISABLE_VALUE:Ljava/lang/String; = "0"

.field protected static final DEFAULT_ENABLE_VALUE:Ljava/lang/String; = "1"

.field protected static final DEFAULT_VALUE_XCAP_BOOLEAN:Ljava/lang/String; = "0"

.field protected static final DEFAULT_VALUE_XCAP_INTEGER:Ljava/lang/String; = "-1"

.field protected static final DEFAULT_VALUE_XCAP_READY:I = 0x0

.field protected static final DEFAULT_VALUE_XCAP_STRING:Ljava/lang/String; = ""

.field private static final OPERATION_TIME_OUT_MILLIS:I = 0xbb8

.field protected static final RESET_VALUE_XCAP_OK:I = 0x3

.field protected static final SET_SS_PROPERTY:I = 0x4

.field protected static final SET_VALUE_XCAP_FAIL:I = 0x2

.field protected static final SET_VALUE_XCAP_OK:I = 0x1

.field protected static final TAG:Ljava/lang/String; = "Iot/XCAPConfigFragment"

.field public static final UNKNOW:I = -0x1

.field protected static final XCAP_ACTION_GET:I = 0x0

.field protected static final XCAP_ACTION_RESET:I = 0x2

.field protected static final XCAP_ACTION_SET:I = 0x1

.field protected static final mATCMD:Ljava/lang/String; = "SET_SS_PROP"


# instance fields
.field private XcapItemTypes:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private XcapItems:Ljava/util/LinkedHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private adapter:Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

.field private btnCancel:Landroid/widget/Button;

.field private btnSave:Landroid/widget/Button;

.field private listView:Landroid/widget/ListView;

.field private mCallbackLatch:Ljava/util/concurrent/CountDownLatch;

.field private mHandler:Landroid/os/Handler;

.field private mIs95Modem:Z

.field public mPhoneId:I

.field private mXcapBoolCfg:[Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 50
    invoke-direct {p0}, Landroid/support/v4/app/Fragment;-><init>()V

    .line 79
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mPhoneId:I

    .line 81
    iput-boolean v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mIs95Modem:Z

    .line 86
    new-instance v0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$1;-><init>(Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;)Ljava/util/concurrent/CountDownLatch;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;

    .line 50
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mCallbackLatch:Ljava/util/concurrent/CountDownLatch;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;)Ljava/util/List;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;

    .line 50
    invoke-direct {p0}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->getModel()Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;

    .line 50
    invoke-direct {p0}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->setModel()Z

    move-result v0

    return v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;)Ljava/util/List;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;

    .line 50
    invoke-direct {p0}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->resetModel()Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;

    .line 50
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method private getEmptyModel()Ljava/util/List;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/iotconfig/XCAPModel;",
            ">;"
        }
    .end annotation

    .line 414
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 415
    .local v0, "mList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Lcom/mediatek/engineermode/iotconfig/XCAPModel;>;"
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mXcapBoolCfg:[Ljava/lang/String;

    array-length v3, v2

    if-ge v1, v3, :cond_0

    .line 416
    new-instance v3, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    aget-object v2, v2, v1

    const-string v4, "boolean"

    invoke-direct {v3, v2, v4}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 415
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 419
    .end local v1    # "i":I
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItems:Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 420
    .local v2, "str":Ljava/lang/String;
    new-instance v3, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    iget-object v4, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItemTypes:Ljava/util/HashMap;

    invoke-virtual {v4, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-direct {v3, v2, v4}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 421
    .end local v2    # "str":Ljava/lang/String;
    goto :goto_1

    .line 422
    :cond_1
    return-object v0
.end method

.method private getModel()Ljava/util/List;
    .locals 12
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/iotconfig/XCAPModel;",
            ">;"
        }
    .end annotation

    .line 426
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 427
    .local v0, "mList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Lcom/mediatek/engineermode/iotconfig/XCAPModel;>;"
    iget-boolean v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mIs95Modem:Z

    const-string v2, "1"

    const-string v3, "boolean"

    if-nez v1, :cond_3

    .line 428
    nop

    .line 429
    const-string v1, "persist.vendor.ss.boolvalue"

    const-string v4, "0"

    invoke-static {v1, v4}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    .line 428
    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->toBinaryString(I)Ljava/lang/String;

    move-result-object v1

    .line 431
    .local v1, "boolValue":Ljava/lang/String;
    nop

    .line 432
    const-string v5, "persist.vendor.ss.boolconfig"

    invoke-static {v5, v4}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v4

    .line 431
    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->toBinaryString(I)Ljava/lang/String;

    move-result-object v4

    .line 434
    .local v4, "boolConfig":Ljava/lang/String;
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "[getModel]BoolValue: "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " BoolConfig: "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v6, "Iot/XCAPConfigFragment"

    invoke-static {v6, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 436
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v5

    new-array v5, v5, [C

    .line 437
    .local v5, "results":[C
    invoke-virtual {v4}, Ljava/lang/String;->length()I

    move-result v6

    new-array v6, v6, [C

    .line 438
    .local v6, "configs":[C
    invoke-virtual {v1}, Ljava/lang/String;->toCharArray()[C

    move-result-object v5

    .line 439
    invoke-virtual {v4}, Ljava/lang/String;->toCharArray()[C

    move-result-object v6

    .line 440
    const/4 v7, 0x0

    .local v7, "i":I
    :goto_0
    iget-object v8, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mXcapBoolCfg:[Ljava/lang/String;

    array-length v8, v8

    if-ge v7, v8, :cond_2

    .line 441
    const/4 v8, 0x0

    .line 442
    .local v8, "itemConfiged":Z
    array-length v9, v6

    const/16 v10, 0x31

    if-ge v7, v9, :cond_0

    array-length v9, v6

    add-int/lit8 v9, v9, -0x1

    sub-int/2addr v9, v7

    aget-char v9, v6, v9

    if-ne v9, v10, :cond_0

    .line 443
    const/4 v8, 0x1

    .line 445
    :cond_0
    const/4 v9, 0x0

    .line 446
    .local v9, "itemSelected":Z
    array-length v11, v5

    if-ge v7, v11, :cond_1

    array-length v11, v5

    add-int/lit8 v11, v11, -0x1

    sub-int/2addr v11, v7

    aget-char v11, v5, v11

    if-ne v11, v10, :cond_1

    .line 447
    const/4 v9, 0x1

    .line 449
    :cond_1
    new-instance v10, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    iget-object v11, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mXcapBoolCfg:[Ljava/lang/String;

    aget-object v11, v11, v7

    invoke-direct {v10, v11, v8, v9, v3}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;-><init>(Ljava/lang/String;ZZLjava/lang/String;)V

    invoke-virtual {v0, v10}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 440
    .end local v8    # "itemConfiged":Z
    .end local v9    # "itemSelected":Z
    add-int/lit8 v7, v7, 0x1

    goto :goto_0

    .line 452
    .end local v1    # "boolValue":Ljava/lang/String;
    .end local v4    # "boolConfig":Ljava/lang/String;
    .end local v5    # "results":[C
    .end local v6    # "configs":[C
    .end local v7    # "i":I
    :cond_2
    goto :goto_2

    .line 453
    :cond_3
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_1
    iget-object v4, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mXcapBoolCfg:[Ljava/lang/String;

    array-length v4, v4

    if-ge v1, v4, :cond_4

    .line 456
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "persist.vendor.ss."

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v5, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant;->mXcapBoolPropertyBeyond93:[Ljava/lang/String;

    aget-object v5, v5, v1

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 455
    invoke-static {v4}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 456
    invoke-virtual {v4, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    .line 457
    .local v4, "result":Z
    new-instance v5, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    iget-object v6, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mXcapBoolCfg:[Ljava/lang/String;

    aget-object v6, v6, v1

    invoke-direct {v5, v6, v4, v4, v3}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;-><init>(Ljava/lang/String;ZZLjava/lang/String;)V

    invoke-virtual {v0, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 453
    .end local v4    # "result":Z
    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    .line 462
    .end local v1    # "i":I
    :cond_4
    :goto_2
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItems:Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_3
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_7

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 463
    .local v4, "str":Ljava/lang/String;
    iget-object v5, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItemTypes:Ljava/util/HashMap;

    invoke-virtual {v5, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    invoke-virtual {v5, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_6

    .line 464
    const/4 v5, 0x0

    .line 465
    .local v5, "itemSelected":Z
    iget-object v6, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItems:Ljava/util/LinkedHashMap;

    invoke-virtual {v6, v4}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;

    invoke-static {v6}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v6, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_5

    .line 466
    const/4 v5, 0x1

    .line 468
    :cond_5
    new-instance v6, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    iget-object v7, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItemTypes:Ljava/util/HashMap;

    .line 469
    invoke-virtual {v7, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    invoke-direct {v6, v4, v5, v7}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;-><init>(Ljava/lang/String;ZLjava/lang/String;)V

    .line 468
    invoke-virtual {v0, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 470
    .end local v5    # "itemSelected":Z
    goto :goto_4

    .line 471
    :cond_6
    new-instance v5, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    iget-object v6, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItems:Ljava/util/LinkedHashMap;

    .line 472
    invoke-virtual {v6, v4}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;

    .line 471
    const-string v7, ""

    invoke-static {v6, v7}, Landroid/os/SystemProperties;->get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    iget-object v7, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItemTypes:Ljava/util/HashMap;

    .line 472
    invoke-virtual {v7, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    invoke-direct {v5, v4, v6, v7}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 471
    invoke-virtual {v0, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 474
    .end local v4    # "str":Ljava/lang/String;
    :goto_4
    goto :goto_3

    .line 475
    :cond_7
    return-object v0
.end method

.method private isCallbackDone()Z
    .locals 5

    .line 261
    const/4 v0, 0x0

    .line 264
    .local v0, "isDone":Z
    :try_start_0
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mCallbackLatch:Ljava/util/concurrent/CountDownLatch;

    const-wide/16 v2, 0xbb8

    sget-object v4, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-virtual {v1, v2, v3, v4}, Ljava/util/concurrent/CountDownLatch;->await(JLjava/util/concurrent/TimeUnit;)Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    move v0, v1

    .line 268
    goto :goto_0

    .line 266
    :catch_0
    move-exception v1

    .line 267
    .local v1, "e":Ljava/lang/InterruptedException;
    const/4 v0, 0x0

    .line 270
    .end local v1    # "e":Ljava/lang/InterruptedException;
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "waitForCallback: isDone="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Iot/XCAPConfigFragment"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 271
    return v0
.end method

.method private resetModel()Ljava/util/List;
    .locals 13
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/iotconfig/XCAPModel;",
            ">;"
        }
    .end annotation

    .line 326
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 327
    .local v0, "mList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Lcom/mediatek/engineermode/iotconfig/XCAPModel;>;"
    const/4 v1, 0x2

    new-array v2, v1, [Ljava/lang/String;

    .line 328
    .local v2, "cmd":[Ljava/lang/String;
    iget-boolean v3, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mIs95Modem:Z

    const/4 v4, 0x4

    const-string v5, "SET_SS_PROP"

    const/4 v6, 0x0

    const/4 v7, 0x1

    if-nez v3, :cond_0

    .line 329
    new-array v3, v1, [Ljava/lang/String;

    .line 330
    .local v3, "cmdValue":[Ljava/lang/String;
    aput-object v5, v3, v6

    .line 331
    const-string v8, "persist.vendor.ss.boolvalue,0"

    aput-object v8, v3, v7

    .line 332
    iget v8, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mPhoneId:I

    iget-object v9, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mHandler:Landroid/os/Handler;

    invoke-virtual {v9, v4}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v9

    invoke-virtual {p0, v8, v3, v9}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->sendATcmdToRIL(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 334
    new-array v1, v1, [Ljava/lang/String;

    .line 335
    .local v1, "cmdConfig":[Ljava/lang/String;
    aput-object v5, v1, v6

    .line 336
    const-string v8, "persist.vendor.ss.boolconfig,0"

    aput-object v8, v1, v7

    .line 337
    iget v8, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mPhoneId:I

    iget-object v9, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mHandler:Landroid/os/Handler;

    invoke-virtual {v9, v4}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v9

    invoke-virtual {p0, v8, v1, v9}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->sendATcmdToRIL(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 338
    .end local v1    # "cmdConfig":[Ljava/lang/String;
    .end local v3    # "cmdValue":[Ljava/lang/String;
    goto :goto_0

    .line 340
    :cond_0
    aput-object v5, v2, v6

    .line 341
    const-string v1, "persist.vendor.ss.reset"

    aput-object v1, v2, v7

    .line 342
    iget v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mPhoneId:I

    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mHandler:Landroid/os/Handler;

    invoke-virtual {v3, v4}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v3

    invoke-virtual {p0, v1, v2, v3}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->sendATcmdToRIL(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 345
    :goto_0
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_1
    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mXcapBoolCfg:[Ljava/lang/String;

    array-length v8, v3

    const-string v9, ","

    if-ge v1, v8, :cond_2

    .line 346
    new-instance v8, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    aget-object v3, v3, v1

    const-string v10, "boolean"

    invoke-direct {v8, v3, v10}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v8}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 348
    iget-boolean v3, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mIs95Modem:Z

    if-eqz v3, :cond_1

    .line 349
    aput-object v5, v2, v6

    .line 350
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "persist.vendor.ss."

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v8, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant;->mXcapBoolPropertyBeyond93:[Ljava/lang/String;

    aget-object v8, v8, v1

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v2, v7

    .line 352
    iget v3, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mPhoneId:I

    iget-object v8, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mHandler:Landroid/os/Handler;

    invoke-virtual {v8, v4}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v8

    invoke-virtual {p0, v3, v2, v8}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->sendATcmdToRIL(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 345
    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    .line 356
    .end local v1    # "i":I
    :cond_2
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItems:Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_2
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_8

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 357
    .local v3, "str":Ljava/lang/String;
    iget-boolean v8, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mIs95Modem:Z

    const-string v10, "1"

    const-string v11, "int"

    const-string v12, "String"

    if-nez v8, :cond_5

    .line 358
    iget-object v8, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItemTypes:Ljava/util/HashMap;

    invoke-virtual {v8, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/String;

    invoke-virtual {v8, v12}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_3

    .line 359
    aput-object v5, v2, v6

    .line 360
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v10, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItems:Ljava/util/LinkedHashMap;

    invoke-virtual {v10, v3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Ljava/lang/String;

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, ""

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v2, v7

    .line 361
    iget v8, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mPhoneId:I

    iget-object v10, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mHandler:Landroid/os/Handler;

    invoke-virtual {v10, v4}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v10

    invoke-virtual {p0, v8, v2, v10}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->sendATcmdToRIL(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 362
    new-instance v8, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    iget-object v10, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItems:Ljava/util/LinkedHashMap;

    .line 363
    invoke-virtual {v10, v3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Ljava/lang/String;

    .line 362
    invoke-static {v10}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    iget-object v11, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItemTypes:Ljava/util/HashMap;

    .line 363
    invoke-virtual {v11, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Ljava/lang/String;

    invoke-direct {v8, v3, v10, v11}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 362
    invoke-virtual {v0, v8}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto/16 :goto_3

    .line 364
    :cond_3
    iget-object v8, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItemTypes:Ljava/util/HashMap;

    invoke-virtual {v8, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/String;

    invoke-virtual {v8, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_4

    .line 365
    aput-object v5, v2, v6

    .line 366
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v10, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItems:Ljava/util/LinkedHashMap;

    invoke-virtual {v10, v3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Ljava/lang/String;

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "-1"

    invoke-static {v10}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v2, v7

    .line 367
    iget v8, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mPhoneId:I

    iget-object v10, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mHandler:Landroid/os/Handler;

    invoke-virtual {v10, v4}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v10

    invoke-virtual {p0, v8, v2, v10}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->sendATcmdToRIL(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 368
    new-instance v8, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    iget-object v10, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItems:Ljava/util/LinkedHashMap;

    .line 369
    invoke-virtual {v10, v3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Ljava/lang/String;

    .line 368
    invoke-static {v10}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    iget-object v11, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItemTypes:Ljava/util/HashMap;

    .line 369
    invoke-virtual {v11, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Ljava/lang/String;

    invoke-direct {v8, v3, v10, v11}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 368
    invoke-virtual {v0, v8}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto/16 :goto_3

    .line 371
    :cond_4
    aput-object v5, v2, v6

    .line 372
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v11, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItems:Ljava/util/LinkedHashMap;

    invoke-virtual {v11, v3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Ljava/lang/String;

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "0"

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v2, v7

    .line 373
    iget v8, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mPhoneId:I

    iget-object v11, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mHandler:Landroid/os/Handler;

    invoke-virtual {v11, v4}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v11

    invoke-virtual {p0, v8, v2, v11}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->sendATcmdToRIL(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 374
    new-instance v8, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    .line 375
    iget-object v11, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItems:Ljava/util/LinkedHashMap;

    invoke-virtual {v11, v3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Ljava/lang/String;

    .line 374
    invoke-static {v11}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    .line 375
    invoke-virtual {v11, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v10

    iget-object v11, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItemTypes:Ljava/util/HashMap;

    .line 376
    invoke-virtual {v11, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Ljava/lang/String;

    invoke-direct {v8, v3, v10, v11}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;-><init>(Ljava/lang/String;ZLjava/lang/String;)V

    .line 374
    invoke-virtual {v0, v8}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto/16 :goto_3

    .line 379
    :cond_5
    iget-object v8, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItemTypes:Ljava/util/HashMap;

    invoke-virtual {v8, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/String;

    invoke-virtual {v8, v12}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_6

    .line 380
    aput-object v5, v2, v6

    .line 381
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v10, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItems:Ljava/util/LinkedHashMap;

    invoke-virtual {v10, v3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Ljava/lang/String;

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v2, v7

    .line 382
    iget v8, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mPhoneId:I

    iget-object v10, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mHandler:Landroid/os/Handler;

    invoke-virtual {v10, v4}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v10

    invoke-virtual {p0, v8, v2, v10}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->sendATcmdToRIL(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 383
    new-instance v8, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    iget-object v10, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItems:Ljava/util/LinkedHashMap;

    .line 384
    invoke-virtual {v10, v3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Ljava/lang/String;

    .line 383
    invoke-static {v10}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    iget-object v11, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItemTypes:Ljava/util/HashMap;

    .line 384
    invoke-virtual {v11, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Ljava/lang/String;

    invoke-direct {v8, v3, v10, v11}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 383
    invoke-virtual {v0, v8}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto/16 :goto_3

    .line 385
    :cond_6
    iget-object v8, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItemTypes:Ljava/util/HashMap;

    invoke-virtual {v8, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/String;

    invoke-virtual {v8, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_7

    .line 387
    aput-object v5, v2, v6

    .line 388
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v10, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItems:Ljava/util/LinkedHashMap;

    invoke-virtual {v10, v3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Ljava/lang/String;

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v2, v7

    .line 389
    iget v8, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mPhoneId:I

    iget-object v10, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mHandler:Landroid/os/Handler;

    invoke-virtual {v10, v4}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v10

    invoke-virtual {p0, v8, v2, v10}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->sendATcmdToRIL(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 390
    new-instance v8, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    iget-object v10, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItems:Ljava/util/LinkedHashMap;

    .line 391
    invoke-virtual {v10, v3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Ljava/lang/String;

    .line 390
    invoke-static {v10}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    iget-object v11, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItemTypes:Ljava/util/HashMap;

    .line 391
    invoke-virtual {v11, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Ljava/lang/String;

    invoke-direct {v8, v3, v10, v11}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 390
    invoke-virtual {v0, v8}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_3

    .line 393
    :cond_7
    aput-object v5, v2, v6

    .line 394
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v11, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItems:Ljava/util/LinkedHashMap;

    invoke-virtual {v11, v3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Ljava/lang/String;

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v2, v7

    .line 395
    iget v8, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mPhoneId:I

    iget-object v11, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mHandler:Landroid/os/Handler;

    invoke-virtual {v11, v4}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v11

    invoke-virtual {p0, v8, v2, v11}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->sendATcmdToRIL(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 396
    new-instance v8, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    .line 397
    iget-object v11, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItems:Ljava/util/LinkedHashMap;

    invoke-virtual {v11, v3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Ljava/lang/String;

    .line 396
    invoke-static {v11}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    .line 397
    invoke-virtual {v11, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v10

    iget-object v11, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItemTypes:Ljava/util/HashMap;

    .line 398
    invoke-virtual {v11, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Ljava/lang/String;

    invoke-direct {v8, v3, v10, v11}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;-><init>(Ljava/lang/String;ZLjava/lang/String;)V

    .line 396
    invoke-virtual {v0, v8}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 401
    .end local v3    # "str":Ljava/lang/String;
    :goto_3
    goto/16 :goto_2

    .line 403
    :cond_8
    iget-boolean v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mIs95Modem:Z

    if-eqz v1, :cond_9

    .line 405
    aput-object v5, v2, v6

    .line 406
    const-string v1, "persist.vendor.ss.resetdone"

    aput-object v1, v2, v7

    .line 407
    iget v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mPhoneId:I

    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mHandler:Landroid/os/Handler;

    invoke-virtual {v3, v4}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v3

    invoke-virtual {p0, v1, v2, v3}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->sendATcmdToRIL(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 410
    :cond_9
    return-object v0
.end method

.method private setModel()Z
    .locals 14

    .line 275
    const/4 v0, 0x0

    .line 276
    .local v0, "mBoolConfig":I
    const/4 v1, 0x0

    .line 277
    .local v1, "mBoolValue":I
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->adapter:Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->getList()Ljava/util/List;

    move-result-object v2

    .line 278
    .local v2, "mList":Ljava/util/List;, "Ljava/util/List<Lcom/mediatek/engineermode/iotconfig/XCAPModel;>;"
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "[setModel]listSize : "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "Iot/XCAPConfigFragment"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 279
    const/4 v3, 0x2

    new-array v5, v3, [Ljava/lang/String;

    .line 280
    .local v5, "cmd":[Ljava/lang/String;
    const/4 v6, 0x0

    .local v6, "i":I
    :goto_0
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v7

    const/4 v8, 0x4

    const-string v9, "SET_SS_PROP"

    const/4 v10, 0x0

    const/4 v11, 0x1

    if-ge v6, v7, :cond_6

    .line 281
    iget-object v7, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mXcapBoolCfg:[Ljava/lang/String;

    array-length v7, v7

    const-string v12, ","

    if-ge v6, v7, :cond_4

    .line 282
    iget-boolean v7, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mIs95Modem:Z

    if-eqz v7, :cond_1

    .line 283
    invoke-interface {v2, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    invoke-virtual {v7}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->isConfiged()Z

    move-result v7

    if-eqz v7, :cond_5

    .line 284
    aput-object v9, v5, v10

    .line 285
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "persist.vendor.ss."

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v9, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant;->mXcapBoolPropertyBeyond93:[Ljava/lang/String;

    aget-object v9, v9, v6

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 286
    invoke-interface {v2, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    invoke-virtual {v9}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->isSelected()Z

    move-result v9

    if-eqz v9, :cond_0

    const-string v9, "1"

    goto :goto_1

    :cond_0
    const-string v9, "0"

    :goto_1
    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    aput-object v7, v5, v11

    .line 287
    iget v7, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mPhoneId:I

    iget-object v9, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mHandler:Landroid/os/Handler;

    invoke-virtual {v9, v8}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v8

    invoke-virtual {p0, v7, v5, v8}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->sendATcmdToRIL(I[Ljava/lang/String;Landroid/os/Message;)V

    goto/16 :goto_3

    .line 290
    :cond_1
    invoke-interface {v2, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    invoke-virtual {v7}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->isConfiged()Z

    move-result v7

    if-eqz v7, :cond_3

    .line 291
    invoke-interface {v2, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    invoke-virtual {v7}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->isSelected()Z

    move-result v7

    if-eqz v7, :cond_2

    .line 292
    shl-int v7, v11, v6

    or-int/2addr v1, v7

    goto :goto_2

    .line 294
    :cond_2
    shl-int v7, v11, v6

    not-int v7, v7

    and-int/2addr v1, v7

    .line 296
    :goto_2
    shl-int v7, v11, v6

    or-int/2addr v0, v7

    goto :goto_3

    .line 298
    :cond_3
    shl-int v7, v11, v6

    not-int v7, v7

    and-int/2addr v0, v7

    goto :goto_3

    .line 302
    :cond_4
    invoke-interface {v2, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    invoke-virtual {v7}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->getValue()Ljava/lang/String;

    move-result-object v7

    const-string v13, ""

    invoke-virtual {v13, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-nez v7, :cond_5

    .line 303
    aput-object v9, v5, v10

    .line 304
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v9, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItems:Ljava/util/LinkedHashMap;

    invoke-interface {v2, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    invoke-virtual {v10}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->getName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/lang/String;

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v2, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    invoke-virtual {v9}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->getValue()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    aput-object v7, v5, v11

    .line 305
    iget v7, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mPhoneId:I

    iget-object v9, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mHandler:Landroid/os/Handler;

    invoke-virtual {v9, v8}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v8

    invoke-virtual {p0, v7, v5, v8}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->sendATcmdToRIL(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 280
    :cond_5
    :goto_3
    add-int/lit8 v6, v6, 0x1

    goto/16 :goto_0

    .line 309
    .end local v6    # "i":I
    :cond_6
    iget-boolean v6, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mIs95Modem:Z

    if-nez v6, :cond_7

    .line 310
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "[setModel]BoolValue: "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, " BoolConfig: "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v4, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 312
    new-array v4, v3, [Ljava/lang/String;

    .line 313
    .local v4, "cmdValue":[Ljava/lang/String;
    aput-object v9, v4, v10

    .line 314
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "persist.vendor.ss.boolvalue,"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    aput-object v6, v4, v11

    .line 315
    iget v6, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mPhoneId:I

    iget-object v7, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mHandler:Landroid/os/Handler;

    invoke-virtual {v7, v8}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v7

    invoke-virtual {p0, v6, v4, v7}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->sendATcmdToRIL(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 317
    new-array v3, v3, [Ljava/lang/String;

    .line 318
    .local v3, "cmdConfig":[Ljava/lang/String;
    aput-object v9, v3, v10

    .line 319
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "persist.vendor.ss.boolconfig,"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    aput-object v6, v3, v11

    .line 320
    iget v6, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mPhoneId:I

    iget-object v7, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mHandler:Landroid/os/Handler;

    invoke-virtual {v7, v8}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v7

    invoke-virtual {p0, v6, v3, v7}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->sendATcmdToRIL(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 322
    .end local v3    # "cmdConfig":[Ljava/lang/String;
    .end local v4    # "cmdValue":[Ljava/lang/String;
    :cond_7
    return v11
.end method


# virtual methods
.method public hideInputMethod(Landroid/view/View;)V
    .locals 3
    .param p1, "view"    # Landroid/view/View;

    .line 183
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v0

    if-eqz v0, :cond_0

    if-nez p1, :cond_0

    .line 184
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/support/v4/app/FragmentActivity;->getCurrentFocus()Landroid/view/View;

    move-result-object p1

    .line 186
    :cond_0
    if-eqz p1, :cond_1

    .line 187
    invoke-virtual {p1}, Landroid/view/View;->clearFocus()V

    .line 188
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v0

    .line 189
    const-string v1, "input_method"

    invoke-virtual {v0, v1}, Landroid/support/v4/app/FragmentActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/inputmethod/InputMethodManager;

    .line 190
    .local v0, "imm":Landroid/view/inputmethod/InputMethodManager;
    invoke-virtual {v0}, Landroid/view/inputmethod/InputMethodManager;->isActive()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 191
    invoke-virtual {p1}, Landroid/view/View;->getWindowToken()Landroid/os/IBinder;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/view/inputmethod/InputMethodManager;->hideSoftInputFromWindow(Landroid/os/IBinder;I)Z

    .line 194
    .end local v0    # "imm":Landroid/view/inputmethod/InputMethodManager;
    :cond_1
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 2
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 132
    invoke-super {p0, p1}, Landroid/support/v4/app/Fragment;->onCreate(Landroid/os/Bundle;)V

    .line 133
    nop

    .line 134
    invoke-static {}, Landroid/telephony/SubscriptionManager;->getDefaultDataSubscriptionId()I

    move-result v0

    .line 133
    invoke-static {v0}, Landroid/telephony/SubscriptionManager;->getPhoneId(I)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mPhoneId:I

    .line 135
    nop

    .line 136
    const-string v0, "persist.vendor.ss.modem_version"

    invoke-static {v0}, Landroid/os/SystemProperties;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "1"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mIs95Modem:Z

    .line 137
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mIs95Modem = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mIs95Modem:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Iot/XCAPConfigFragment"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 138
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mIs95Modem:Z

    if-nez v0, :cond_0

    .line 139
    sget-object v0, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant;->mXcapBoolCfgFor93:[Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mXcapBoolCfg:[Ljava/lang/String;

    .line 140
    sget-object v0, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant;->mXcapItemsFor93:Ljava/util/LinkedHashMap;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItems:Ljava/util/LinkedHashMap;

    .line 141
    sget-object v0, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant;->mXcapItemTypesFor93:Ljava/util/HashMap;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItemTypes:Ljava/util/HashMap;

    goto :goto_0

    .line 142
    :cond_0
    iget-boolean v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mIs95Modem:Z

    if-eqz v0, :cond_1

    .line 143
    sget-object v0, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant;->mXcapBoolCfgBeyond93:[Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mXcapBoolCfg:[Ljava/lang/String;

    .line 144
    sget-object v0, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant;->mXcapItemsBeyond93:Ljava/util/LinkedHashMap;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItems:Ljava/util/LinkedHashMap;

    .line 145
    sget-object v0, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant;->mXcapItemTypesBeyond93:Ljava/util/HashMap;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItemTypes:Ljava/util/HashMap;

    goto :goto_0

    .line 147
    :cond_1
    sget-object v0, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant;->mXcapBoolCfgBelow93:[Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mXcapBoolCfg:[Ljava/lang/String;

    .line 148
    sget-object v0, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant;->mXcapItemsBelow93:Ljava/util/LinkedHashMap;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItems:Ljava/util/LinkedHashMap;

    .line 149
    sget-object v0, Lcom/mediatek/engineermode/iotconfig/IotConfigConstant;->mXcapItemTypesBelow93:Ljava/util/HashMap;

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->XcapItemTypes:Ljava/util/HashMap;

    .line 151
    :goto_0
    return-void
.end method

.method public onCreateView(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;
    .locals 4
    .param p1, "inflater"    # Landroid/view/LayoutInflater;
    .param p2, "container"    # Landroid/view/ViewGroup;
    .param p3, "savedInstanceState"    # Landroid/os/Bundle;

    .line 157
    const v0, 0x7f080084

    const/4 v1, 0x0

    invoke-virtual {p1, v0, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    .line 158
    .local v0, "view":Landroid/view/View;
    const v1, 0x7f060885

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ListView;

    iput-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->listView:Landroid/widget/ListView;

    .line 159
    const v1, 0x7f060247

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->btnSave:Landroid/widget/Button;

    .line 160
    const v1, 0x7f060246

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/Button;

    iput-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->btnCancel:Landroid/widget/Button;

    .line 161
    new-instance v1, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->getActivity()Landroid/support/v4/app/FragmentActivity;

    move-result-object v2

    invoke-direct {p0}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->getEmptyModel()Ljava/util/List;

    move-result-object v3

    invoke-direct {v1, v2, v3}, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;-><init>(Landroid/app/Activity;Ljava/util/List;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->adapter:Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

    .line 162
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->listView:Landroid/widget/ListView;

    invoke-virtual {v2, v1}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 163
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->btnSave:Landroid/widget/Button;

    new-instance v2, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$2;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$2;-><init>(Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;)V

    invoke-virtual {v1, v2}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 170
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->btnCancel:Landroid/widget/Button;

    new-instance v2, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$3;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$3;-><init>(Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;)V

    invoke-virtual {v1, v2}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 179
    return-object v0
.end method

.method public onItemClick(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 0
    .param p2, "view"    # Landroid/view/View;
    .param p3, "position"    # I
    .param p4, "id"    # J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;",
            "Landroid/view/View;",
            "IJ)V"
        }
    .end annotation

    .line 490
    .local p1, "parent":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method

.method public onResume()V
    .locals 2

    .line 481
    new-instance v0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$LoadModelThread;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$LoadModelThread;-><init>(Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;I)V

    invoke-virtual {v0}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment$LoadModelThread;->start()V

    .line 482
    invoke-super {p0}, Landroid/support/v4/app/Fragment;->onResume()V

    .line 483
    return-void
.end method

.method public sendATcmdToRIL(I[Ljava/lang/String;Landroid/os/Message;)V
    .locals 3
    .param p1, "phoneid"    # I
    .param p2, "cmd"    # [Ljava/lang/String;
    .param p3, "response"    # Landroid/os/Message;

    .line 251
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sendATcmdToRIL : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p2}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Iot/XCAPConfigFragment"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 252
    new-instance v0, Ljava/util/concurrent/CountDownLatch;

    const/4 v2, 0x1

    invoke-direct {v0, v2}, Ljava/util/concurrent/CountDownLatch;-><init>(I)V

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mCallbackLatch:Ljava/util/concurrent/CountDownLatch;

    .line 253
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->mHandler:Landroid/os/Handler;

    const/4 v2, 0x4

    invoke-virtual {v0, v2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    invoke-static {p1, p2, v0}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 254
    invoke-direct {p0}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->isCallbackDone()Z

    move-result v0

    if-nez v0, :cond_0

    .line 256
    const-string v0, "waitForCallback: callback is not done!"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 258
    :cond_0
    return-void
.end method

.method public setUserVisibleHint(Z)V
    .locals 1
    .param p1, "isVisibleToUser"    # Z

    .line 198
    invoke-super {p0, p1}, Landroid/support/v4/app/Fragment;->setUserVisibleHint(Z)V

    .line 199
    if-nez p1, :cond_0

    .line 200
    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->hideInputMethod(Landroid/view/View;)V

    .line 202
    :cond_0
    return-void
.end method

.method public updateUI(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/iotconfig/XCAPModel;",
            ">;)V"
        }
    .end annotation

    .line 245
    .local p1, "updateModel":Ljava/util/List;, "Ljava/util/List<Lcom/mediatek/engineermode/iotconfig/XCAPModel;>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->adapter:Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->clear()V

    .line 246
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->adapter:Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

    invoke-virtual {v0, p1}, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->addAll(Ljava/util/Collection;)V

    .line 247
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPConfigFragment;->adapter:Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->notifyDataSetChanged()V

    .line 248
    return-void
.end method
