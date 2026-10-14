.class public Lcom/mediatek/mdml/MonitorDefs;
.super Ljava/lang/Object;
.source "MonitorDefs.java"


# static fields
.field static final ANDROID_P_VERSION:I = 0x1c

.field static final DEFAULT_LAYOUT_DESC_DIR_SEARCH_PATH:Ljava/lang/String; = "/vendor/etc/mddb/"

.field static final DEFAULT_LAYOUT_DESC_DIR_SEARCH_PATH_DATA:Ljava/lang/String; = "/data/md_mon/"

.field static final DEFAULT_LAYOUT_DESC_PREFIX:Ljava/lang/String; = "mdm_layout_desc"

.field static final DEFAULT_LAYOUT_DESC_SUFFIX:Ljava/lang/String; = ".dat"

.field static final DHL_MAX_FRAME_SIZE:I = 0x10000

.field static final MAX_PAYLOAD_LEN:I = 0x20000

.field static final MAX_RAWDATA_LEN:I

.field static final MAX_READ_BUFFER_SIZE:I = 0x40000

.field static final MONITOR_COMMAND_SERVICE_ABSTRACT_NAME:Ljava/lang/String; = "com.mediatek.mdmonitor.command"

.field static final PROPERTY_SDK_VERSION:Ljava/lang/String; = "ro.build.version.sdk"

.field static final PROPERTY_SINGLE_BIN_MODEM_SUPPORT_O:Ljava/lang/String; = "ro.mtk_single_bin_modem_support"

.field static final PROPERTY_SINGLE_BIN_MODEM_SUPPORT_P:Ljava/lang/String; = "ro.vendor.mtk_single_bin_modem_support"


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 8
    sget-object v0, Lcom/mediatek/mdml/TRAP_TYPE;->TRAP_TYPE_SIZE:Lcom/mediatek/mdml/TRAP_TYPE;

    .line 9
    invoke-virtual {v0}, Lcom/mediatek/mdml/TRAP_TYPE;->ordinal()I

    move-result v0

    mul-int/lit8 v0, v0, 0x5

    const v1, 0x10009

    add-int/2addr v0, v1

    sput v0, Lcom/mediatek/mdml/MonitorDefs;->MAX_RAWDATA_LEN:I

    .line 8
    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
