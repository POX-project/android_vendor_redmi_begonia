.class public Lcom/mediatek/mdml/PlainDataDecoder;
.super Ljava/lang/Object;
.source "PlainDataDecoder.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "MDML/PlainDataDecoder"

.field private static sPathDecoderMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/mediatek/mdml/PlainDataDecoder;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private currentBlock:Lcom/mediatek/mdml/InfoType;

.field private infoDat:Lcom/mediatek/mdml/InfoDat;

.field private mdmConnection:Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;

.field private verMain:I

.field private verSub:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 48
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/mediatek/mdml/PlainDataDecoder;->sPathDecoderMap:Ljava/util/HashMap;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;)V
    .locals 2
    .param p1, "fileName"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 161
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 44
    sget-object v0, Lcom/mediatek/mdml/InfoType;->NONE:Lcom/mediatek/mdml/InfoType;

    iput-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->currentBlock:Lcom/mediatek/mdml/InfoType;

    .line 45
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->verMain:I

    .line 46
    iput v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->verSub:I

    .line 47
    new-instance v0, Lcom/mediatek/mdml/InfoDat;

    invoke-direct {v0}, Lcom/mediatek/mdml/InfoDat;-><init>()V

    iput-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    .line 162
    const-string v0, "MDML/PlainDataDecoder"

    const-string v1, "Old PlainDataDecoder constructor, it was phase out. Please use new interface of PlainDataDecoder constructor."

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 163
    new-instance v0, Ljava/lang/Exception;

    invoke-direct {v0, v1}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public constructor <init>(Ljava/lang/String;Landroid/content/Context;)V
    .locals 7
    .param p1, "fileName"    # Ljava/lang/String;
    .param p2, "context"    # Landroid/content/Context;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 174
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 44
    sget-object v0, Lcom/mediatek/mdml/InfoType;->NONE:Lcom/mediatek/mdml/InfoType;

    iput-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->currentBlock:Lcom/mediatek/mdml/InfoType;

    .line 45
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->verMain:I

    .line 46
    iput v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->verSub:I

    .line 47
    new-instance v1, Lcom/mediatek/mdml/InfoDat;

    invoke-direct {v1}, Lcom/mediatek/mdml/InfoDat;-><init>()V

    iput-object v1, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    .line 176
    const/4 v1, 0x1

    if-eqz p1, :cond_0

    .line 177
    goto/16 :goto_1

    .line 179
    :cond_0
    const-string v2, "ro.build.version.sdk"

    const/16 v3, 0x1c

    invoke-static {v2, v3}, Landroid/os/SystemProperties;->getInt(Ljava/lang/String;I)I

    move-result v2

    .line 180
    .local v2, "sdkVersion":I
    if-lt v2, v3, :cond_1

    const-string v3, "ro.vendor.mtk_single_bin_modem_support"

    goto :goto_0

    .line 181
    :cond_1
    const-string v3, "ro.mtk_single_bin_modem_support"

    :goto_0
    nop

    .line 182
    .local v3, "propertyName":Ljava/lang/String;
    invoke-static {v3, v0}, Landroid/os/SystemProperties;->getInt(Ljava/lang/String;I)I

    move-result v4

    if-ne v4, v1, :cond_5

    .line 185
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2}, Landroid/content/Context;->getCacheDir()Ljava/io/File;

    move-result-object v5

    invoke-virtual {v5}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "/"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 187
    .local v4, "appLocalFilePath":Ljava/lang/String;
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "search app local directory: "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v6, "MDML/PlainDataDecoder"

    invoke-static {v6, v5}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 190
    invoke-direct {p0, v4}, Lcom/mediatek/mdml/PlainDataDecoder;->SearchLayoutFile(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    move-object p1, v5

    if-eqz v5, :cond_2

    .line 191
    goto :goto_1

    .line 194
    :cond_2
    invoke-direct {p0, v4}, Lcom/mediatek/mdml/PlainDataDecoder;->getLayoutFileDataFromMDMAndSaveToPath(Ljava/lang/String;)I

    move-result v5

    if-nez v5, :cond_4

    .line 199
    invoke-direct {p0, v4}, Lcom/mediatek/mdml/PlainDataDecoder;->SearchLayoutFile(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    move-object p1, v5

    if-eqz v5, :cond_3

    .line 200
    goto :goto_1

    .line 202
    :cond_3
    new-instance v0, Ljava/lang/Exception;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Single bin modem support, Can\'t find layout file in folder = "

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw v0

    .line 195
    :cond_4
    new-instance v0, Ljava/lang/Exception;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Single bin modem support, error in getLayoutFileDataFromMDMAndSaveToPath() for extrace bin to = "

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw v0

    .line 205
    .end local v4    # "appLocalFilePath":Ljava/lang/String;
    :cond_5
    const-string v4, "/vendor/etc/mddb/"

    invoke-direct {p0, v4}, Lcom/mediatek/mdml/PlainDataDecoder;->SearchLayoutFile(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    move-object p1, v4

    if-eqz v4, :cond_b

    .line 207
    nop

    .line 213
    .end local v2    # "sdkVersion":I
    .end local v3    # "propertyName":Ljava/lang/String;
    :goto_1
    iget-object v2, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v2, v2, Lcom/mediatek/mdml/InfoDat;->otaInfo:Lcom/mediatek/mdml/CommonMsgInfo;

    invoke-virtual {v2}, Lcom/mediatek/mdml/CommonMsgInfo;->clear()V

    .line 214
    iget-object v2, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v2, v2, Lcom/mediatek/mdml/InfoDat;->msgInfo:Lcom/mediatek/mdml/CommonMsgInfo;

    invoke-virtual {v2}, Lcom/mediatek/mdml/CommonMsgInfo;->clear()V

    .line 215
    iget-object v2, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v2, v2, Lcom/mediatek/mdml/InfoDat;->globalID:Lcom/mediatek/mdml/GlobalID;

    invoke-virtual {v2}, Lcom/mediatek/mdml/GlobalID;->clear()V

    .line 216
    iget-object v2, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v2, v2, Lcom/mediatek/mdml/InfoDat;->simInfo:Lcom/mediatek/mdml/SimInfo;

    invoke-virtual {v2}, Lcom/mediatek/mdml/SimInfo;->clear()V

    .line 217
    new-instance v2, Ljava/io/FileReader;

    invoke-direct {v2, p1}, Ljava/io/FileReader;-><init>(Ljava/lang/String;)V

    .line 218
    .local v2, "fr":Ljava/io/FileReader;
    new-instance v3, Ljava/io/BufferedReader;

    invoke-direct {v3, v2}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V

    .line 219
    .local v3, "br":Ljava/io/BufferedReader;
    :goto_2
    invoke-virtual {v3}, Ljava/io/BufferedReader;->ready()Z

    move-result v4

    if-eqz v4, :cond_a

    .line 220
    invoke-virtual {v3}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v4

    .line 221
    .local v4, "line":Ljava/lang/String;
    if-nez v4, :cond_6

    .line 222
    goto :goto_2

    .line 224
    :cond_6
    invoke-virtual {v4}, Ljava/lang/String;->length()I

    move-result v5

    if-gtz v5, :cond_7

    .line 225
    goto :goto_2

    .line 227
    :cond_7
    invoke-virtual {v4, v0}, Ljava/lang/String;->charAt(I)C

    move-result v5

    const/16 v6, 0x23

    if-ne v5, v6, :cond_8

    invoke-virtual {v4, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v5

    invoke-direct {p0, v5}, Lcom/mediatek/mdml/PlainDataDecoder;->readTag(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_9

    .line 228
    :cond_8
    invoke-direct {p0, v4}, Lcom/mediatek/mdml/PlainDataDecoder;->readContent(Ljava/lang/String;)Z

    .line 230
    .end local v4    # "line":Ljava/lang/String;
    :cond_9
    goto :goto_2

    .line 231
    :cond_a
    invoke-virtual {v2}, Ljava/io/FileReader;->close()V

    .line 232
    return-void

    .line 209
    .local v2, "sdkVersion":I
    .local v3, "propertyName":Ljava/lang/String;
    :cond_b
    new-instance v0, Ljava/lang/Exception;

    const-string v1, "Can\'t find layout file in modem single bin OFF case."

    invoke-direct {v0, v1}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method private SearchLayoutFile(Ljava/lang/String;)Ljava/lang/String;
    .locals 7
    .param p1, "path"    # Ljava/lang/String;

    .line 52
    const-string v0, "MDML/PlainDataDecoder"

    const/4 v1, 0x0

    .line 53
    .local v1, "fileName":Ljava/lang/String;
    const/4 v2, 0x0

    .line 55
    .local v2, "allFiles":[Ljava/lang/String;
    const/4 v3, 0x0

    if-nez p1, :cond_0

    .line 56
    return-object v3

    .line 58
    :cond_0
    new-instance v4, Ljava/io/File;

    invoke-direct {v4, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 60
    .local v4, "folder":Ljava/io/File;
    :try_start_0
    invoke-virtual {v4}, Ljava/io/File;->list()[Ljava/lang/String;

    move-result-object v5
    :try_end_0
    .catch Ljava/lang/SecurityException; {:try_start_0 .. :try_end_0} :catch_0

    move-object v2, v5

    .line 64
    nop

    .line 65
    if-nez v2, :cond_1

    .line 66
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "is not exsist"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v5}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 67
    return-object v3

    .line 69
    :cond_1
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    array-length v5, v2

    if-ge v3, v5, :cond_4

    .line 70
    aget-object v5, v2, v3

    const-string v6, "mdm_layout_desc"

    invoke-virtual {v5, v6}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_2

    .line 71
    goto :goto_1

    .line 73
    :cond_2
    aget-object v5, v2, v3

    const-string v6, ".dat"

    invoke-virtual {v5, v6}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_3

    .line 74
    nop

    .line 69
    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 76
    :cond_3
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v6, v2, v3

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 77
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Layout file: ["

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "] was found!"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v5}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 80
    :cond_4
    array-length v5, v2

    if-ne v3, v5, :cond_5

    .line 81
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Can\'t find layout file. in "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v5}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 83
    :cond_5
    return-object v1

    .line 61
    .end local v3    # "i":I
    :catch_0
    move-exception v5

    .line 62
    .local v5, "e":Ljava/lang/SecurityException;
    const-string v6, "checkRead method denies read access to the file"

    invoke-static {v0, v6}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 63
    return-object v3
.end method

.method private commonGetMsg(Ljava/lang/Integer;Lcom/mediatek/mdml/InfoType;)Lcom/mediatek/mdml/Msg;
    .locals 2
    .param p1, "id"    # Ljava/lang/Integer;
    .param p2, "infoType"    # Lcom/mediatek/mdml/InfoType;

    .line 497
    invoke-direct {p0, p2}, Lcom/mediatek/mdml/PlainDataDecoder;->getMsgInfo(Lcom/mediatek/mdml/InfoType;)Lcom/mediatek/mdml/CommonMsgInfo;

    move-result-object v0

    .line 498
    .local v0, "msgInfo":Lcom/mediatek/mdml/CommonMsgInfo;
    if-nez v0, :cond_0

    .line 499
    const/4 v1, 0x0

    return-object v1

    .line 502
    :cond_0
    invoke-virtual {v0, p1}, Lcom/mediatek/mdml/CommonMsgInfo;->getBaseMsg(Ljava/lang/Integer;)Lcom/mediatek/mdml/BaseMsg;

    move-result-object v1

    invoke-direct {p0, v1, p2}, Lcom/mediatek/mdml/PlainDataDecoder;->setBaseMsg2Msg(Lcom/mediatek/mdml/BaseMsg;Lcom/mediatek/mdml/InfoType;)Lcom/mediatek/mdml/Msg;

    move-result-object v1

    return-object v1
.end method

.method private commonGetMsg(Ljava/lang/String;Lcom/mediatek/mdml/InfoType;)Lcom/mediatek/mdml/Msg;
    .locals 2
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "infoType"    # Lcom/mediatek/mdml/InfoType;

    .line 506
    invoke-direct {p0, p2}, Lcom/mediatek/mdml/PlainDataDecoder;->getMsgInfo(Lcom/mediatek/mdml/InfoType;)Lcom/mediatek/mdml/CommonMsgInfo;

    move-result-object v0

    .line 507
    .local v0, "msgInfo":Lcom/mediatek/mdml/CommonMsgInfo;
    if-nez v0, :cond_0

    .line 508
    const/4 v1, 0x0

    return-object v1

    .line 511
    :cond_0
    invoke-virtual {v0, p1}, Lcom/mediatek/mdml/CommonMsgInfo;->getBaseMsg(Ljava/lang/String;)Lcom/mediatek/mdml/BaseMsg;

    move-result-object v1

    invoke-direct {p0, v1, p2}, Lcom/mediatek/mdml/PlainDataDecoder;->setBaseMsg2Msg(Lcom/mediatek/mdml/BaseMsg;Lcom/mediatek/mdml/InfoType;)Lcom/mediatek/mdml/Msg;

    move-result-object v1

    return-object v1
.end method

.method private commonGetMsg([BILcom/mediatek/mdml/InfoType;)Lcom/mediatek/mdml/Msg;
    .locals 2
    .param p1, "buffer"    # [B
    .param p2, "startPos"    # I
    .param p3, "infoType"    # Lcom/mediatek/mdml/InfoType;

    .line 476
    sget-object v0, Lcom/mediatek/mdml/PlainDataDecoder$1;->$SwitchMap$com$mediatek$mdml$InfoType:[I

    invoke-virtual {p3}, Lcom/mediatek/mdml/InfoType;->ordinal()I

    move-result v1

    aget v0, v0, v1

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    .line 484
    const/4 v0, 0x0

    return-object v0

    .line 481
    :cond_0
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->msgInfo:Lcom/mediatek/mdml/CommonMsgInfo;

    iget-object v0, v0, Lcom/mediatek/mdml/CommonMsgInfo;->msgIdOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    .line 482
    .local v0, "msgIdOffsetAndSize":Lcom/mediatek/mdml/OffsetAndSize;
    goto :goto_0

    .line 478
    .end local v0    # "msgIdOffsetAndSize":Lcom/mediatek/mdml/OffsetAndSize;
    :cond_1
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->otaInfo:Lcom/mediatek/mdml/CommonMsgInfo;

    iget-object v0, v0, Lcom/mediatek/mdml/CommonMsgInfo;->msgIdOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    .line 479
    .restart local v0    # "msgIdOffsetAndSize":Lcom/mediatek/mdml/OffsetAndSize;
    nop

    .line 487
    :goto_0
    invoke-static {p1, p2, v0}, Lcom/mediatek/mdml/Util;->getIntValue([BILcom/mediatek/mdml/OffsetAndSize;)I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-direct {p0, v1, p3}, Lcom/mediatek/mdml/PlainDataDecoder;->commonGetMsg(Ljava/lang/Integer;Lcom/mediatek/mdml/InfoType;)Lcom/mediatek/mdml/Msg;

    move-result-object v1

    .line 488
    .local v1, "m":Lcom/mediatek/mdml/Msg;
    if-eqz v1, :cond_2

    .line 489
    iput-object p1, v1, Lcom/mediatek/mdml/Msg;->buf:[B

    .line 490
    iput p2, v1, Lcom/mediatek/mdml/Msg;->startPos:I

    .line 493
    :cond_2
    return-object v1
.end method

.method private connectMDMHIDL()V
    .locals 4

    .line 136
    const-string v0, "MDML/PlainDataDecoder"

    const/4 v1, 0x0

    :try_start_0
    const-string v2, "connectMDMHIDL"

    invoke-static {v0, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 137
    const/4 v2, 0x1

    invoke-static {v2}, Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;->getService(Z)Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;

    move-result-object v2

    iput-object v2, p0, Lcom/mediatek/mdml/PlainDataDecoder;->mdmConnection:Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;

    .line 138
    const-string v2, "connectMDMHIDL done!"

    invoke-static {v0, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/util/NoSuchElementException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 143
    :catch_0
    move-exception v2

    .line 144
    .local v2, "e":Ljava/util/NoSuchElementException;
    invoke-virtual {v2}, Ljava/util/NoSuchElementException;->printStackTrace()V

    .line 145
    const-string v3, "IMDMonitorService NoSuchElementException ..."

    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 146
    iput-object v1, p0, Lcom/mediatek/mdml/PlainDataDecoder;->mdmConnection:Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;

    goto :goto_1

    .line 139
    .end local v2    # "e":Ljava/util/NoSuchElementException;
    :catch_1
    move-exception v2

    .line 140
    .local v2, "e":Landroid/os/RemoteException;
    invoke-virtual {v2}, Landroid/os/RemoteException;->printStackTrace()V

    .line 141
    const-string v3, "IMDMonitorService RemoteException ..."

    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 142
    iput-object v1, p0, Lcom/mediatek/mdml/PlainDataDecoder;->mdmConnection:Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;

    .line 147
    .end local v2    # "e":Landroid/os/RemoteException;
    :goto_0
    nop

    .line 148
    :goto_1
    return-void
.end method

.method public static getIcdJsonPath()Ljava/lang/String;
    .locals 1

    .line 557
    const-string v0, "/vendor/etc/AllICD.json"

    return-object v0
.end method

.method public static declared-synchronized getInstance(Ljava/lang/String;)Lcom/mediatek/mdml/PlainDataDecoder;
    .locals 3
    .param p0, "fileName"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const-class v0, Lcom/mediatek/mdml/PlainDataDecoder;

    monitor-enter v0

    .line 245
    :try_start_0
    const-string v1, "MDML/PlainDataDecoder"

    const-string v2, "Old PlainDataDecoder getInstance function, it was phase out. Please use new interface of PlainDataDecoder getInstance."

    invoke-static {v1, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 246
    new-instance v1, Ljava/lang/Exception;

    const-string v2, "Old PlainDataDecoder getInstance function, it was phase out. Please use new interface of PlainDataDecoder getInstance."

    invoke-direct {v1, v2}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 244
    .end local p0    # "fileName":Ljava/lang/String;
    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static declared-synchronized getInstance(Ljava/lang/String;Landroid/content/Context;)Lcom/mediatek/mdml/PlainDataDecoder;
    .locals 4
    .param p0, "fileName"    # Ljava/lang/String;
    .param p1, "context"    # Landroid/content/Context;

    const-class v0, Lcom/mediatek/mdml/PlainDataDecoder;

    monitor-enter v0

    .line 259
    :try_start_0
    const-string v1, "null"

    .line 261
    .local v1, "filepath":Ljava/lang/String;
    if-eqz p0, :cond_0

    .line 262
    move-object v1, p0

    .line 265
    :cond_0
    sget-object v2, Lcom/mediatek/mdml/PlainDataDecoder;->sPathDecoderMap:Ljava/util/HashMap;

    invoke-virtual {v2, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/mdml/PlainDataDecoder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 266
    .local v2, "plainDataDecoder":Lcom/mediatek/mdml/PlainDataDecoder;
    if-nez v2, :cond_1

    .line 268
    :try_start_1
    new-instance v3, Lcom/mediatek/mdml/PlainDataDecoder;

    invoke-direct {v3, p0, p1}, Lcom/mediatek/mdml/PlainDataDecoder;-><init>(Ljava/lang/String;Landroid/content/Context;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-object v2, v3

    .line 271
    goto :goto_0

    .line 269
    :catch_0
    move-exception v3

    .line 270
    .local v3, "e":Ljava/lang/Exception;
    :try_start_2
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 272
    .end local v3    # "e":Ljava/lang/Exception;
    :goto_0
    sget-object v3, Lcom/mediatek/mdml/PlainDataDecoder;->sPathDecoderMap:Ljava/util/HashMap;

    invoke-virtual {v3, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 274
    :cond_1
    monitor-exit v0

    return-object v2

    .line 258
    .end local v1    # "filepath":Ljava/lang/String;
    .end local v2    # "plainDataDecoder":Lcom/mediatek/mdml/PlainDataDecoder;
    .end local p0    # "fileName":Ljava/lang/String;
    .end local p1    # "context":Landroid/content/Context;
    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private getLayoutFileDataFromMDMAndSaveToPath(Ljava/lang/String;)I
    .locals 9
    .param p1, "path"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 86
    invoke-direct {p0}, Lcom/mediatek/mdml/PlainDataDecoder;->connectMDMHIDL()V

    .line 87
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->mdmConnection:Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;

    if-nez v0, :cond_0

    .line 89
    const/4 v0, -0x1

    return v0

    .line 92
    :cond_0
    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "mdm_layout_desc.dat"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 93
    .local v0, "file":Ljava/io/File;
    new-instance v1, Ljava/io/FileOutputStream;

    invoke-direct {v1, v0}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    .line 97
    .local v1, "os":Ljava/io/FileOutputStream;
    const/4 v2, 0x0

    .line 98
    .local v2, "resultList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Byte;>;"
    const/4 v3, 0x0

    .line 99
    .local v3, "start_pos":I
    const/high16 v4, 0x10000

    .line 100
    .local v4, "buffer_size":I
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "getModemBinData request buffer is "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    div-int/lit16 v6, v4, 0x400

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, "K"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v6, "MDML/PlainDataDecoder"

    invoke-static {v6, v5}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 103
    :cond_1
    :try_start_0
    iget-object v5, p0, Lcom/mediatek/mdml/PlainDataDecoder;->mdmConnection:Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;

    const/4 v7, 0x0

    invoke-interface {v5, v7, v3, v4}, Lvendor/mediatek/hardware/mdmonitor/V1_0/IMDMonitorService;->getModemBinData(III)Ljava/util/ArrayList;

    move-result-object v5

    move-object v2, v5

    .line 104
    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v5
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v5, :cond_2

    .line 105
    nop

    .line 128
    invoke-virtual {v1}, Ljava/io/FileOutputStream;->close()V

    .line 129
    const-string v5, "getModemBinData request buffer end"

    invoke-static {v6, v5}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 130
    return v7

    .line 108
    :cond_2
    :try_start_1
    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v5

    new-array v5, v5, [B

    .line 109
    .local v5, "result":[B
    const/4 v7, 0x0

    .local v7, "i":I
    :goto_0
    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v8

    if-ge v7, v8, :cond_3

    .line 110
    invoke-virtual {v2, v7}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/Byte;

    invoke-virtual {v8}, Ljava/lang/Byte;->byteValue()B

    move-result v8

    aput-byte v8, v5, v7

    .line 109
    add-int/lit8 v7, v7, 0x1

    goto :goto_0

    .line 113
    .end local v7    # "i":I
    :cond_3
    invoke-virtual {v1, v5}, Ljava/io/FileOutputStream;->write([B)V
    :try_end_1
    .catch Landroid/os/RemoteException; {:try_start_1 .. :try_end_1} :catch_0

    .line 119
    .end local v5    # "result":[B
    nop

    .line 121
    add-int/2addr v3, v4

    .line 122
    const/high16 v5, 0x3200000

    if-le v3, v5, :cond_1

    .line 123
    const-string v5, "getModemBinData size out of 50 MB, somthing wrong!"

    invoke-static {v6, v5}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 124
    invoke-virtual {v1}, Ljava/io/FileOutputStream;->close()V

    .line 125
    const/4 v5, -0x3

    return v5

    .line 114
    :catch_0
    move-exception v5

    .line 115
    .local v5, "e":Landroid/os/RemoteException;
    invoke-virtual {v5}, Landroid/os/RemoteException;->printStackTrace()V

    .line 116
    const-string v7, "getModemBinData HIDL call failed with RemoteException exception!"

    invoke-static {v6, v7}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 117
    invoke-virtual {v1}, Ljava/io/FileOutputStream;->close()V

    .line 118
    const/4 v6, -0x2

    return v6
.end method

.method private getMsgInfo(Lcom/mediatek/mdml/InfoType;)Lcom/mediatek/mdml/CommonMsgInfo;
    .locals 2
    .param p1, "infoType"    # Lcom/mediatek/mdml/InfoType;

    .line 546
    sget-object v0, Lcom/mediatek/mdml/PlainDataDecoder$1;->$SwitchMap$com$mediatek$mdml$InfoType:[I

    invoke-virtual {p1}, Lcom/mediatek/mdml/InfoType;->ordinal()I

    move-result v1

    aget v0, v0, v1

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    .line 552
    const/4 v0, 0x0

    return-object v0

    .line 550
    :cond_0
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->msgInfo:Lcom/mediatek/mdml/CommonMsgInfo;

    return-object v0

    .line 548
    :cond_1
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->otaInfo:Lcom/mediatek/mdml/CommonMsgInfo;

    return-object v0
.end method

.method private readContent(Ljava/lang/String;)Z
    .locals 4
    .param p1, "line"    # Ljava/lang/String;

    .line 449
    iget v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->verMain:I

    const/4 v1, 0x0

    const-string v2, "MDML/PlainDataDecoder"

    const/4 v3, 0x2

    if-gt v0, v3, :cond_1

    const/4 v3, 0x1

    if-ne v0, v3, :cond_0

    iget v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->verSub:I

    if-lez v0, :cond_0

    goto :goto_0

    .line 454
    :cond_0
    sget-object v0, Lcom/mediatek/mdml/PlainDataDecoder$1;->$SwitchMap$com$mediatek$mdml$InfoType:[I

    iget-object v3, p0, Lcom/mediatek/mdml/PlainDataDecoder;->currentBlock:Lcom/mediatek/mdml/InfoType;

    invoke-virtual {v3}, Lcom/mediatek/mdml/InfoType;->ordinal()I

    move-result v3

    aget v0, v0, v3

    packed-switch v0, :pswitch_data_0

    .line 469
    const-string v0, "Skip line content in un-know section!"

    invoke-static {v2, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 470
    return v1

    .line 467
    :pswitch_0
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->simInfo:Lcom/mediatek/mdml/SimInfo;

    invoke-virtual {v0, p1}, Lcom/mediatek/mdml/SimInfo;->readLine(Ljava/lang/String;)Z

    move-result v0

    return v0

    .line 465
    :pswitch_1
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->globalID:Lcom/mediatek/mdml/GlobalID;

    invoke-virtual {v0, p1}, Lcom/mediatek/mdml/GlobalID;->readLine(Ljava/lang/String;)Z

    move-result v0

    return v0

    .line 463
    :pswitch_2
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->msgInfo:Lcom/mediatek/mdml/CommonMsgInfo;

    invoke-virtual {v0, p1}, Lcom/mediatek/mdml/CommonMsgInfo;->readLine(Ljava/lang/String;)Z

    move-result v0

    return v0

    .line 459
    :pswitch_3
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->otaInfo:Lcom/mediatek/mdml/CommonMsgInfo;

    invoke-virtual {v0, p1}, Lcom/mediatek/mdml/CommonMsgInfo;->readLine(Ljava/lang/String;)Z

    move-result v0

    return v0

    .line 456
    :pswitch_4
    const-string v0, "Skip line content in un-support section!"

    invoke-static {v2, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 457
    return v1

    .line 450
    :cond_1
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Version not support! Main ="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/mdml/PlainDataDecoder;->verMain:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ", SubVersion = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/mdml/PlainDataDecoder;->verSub:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 451
    return v1

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_2
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method private readTag(Ljava/lang/String;)Z
    .locals 3
    .param p1, "tag"    # Ljava/lang/String;

    .line 408
    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p1

    .line 409
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->msgInfo:Lcom/mediatek/mdml/CommonMsgInfo;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/mdml/CommonMsgInfo;->setMsgHasPeerBufferHeader(Z)V

    .line 410
    const-string v0, "OTA_INFO"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    .line 411
    sget-object v0, Lcom/mediatek/mdml/InfoType;->OTA_INFO:Lcom/mediatek/mdml/InfoType;

    iput-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->currentBlock:Lcom/mediatek/mdml/InfoType;

    goto/16 :goto_0

    .line 412
    :cond_0
    const-string v0, "GLOBAL_ID"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 413
    sget-object v0, Lcom/mediatek/mdml/InfoType;->GLOBAL_ID:Lcom/mediatek/mdml/InfoType;

    iput-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->currentBlock:Lcom/mediatek/mdml/InfoType;

    goto :goto_0

    .line 414
    :cond_1
    const-string v0, "MSG_INFO"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 415
    sget-object v0, Lcom/mediatek/mdml/InfoType;->MSG_INFO:Lcom/mediatek/mdml/InfoType;

    iput-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->currentBlock:Lcom/mediatek/mdml/InfoType;

    goto :goto_0

    .line 416
    :cond_2
    const-string v0, "PEER_INFO"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 417
    sget-object v0, Lcom/mediatek/mdml/InfoType;->PEER_INFO:Lcom/mediatek/mdml/InfoType;

    iput-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->currentBlock:Lcom/mediatek/mdml/InfoType;

    .line 418
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->msgInfo:Lcom/mediatek/mdml/CommonMsgInfo;

    invoke-virtual {v0, v1}, Lcom/mediatek/mdml/CommonMsgInfo;->setMsgHasPeerBufferHeader(Z)V

    goto :goto_0

    .line 419
    :cond_3
    const-string v0, "PEER_INFO_WITHOUT_HEADER"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 420
    sget-object v0, Lcom/mediatek/mdml/InfoType;->PEER_INFO_WITHOUT_HEADER:Lcom/mediatek/mdml/InfoType;

    iput-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->currentBlock:Lcom/mediatek/mdml/InfoType;

    goto :goto_0

    .line 421
    :cond_4
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->simInfo:Lcom/mediatek/mdml/SimInfo;

    invoke-virtual {v0, p1}, Lcom/mediatek/mdml/SimInfo;->readTag(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 422
    sget-object v0, Lcom/mediatek/mdml/InfoType;->SIM_INFO:Lcom/mediatek/mdml/InfoType;

    iput-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->currentBlock:Lcom/mediatek/mdml/InfoType;

    goto :goto_0

    .line 424
    :cond_5
    invoke-direct {p0, p1}, Lcom/mediatek/mdml/PlainDataDecoder;->readVersion(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_6

    .line 425
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Un-Support section block name ["

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "]!"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "MDML/PlainDataDecoder"

    invoke-static {v2, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 426
    sget-object v0, Lcom/mediatek/mdml/InfoType;->NONE:Lcom/mediatek/mdml/InfoType;

    iput-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->currentBlock:Lcom/mediatek/mdml/InfoType;

    .line 430
    :cond_6
    :goto_0
    return v1
.end method

.method private readVersion(Ljava/lang/String;)Z
    .locals 5
    .param p1, "tag"    # Ljava/lang/String;

    .line 434
    const-string v0, "##### VER"

    .line 435
    .local v0, "verPrefix":Ljava/lang/String;
    const-string v1, "######"

    invoke-virtual {p1, v1}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v1

    .line 436
    .local v1, "lastIdx":I
    const-string v2, "##### VER"

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v3

    const/4 v4, 0x0

    invoke-virtual {p1, v4, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    if-lez v1, :cond_0

    .line 437
    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v2

    invoke-virtual {p1, v2, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p1

    .line 438
    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p1

    .line 439
    const-string v2, "\\."

    invoke-virtual {p1, v2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v2

    .line 440
    .local v2, "v":[Ljava/lang/String;
    aget-object v3, v2, v4

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    iput v3, p0, Lcom/mediatek/mdml/PlainDataDecoder;->verMain:I

    .line 441
    const/4 v3, 0x1

    aget-object v4, v2, v3

    invoke-static {v4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v4

    iput v4, p0, Lcom/mediatek/mdml/PlainDataDecoder;->verSub:I

    .line 442
    return v3

    .line 445
    .end local v2    # "v":[Ljava/lang/String;
    :cond_0
    return v4
.end method

.method private setBaseMsg2Msg(Lcom/mediatek/mdml/BaseMsg;Lcom/mediatek/mdml/InfoType;)Lcom/mediatek/mdml/Msg;
    .locals 4
    .param p1, "baseMsg"    # Lcom/mediatek/mdml/BaseMsg;
    .param p2, "type"    # Lcom/mediatek/mdml/InfoType;

    .line 515
    const/4 v0, 0x0

    if-nez p1, :cond_0

    .line 516
    return-object v0

    .line 519
    :cond_0
    new-instance v1, Lcom/mediatek/mdml/Msg;

    invoke-direct {v1}, Lcom/mediatek/mdml/Msg;-><init>()V

    .line 520
    .local v1, "msg":Lcom/mediatek/mdml/Msg;
    iput-object p1, v1, Lcom/mediatek/mdml/Msg;->baseMsg:Lcom/mediatek/mdml/BaseMsg;

    .line 521
    iput-object p2, v1, Lcom/mediatek/mdml/Msg;->type:Lcom/mediatek/mdml/InfoType;

    .line 522
    sget-object v2, Lcom/mediatek/mdml/PlainDataDecoder$1;->$SwitchMap$com$mediatek$mdml$InfoType:[I

    invoke-virtual {p2}, Lcom/mediatek/mdml/InfoType;->ordinal()I

    move-result v3

    aget v2, v2, v3

    const/4 v3, 0x2

    if-eq v2, v3, :cond_2

    const/4 v3, 0x3

    if-eq v2, v3, :cond_1

    .line 536
    iput-object v0, v1, Lcom/mediatek/mdml/Msg;->simIdxOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    .line 537
    iput-object v0, v1, Lcom/mediatek/mdml/Msg;->peerBufSizeOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    .line 538
    iput-object v0, v1, Lcom/mediatek/mdml/Msg;->globalID:Lcom/mediatek/mdml/GlobalID;

    .line 539
    iput-object v0, v1, Lcom/mediatek/mdml/Msg;->simInfo:Lcom/mediatek/mdml/SimInfo;

    goto :goto_0

    .line 530
    :cond_1
    iget-object v2, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v2, v2, Lcom/mediatek/mdml/InfoDat;->msgInfo:Lcom/mediatek/mdml/CommonMsgInfo;

    iget-object v2, v2, Lcom/mediatek/mdml/CommonMsgInfo;->simIdxOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    iput-object v2, v1, Lcom/mediatek/mdml/Msg;->simIdxOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    .line 531
    iget-object v2, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v2, v2, Lcom/mediatek/mdml/InfoDat;->msgInfo:Lcom/mediatek/mdml/CommonMsgInfo;

    iget-object v2, v2, Lcom/mediatek/mdml/CommonMsgInfo;->peerBufSizeOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    iput-object v2, v1, Lcom/mediatek/mdml/Msg;->peerBufSizeOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    .line 532
    iput-object v0, v1, Lcom/mediatek/mdml/Msg;->globalID:Lcom/mediatek/mdml/GlobalID;

    .line 533
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->simInfo:Lcom/mediatek/mdml/SimInfo;

    iput-object v0, v1, Lcom/mediatek/mdml/Msg;->simInfo:Lcom/mediatek/mdml/SimInfo;

    .line 534
    goto :goto_0

    .line 524
    :cond_2
    iget-object v2, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v2, v2, Lcom/mediatek/mdml/InfoDat;->otaInfo:Lcom/mediatek/mdml/CommonMsgInfo;

    iget-object v2, v2, Lcom/mediatek/mdml/CommonMsgInfo;->simIdxOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    iput-object v2, v1, Lcom/mediatek/mdml/Msg;->simIdxOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    .line 525
    iput-object v0, v1, Lcom/mediatek/mdml/Msg;->peerBufSizeOffsetAndSize:Lcom/mediatek/mdml/OffsetAndSize;

    .line 526
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->globalID:Lcom/mediatek/mdml/GlobalID;

    iput-object v0, v1, Lcom/mediatek/mdml/Msg;->globalID:Lcom/mediatek/mdml/GlobalID;

    .line 527
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->simInfo:Lcom/mediatek/mdml/SimInfo;

    iput-object v0, v1, Lcom/mediatek/mdml/Msg;->simInfo:Lcom/mediatek/mdml/SimInfo;

    .line 528
    nop

    .line 542
    :goto_0
    return-object v1
.end method


# virtual methods
.method public globalId_getList()[Ljava/lang/String;
    .locals 1

    .line 380
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->globalID:Lcom/mediatek/mdml/GlobalID;

    invoke-virtual {v0}, Lcom/mediatek/mdml/GlobalID;->getList()[Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final globalId_getName(Ljava/lang/Integer;)Ljava/lang/String;
    .locals 1
    .param p1, "id"    # Ljava/lang/Integer;

    .line 404
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->globalID:Lcom/mediatek/mdml/GlobalID;

    invoke-virtual {v0, p1}, Lcom/mediatek/mdml/GlobalID;->getName(Ljava/lang/Integer;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final globalId_getValue(Ljava/lang/String;)Ljava/lang/Integer;
    .locals 1
    .param p1, "name"    # Ljava/lang/String;

    .line 392
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->globalID:Lcom/mediatek/mdml/GlobalID;

    invoke-virtual {v0, p1}, Lcom/mediatek/mdml/GlobalID;->getValue(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    return-object v0
.end method

.method public final msgInfo_getMsg([BI)Lcom/mediatek/mdml/Msg;
    .locals 1
    .param p1, "buffer"    # [B
    .param p2, "startPos"    # I

    .line 336
    sget-object v0, Lcom/mediatek/mdml/InfoType;->MSG_INFO:Lcom/mediatek/mdml/InfoType;

    invoke-direct {p0, p1, p2, v0}, Lcom/mediatek/mdml/PlainDataDecoder;->commonGetMsg([BILcom/mediatek/mdml/InfoType;)Lcom/mediatek/mdml/Msg;

    move-result-object v0

    return-object v0
.end method

.method public final msgInfo_getMsgID(Ljava/lang/String;)Ljava/lang/Integer;
    .locals 1
    .param p1, "msgName"    # Ljava/lang/String;

    .line 358
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->msgInfo:Lcom/mediatek/mdml/CommonMsgInfo;

    invoke-virtual {v0, p1}, Lcom/mediatek/mdml/CommonMsgInfo;->getMsgID(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    return-object v0
.end method

.method public msgInfo_getMsgList()[Ljava/lang/String;
    .locals 1

    .line 346
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->msgInfo:Lcom/mediatek/mdml/CommonMsgInfo;

    invoke-virtual {v0}, Lcom/mediatek/mdml/CommonMsgInfo;->getMsgList()[Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final msgInfo_getMsgName(Ljava/lang/Integer;)Ljava/lang/String;
    .locals 1
    .param p1, "id"    # Ljava/lang/Integer;

    .line 370
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->msgInfo:Lcom/mediatek/mdml/CommonMsgInfo;

    invoke-virtual {v0, p1}, Lcom/mediatek/mdml/CommonMsgInfo;->getMsgName(Ljava/lang/Integer;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final otaInfo_getMsg([BI)Lcom/mediatek/mdml/Msg;
    .locals 1
    .param p1, "buffer"    # [B
    .param p2, "startPos"    # I

    .line 288
    sget-object v0, Lcom/mediatek/mdml/InfoType;->OTA_INFO:Lcom/mediatek/mdml/InfoType;

    invoke-direct {p0, p1, p2, v0}, Lcom/mediatek/mdml/PlainDataDecoder;->commonGetMsg([BILcom/mediatek/mdml/InfoType;)Lcom/mediatek/mdml/Msg;

    move-result-object v0

    return-object v0
.end method

.method public final otaInfo_getMsgID(Ljava/lang/String;)Ljava/lang/Integer;
    .locals 1
    .param p1, "msgName"    # Ljava/lang/String;

    .line 310
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->otaInfo:Lcom/mediatek/mdml/CommonMsgInfo;

    invoke-virtual {v0, p1}, Lcom/mediatek/mdml/CommonMsgInfo;->getMsgID(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    return-object v0
.end method

.method public otaInfo_getMsgList()[Ljava/lang/String;
    .locals 1

    .line 298
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->otaInfo:Lcom/mediatek/mdml/CommonMsgInfo;

    invoke-virtual {v0}, Lcom/mediatek/mdml/CommonMsgInfo;->getMsgList()[Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final otaInfo_getMsgName(Ljava/lang/Integer;)Ljava/lang/String;
    .locals 1
    .param p1, "id"    # Ljava/lang/Integer;

    .line 322
    iget-object v0, p0, Lcom/mediatek/mdml/PlainDataDecoder;->infoDat:Lcom/mediatek/mdml/InfoDat;

    iget-object v0, v0, Lcom/mediatek/mdml/InfoDat;->otaInfo:Lcom/mediatek/mdml/CommonMsgInfo;

    invoke-virtual {v0, p1}, Lcom/mediatek/mdml/CommonMsgInfo;->getMsgName(Ljava/lang/Integer;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
