.class public Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;
.super Landroid/app/Activity;
.source "MDLogFiltersActivity.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;,
        Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FileLoadTask;,
        Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$MyHandler;,
        Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;
    }
.end annotation


# static fields
.field private static final ACTION_ASK_LOG_PATH:Ljava/lang/String; = "com.debug.loggerui.ADB_CMD"

.field private static final ACTION_GET_LOG_PATH:Ljava/lang/String; = "com.debug.loggerui.result"

.field private static final BIN_RECORD_PATH:Ljava/lang/String; = "filter_config"

.field private static final DEFAULT_FILTER:Ljava/lang/String; = "_Default"

.field private static final DIALOG_NO_FILTER_RECORD_FOLDER:I = 0x4

.field private static final DIALOG_QUERY_FILTERS:I = 0x2

.field private static final DIALOG_UPDATE_DONE:I = 0x3

.field private static final DIALOG_UPDATE_PATH:I = 0x1

.field private static final FILTER_TAR_PATH:Ljava/lang/String; = "mdlog1_config/"

.field private static final GEN_FILTER_FILE_LIST:[Ljava/lang/String;

.field private static final KEY_ASK_LOG_PATH:Ljava/lang/String; = "cmd_name"

.field private static final KEY_GET_LOG_PATH:Ljava/lang/String; = "result_value"

.field private static final KEY_WORD_LIST:[Ljava/lang/String;

.field private static final LOG_CMD_CLASS:Ljava/lang/String; = "com.debug.loggerui.framework.LogReceiver"

.field private static final LOG_CMD_PKG:Ljava/lang/String; = "com.debug.loggerui"

.field private static final LOG_PATH_PERMISSION:Ljava/lang/String; = "android.permission.DUMP"

.field private static final MSG_FILE_FORMAT_WRONG:I = 0x2

.field private static final MSG_FILE_UPDATE_RESULT:I = 0x1

.field private static final PLS_PS_ONLY_FILTER:Ljava/lang/String; = "PLS_PS_ONLY"

.field private static final POST_FIX:Ljava/lang/String; = ".bin"

.field private static final PRIMARY_STORAGE:Ljava/lang/String; = "primary"

.field private static final REQUEST_SELECT_BIN:I = 0x1

.field private static final STORAGE_AUTHORITY:Ljava/lang/String; = "com.android.externalstorage.documents"

.field private static final TAG:Ljava/lang/String; = "MDLogFilters"

.field private static final VALID_BIN_BYTES:[B

.field private static final VALUE_ASK_LOG_PATH:Ljava/lang/String; = "get_mtklog_path"

.field private static final mDefaultFilterPath:Ljava/lang/String; = "/vendor/etc/firmware/customfilter/"

.field private static final mGenFilterPath:Ljava/lang/String;


# instance fields
.field private mBtnMore:Landroid/widget/Button;

.field private mBtnRestore:Landroid/widget/Button;

.field private mBtnUpdate:Landroid/widget/Button;

.field private mFilterList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;",
            ">;"
        }
    .end annotation
.end field

.field private mHandler:Landroid/os/Handler;

.field private mMoreFilterView:Landroid/view/View;

.field private mOnClickListener:Landroid/view/View$OnClickListener;

.field private mPreFixIndex:I

.field private mReceiver:Landroid/content/BroadcastReceiver;

.field private mRgFilterList:Landroid/widget/RadioGroup;

.field private mSrcBinName:Ljava/lang/String;

.field private mSrcPath:Ljava/lang/String;

.field private mTarPath:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 10

    .line 114
    const/4 v0, 0x4

    new-array v0, v0, [B

    fill-array-data v0, :array_0

    sput-object v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->VALID_BIN_BYTES:[B

    .line 116
    const-string v1, "md1_filter__Default"

    const-string v2, "md1_filter_FullLog"

    const-string v3, "md1_filter_meta"

    const-string v4, "md1_filter_SlimLog_DspAllOff"

    const-string v5, "md1_filter_LowPowerMonitor"

    const-string v6, "md1_filter_1_Moderate"

    const-string v7, "md1_filter_2_Standard"

    const-string v8, "md1_filter_3_Slim"

    const-string v9, "md1_filter_4_UltraSlim"

    filled-new-array/range {v1 .. v9}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->KEY_WORD_LIST:[Ljava/lang/String;

    .line 128
    const-string v1, "catcher_filter_1_ulwctg_n__Default.bin"

    const-string v2, "catcher_filter_1_ulwctg_n_FullLog.bin"

    const-string v3, "catcher_filter_1_ulwctg_n_meta.bin"

    const-string v4, "catcher_filter_1_ulwctg_n_SlimLog_DspAllOff.bin"

    const-string v5, "catcher_filter_1_ulwctg_n_LowPowerMonitor.bin"

    const-string v6, "catcher_filter_1_ulwctg_n_1_Moderate.bin"

    const-string v7, "catcher_filter_1_ulwctg_n_2_Standard.bin"

    const-string v8, "catcher_filter_1_ulwctg_n_3_Slim.bin"

    const-string v9, "catcher_filter_1_ulwctg_n_4_UltraSlim.bin"

    filled-new-array/range {v1 .. v9}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->GEN_FILTER_FILE_LIST:[Ljava/lang/String;

    .line 140
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 141
    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/mdlogfilters/"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mGenFilterPath:Ljava/lang/String;

    .line 140
    return-void

    :array_0
    .array-data 1
        -0x33t
        -0x55t
        0x54t
        0x24t
    .end array-data
.end method

.method public constructor <init>()V
    .locals 2

    .line 83
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 110
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mFilterList:Ljava/util/ArrayList;

    .line 143
    const/4 v0, -0x1

    iput v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mPreFixIndex:I

    .line 146
    new-instance v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$MyHandler;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$MyHandler;-><init>(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$1;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mHandler:Landroid/os/Handler;

    .line 149
    iput-object v1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mSrcPath:Ljava/lang/String;

    .line 150
    iput-object v1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mTarPath:Ljava/lang/String;

    .line 228
    new-instance v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$1;-><init>(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mReceiver:Landroid/content/BroadcastReceiver;

    .line 333
    new-instance v0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$2;-><init>(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mOnClickListener:Landroid/view/View$OnClickListener;

    return-void
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Ljava/lang/String;)Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;
    .param p1, "x1"    # Ljava/lang/String;

    .line 83
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->recordFilterPath(Ljava/lang/String;)Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    move-result-object v0

    return-object v0
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    .line 83
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mBtnRestore:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$1200(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    .line 83
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->extractFilterFiles()V

    return-void
.end method

.method static synthetic access$1300(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    .line 83
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mSrcPath:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$1400(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Ljava/lang/String;Z)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;
    .param p1, "x1"    # Ljava/lang/String;
    .param p2, "x2"    # Z

    .line 83
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->extractFilterName(Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method static synthetic access$1500(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Ljava/util/ArrayList;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    .line 83
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mFilterList:Ljava/util/ArrayList;

    return-object v0
.end method

.method static synthetic access$1600(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    .line 83
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->showFilterList()V

    return-void
.end method

.method static synthetic access$202(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;
    .param p1, "x1"    # Ljava/lang/String;

    .line 83
    iput-object p1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mTarPath:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    .line 83
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mBtnMore:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    .line 83
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mBtnUpdate:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    .line 83
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mRgFilterList:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    .line 83
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mSrcBinName:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$602(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;
    .param p1, "x1"    # Ljava/lang/String;

    .line 83
    iput-object p1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mSrcBinName:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;
    .param p1, "x1"    # Z

    .line 83
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->enableUI(Z)V

    return-void
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Ljava/lang/String;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;
    .param p1, "x1"    # Ljava/lang/String;

    .line 83
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->checkBinValid(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;

    .line 83
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method private askLogPath()V
    .locals 3

    .line 222
    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.debug.loggerui.ADB_CMD"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 223
    .local v0, "intentDone":Landroid/content/Intent;
    const-string v1, "com.debug.loggerui"

    const-string v2, "com.debug.loggerui.framework.LogReceiver"

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->setClassName(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 224
    const-string v1, "cmd_name"

    const-string v2, "get_mtklog_path"

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 225
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->sendBroadcast(Landroid/content/Intent;)V

    .line 226
    return-void
.end method

.method private checkBinValid(Ljava/lang/String;)Z
    .locals 8
    .param p1, "filePath"    # Ljava/lang/String;

    .line 587
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "checkBinValid:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MDLogFilters"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 588
    const/4 v0, 0x0

    .line 590
    .local v0, "is":Ljava/io/InputStream;
    const/4 v1, 0x0

    :try_start_0
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 591
    .local v2, "file":Ljava/io/File;
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_3

    .line 592
    new-instance v3, Ljava/io/FileInputStream;

    invoke-direct {v3, v2}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    move-object v0, v3

    .line 593
    sget-object v3, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->VALID_BIN_BYTES:[B

    array-length v3, v3

    new-array v3, v3, [B

    .line 594
    .local v3, "buffer":[B
    invoke-virtual {v0, v3}, Ljava/io/InputStream;->read([B)I

    move-result v4

    .line 595
    .local v4, "byteRead":I
    sget-object v5, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->VALID_BIN_BYTES:[B

    array-length v5, v5
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_4
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-ge v4, v5, :cond_0

    .line 596
    nop

    .line 610
    nop

    .line 612
    :try_start_1
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    .line 615
    goto :goto_0

    .line 613
    :catch_0
    move-exception v5

    .line 614
    .local v5, "e":Ljava/io/IOException;
    invoke-virtual {v5}, Ljava/io/IOException;->printStackTrace()V

    .line 596
    .end local v5    # "e":Ljava/io/IOException;
    :goto_0
    return v1

    .line 598
    :cond_0
    const/4 v5, 0x0

    .local v5, "k":I
    :goto_1
    :try_start_2
    sget-object v6, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->VALID_BIN_BYTES:[B

    array-length v6, v6

    if-ge v5, v6, :cond_2

    .line 599
    sget-object v6, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->VALID_BIN_BYTES:[B

    aget-byte v6, v6, v5

    aget-byte v7, v3, v5
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_4
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eq v6, v7, :cond_1

    .line 600
    nop

    .line 610
    nop

    .line 612
    :try_start_3
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_1

    .line 615
    goto :goto_2

    .line 613
    :catch_1
    move-exception v6

    .line 614
    .local v6, "e":Ljava/io/IOException;
    invoke-virtual {v6}, Ljava/io/IOException;->printStackTrace()V

    .line 600
    .end local v6    # "e":Ljava/io/IOException;
    :goto_2
    return v1

    .line 598
    :cond_1
    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    .line 604
    .end local v5    # "k":I
    :cond_2
    nop

    .line 610
    nop

    .line 612
    :try_start_4
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_2

    .line 615
    goto :goto_3

    .line 613
    :catch_2
    move-exception v1

    .line 614
    .local v1, "e":Ljava/io/IOException;
    invoke-virtual {v1}, Ljava/io/IOException;->printStackTrace()V

    .line 604
    .end local v1    # "e":Ljava/io/IOException;
    :goto_3
    const/4 v1, 0x1

    return v1

    .line 610
    .end local v2    # "file":Ljava/io/File;
    .end local v3    # "buffer":[B
    .end local v4    # "byteRead":I
    :cond_3
    if-eqz v0, :cond_4

    .line 612
    :try_start_5
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_3

    .line 615
    :goto_4
    goto :goto_5

    .line 613
    :catch_3
    move-exception v2

    .line 614
    .local v2, "e":Ljava/io/IOException;
    invoke-virtual {v2}, Ljava/io/IOException;->printStackTrace()V

    .end local v2    # "e":Ljava/io/IOException;
    goto :goto_4

    .line 618
    :cond_4
    :goto_5
    return v1

    .line 610
    :catchall_0
    move-exception v1

    goto :goto_7

    .line 606
    :catch_4
    move-exception v2

    .line 607
    .restart local v2    # "e":Ljava/io/IOException;
    :try_start_6
    invoke-virtual {v2}, Ljava/io/IOException;->printStackTrace()V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    .line 608
    nop

    .line 610
    if-eqz v0, :cond_5

    .line 612
    :try_start_7
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_5

    .line 615
    goto :goto_6

    .line 613
    :catch_5
    move-exception v3

    .line 614
    .local v3, "e":Ljava/io/IOException;
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    .line 608
    .end local v3    # "e":Ljava/io/IOException;
    :cond_5
    :goto_6
    return v1

    .line 610
    .end local v2    # "e":Ljava/io/IOException;
    :goto_7
    if-eqz v0, :cond_6

    .line 612
    :try_start_8
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_8
    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_8} :catch_6

    .line 615
    goto :goto_8

    .line 613
    :catch_6
    move-exception v2

    .line 614
    .restart local v2    # "e":Ljava/io/IOException;
    invoke-virtual {v2}, Ljava/io/IOException;->printStackTrace()V

    .line 617
    .end local v2    # "e":Ljava/io/IOException;
    :cond_6
    :goto_8
    throw v1
.end method

.method private enableUI(Z)V
    .locals 3
    .param p1, "enable"    # Z

    .line 387
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mBtnRestore:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 388
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mBtnUpdate:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 389
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mBtnMore:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 390
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mRgFilterList:Landroid/widget/RadioGroup;

    invoke-virtual {v0}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v0

    .line 391
    .local v0, "count":I
    const/4 v1, 0x0

    .local v1, "k":I
    :goto_0
    if-ge v1, v0, :cond_0

    .line 392
    iget-object v2, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mRgFilterList:Landroid/widget/RadioGroup;

    invoke-virtual {v2, v1}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    invoke-virtual {v2, p1}, Landroid/view/View;->setEnabled(Z)V

    .line 391
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 394
    .end local v1    # "k":I
    :cond_0
    return-void
.end method

.method private extractFilterFiles()V
    .locals 6

    .line 477
    const-string v0, "ro.vendor.mtk_single_bin_modem_support"

    invoke-static {v0}, Lcom/mediatek/engineermode/FeatureSupport;->isSupported(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 478
    new-instance v0, Ljava/io/File;

    sget-object v1, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mGenFilterPath:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 479
    .local v0, "path":Ljava/io/File;
    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result v1

    if-nez v1, :cond_0

    .line 480
    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    .line 482
    :cond_0
    const-string v1, "MDLogFilters"

    const-string v2, "extractFilterFiles with new version"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 483
    const/4 v1, 0x0

    .local v1, "k":I
    :goto_0
    sget-object v2, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->KEY_WORD_LIST:[Ljava/lang/String;

    array-length v2, v2

    if-ge v1, v2, :cond_3

    .line 484
    new-instance v2, Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;

    invoke-direct {v2}, Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;-><init>()V

    .line 485
    .local v2, "functionCall":Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;
    const/16 v3, 0x2711

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;->startCallFunctionStringReturn(I)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 487
    const/4 v3, 0x2

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;->writeParamNo(I)Z

    .line 488
    sget-object v3, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->KEY_WORD_LIST:[Ljava/lang/String;

    aget-object v3, v3, v1

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;->writeParamString(Ljava/lang/String;)Z

    .line 489
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v4, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mGenFilterPath:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->GEN_FILTER_FILE_LIST:[Ljava/lang/String;

    aget-object v4, v4, v1

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;->writeParamString(Ljava/lang/String;)Z

    .line 490
    const/4 v3, 0x0

    .line 493
    .local v3, "funcRet":Lcom/mediatek/engineermode/emsvr/FunctionReturn;
    :cond_1
    invoke-virtual {v2}, Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;->getNextResult()Lcom/mediatek/engineermode/emsvr/FunctionReturn;

    move-result-object v3

    .line 494
    iget v4, v3, Lcom/mediatek/engineermode/emsvr/FunctionReturn;->mReturnCode:I

    const/4 v5, 0x1

    if-eq v4, v5, :cond_1

    .line 483
    .end local v2    # "functionCall":Lcom/mediatek/engineermode/emsvr/AFMFunctionCallEx;
    .end local v3    # "funcRet":Lcom/mediatek/engineermode/emsvr/FunctionReturn;
    :cond_2
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 498
    .end local v1    # "k":I
    :cond_3
    sget-object v1, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mGenFilterPath:Ljava/lang/String;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mSrcPath:Ljava/lang/String;

    .line 499
    .end local v0    # "path":Ljava/io/File;
    goto :goto_1

    .line 500
    :cond_4
    const-string v0, "/vendor/etc/firmware/customfilter/"

    iput-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mSrcPath:Ljava/lang/String;

    .line 502
    :goto_1
    return-void
.end method

.method private extractFilterName(Ljava/lang/String;Z)Ljava/lang/String;
    .locals 6
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "checkRule"    # Z

    .line 622
    const/4 v0, 0x0

    if-nez p1, :cond_0

    .line 623
    return-object v0

    .line 625
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "extractFilterName:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "MDLogFilters"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 626
    const-string v1, "/"

    invoke-virtual {p1, v1}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v1

    .line 627
    .local v1, "indexName":I
    const/4 v2, -0x1

    if-eq v1, v2, :cond_5

    .line 628
    add-int/lit8 v3, v1, 0x1

    invoke-virtual {p1, v3}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    .line 632
    if-nez p2, :cond_1

    .line 633
    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 635
    :cond_1
    iget v3, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mPreFixIndex:I

    if-ne v3, v2, :cond_3

    .line 636
    const/4 v3, 0x0

    .local v3, "k":I
    :goto_0
    const/4 v4, 0x5

    if-ge v3, v4, :cond_3

    .line 637
    iget v4, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mPreFixIndex:I

    add-int/lit8 v4, v4, 0x1

    const-string v5, "_"

    invoke-virtual {p1, v5, v4}, Ljava/lang/String;->indexOf(Ljava/lang/String;I)I

    move-result v4

    iput v4, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mPreFixIndex:I

    .line 638
    if-ne v4, v2, :cond_2

    .line 639
    return-object v0

    .line 636
    :cond_2
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 644
    .end local v3    # "k":I
    :cond_3
    const-string v3, ".bin"

    invoke-virtual {p1, v3}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v3

    .line 645
    .local v3, "postFixIndex":I
    iget v4, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mPreFixIndex:I

    if-eq v4, v2, :cond_4

    if-eq v3, v2, :cond_4

    if-ge v4, v3, :cond_4

    .line 646
    add-int/lit8 v4, v4, 0x1

    invoke-virtual {p1, v4, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    .line 647
    .local v0, "filterName":Ljava/lang/String;
    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v2

    return-object v2

    .line 649
    .end local v0    # "filterName":Ljava/lang/String;
    :cond_4
    return-object v0

    .line 630
    .end local v3    # "postFixIndex":I
    :cond_5
    return-object v0
.end method

.method private getExternalSDPath(Ljava/lang/String;)Ljava/lang/String;
    .locals 8
    .param p1, "name"    # Ljava/lang/String;

    .line 316
    if-eqz p1, :cond_1

    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    if-eqz v0, :cond_1

    .line 317
    nop

    .line 318
    const-string v0, "storage"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/storage/StorageManager;

    .line 319
    .local v0, "storageManager":Landroid/os/storage/StorageManager;
    invoke-virtual {v0}, Landroid/os/storage/StorageManager;->getVolumeList()[Landroid/os/storage/StorageVolume;

    move-result-object v1

    .line 320
    .local v1, "volumes":[Landroid/os/storage/StorageVolume;
    array-length v2, v1

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v2, :cond_1

    aget-object v4, v1, v3

    .line 321
    .local v4, "volume":Landroid/os/storage/StorageVolume;
    invoke-virtual {v4}, Landroid/os/storage/StorageVolume;->getPath()Ljava/lang/String;

    move-result-object v5

    .line 322
    .local v5, "volumePathStr":Ljava/lang/String;
    invoke-virtual {v5, p1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_0

    .line 323
    invoke-virtual {v4}, Landroid/os/storage/StorageVolume;->getState()Ljava/lang/String;

    move-result-object v6

    const-string v7, "mounted"

    invoke-virtual {v7, v6}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_0

    .line 324
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "volumePathStr:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "MDLogFilters"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 325
    return-object v5

    .line 320
    .end local v4    # "volume":Landroid/os/storage/StorageVolume;
    .end local v5    # "volumePathStr":Ljava/lang/String;
    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 330
    .end local v0    # "storageManager":Landroid/os/storage/StorageManager;
    .end local v1    # "volumes":[Landroid/os/storage/StorageVolume;
    :cond_1
    const/4 v0, 0x0

    return-object v0
.end method

.method private getPathFromUri(Landroid/net/Uri;)Ljava/lang/String;
    .locals 7
    .param p1, "uri"    # Landroid/net/Uri;

    .line 282
    const/4 v0, 0x0

    if-nez p1, :cond_0

    .line 283
    return-object v0

    .line 285
    :cond_0
    invoke-virtual {p1}, Landroid/net/Uri;->getAuthority()Ljava/lang/String;

    move-result-object v1

    const-string v2, "com.android.externalstorage.documents"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v2, "MDLogFilters"

    const/4 v3, 0x0

    if-nez v1, :cond_1

    .line 286
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "not support:"

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/net/Uri;->getAuthority()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 287
    const v1, 0x7f0a0411

    invoke-static {p0, v1, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v1

    .line 288
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 289
    return-object v0

    .line 291
    :cond_1
    invoke-virtual {p1}, Landroid/net/Uri;->getLastPathSegment()Ljava/lang/String;

    move-result-object v1

    .line 292
    .local v1, "strLastPathSegment":Ljava/lang/String;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "strLastPathSegment:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 293
    if-eqz v1, :cond_3

    .line 294
    const-string v2, ":"

    invoke-virtual {v1, v2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v2

    .line 295
    .local v2, "pathArray":[Ljava/lang/String;
    if-eqz v2, :cond_3

    array-length v4, v2

    const/4 v5, 0x2

    if-lt v4, v5, :cond_3

    .line 297
    aget-object v4, v2, v3

    const-string v5, "primary"

    invoke-virtual {v5, v4}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v4

    const/4 v5, 0x1

    const-string v6, "/"

    if-eqz v4, :cond_2

    .line 298
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v3

    invoke-virtual {v3}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v3, v2, v5

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 301
    :cond_2
    aget-object v3, v2, v3

    invoke-direct {p0, v3}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->getExternalSDPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 302
    .local v3, "strPath":Ljava/lang/String;
    if-eqz v3, :cond_3

    .line 303
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v4, v2, v5

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 311
    .end local v2    # "pathArray":[Ljava/lang/String;
    .end local v3    # "strPath":Ljava/lang/String;
    :cond_3
    return-object v0
.end method

.method private recordFilterPath(Ljava/lang/String;)Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;
    .locals 5
    .param p1, "srcFile"    # Ljava/lang/String;

    .line 406
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "recordFilterPath "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mTarPath:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MDLogFilters"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 407
    const/4 v0, 0x0

    .line 408
    .local v0, "osRecord":Ljava/io/FileOutputStream;
    new-instance v2, Ljava/io/File;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mTarPath:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "filter_config"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 409
    .local v2, "recordFile":Ljava/io/File;
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v3

    if-nez v3, :cond_0

    .line 410
    sget-object v1, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;->UPDATE_FILTER_RESULT_NO_RECORD_FILE:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    return-object v1

    .line 414
    :cond_0
    :try_start_0
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "recordFile is:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 415
    new-instance v1, Ljava/io/FileOutputStream;

    invoke-direct {v1, v2}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    move-object v0, v1

    .line 416
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 417
    .local v1, "source":Ljava/io/File;
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_1

    .line 418
    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/io/FileOutputStream;->write([B)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 425
    .end local v1    # "source":Ljava/io/File;
    :cond_1
    nop

    .line 426
    :try_start_1
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    .line 430
    goto :goto_0

    .line 428
    :catch_0
    move-exception v1

    .line 429
    .local v1, "e":Ljava/io/IOException;
    invoke-virtual {v1}, Ljava/io/IOException;->printStackTrace()V

    .line 431
    .end local v1    # "e":Ljava/io/IOException;
    nop

    .line 433
    :goto_0
    sget-object v1, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;->UPDATE_FILTER_RESULT_DONE:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;

    return-object v1

    .line 424
    :catchall_0
    move-exception v1

    goto :goto_3

    .line 420
    :catch_1
    move-exception v1

    .line 421
    .restart local v1    # "e":Ljava/io/IOException;
    :try_start_2
    invoke-virtual {v1}, Ljava/io/IOException;->printStackTrace()V

    .line 422
    sget-object v3, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;->UPDATE_FILTER_RESULT_IO_ERROR:Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$UpdateFilterResult;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 425
    if-eqz v0, :cond_2

    .line 426
    :try_start_3
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_2

    goto :goto_1

    .line 428
    :catch_2
    move-exception v4

    .line 429
    .local v4, "e":Ljava/io/IOException;
    invoke-virtual {v4}, Ljava/io/IOException;->printStackTrace()V

    goto :goto_2

    .line 430
    .end local v4    # "e":Ljava/io/IOException;
    :cond_2
    :goto_1
    nop

    .line 422
    :goto_2
    return-object v3

    .line 425
    .end local v1    # "e":Ljava/io/IOException;
    :goto_3
    if-eqz v0, :cond_3

    .line 426
    :try_start_4
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_3

    goto :goto_4

    .line 428
    :catch_3
    move-exception v3

    .line 429
    .local v3, "e":Ljava/io/IOException;
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    goto :goto_5

    .line 430
    .end local v3    # "e":Ljava/io/IOException;
    :cond_3
    :goto_4
    nop

    .line 431
    :goto_5
    throw v1
.end method

.method private showFilterList()V
    .locals 5

    .line 576
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mFilterList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;

    .line 577
    .local v1, "filterInfo":Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;
    new-instance v2, Landroid/widget/RadioButton;

    invoke-direct {v2, p0}, Landroid/widget/RadioButton;-><init>(Landroid/content/Context;)V

    .line 578
    .local v2, "radio":Landroid/widget/RadioButton;
    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;->getFilterName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/RadioButton;->setText(Ljava/lang/CharSequence;)V

    .line 579
    invoke-virtual {v2, v1}, Landroid/widget/RadioButton;->setTag(Ljava/lang/Object;)V

    .line 580
    iget-object v3, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mRgFilterList:Landroid/widget/RadioGroup;

    invoke-virtual {v3, v2}, Landroid/widget/RadioGroup;->addView(Landroid/view/View;)V

    .line 581
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "mRgFilterList addView:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;->getFilterName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "MDLogFilters"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 582
    .end local v1    # "filterInfo":Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;
    .end local v2    # "radio":Landroid/widget/RadioButton;
    goto :goto_0

    .line 583
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mRgFilterList:Landroid/widget/RadioGroup;

    invoke-virtual {v0}, Landroid/widget/RadioGroup;->clearCheck()V

    .line 584
    return-void
.end method


# virtual methods
.method protected onActivityResult(IILandroid/content/Intent;)V
    .locals 8
    .param p1, "requestCode"    # I
    .param p2, "resultCode"    # I
    .param p3, "data"    # Landroid/content/Intent;

    .line 248
    const/4 v0, 0x1

    if-ne p1, v0, :cond_3

    .line 249
    const/4 v0, -0x1

    if-ne p2, v0, :cond_3

    .line 251
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mMoreFilterView:Landroid/view/View;

    if-eqz v0, :cond_0

    .line 252
    iget-object v1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mRgFilterList:Landroid/widget/RadioGroup;

    invoke-virtual {v1, v0}, Landroid/widget/RadioGroup;->removeView(Landroid/view/View;)V

    .line 254
    :cond_0
    invoke-virtual {p3}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v0

    .line 255
    .local v0, "uri":Landroid/net/Uri;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "uri:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "MDLogFilters"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 257
    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->getPathFromUri(Landroid/net/Uri;)Ljava/lang/String;

    move-result-object v1

    .line 258
    .local v1, "path":Ljava/lang/String;
    if-nez v1, :cond_1

    .line 259
    return-void

    .line 262
    :cond_1
    const/4 v3, 0x0

    invoke-direct {p0, v1, v3}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->extractFilterName(Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object v4

    .line 263
    .local v4, "strFilterName":Ljava/lang/String;
    if-nez v4, :cond_2

    .line 264
    const v2, 0x7f0a0410

    invoke-static {p0, v2, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v2

    .line 265
    invoke-virtual {v2}, Landroid/widget/Toast;->show()V

    .line 266
    return-void

    .line 268
    :cond_2
    new-instance v3, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;

    invoke-direct {v3, p0, v4, v1}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;-><init>(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Ljava/lang/String;Ljava/lang/String;)V

    .line 269
    .local v3, "filterInfo":Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;
    new-instance v5, Landroid/widget/RadioButton;

    invoke-direct {v5, p0}, Landroid/widget/RadioButton;-><init>(Landroid/content/Context;)V

    .line 270
    .local v5, "radio":Landroid/widget/RadioButton;
    invoke-virtual {v3}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;->getFilterName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Landroid/widget/RadioButton;->setText(Ljava/lang/CharSequence;)V

    .line 271
    invoke-virtual {v5, v3}, Landroid/widget/RadioButton;->setTag(Ljava/lang/Object;)V

    .line 272
    iget-object v6, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mRgFilterList:Landroid/widget/RadioGroup;

    invoke-virtual {v6, v5}, Landroid/widget/RadioGroup;->addView(Landroid/view/View;)V

    .line 273
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "mRgFilterList addView:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;->getFilterName()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 274
    iget-object v2, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mRgFilterList:Landroid/widget/RadioGroup;

    invoke-virtual {v5}, Landroid/widget/RadioButton;->getId()I

    move-result v6

    invoke-virtual {v2, v6}, Landroid/widget/RadioGroup;->check(I)V

    .line 275
    iput-object v5, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mMoreFilterView:Landroid/view/View;

    .line 278
    .end local v0    # "uri":Landroid/net/Uri;
    .end local v1    # "path":Ljava/lang/String;
    .end local v3    # "filterInfo":Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FilterInfo;
    .end local v4    # "strFilterName":Ljava/lang/String;
    .end local v5    # "radio":Landroid/widget/RadioButton;
    :cond_3
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 154
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 155
    const v0, 0x7f080092

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->setContentView(I)V

    .line 156
    const v0, 0x7f06056b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mRgFilterList:Landroid/widget/RadioGroup;

    .line 157
    const v0, 0x7f060569

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mBtnMore:Landroid/widget/Button;

    .line 158
    iget-object v1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mOnClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 159
    const v0, 0x7f06056c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mBtnUpdate:Landroid/widget/Button;

    .line 160
    iget-object v1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mOnClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 161
    const v0, 0x7f06056a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mBtnRestore:Landroid/widget/Button;

    .line 162
    iget-object v1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mOnClickListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 163
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "debuglogger"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "mdlog1_config/"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mTarPath:Ljava/lang/String;

    .line 165
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mTarPath is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mTarPath:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MDLogFilters"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 166
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    .line 167
    .local v0, "intentFilter":Landroid/content/IntentFilter;
    const-string v1, "com.debug.loggerui.result"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 168
    iget-object v1, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mReceiver:Landroid/content/BroadcastReceiver;

    const-string v2, "android.permission.DUMP"

    const/4 v3, 0x0

    invoke-virtual {p0, v1, v0, v2, v3}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;)Landroid/content/Intent;

    .line 169
    new-instance v1, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FileLoadTask;

    invoke-direct {v1, p0, v3}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FileLoadTask;-><init>(Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$1;)V

    const/4 v2, 0x0

    new-array v2, v2, [Ljava/lang/Void;

    invoke-virtual {v1, v2}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity$FileLoadTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 170
    return-void
.end method

.method protected onCreateDialog(ILandroid/os/Bundle;)Landroid/app/Dialog;
    .locals 5
    .param p1, "id"    # I
    .param p2, "bundle"    # Landroid/os/Bundle;

    .line 189
    const/4 v0, 0x1

    const/4 v1, 0x0

    if-eq p1, v0, :cond_3

    const/4 v2, 0x2

    if-eq p1, v2, :cond_2

    const/4 v0, 0x3

    const v2, 0x7f0a02e8

    const v3, 0x7f0a0404

    const/4 v4, 0x0

    if-eq p1, v0, :cond_1

    const/4 v0, 0x4

    if-eq p1, v0, :cond_0

    .line 217
    return-object v4

    .line 210
    :cond_0
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 211
    invoke-virtual {v0, v3}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v3, 0x7f0a0408

    .line 212
    invoke-virtual {v0, v3}, Landroid/app/AlertDialog$Builder;->setMessage(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 213
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 214
    invoke-virtual {v0, v2, v4}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 215
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 210
    return-object v0

    .line 203
    :cond_1
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 204
    invoke-virtual {v0, v3}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v3, 0x7f0a040e

    .line 205
    invoke-virtual {v0, v3}, Landroid/app/AlertDialog$Builder;->setMessage(I)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 206
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 207
    invoke-virtual {v0, v2, v4}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 208
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 203
    return-object v0

    .line 197
    :cond_2
    new-instance v2, Landroid/app/ProgressDialog;

    invoke-direct {v2, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    .line 198
    .local v2, "dlgQueryFilters":Landroid/app/ProgressDialog;
    const v3, 0x7f0a0409

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 199
    invoke-virtual {v2, v1}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 200
    invoke-virtual {v2, v0}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 201
    return-object v2

    .line 191
    .end local v2    # "dlgQueryFilters":Landroid/app/ProgressDialog;
    :cond_3
    new-instance v2, Landroid/app/ProgressDialog;

    invoke-direct {v2, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    .line 192
    .local v2, "dlgUpdatePath":Landroid/app/ProgressDialog;
    const v3, 0x7f0a040d

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 193
    invoke-virtual {v2, v1}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 194
    invoke-virtual {v2, v0}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 195
    return-object v2
.end method

.method protected onDestroy()V
    .locals 1

    .line 183
    iget-object v0, p0, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 184
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 185
    return-void
.end method

.method protected onResume()V
    .locals 1

    .line 175
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 176
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->askLogPath()V

    .line 177
    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdlogfilters/MDLogFiltersActivity;->showDialog(I)V

    .line 178
    return-void
.end method
