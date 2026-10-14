.class public Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;
.super Ljava/lang/Object;
.source "NetworkInfoUrcParser.java"


# static fields
.field private static final ADVANCED_EM:Ljava/lang/Boolean;

.field private static final ALIGN_MENT_ENABLE:Ljava/lang/Boolean;

.field private static final AMR_SUPPORT_ENABLE:Ljava/lang/Boolean;

.field private static final DATA_FORMAT:I = 0x10

.field private static final DATA_OFFSET_2:I = 0x2

.field private static final DATA_OFFSET_4:I = 0x4

.field private static final DATA_OFFSET_6:I = 0x6

.field private static final DATA_OFFSET_8:I = 0x8

.field private static final FWPNC_LAI_INFO_ENABLE:Ljava/lang/Boolean;

.field private static final GPRS_MODE_ENABLE:Ljava/lang/Boolean;

.field private static final IS_MOLY:Ljava/lang/Boolean;

.field private static final MAX_DATA_PER_LINE:I = 0x7

.field private static final TAG:Ljava/lang/String; = "NetworkInfo/UrcParser"

.field private static final TYPE_ALIGNMENT:I = 0x8

.field private static final TYPE_FLOAT:I = 0x7

.field private static final TYPE_INT16:I = 0x4

.field private static final TYPE_INT32:I = 0x5

.field private static final TYPE_INT8:I = 0x3

.field private static final TYPE_LONG:I = 0x6

.field private static final TYPE_STRING:I = 0x9

.field private static final TYPE_UINT16:I = 0x1

.field private static final TYPE_UINT32:I = 0x2

.field private static final TYPE_UINT8:I

.field private static final UMTS_R8:Ljava/lang/Boolean;

.field private static final WISDOM_EM:Ljava/lang/Boolean;


# instance fields
.field private mColumn:I

.field private mContext:Landroid/content/Context;

.field private mLabels:[Ljava/lang/String;

.field private mOffset:I

.field private mRawString:Ljava/lang/String;

.field private mRawValues:[Ljava/lang/String;

.field private mResult:Ljava/lang/StringBuilder;

.field private mType:I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 65
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->ALIGN_MENT_ENABLE:Ljava/lang/Boolean;

    .line 66
    sput-object v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->GPRS_MODE_ENABLE:Ljava/lang/Boolean;

    .line 67
    sput-object v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->AMR_SUPPORT_ENABLE:Ljava/lang/Boolean;

    .line 68
    const/4 v1, 0x0

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    sput-object v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->FWPNC_LAI_INFO_ENABLE:Ljava/lang/Boolean;

    .line 69
    sput-object v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->UMTS_R8:Ljava/lang/Boolean;

    .line 70
    sput-object v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->WISDOM_EM:Ljava/lang/Boolean;

    .line 71
    sput-object v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->ADVANCED_EM:Ljava/lang/Boolean;

    .line 72
    sget-boolean v0, Lcom/mediatek/engineermode/networkinfo/Content;->IS_MOLY:Z

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->IS_MOLY:Ljava/lang/Boolean;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 0
    .param p1, "context"    # Landroid/content/Context;

    .line 87
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 88
    iput-object p1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mContext:Landroid/content/Context;

    .line 89
    return-void
.end method

.method private decodeMcc(I)Ljava/lang/String;
    .locals 2
    .param p1, "value"    # I

    .line 1765
    add-int/lit8 p1, p1, 0x6f

    .line 1766
    rem-int/lit8 v0, p1, 0xa

    if-nez v0, :cond_0

    .line 1767
    add-int/lit8 p1, p1, -0xa

    .line 1769
    :cond_0
    div-int/lit8 v0, p1, 0xa

    rem-int/lit8 v0, v0, 0xa

    if-nez v0, :cond_1

    .line 1770
    add-int/lit8 p1, p1, -0x64

    .line 1772
    :cond_1
    div-int/lit8 v0, p1, 0x64

    rem-int/lit8 v0, v0, 0xa

    if-nez v0, :cond_2

    .line 1773
    add-int/lit16 p1, p1, -0x3e8

    .line 1775
    :cond_2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "000"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private decodeMnc(I)Ljava/lang/String;
    .locals 2
    .param p1, "value"    # I

    .line 1779
    add-int/lit8 p1, p1, 0xb

    .line 1780
    rem-int/lit8 v0, p1, 0xa

    if-nez v0, :cond_0

    .line 1781
    add-int/lit8 p1, p1, -0xa

    .line 1783
    :cond_0
    div-int/lit8 v0, p1, 0xa

    rem-int/lit8 v0, v0, 0xa

    if-nez v0, :cond_1

    .line 1784
    add-int/lit8 p1, p1, -0x64

    .line 1786
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "00"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private getValueFrom2Byte(Ljava/lang/String;IZ)Ljava/lang/String;
    .locals 6
    .param p1, "data"    # Ljava/lang/String;
    .param p2, "start"    # I
    .param p3, "signed"    # Z

    .line 1199
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    add-int/lit8 v1, p2, 0x4

    if-ge v0, v1, :cond_0

    .line 1200
    const-string v0, "0"

    return-object v0

    .line 1203
    :cond_0
    add-int/lit8 v0, p2, 0x2

    :try_start_0
    invoke-virtual {p1, p2, v0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    .line 1204
    .local v0, "low":Ljava/lang/String;
    add-int/lit8 v1, p2, 0x2

    add-int/lit8 v2, p2, 0x4

    invoke-virtual {p1, v1, v2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v1

    .line 1205
    .local v1, "high":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 1206
    .local v2, "reverse":Ljava/lang/String;
    const/16 v3, 0x10

    if-eqz p3, :cond_1

    .line 1207
    invoke-static {v2, v3}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    .line 1208
    .local v3, "i":I
    int-to-short v4, v3

    invoke-static {v4}, Ljava/lang/Short;->valueOf(S)Ljava/lang/Short;

    move-result-object v4

    .line 1209
    .local v4, "s":Ljava/lang/Short;
    invoke-virtual {v4}, Ljava/lang/Short;->toString()Ljava/lang/String;

    move-result-object v5

    return-object v5

    .line 1211
    .end local v3    # "i":I
    .end local v4    # "s":Ljava/lang/Short;
    :cond_1
    invoke-static {v2, v3}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Integer;->toString()Ljava/lang/String;

    move-result-object v3
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v3

    .line 1213
    .end local v0    # "low":Ljava/lang/String;
    .end local v1    # "high":Ljava/lang/String;
    .end local v2    # "reverse":Ljava/lang/String;
    :catch_0
    move-exception v0

    .line 1214
    .local v0, "e":Ljava/lang/NumberFormatException;
    const-string v1, "Error."

    return-object v1
.end method

.method private getValueFrom4Byte(Ljava/lang/String;IZ)Ljava/lang/String;
    .locals 9
    .param p1, "data"    # Ljava/lang/String;
    .param p2, "start"    # I
    .param p3, "signed"    # Z

    .line 1228
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    add-int/lit8 v1, p2, 0x8

    if-ge v0, v1, :cond_0

    .line 1229
    const-string v0, "0"

    return-object v0

    .line 1232
    :cond_0
    add-int/lit8 v0, p2, 0x2

    :try_start_0
    invoke-virtual {p1, p2, v0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    .line 1233
    .local v0, "byte1":Ljava/lang/String;
    add-int/lit8 v1, p2, 0x2

    add-int/lit8 v2, p2, 0x4

    invoke-virtual {p1, v1, v2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v1

    .line 1234
    .local v1, "byte2":Ljava/lang/String;
    add-int/lit8 v2, p2, 0x4

    add-int/lit8 v3, p2, 0x6

    invoke-virtual {p1, v2, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v2

    .line 1235
    .local v2, "byte3":Ljava/lang/String;
    add-int/lit8 v3, p2, 0x6

    add-int/lit8 v4, p2, 0x8

    invoke-virtual {p1, v3, v4}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v3

    .line 1236
    .local v3, "byte4":Ljava/lang/String;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 1237
    .local v4, "reverse":Ljava/lang/String;
    const/16 v5, 0x10

    if-eqz p3, :cond_1

    .line 1238
    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(Ljava/lang/String;I)Ljava/lang/Long;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Long;->longValue()J

    move-result-wide v5

    .line 1239
    .local v5, "lg":J
    long-to-int v7, v5

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    .line 1240
    .local v7, "i":Ljava/lang/Integer;
    invoke-virtual {v7}, Ljava/lang/Integer;->toString()Ljava/lang/String;

    move-result-object v8

    return-object v8

    .line 1242
    .end local v5    # "lg":J
    .end local v7    # "i":Ljava/lang/Integer;
    :cond_1
    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(Ljava/lang/String;I)Ljava/lang/Long;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Long;->toString()Ljava/lang/String;

    move-result-object v5
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v5

    .line 1244
    .end local v0    # "byte1":Ljava/lang/String;
    .end local v1    # "byte2":Ljava/lang/String;
    .end local v2    # "byte3":Ljava/lang/String;
    .end local v3    # "byte4":Ljava/lang/String;
    .end local v4    # "reverse":Ljava/lang/String;
    :catch_0
    move-exception v0

    .line 1245
    .local v0, "e":Ljava/lang/NumberFormatException;
    const-string v1, "Error."

    return-object v1
.end method

.method private getValueFromByte(Ljava/lang/String;IZ)Ljava/lang/String;
    .locals 4
    .param p1, "data"    # Ljava/lang/String;
    .param p2, "start"    # I
    .param p3, "signed"    # Z

    .line 1172
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    add-int/lit8 v1, p2, 0x2

    if-ge v0, v1, :cond_0

    .line 1173
    const-string v0, "0"

    return-object v0

    .line 1176
    :cond_0
    add-int/lit8 v0, p2, 0x2

    :try_start_0
    invoke-virtual {p1, p2, v0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    .line 1177
    .local v0, "sub":Ljava/lang/String;
    const/16 v1, 0x10

    if-eqz p3, :cond_1

    .line 1178
    invoke-static {v0, v1}, Ljava/lang/Short;->valueOf(Ljava/lang/String;I)Ljava/lang/Short;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Short;->shortValue()S

    move-result v1

    .line 1179
    .local v1, "s":S
    int-to-byte v2, v1

    invoke-static {v2}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object v2

    .line 1180
    .local v2, "b":Ljava/lang/Byte;
    invoke-virtual {v2}, Ljava/lang/Byte;->toString()Ljava/lang/String;

    move-result-object v3

    return-object v3

    .line 1182
    .end local v1    # "s":S
    .end local v2    # "b":Ljava/lang/Byte;
    :cond_1
    invoke-static {v0, v1}, Ljava/lang/Short;->valueOf(Ljava/lang/String;I)Ljava/lang/Short;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Short;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    .line 1184
    .end local v0    # "sub":Ljava/lang/String;
    :catch_0
    move-exception v0

    .line 1185
    .local v0, "e":Ljava/lang/NumberFormatException;
    const-string v1, "Error."

    return-object v1
.end method

.method private nextValue()Ljava/lang/String;
    .locals 26

    .line 1601
    move-object/from16 v1, p0

    iget v2, v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1602
    .local v2, "index":I
    iget v0, v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    const/4 v3, 0x1

    add-int/2addr v0, v3

    iput v0, v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1603
    iget-object v0, v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawValues:[Ljava/lang/String;

    if-eqz v0, :cond_d

    array-length v4, v0

    if-gt v4, v2, :cond_0

    goto/16 :goto_1

    .line 1607
    :cond_0
    aget-object v0, v0, v2

    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v4

    .line 1608
    .local v4, "rawValue":Ljava/lang/String;
    const/4 v5, 0x0

    .line 1610
    .local v5, "value":I
    :try_start_0
    invoke-static {v4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 1613
    .end local v5    # "value":I
    .local v0, "value":I
    nop

    .line 1615
    const/4 v5, 0x0

    .line 1616
    .local v5, "array":[Ljava/lang/String;
    iget v6, v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mType:I

    const/high16 v7, 0x41000000    # 8.0f

    const/high16 v8, 0x43000000    # 128.0f

    const/16 v9, 0xf

    const/4 v10, 0x5

    const/4 v11, 0x6

    const/4 v12, 0x4

    const/high16 v13, -0x40000000    # -2.0f

    const-string v14, "%.1f"

    const-string v15, "%.2f"

    const/16 v16, 0x0

    packed-switch v6, :pswitch_data_0

    :pswitch_0
    goto/16 :goto_0

    .line 1709
    :pswitch_1
    packed-switch v2, :pswitch_data_1

    .line 1743
    goto/16 :goto_0

    .line 1739
    :pswitch_2
    const-string v3, "RUP_INACTIVE"

    const-string v6, "RUP_IDLE"

    const-string v7, "RUP_CONNECTED"

    const-string v8, "RUP_IRAT_MEASUREMENT"

    const-string v9, "RUP_INVALID"

    filled-new-array {v3, v6, v7, v8, v9}, [Ljava/lang/String;

    move-result-object v3

    move-object v5, v3

    .line 1741
    goto/16 :goto_0

    .line 1736
    :pswitch_3
    const-string v3, "CSP_INACTIVE_STATE"

    const-string v6, "CSP_CLOSING_STATE"

    const-string v7, "CSP_OPEN_STATE"

    filled-new-array {v3, v6, v7}, [Ljava/lang/String;

    move-result-object v3

    move-object v5, v3

    .line 1737
    goto/16 :goto_0

    .line 1733
    :pswitch_4
    const-string v3, "OMP_INACTIVE_ST"

    const-string v6, "OMP_ACTIVE_ST"

    const-string v7, "OMP_STATE_MAX"

    filled-new-array {v3, v6, v7}, [Ljava/lang/String;

    move-result-object v3

    move-object v5, v3

    .line 1734
    goto/16 :goto_0

    .line 1728
    :pswitch_5
    const-string v6, "IDP_INACTIVE_ST"

    const-string v7, "IDP_MONITOR_ST"

    const-string v8, "IDP_SLEEP_ST"

    const-string v9, "IDP_CONN_SETUP_ST"

    const-string v10, "IDP_FREEZE_PENDING_ST"

    const-string v11, "IDP_FREEZE_ST"

    const-string v12, "IDP_CONN_FROZEN_ST"

    const-string v13, "IDP_STATE_MAX"

    filled-new-array/range {v6 .. v13}, [Ljava/lang/String;

    move-result-object v3

    move-object v5, v3

    .line 1731
    goto/16 :goto_0

    .line 1723
    :pswitch_6
    const-string v6, "INSP_INACTIVE_STATE"

    const-string v7, "INSP_NETWORK_DET_STATE"

    const-string v8, "INSP_PILOT_ACQ_STATE"

    const-string v9, "INSP_SYNC_STATE"

    const-string v10, "INSP_TIMING_CHANGE_STATE"

    const-string v11, "INSP_WFR_1XASSTST_STATE"

    filled-new-array/range {v6 .. v11}, [Ljava/lang/String;

    move-result-object v3

    move-object v5, v3

    .line 1726
    goto/16 :goto_0

    .line 1719
    :pswitch_7
    const-string v3, "ALMP_INIT_STATE"

    const-string v6, "ALMP_IDLE_STATE"

    const-string v7, "ALMP_CONN_SETUP_STATE"

    const-string v8, "ALMP_CONNECTED_STATE"

    filled-new-array {v3, v6, v7, v8}, [Ljava/lang/String;

    move-result-object v3

    move-object v5, v3

    .line 1721
    goto/16 :goto_0

    .line 1715
    :pswitch_8
    const-string v6, "AT_PWROFF"

    const-string v7, "AT_INACTIVE"

    const-string v8, "AT_PILOTACQ"

    const-string v9, "AT_SYNC"

    const-string v10, "AT_IDLE"

    const-string v11, "AT_ACCESS"

    const-string v12, "AT_CONNECTED"

    filled-new-array/range {v6 .. v12}, [Ljava/lang/String;

    move-result-object v3

    move-object v5, v3

    .line 1717
    goto/16 :goto_0

    .line 1711
    :pswitch_9
    const-string v3, "NEW_SESSION"

    const-string v6, "ALIVE_SESSION"

    const-string v7, "PRIOR_SESSION"

    const-string v8, "OPENED_SESSION"

    filled-new-array {v3, v6, v7, v8}, [Ljava/lang/String;

    move-result-object v3

    move-object v5, v3

    .line 1713
    goto/16 :goto_0

    .line 1700
    :pswitch_a
    if-eq v2, v12, :cond_1

    if-eq v2, v10, :cond_1

    .line 1705
    goto/16 :goto_0

    .line 1703
    :cond_1
    new-array v3, v3, [Ljava/lang/Object;

    int-to-float v6, v0

    div-float/2addr v6, v8

    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    aput-object v6, v3, v16

    invoke-static {v15, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    return-object v3

    .line 1692
    :pswitch_b
    if-eq v2, v3, :cond_2

    .line 1696
    goto/16 :goto_0

    .line 1694
    :cond_2
    new-array v3, v3, [Ljava/lang/Object;

    int-to-float v6, v0

    const/high16 v7, 0x42800000    # 64.0f

    div-float/2addr v6, v7

    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    aput-object v6, v3, v16

    invoke-static {v15, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    return-object v3

    .line 1687
    :pswitch_c
    iget v6, v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mColumn:I

    const/4 v8, 0x3

    if-ne v6, v8, :cond_b

    .line 1688
    new-array v3, v3, [Ljava/lang/Object;

    int-to-float v6, v0

    div-float/2addr v6, v7

    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    aput-object v6, v3, v16

    invoke-static {v15, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    return-object v3

    .line 1681
    :pswitch_d
    iget v6, v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mColumn:I

    if-ne v6, v3, :cond_b

    .line 1682
    new-array v3, v3, [Ljava/lang/Object;

    int-to-float v6, v0

    div-float/2addr v6, v7

    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    aput-object v6, v3, v16

    invoke-static {v15, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    return-object v3

    .line 1669
    :pswitch_e
    if-eq v2, v10, :cond_4

    if-eq v2, v11, :cond_4

    if-eq v2, v9, :cond_3

    const/16 v6, 0x10

    if-eq v2, v6, :cond_3

    .line 1677
    goto/16 :goto_0

    .line 1675
    :cond_3
    new-array v3, v3, [Ljava/lang/Object;

    int-to-float v6, v0

    div-float/2addr v6, v13

    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    aput-object v6, v3, v16

    invoke-static {v14, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    return-object v3

    .line 1672
    :cond_4
    new-array v3, v3, [Ljava/lang/Object;

    int-to-float v6, v0

    div-float/2addr v6, v8

    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    aput-object v6, v3, v16

    invoke-static {v15, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    return-object v3

    .line 1664
    :pswitch_f
    iget v6, v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mColumn:I

    if-ne v6, v3, :cond_b

    .line 1665
    new-array v3, v3, [Ljava/lang/Object;

    int-to-float v6, v0

    div-float/2addr v6, v13

    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    aput-object v6, v3, v16

    invoke-static {v14, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    return-object v3

    .line 1649
    :pswitch_10
    if-eq v2, v3, :cond_6

    if-eq v2, v12, :cond_5

    if-eq v2, v11, :cond_6

    const/16 v3, 0x9

    if-eq v2, v3, :cond_5

    .line 1660
    goto/16 :goto_0

    .line 1655
    :cond_5
    if-ne v0, v9, :cond_b

    .line 1656
    const-string v3, "Infinite"

    return-object v3

    .line 1652
    :cond_6
    new-array v3, v3, [Ljava/lang/Object;

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v3, v16

    const-string v6, "0x%x"

    invoke-static {v6, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    return-object v3

    .line 1618
    :pswitch_11
    if-eq v2, v3, :cond_a

    const/4 v6, 0x2

    const-string v7, "FALSE"

    const-string v8, "TRUE"

    if-eq v2, v6, :cond_9

    const/16 v6, 0x13

    if-eq v2, v6, :cond_8

    const/16 v6, 0x14

    if-eq v2, v6, :cond_8

    const/16 v3, 0x16

    if-eq v2, v3, :cond_7

    packed-switch v2, :pswitch_data_2

    .line 1645
    goto :goto_0

    .line 1638
    :pswitch_12
    invoke-direct {v1, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->decodeMnc(I)Ljava/lang/String;

    move-result-object v3

    return-object v3

    .line 1636
    :pswitch_13
    invoke-direct {v1, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->decodeMcc(I)Ljava/lang/String;

    move-result-object v3

    return-object v3

    .line 1633
    :pswitch_14
    filled-new-array {v7, v8}, [Ljava/lang/String;

    move-result-object v3

    move-object v5, v3

    .line 1634
    goto :goto_0

    .line 1643
    :cond_7
    div-int/lit8 v3, v0, 0xa

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    return-object v3

    .line 1641
    :cond_8
    new-array v3, v3, [Ljava/lang/Object;

    int-to-float v6, v0

    div-float/2addr v6, v13

    invoke-static {v6}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v6

    aput-object v6, v3, v16

    invoke-static {v14, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    return-object v3

    .line 1630
    :cond_9
    const-string v3, "Unknown"

    filled-new-array {v8, v7, v3}, [Ljava/lang/String;

    move-result-object v3

    move-object v5, v3

    .line 1631
    goto :goto_0

    .line 1620
    :cond_a
    const-string v6, "CP_DISABLED"

    const-string v7, "CP_SYS_DETERMINATION"

    const-string v8, "CP_PILOT_ACQUISITION"

    const-string v9, "CP_SYNC_ACQUISITION"

    const-string v10, "CP_TIMING_CHANGE"

    const-string v11, "CP_IDLE"

    const-string v12, "CP_UPDATE_OHD_INFO"

    const-string v13, "CP_PAGE_RESPONSE"

    const-string v14, "CP_ORD_MSG_RESP"

    const-string v15, "CP_ORIGINATION"

    const-string v16, "CP_REGISTRATION"

    const-string v17, "CP_MSG_TRANSMISSION"

    const-string v18, "CP_TC_INIT"

    const-string v19, "CP_TC_WAIT_ORDER"

    const-string v20, "CP_TC_WAIT_ANSWER"

    const-string v21, "CP_TC_CONVERSATION"

    const-string v22, "CP_TC_RELEASE"

    const-string v23, "CP_NST"

    const-string v24, "CP_FROZEN"

    const-string v25, "CP_TC_FROZEN"

    filled-new-array/range {v6 .. v25}, [Ljava/lang/String;

    move-result-object v3

    move-object v5, v3

    .line 1628
    nop

    .line 1750
    :cond_b
    :goto_0
    if-eqz v5, :cond_c

    if-ltz v0, :cond_c

    array-length v3, v5

    if-ge v0, v3, :cond_c

    .line 1751
    aget-object v3, v5, v0

    return-object v3

    .line 1753
    :cond_c
    return-object v4

    .line 1611
    .end local v0    # "value":I
    .local v5, "value":I
    :catch_0
    move-exception v0

    move-object v3, v0

    move-object v0, v3

    .line 1612
    .local v0, "e":Ljava/lang/NumberFormatException;
    return-object v4

    .line 1604
    .end local v0    # "e":Ljava/lang/NumberFormatException;
    .end local v4    # "rawValue":Ljava/lang/String;
    .end local v5    # "value":I
    :cond_d
    :goto_1
    const-string v0, ""

    return-object v0

    :pswitch_data_0
    .packed-switch 0x12d
        :pswitch_11
        :pswitch_10
        :pswitch_0
        :pswitch_f
        :pswitch_e
        :pswitch_d
        :pswitch_c
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_1
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x1
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
    .end packed-switch

    :pswitch_data_2
    .packed-switch 0xe
        :pswitch_14
        :pswitch_13
        :pswitch_12
    .end packed-switch
.end method

.method private oneBlockFrom2Byte(Ljava/lang/String;Ljava/lang/String;IZI)Ljava/lang/String;
    .locals 4
    .param p1, "label"    # Ljava/lang/String;
    .param p2, "data"    # Ljava/lang/String;
    .param p3, "start"    # I
    .param p4, "signed"    # Z
    .param p5, "dataLength"    # I

    .line 1289
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, p1}, Ljava/lang/String;-><init>(Ljava/lang/String;)V

    .line 1290
    .local v0, "block":Ljava/lang/String;
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    const-string v2, "\n"

    if-ge v1, p5, :cond_2

    .line 1291
    const/4 v3, 0x7

    if-le p5, v3, :cond_0

    rem-int/lit8 v3, v1, 0x7

    if-nez v3, :cond_0

    .line 1292
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1294
    :cond_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-direct {p0, p2, p3, p4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getValueFrom2Byte(Ljava/lang/String;IZ)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1295
    add-int/lit8 p3, p3, 0x4

    .line 1296
    add-int/lit8 v2, p5, -0x1

    if-eq v1, v2, :cond_1

    .line 1297
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ", "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1290
    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 1300
    .end local v1    # "i":I
    :cond_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method private oneBlockFrom4Byte(Ljava/lang/String;Ljava/lang/String;IZI)Ljava/lang/String;
    .locals 4
    .param p1, "label"    # Ljava/lang/String;
    .param p2, "data"    # Ljava/lang/String;
    .param p3, "start"    # I
    .param p4, "signed"    # Z
    .param p5, "dataLength"    # I

    .line 1316
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, p1}, Ljava/lang/String;-><init>(Ljava/lang/String;)V

    .line 1317
    .local v0, "block":Ljava/lang/String;
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    const-string v2, "\n"

    if-ge v1, p5, :cond_2

    .line 1318
    const/4 v3, 0x7

    if-le p5, v3, :cond_0

    rem-int/lit8 v3, v1, 0x7

    if-nez v3, :cond_0

    .line 1319
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1321
    :cond_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-direct {p0, p2, p3, p4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getValueFrom4Byte(Ljava/lang/String;IZ)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1322
    add-int/lit8 p3, p3, 0x8

    .line 1323
    add-int/lit8 v2, p5, -0x1

    if-eq v1, v2, :cond_1

    .line 1324
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ", "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1317
    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 1327
    .end local v1    # "i":I
    :cond_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method private oneBlockFromByte(Ljava/lang/String;Ljava/lang/String;IZI)Ljava/lang/String;
    .locals 4
    .param p1, "label"    # Ljava/lang/String;
    .param p2, "data"    # Ljava/lang/String;
    .param p3, "start"    # I
    .param p4, "signed"    # Z
    .param p5, "dataLength"    # I

    .line 1262
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, p1}, Ljava/lang/String;-><init>(Ljava/lang/String;)V

    .line 1263
    .local v0, "block":Ljava/lang/String;
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    const-string v2, "\n"

    if-ge v1, p5, :cond_2

    .line 1264
    const/4 v3, 0x7

    if-le p5, v3, :cond_0

    rem-int/lit8 v3, v1, 0x7

    if-nez v3, :cond_0

    .line 1265
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1267
    :cond_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-direct {p0, p2, p3, p4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getValueFromByte(Ljava/lang/String;IZ)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1268
    add-int/lit8 p3, p3, 0x2

    .line 1269
    add-int/lit8 v2, p5, -0x1

    if-eq v1, v2, :cond_1

    .line 1270
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ", "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1263
    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 1273
    .end local v1    # "i":I
    :cond_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method private parse1xRttServing()Ljava/util/ArrayList;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "[",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1590
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 1591
    .local v0, "ret":Ljava/util/ArrayList;, "Ljava/util/ArrayList<[Ljava/lang/String;>;"
    const-string v1, "Active Set"

    filled-new-array {v1}, [Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1592
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseCellInfo()Ljava/util/ArrayList;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->addAll(Ljava/util/Collection;)Z

    .line 1593
    const-string v1, "Candicate Set"

    filled-new-array {v1}, [Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1594
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseCellInfo()Ljava/util/ArrayList;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->addAll(Ljava/util/Collection;)Z

    .line 1595
    const-string v1, "Neighbor Set"

    filled-new-array {v1}, [Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1596
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseCellInfo()Ljava/util/ArrayList;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->addAll(Ljava/util/Collection;)Z

    .line 1597
    return-object v0
.end method

.method private parseCellInfo()Ljava/util/ArrayList;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "[",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1568
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 1569
    .local v0, "ret":Ljava/util/ArrayList;, "Ljava/util/ArrayList<[Ljava/lang/String;>;"
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mLabels:[Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1570
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mLabels:[Ljava/lang/String;

    array-length v1, v1

    .line 1571
    .local v1, "columns":I
    const/4 v2, 0x0

    .line 1572
    .local v2, "rows":I
    const/4 v3, -0x1

    iput v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mColumn:I

    .line 1574
    :try_start_0
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->nextValue()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    move v2, v3

    .line 1577
    nop

    .line 1578
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    if-ge v3, v2, :cond_1

    .line 1579
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    .line 1580
    .local v4, "entry":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    const/4 v5, 0x0

    .local v5, "j":I
    :goto_1
    if-ge v5, v1, :cond_0

    .line 1581
    iput v5, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mColumn:I

    .line 1582
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->nextValue()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1580
    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    .line 1584
    .end local v5    # "j":I
    :cond_0
    invoke-virtual {v4}, Ljava/util/ArrayList;->size()I

    move-result v5

    new-array v5, v5, [Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/util/ArrayList;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v5

    check-cast v5, [Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1578
    .end local v4    # "entry":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 1586
    .end local v3    # "i":I
    :cond_1
    return-object v0

    .line 1575
    :catch_0
    move-exception v3

    .line 1576
    .local v3, "e":Ljava/lang/NumberFormatException;
    return-object v0
.end method

.method private parseCommonCdmaInfo()Ljava/util/ArrayList;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "[",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1560
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 1561
    .local v0, "ret":Ljava/util/ArrayList;, "Ljava/util/ArrayList<[Ljava/lang/String;>;"
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    iget-object v2, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mLabels:[Ljava/lang/String;

    array-length v3, v2

    if-ge v1, v3, :cond_0

    .line 1562
    const/4 v3, 0x2

    new-array v3, v3, [Ljava/lang/String;

    const/4 v4, 0x0

    aget-object v2, v2, v1

    aput-object v2, v3, v4

    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->nextValue()Ljava/lang/String;

    move-result-object v2

    const/4 v4, 0x1

    aput-object v2, v3, v4

    invoke-virtual {v0, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1561
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 1564
    .end local v1    # "i":I
    :cond_0
    return-object v0
.end method

.method private parseElement(ILjava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p1, "type"    # I
    .param p2, "label"    # Ljava/lang/String;

    .line 1159
    const/4 v0, 0x1

    invoke-direct {p0, p1, p2, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private parseElement(ILjava/lang/String;I)Ljava/lang/String;
    .locals 10
    .param p1, "type"    # I
    .param p2, "label"    # Ljava/lang/String;
    .param p3, "count"    # I

    .line 1066
    const-string v0, ""

    .line 1067
    .local v0, "value":Ljava/lang/String;
    const-string v1, "NetworkInfo/UrcParser"

    const-string v2, "\n"

    const/4 v3, 0x1

    packed-switch p1, :pswitch_data_0

    goto/16 :goto_3

    .line 1133
    :pswitch_0
    move-object v0, p2

    .line 1134
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    if-ge v1, p3, :cond_0

    .line 1135
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    iget v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    const/4 v5, 0x0

    invoke-direct {p0, v3, v4, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getValueFromByte(Ljava/lang/String;IZ)Ljava/lang/String;

    move-result-object v3

    .line 1136
    .local v3, "str":Ljava/lang/String;
    iget v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v4, v4, 0x2

    iput v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1138
    :try_start_0
    invoke-static {v3}, Ljava/lang/Short;->valueOf(Ljava/lang/String;)Ljava/lang/Short;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Short;->shortValue()S

    move-result v4

    .line 1139
    .local v4, "s":S
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    int-to-char v6, v4

    invoke-static {v6}, Ljava/lang/Character;->toString(C)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, v5

    .line 1142
    .end local v4    # "s":S
    nop

    .line 1134
    .end local v3    # "str":Ljava/lang/String;
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 1140
    .restart local v3    # "str":Ljava/lang/String;
    :catch_0
    move-exception v4

    .line 1144
    .end local v1    # "i":I
    .end local v3    # "str":Ljava/lang/String;
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1145
    goto/16 :goto_3

    .line 1147
    :pswitch_1
    sget-object v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->ALIGN_MENT_ENABLE:Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_7

    .line 1148
    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v1, v1, 0x7

    and-int/lit8 v1, v1, -0x8

    iput v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    goto/16 :goto_3

    .line 1119
    :pswitch_2
    sget-object v4, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->ALIGN_MENT_ENABLE:Ljava/lang/Boolean;

    invoke-virtual {v4}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v4

    if-eqz v4, :cond_1

    .line 1120
    iget v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v4, v4, 0x7

    and-int/lit8 v4, v4, -0x8

    iput v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1122
    :cond_1
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    iget v5, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    invoke-direct {p0, v4, v5, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getValueFrom4Byte(Ljava/lang/String;IZ)Ljava/lang/String;

    move-result-object v3

    .line 1123
    .local v3, "strEcno":Ljava/lang/String;
    const/4 v4, 0x0

    .line 1125
    .local v4, "ecno":F
    :try_start_1
    invoke-static {v3}, Ljava/lang/Float;->valueOf(Ljava/lang/String;)Ljava/lang/Float;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Float;->floatValue()F

    move-result v1
    :try_end_1
    .catch Ljava/lang/NumberFormatException; {:try_start_1 .. :try_end_1} :catch_1

    const/high16 v5, 0x45800000    # 4096.0f

    div-float v4, v1, v5

    .line 1128
    goto :goto_1

    .line 1126
    :catch_1
    move-exception v5

    .line 1127
    .local v5, "e":Ljava/lang/NumberFormatException;
    const-string v6, "ecno = Long.valueOf(strEcno)/4096 exp."

    invoke-static {v1, v6}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 1129
    .end local v5    # "e":Ljava/lang/NumberFormatException;
    :goto_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1130
    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v1, v1, 0x8

    iput v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1131
    goto/16 :goto_3

    .line 1105
    .end local v3    # "strEcno":Ljava/lang/String;
    .end local v4    # "ecno":F
    :pswitch_3
    sget-object v4, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->ALIGN_MENT_ENABLE:Ljava/lang/Boolean;

    invoke-virtual {v4}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v4

    if-eqz v4, :cond_2

    .line 1106
    iget v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v4, v4, 0x7

    and-int/lit8 v4, v4, -0x8

    iput v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1108
    :cond_2
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    iget v5, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    invoke-direct {p0, v4, v5, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getValueFrom4Byte(Ljava/lang/String;IZ)Ljava/lang/String;

    move-result-object v3

    .line 1109
    .local v3, "strRscp":Ljava/lang/String;
    const-wide/16 v4, 0x0

    .line 1111
    .local v4, "rscp":J
    :try_start_2
    invoke-static {v3}, Ljava/lang/Long;->valueOf(Ljava/lang/String;)Ljava/lang/Long;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Long;->longValue()J

    move-result-wide v6

    const-wide/16 v8, 0x1000

    div-long/2addr v6, v8
    :try_end_2
    .catch Ljava/lang/NumberFormatException; {:try_start_2 .. :try_end_2} :catch_2

    move-wide v4, v6

    .line 1114
    goto :goto_2

    .line 1112
    :catch_2
    move-exception v6

    .line 1113
    .local v6, "e":Ljava/lang/NumberFormatException;
    const-string v7, "rscp = Long.valueOf(strRscp)/4096 exp."

    invoke-static {v1, v7}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 1115
    .end local v6    # "e":Ljava/lang/NumberFormatException;
    :goto_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1116
    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v1, v1, 0x8

    iput v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1117
    goto/16 :goto_3

    .line 1098
    .end local v3    # "strRscp":Ljava/lang/String;
    .end local v4    # "rscp":J
    :pswitch_4
    sget-object v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->ALIGN_MENT_ENABLE:Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_3

    .line 1099
    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v1, v1, 0x7

    and-int/lit8 v1, v1, -0x8

    iput v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1101
    :cond_3
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    iget v5, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    const/4 v6, 0x1

    move-object v2, p0

    move-object v3, p2

    move v7, p3

    invoke-direct/range {v2 .. v7}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->oneBlockFrom4Byte(Ljava/lang/String;Ljava/lang/String;IZI)Ljava/lang/String;

    move-result-object v0

    .line 1102
    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    mul-int/lit8 v2, p3, 0x8

    add-int/2addr v1, v2

    iput v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1103
    goto/16 :goto_3

    .line 1091
    :pswitch_5
    sget-object v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->ALIGN_MENT_ENABLE:Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_4

    .line 1092
    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v1, v1, 0x3

    and-int/lit8 v1, v1, -0x4

    iput v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1094
    :cond_4
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    iget v5, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    const/4 v6, 0x1

    move-object v2, p0

    move-object v3, p2

    move v7, p3

    invoke-direct/range {v2 .. v7}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->oneBlockFrom2Byte(Ljava/lang/String;Ljava/lang/String;IZI)Ljava/lang/String;

    move-result-object v0

    .line 1095
    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    mul-int/lit8 v2, p3, 0x4

    add-int/2addr v1, v2

    iput v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1096
    goto/16 :goto_3

    .line 1087
    :pswitch_6
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    iget v5, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    const/4 v6, 0x1

    move-object v2, p0

    move-object v3, p2

    move v7, p3

    invoke-direct/range {v2 .. v7}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->oneBlockFromByte(Ljava/lang/String;Ljava/lang/String;IZI)Ljava/lang/String;

    move-result-object v0

    .line 1088
    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    mul-int/lit8 v2, p3, 0x2

    add-int/2addr v1, v2

    iput v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1089
    goto :goto_3

    .line 1080
    :pswitch_7
    sget-object v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->ALIGN_MENT_ENABLE:Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_5

    .line 1081
    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v1, v1, 0x7

    and-int/lit8 v1, v1, -0x8

    iput v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1083
    :cond_5
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    iget v5, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    const/4 v6, 0x0

    move-object v2, p0

    move-object v3, p2

    move v7, p3

    invoke-direct/range {v2 .. v7}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->oneBlockFrom4Byte(Ljava/lang/String;Ljava/lang/String;IZI)Ljava/lang/String;

    move-result-object v0

    .line 1084
    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    mul-int/lit8 v2, p3, 0x8

    add-int/2addr v1, v2

    iput v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1085
    goto :goto_3

    .line 1073
    :pswitch_8
    sget-object v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->ALIGN_MENT_ENABLE:Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_6

    .line 1074
    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v1, v1, 0x3

    and-int/lit8 v1, v1, -0x4

    iput v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1076
    :cond_6
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    iget v5, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    const/4 v6, 0x0

    move-object v2, p0

    move-object v3, p2

    move v7, p3

    invoke-direct/range {v2 .. v7}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->oneBlockFrom2Byte(Ljava/lang/String;Ljava/lang/String;IZI)Ljava/lang/String;

    move-result-object v0

    .line 1077
    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    mul-int/lit8 v2, p3, 0x4

    add-int/2addr v1, v2

    iput v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1078
    goto :goto_3

    .line 1069
    :pswitch_9
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    iget v5, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    const/4 v6, 0x0

    move-object v2, p0

    move-object v3, p2

    move v7, p3

    invoke-direct/range {v2 .. v7}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->oneBlockFromByte(Ljava/lang/String;Ljava/lang/String;IZI)Ljava/lang/String;

    move-result-object v0

    .line 1070
    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    mul-int/lit8 v2, p3, 0x2

    add-int/2addr v1, v2

    iput v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1071
    nop

    .line 1154
    :cond_7
    :goto_3
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1155
    return-object v0

    nop

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method private readIntegerFrom2Byte()I
    .locals 6

    .line 1469
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v2, v1, 0x4

    const/4 v3, 0x0

    if-ge v0, v2, :cond_0

    .line 1470
    add-int/lit8 v1, v1, 0x4

    iput v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1471
    return v3

    .line 1474
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    add-int/lit8 v2, v1, 0x2

    invoke-virtual {v0, v1, v2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    .line 1475
    .local v0, "low":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    iget v2, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v2, v2, 0x2

    iget v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v4, v4, 0x4

    invoke-virtual {v1, v2, v4}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v1

    .line 1476
    .local v1, "high":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 1477
    .local v2, "reverse":Ljava/lang/String;
    iget v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v4, v4, 0x4

    iput v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1478
    const/16 v4, 0x10

    invoke-static {v2, v4}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    .line 1479
    .local v4, "i":I
    int-to-short v5, v4

    invoke-static {v5}, Ljava/lang/Short;->valueOf(S)Ljava/lang/Short;

    move-result-object v5

    .line 1480
    .local v5, "s":Ljava/lang/Short;
    invoke-virtual {v5}, Ljava/lang/Short;->shortValue()S

    move-result v3
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    return v3

    .line 1481
    .end local v0    # "low":Ljava/lang/String;
    .end local v1    # "high":Ljava/lang/String;
    .end local v2    # "reverse":Ljava/lang/String;
    .end local v4    # "i":I
    .end local v5    # "s":Ljava/lang/Short;
    :catch_0
    move-exception v0

    .line 1482
    .local v0, "e":Ljava/lang/NumberFormatException;
    return v3
.end method

.method private readIntegerFromByte()I
    .locals 3

    .line 1050
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v2, v1, 0x2

    if-ge v0, v2, :cond_0

    .line 1051
    add-int/lit8 v1, v1, 0x2

    iput v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1052
    const/4 v0, 0x0

    return v0

    .line 1054
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    add-int/lit8 v2, v1, 0x2

    invoke-virtual {v0, v1, v2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    .line 1055
    .local v0, "str":Ljava/lang/String;
    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v1, v1, 0x2

    iput v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1056
    const/4 v1, 0x0

    .line 1058
    .local v1, "ret":I
    const/16 v2, 0x10

    :try_start_0
    invoke-static {v0, v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;I)I

    move-result v2
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    move v1, v2

    .line 1061
    goto :goto_0

    .line 1059
    :catch_0
    move-exception v2

    .line 1060
    .local v2, "e":Ljava/lang/NumberFormatException;
    const/4 v1, 0x0

    .line 1062
    .end local v2    # "e":Ljava/lang/NumberFormatException;
    :goto_0
    return v1
.end method


# virtual methods
.method public get3GCsceEMServCellSStatusInd(Z)Ljava/lang/String;
    .locals 11
    .param p1, "isTdd"    # Z

    .line 629
    sget-object v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->IS_MOLY:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-nez v0, :cond_0

    .line 630
    const-string v0, "ref_count:"

    invoke-direct {p0, v2, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 631
    const-string v0, "msg_len"

    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 633
    :cond_0
    const-string v0, "cell_idx: "

    invoke-direct {p0, v2, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 634
    const-string v0, "uarfacn_DL: "

    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 635
    const-string v0, "psc: "

    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 636
    const-string v0, "is_s_criteria_satisfied: "

    invoke-direct {p0, v2, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 637
    const/4 v0, 0x3

    const-string v3, "qQualmin: "

    invoke-direct {p0, v0, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 638
    const-string v3, "qRxlevmin: "

    invoke-direct {p0, v0, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 639
    const/4 v3, 0x5

    const-string v4, "srxlev: "

    invoke-direct {p0, v3, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 640
    const-string v4, "spual: "

    invoke-direct {p0, v3, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 641
    const/4 v4, 0x6

    const-string v5, "rscp: "

    invoke-direct {p0, v4, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 642
    if-nez p1, :cond_1

    .line 643
    const/4 v5, 0x7

    const-string v6, "ec_no: "

    invoke-direct {p0, v5, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 645
    :cond_1
    const-string v5, "cycle_len: "

    invoke-direct {p0, v1, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 646
    if-nez p1, :cond_2

    .line 647
    const-string v5, "quality_measure: "

    invoke-direct {p0, v2, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 649
    :cond_2
    const-string v5, "band: "

    invoke-direct {p0, v2, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 650
    const-string v5, "rssi: "

    invoke-direct {p0, v3, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 651
    const/4 v3, 0x2

    const-string v5, "cell_identity: "

    invoke-direct {p0, v3, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 652
    sget-object v5, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->UMTS_R8:Ljava/lang/Boolean;

    invoke-virtual {v5}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v5

    if-eqz v5, :cond_3

    .line 653
    const-string v5, "csg_id: "

    invoke-direct {p0, v3, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 654
    const-string v5, "apbcr_priority: "

    invoke-direct {p0, v2, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 655
    const-string v5, "sprio_search1: "

    invoke-direct {p0, v2, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 656
    const-string v5, "sprio_search2: "

    invoke-direct {p0, v2, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 657
    const-string v5, "threshserv_low: "

    invoke-direct {p0, v2, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 658
    sget-object v5, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->IS_MOLY:Ljava/lang/Boolean;

    invoke-virtual {v5}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v5

    if-eqz v5, :cond_3

    .line 659
    const-string v5, "threshserv_low2: "

    invoke-direct {p0, v2, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 662
    :cond_3
    if-nez p1, :cond_a

    .line 663
    const-string v5, "multi_plmn_count: "

    invoke-direct {p0, v2, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 664
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_0
    if-ge v5, v4, :cond_4

    .line 665
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "multi_plmn_id["

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, "].mcc: "

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-direct {p0, v2, v6, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 666
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, "].mnc: "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-direct {p0, v2, v6, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 664
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 669
    .end local v5    # "i":I
    :cond_4
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFromByte()I

    move-result v0

    .line 670
    .local v0, "lacValid":I
    if-eqz v0, :cond_5

    .line 671
    const-string v4, "lac: "

    invoke-direct {p0, v1, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    goto :goto_1

    .line 673
    :cond_5
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    const-string v5, "lac: invalid\n"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 674
    iget v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v4, v4, 0x4

    iput v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 677
    :goto_1
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFromByte()I

    move-result v4

    .line 678
    .local v4, "racValid":I
    if-eqz v4, :cond_6

    .line 679
    const-string v5, "rac: "

    invoke-direct {p0, v2, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    goto :goto_2

    .line 681
    :cond_6
    iget-object v5, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    const-string v6, "rac: invalid\n"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 682
    iget v5, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/2addr v5, v3

    iput v5, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 685
    :goto_2
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFromByte()I

    move-result v5

    .line 686
    .local v5, "uraValid":I
    if-eqz v5, :cond_9

    .line 687
    const-string v6, "num_ura_id: "

    invoke-direct {p0, v2, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 688
    const/4 v6, 0x0

    .local v6, "i":I
    :goto_3
    const/16 v7, 0x8

    if-ge v6, v7, :cond_8

    .line 689
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFromByte()I

    move-result v7

    .line 690
    .local v7, "numBits":I
    const-string v8, "]: "

    const-string v9, "uraIdentity["

    if-ne v7, v1, :cond_7

    .line 691
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-direct {p0, v2, v8}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 692
    iget v8, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/2addr v8, v3

    iput v8, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    goto :goto_4

    .line 694
    :cond_7
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-direct {p0, v2, v8, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 688
    .end local v7    # "numBits":I
    :goto_4
    add-int/lit8 v6, v6, 0x1

    goto :goto_3

    .end local v6    # "i":I
    :cond_8
    goto :goto_5

    .line 698
    :cond_9
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    const-string v2, "ura: invalid\n"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 701
    .end local v0    # "lacValid":I
    .end local v4    # "racValid":I
    .end local v5    # "uraValid":I
    :cond_a
    :goto_5
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public get3GCsceEmInfoMultiPlmn()Ljava/lang/String;
    .locals 5

    .line 708
    const/4 v0, 0x0

    const-string v1, "multi_plmn_count: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 709
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    const/4 v2, 0x6

    if-ge v1, v2, :cond_0

    .line 710
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mcc1_"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ":"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 711
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "mcc2_"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 712
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "mcc3_"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 713
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "mnc1_"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 714
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "mnc2_"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 715
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "mnc3_"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 709
    add-int/lit8 v1, v1, 0x1

    goto/16 :goto_0

    .line 717
    .end local v1    # "i":I
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public get3GGeneralInfo()Ljava/lang/String;
    .locals 5

    .line 478
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    const/4 v2, 0x0

    invoke-direct {p0, v0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getValueFromByte(Ljava/lang/String;IZ)Ljava/lang/String;

    move-result-object v0

    const-string v1, "255"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 480
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    const-string v3, "service_status:\n"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 481
    iget v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v0, v0, 0x2

    iput v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    goto :goto_0

    .line 483
    :cond_0
    const-string v0, "service_status: "

    invoke-direct {p0, v2, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 486
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    iget v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    invoke-direct {p0, v0, v3, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getValueFromByte(Ljava/lang/String;IZ)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 488
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    const-string v1, "umts_rrc_state:\n"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 489
    iget v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v0, v0, 0x2

    iput v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    goto :goto_1

    .line 491
    :cond_1
    const-string v0, "umts_rrc_state: "

    invoke-direct {p0, v2, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 494
    :goto_1
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    invoke-direct {p0, v0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getValueFrom2Byte(Ljava/lang/String;IZ)Ljava/lang/String;

    move-result-object v0

    const-string v1, "65535"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v3, 0x1

    if-eqz v0, :cond_2

    .line 496
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    const-string v4, "uarfcn_DL:\n"

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 497
    iget v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v0, v0, 0x4

    iput v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    goto :goto_2

    .line 499
    :cond_2
    const-string v0, "uarfcn_DL: "

    invoke-direct {p0, v3, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 502
    :goto_2
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    iget v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    invoke-direct {p0, v0, v4, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getValueFrom2Byte(Ljava/lang/String;IZ)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 504
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    const-string v1, "psc:\n"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 505
    iget v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v0, v0, 0x4

    iput v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    goto :goto_3

    .line 507
    :cond_3
    const-string v0, "psc: "

    invoke-direct {p0, v3, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 509
    :goto_3
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public get3GHandoverSequenceIndStuct()Ljava/lang/String;
    .locals 4

    .line 837
    const/4 v0, 0x0

    const-string v1, "service_status: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 838
    const/16 v0, 0x8

    const-string v1, ""

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 839
    const/4 v0, 0x1

    const-string v1, "[old_cell_info:-----]\nprimary_uarfcn_DL: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 840
    const-string v1, "working_uarfcn: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 841
    const-string v2, "physicalCellId: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 842
    const-string v3, "[target_cell_info:-----]\nprimary_uarfcn_DL: "

    invoke-direct {p0, v0, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 843
    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 844
    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 845
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public get3GMemeEmInfoHServCellInd()Ljava/lang/String;
    .locals 2

    .line 826
    const/4 v0, 0x1

    const-string v1, "HSDSCH_Serving_UARFCN: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 827
    const-string v1, "HSDSCH_Serving_PSC: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 828
    const-string v1, "EDCH_Serving_UARFCN: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 829
    const-string v1, "EDCH_Serving_PSC: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 830
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public get3GMemeEmInfoUmtsCellStatus()Ljava/lang/String;
    .locals 16

    .line 724
    move-object/from16 v0, p0

    const/4 v1, 0x3

    const-string v2, "tx_power: "

    invoke-direct {v0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 725
    const/4 v1, 0x0

    const-string v2, "num_cells: "

    invoke-direct {v0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 726
    const/16 v2, 0x8

    const-string v3, ""

    invoke-direct {v0, v2, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 727
    const/16 v3, 0x20

    new-array v4, v3, [Ljava/lang/String;

    .line 728
    .local v4, "t":[Ljava/lang/String;
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_0
    if-ge v5, v3, :cond_6

    .line 729
    iget-object v6, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    const-string v7, "--------------------\n"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 730
    iget-object v6, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "umts_cell_list["

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, "]:\n"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 731
    const/4 v6, 0x1

    const-string v7, "UARFCN: "

    invoke-direct {v0, v6, v7}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 732
    const-string v7, "PSC: "

    invoke-direct {v0, v6, v7}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 733
    const/4 v7, 0x5

    const-string v8, "RSCP: "

    invoke-direct {v0, v7, v8}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 734
    const-string v8, "ECNO: "

    invoke-direct {v0, v7, v8}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 735
    const-string v8, "cell_type: "

    invoke-direct {v0, v1, v8}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 736
    const-string v8, "Band: "

    invoke-direct {v0, v1, v8}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 737
    const-string v8, "RSSI: "

    invoke-direct {v0, v7, v8}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 738
    const/4 v7, 0x2

    const-string v8, "Cell_identity: "

    invoke-direct {v0, v7, v8}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 740
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFromByte()I

    move-result v8

    .line 741
    .local v8, "validity":I
    and-int/lit8 v9, v8, 0x1

    .line 742
    .local v9, "lacValid":I
    and-int/lit8 v10, v8, 0x2

    .line 743
    .local v10, "racValid":I
    and-int/lit8 v11, v8, 0x4

    .line 745
    .local v11, "uraValid":I
    const-string v12, "num_plmn_id: "

    invoke-direct {v0, v1, v12}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 746
    const/4 v12, 0x0

    .local v12, "j":I
    :goto_1
    const/4 v13, 0x6

    if-ge v12, v13, :cond_0

    .line 747
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    const-string v14, "plmn_id_list["

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v15, "].mcc: "

    invoke-virtual {v13, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-direct {v0, v6, v13}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 748
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v14, "].mnc: "

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-direct {v0, v6, v13}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 746
    add-int/lit8 v12, v12, 0x1

    goto :goto_1

    .line 751
    .end local v12    # "j":I
    :cond_0
    if-eqz v9, :cond_1

    .line 752
    const-string v12, "lac: "

    invoke-direct {v0, v6, v12}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    goto :goto_2

    .line 754
    :cond_1
    iget-object v12, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    const-string v13, "lac: invalid\n"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 755
    iget v12, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v12, v12, 0x4

    iput v12, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 758
    :goto_2
    if-eqz v10, :cond_2

    .line 759
    const-string v12, "rac: "

    invoke-direct {v0, v1, v12}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    goto :goto_3

    .line 761
    :cond_2
    iget-object v12, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    const-string v13, "rac: invalid\n"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 762
    iget v12, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/2addr v12, v7

    iput v12, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 765
    :goto_3
    if-eqz v11, :cond_5

    .line 766
    const-string v12, "num_ura_id: "

    invoke-direct {v0, v1, v12}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 767
    const/4 v12, 0x0

    .restart local v12    # "j":I
    :goto_4
    if-ge v12, v2, :cond_4

    .line 768
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFromByte()I

    move-result v13

    .line 769
    .local v13, "numBits":I
    const-string v14, "]: "

    const-string v15, "uraIdentity["

    if-ne v13, v6, :cond_3

    .line 770
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 771
    iget v2, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/2addr v2, v7

    iput v2, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    goto :goto_5

    .line 773
    :cond_3
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2, v7}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 767
    .end local v13    # "numBits":I
    :goto_5
    add-int/lit8 v12, v12, 0x1

    const/16 v2, 0x8

    goto :goto_4

    .line 776
    .end local v12    # "j":I
    :cond_4
    iget v2, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v2, v2, 0x4

    iput v2, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    goto :goto_6

    .line 778
    :cond_5
    iget-object v2, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    const-string v6, "ura: invalid\n"

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 779
    iget v2, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v2, v2, 0x36

    iput v2, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 728
    .end local v8    # "validity":I
    .end local v9    # "lacValid":I
    .end local v10    # "racValid":I
    .end local v11    # "uraValid":I
    :goto_6
    add-int/lit8 v5, v5, 0x1

    const/16 v2, 0x8

    goto/16 :goto_0

    .line 782
    .end local v5    # "i":I
    :cond_6
    iget-object v1, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method public get3GMemeEmPeriodicBlerReportInd()Ljava/lang/String;
    .locals 6

    .line 789
    const/4 v0, 0x0

    const-string v1, "num_trch: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 790
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    const/16 v2, 0x8

    if-ge v1, v2, :cond_0

    .line 791
    const-string v3, ""

    invoke-direct {p0, v2, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 792
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "TrCHId"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ":"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 793
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "TotalCRC"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v4, 0x2

    invoke-direct {p0, v4, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 794
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "BadCRC"

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v4, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 790
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 796
    .end local v1    # "i":I
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public get3GMmEmInfo()Ljava/lang/String;
    .locals 3

    .line 538
    const/4 v0, 0x0

    const-string v1, "t3212: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 539
    const-string v1, "ATT_flag: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 540
    const-string v1, "MM_reject_cause: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 541
    const-string v1, "MM_state: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 542
    const-string v1, "MCC:"

    const/4 v2, 0x3

    invoke-direct {p0, v0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 543
    const-string v1, "MNC:"

    invoke-direct {p0, v0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 544
    const-string v1, "LOC:"

    const/4 v2, 0x2

    invoke-direct {p0, v0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 545
    const-string v1, "rac: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 546
    const-string v1, "TMSI:"

    const/4 v2, 0x4

    invoke-direct {p0, v0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 547
    const-string v1, "is_t3212_running:"

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 548
    const/4 v1, 0x1

    const-string v2, "t3212_timer_value:"

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 549
    const-string v2, "t3212_passed_time:"

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 550
    const-string v1, "common_access_class: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 551
    const-string v1, "cs_access_class: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 552
    const-string v1, "ps_access_class: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 553
    iget v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v0, v0, 0x8

    iput v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 554
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public get3GSlceEmPsDataRateStatusInd()Ljava/lang/String;
    .locals 7

    .line 811
    const/4 v0, 0x0

    const-string v1, "ps_number: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 812
    const/16 v1, 0x8

    const-string v2, ""

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 813
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    if-ge v2, v1, :cond_0

    .line 814
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "RAB_ID"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ":"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {p0, v0, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 815
    const/4 v3, 0x3

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "RB_UD"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-direct {p0, v3, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 816
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "DL_rate"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v5, 0x2

    invoke-direct {p0, v5, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 817
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "UL_rate"

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {p0, v5, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 813
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 819
    .end local v2    # "i":I
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public get3GTcmMmiEmInfo()Ljava/lang/String;
    .locals 5

    .line 617
    const/4 v0, 0x0

    const-string v1, "num_of_valid_entries: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 618
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    const/4 v2, 0x3

    if-ge v1, v2, :cond_0

    .line 619
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "nsapi"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ":"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 620
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "data_speed_value"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 618
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 622
    .end local v1    # "i":I
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public get3GUl2EmAdmPoolStatusIndStruct()Ljava/lang/String;
    .locals 7

    .line 852
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    const-string v1, "[dl_adm_poll_info:-----]\n"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 853
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    const-string v1, "avg_usage_kbytes"

    const-string v2, "max_usage_kbytes"

    const/4 v3, 0x4

    const-string v4, ":"

    const/4 v5, 0x1

    if-ge v0, v3, :cond_0

    .line 854
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v5, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 855
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v5, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 853
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 857
    .end local v0    # "i":I
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    const-string v6, "[ul_adm_poll_info:-----]\n"

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 858
    const/4 v0, 0x0

    .restart local v0    # "i":I
    :goto_1
    if-ge v0, v3, :cond_1

    .line 859
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-direct {p0, v5, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 860
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-direct {p0, v5, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 858
    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    .line 862
    .end local v0    # "i":I
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public get3GUl2EmPeriodicBlerReportInd()Ljava/lang/String;
    .locals 7

    .line 911
    const/4 v0, 0x0

    const-string v1, "num_trch:"

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 912
    const/16 v1, 0x8

    const-string v2, ""

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 913
    iget-object v2, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    const-string v3, "TrCHBler:--------"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 914
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    if-ge v2, v1, :cond_0

    .line 915
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "TrCHId"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ":"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {p0, v0, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 916
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "TotalCRC"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v5, 0x2

    invoke-direct {p0, v5, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 917
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "BadCRC"

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {p0, v5, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 914
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 919
    .end local v2    # "i":I
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public get3GUl2EmPsDataRateStatusIndStruct()Ljava/lang/String;
    .locals 2

    .line 869
    const/4 v0, 0x1

    const-string v1, "rx_mac_data_rate:"

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 870
    const-string v1, "rx_pdcp_data_rate:"

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 871
    const-string v1, "tx_mac_data_rate:"

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 872
    const-string v1, "tx_pdcp_data_rate:"

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 873
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public get3GUl2EmUrlcEventStatusIndStruct()Ljava/lang/String;
    .locals 3

    .line 891
    const/4 v0, 0x3

    const-string v1, "rb_id:"

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 892
    const/4 v0, 0x0

    const-string v1, "rlc_action:"

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 893
    const-string v1, "rb_info:--- \nis_srb:"

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 894
    const-string v1, "cn_domain:"

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 895
    const-string v1, "rlc_info:--- \nrlc_mode:"

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 896
    const-string v1, "direction:"

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 897
    const/4 v1, 0x1

    const-string v2, "rlc_parameter:--- \npdu_Size:"

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 898
    const-string v2, "tx_window_size:"

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 899
    const-string v2, "rx_window_size:"

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 900
    const-string v2, "discard_mode:"

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 901
    const-string v2, "discard_value:"

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 902
    const-string v1, "flush_data_indicator:"

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 903
    const-string v1, "reset_cause:"

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 904
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public get3GUrrUmtsSrncId()Ljava/lang/String;
    .locals 2

    .line 803
    const/4 v0, 0x1

    const-string v1, "srnc: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 804
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public get3Gul2EmHsdschReconfigStatusIndStruct()Ljava/lang/String;
    .locals 4

    .line 881
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    const/16 v1, 0x8

    if-ge v0, v1, :cond_0

    .line 882
    const/4 v1, 0x0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "reconfig_info"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ":"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 881
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 884
    .end local v0    # "i":I
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getBLKInfo()Ljava/lang/String;
    .locals 4

    .line 403
    const/4 v0, 0x0

    const-string v1, "ul_coding_scheme: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 404
    const-string v1, "ul_cv: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 405
    const-string v1, "ul_tlli: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 406
    const/4 v1, 0x1

    const-string v2, "ul_bsn1: "

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 407
    sget-object v2, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->GPRS_MODE_ENABLE:Ljava/lang/Boolean;

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 408
    const-string v2, "ul_bsn2: "

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 409
    const-string v2, "ul_cps: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 410
    const-string v2, "ul_rsb: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 411
    const-string v2, "ul_spb: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 413
    :cond_0
    const-string v2, "dl_c_value_in_rx_level: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 414
    const-string v2, "dl_rxqual: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 415
    const-string v2, "dl_sign_var: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 416
    const-string v2, "dl_coding_scheme: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 417
    const-string v2, "dl_fbi: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 418
    const-string v2, "dl_bsn1: "

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 419
    sget-object v2, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->GPRS_MODE_ENABLE:Ljava/lang/Boolean;

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    const/16 v3, 0x8

    if-eqz v2, :cond_1

    .line 420
    const-string v2, "dl_bsn2: "

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 421
    const-string v1, "dl_cps: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 422
    const-string v1, "dl_gmsk_mean_bep_lev: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 423
    const-string v1, "dl_8psk_mean_bep_lev: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 424
    const-string v1, "dl_tn_mean_bep_lev:"

    invoke-direct {p0, v0, v1, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 426
    :cond_1
    const-string v1, "dl_tn_interference_lev:"

    invoke-direct {p0, v0, v1, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 427
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getCaListInfo()Ljava/lang/String;
    .locals 3

    .line 361
    const/4 v0, 0x0

    const-string v1, "valid: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 362
    const-string v1, "number_of_channels: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 363
    const/4 v0, 0x1

    const-string v1, "arfcn_list:"

    const/16 v2, 0x40

    invoke-direct {p0, v0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 364
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getCellSelInfo()Ljava/lang/String;
    .locals 2

    .line 197
    const/4 v0, 0x0

    const-string v1, "crh: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 198
    const-string v1, "ms_txpwr: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 199
    const-string v1, "rxlev_access_min: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 200
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getChDscrInfo()Ljava/lang/String;
    .locals 4

    .line 207
    const/4 v0, 0x0

    const-string v1, "channel_type: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 208
    const-string v1, "tn: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 209
    const-string v1, "tsc: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 210
    const-string v1, "hopping_flag: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 211
    const-string v1, "maio: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 212
    const-string v1, "hsn: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 213
    const-string v1, "num_of_carriers: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 214
    const/4 v1, 0x1

    const-string v2, "arfcn:"

    const/16 v3, 0x40

    invoke-direct {p0, v1, v2, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 215
    const/4 v2, 0x3

    const-string v3, "is_BCCH_arfcn_valid: "

    invoke-direct {p0, v2, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 216
    const-string v3, "BCCH_arfcn: "

    invoke-direct {p0, v1, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 217
    const-string v1, "cipher_algo: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 218
    const-string v1, "imeisv_digit: "

    const/16 v3, 0x10

    invoke-direct {p0, v0, v1, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 219
    const-string v1, "channel_mode: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 220
    sget-object v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->AMR_SUPPORT_ENABLE:Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 221
    const-string v1, "amr_valid: "

    invoke-direct {p0, v2, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 222
    const-string v1, "mr_ver: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 223
    const-string v1, "nscb: "

    invoke-direct {p0, v2, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 224
    const-string v1, "icmi: "

    invoke-direct {p0, v2, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 225
    const-string v1, "start_codec_mode: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 226
    const-string v1, "acs: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 227
    const-string v1, "threshold:"

    invoke-direct {p0, v0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 228
    const-string v1, "hysteresis:"

    invoke-direct {p0, v0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 230
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getControlMsgInfo()Ljava/lang/String;
    .locals 2

    .line 371
    const/4 v0, 0x0

    const-string v1, "msg_type: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 372
    const-string v1, "rr_cause: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 373
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getCtrlchanInfo()Ljava/lang/String;
    .locals 2

    .line 237
    const/4 v0, 0x0

    const-string v1, "mscr: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 238
    const-string v1, "att: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 239
    const-string v1, "bs_ag_blks_res: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 240
    const-string v1, "ccch_conf: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 241
    const-string v1, "cbq2: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 242
    const-string v1, "bs_pa_mfrms: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 243
    const-string v1, "t3212: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 244
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getGPRSGenInfo()Ljava/lang/String;
    .locals 2

    .line 465
    const/4 v0, 0x2

    const-string v1, "t3192: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 466
    const-string v1, "t3168: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 467
    const/4 v0, 0x0

    const-string v1, "rp: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 468
    const-string v1, "gprs_support: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 469
    const-string v1, "egprs_support: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 470
    const-string v1, "sgsn_r: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 471
    const-string v1, "pfc_support: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 472
    const-string v1, "epcr_support: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 473
    const-string v1, "bep_period: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 474
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getGmmEmInfo()Ljava/lang/String;
    .locals 4

    .line 594
    const/4 v0, 0x1

    const-string v1, "ready_timer: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 595
    const-string v1, "rau_timer: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 596
    const/4 v1, 0x0

    const-string v2, "ms_state: "

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 597
    const/4 v2, 0x3

    const-string v3, "is_rau_timer_running: "

    invoke-direct {p0, v2, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 598
    const-string v2, "rau_timer_passed_time: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 599
    const-string v0, "attach_req_mobile_identity: "

    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 600
    sget-object v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->WISDOM_EM:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_0

    sget-object v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->ADVANCED_EM:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 601
    const/4 v0, 0x4

    const-string v2, "ptmsi: "

    invoke-direct {p0, v1, v2, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 602
    const-string v0, "attach_rej_cause: "

    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 603
    const-string v0, "rau_rej_cause: "

    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 604
    const-string v0, "gprs_update_status: "

    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 605
    const-string v0, "cipher_algo: "

    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 606
    const-string v0, "attach_type: "

    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 607
    const-string v0, "gmm_state: "

    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 608
    const-string v0, "gprs_attach_status: "

    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 610
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getLAIInfo()Ljava/lang/String;
    .locals 3

    .line 264
    const/4 v0, 0x0

    const-string v1, "mcc:"

    const/4 v2, 0x3

    invoke-direct {p0, v0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 265
    const-string v1, "mnc:"

    invoke-direct {p0, v0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 266
    const-string v1, "lac:"

    const/4 v2, 0x2

    invoke-direct {p0, v0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 267
    const/4 v1, 0x1

    const-string v2, "cell_id: "

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 268
    const-string v1, "nc_info_index: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 269
    const-string v1, "rac: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 270
    const-string v1, "nmo: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 271
    const-string v1, "supported_Band: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 272
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getMIInfo()Ljava/lang/String;
    .locals 3

    .line 392
    const/4 v0, 0x3

    const-string v1, "present: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 393
    const/4 v1, 0x0

    const-string v2, "no_of_instance: "

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 394
    const-string v1, "emr_report: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 395
    const-string v1, "umts_parameter_exist: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 396
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getMeasRepInfo()Ljava/lang/String;
    .locals 8

    .line 291
    const/4 v0, 0x0

    const-string v1, "rr_state: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 292
    sget-object v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->IS_MOLY:Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 293
    const-string v1, "meas_mode: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 295
    :cond_0
    const/4 v1, 0x1

    const-string v2, "serving_arfcn: "

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 296
    const-string v2, "serving_bsic: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 297
    const-string v2, "serving_current_band: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 298
    const-string v2, "serv_gprs_supported: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 299
    const/4 v2, 0x4

    const-string v3, "serv_rla_in_quarter_dbm: "

    invoke-direct {p0, v2, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 300
    sget-object v3, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->IS_MOLY:Ljava/lang/Boolean;

    invoke-virtual {v3}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v3

    if-eqz v3, :cond_1

    .line 301
    const-string v3, "serv_rla_reported_value: "

    invoke-direct {p0, v0, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 303
    :cond_1
    const/4 v3, 0x3

    const-string v4, "is_serv_BCCH_rla_valid: "

    invoke-direct {p0, v3, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 304
    const-string v4, "serv_BCCH_rla_in_dedi_state: "

    invoke-direct {p0, v2, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 305
    const-string v4, "quality: "

    invoke-direct {p0, v0, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 306
    const-string v4, "gprs_pbcch_present: "

    invoke-direct {p0, v3, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 307
    const-string v4, "gprs_c31_c32_enable: "

    invoke-direct {p0, v3, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 308
    sget-object v4, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->IS_MOLY:Ljava/lang/Boolean;

    invoke-virtual {v4}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v4

    const-string v5, "c31:"

    const/16 v6, 0x20

    if-nez v4, :cond_2

    .line 309
    invoke-direct {p0, v2, v5, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 311
    :cond_2
    const-string v4, "c1_serv_cell: "

    invoke-direct {p0, v2, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 312
    const-string v4, "c2_serv_cell: "

    invoke-direct {p0, v2, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 313
    const-string v4, "c31_serv_cell: "

    invoke-direct {p0, v2, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 314
    const-string v4, "num_of_carriers: "

    invoke-direct {p0, v0, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 315
    const-string v4, "nc_arfcn:"

    invoke-direct {p0, v1, v4, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 316
    const-string v4, "rla_in_quarter_dbm:"

    invoke-direct {p0, v2, v4, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 317
    sget-object v4, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->IS_MOLY:Ljava/lang/Boolean;

    invoke-virtual {v4}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v4

    if-eqz v4, :cond_3

    .line 318
    const-string v4, "rla_in_reported_value: "

    invoke-direct {p0, v0, v4, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 320
    :cond_3
    const-string v4, "nc_info_status:"

    invoke-direct {p0, v0, v4, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 321
    const-string v4, "nc_bsic:"

    invoke-direct {p0, v0, v4, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 322
    const/4 v4, 0x5

    const-string v7, "frame_offset:"

    invoke-direct {p0, v4, v7, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 323
    const-string v7, "ebit_offset:"

    invoke-direct {p0, v4, v7, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 324
    const-string v4, "c1:"

    invoke-direct {p0, v2, v4, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 325
    const-string v4, "c2:"

    invoke-direct {p0, v2, v4, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 326
    sget-object v4, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->IS_MOLY:Ljava/lang/Boolean;

    invoke-virtual {v4}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v4

    if-eqz v4, :cond_4

    .line 327
    invoke-direct {p0, v2, v5, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 329
    :cond_4
    const-string v4, "multiband_report: "

    invoke-direct {p0, v0, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 330
    const-string v4, "timing_advance: "

    invoke-direct {p0, v0, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 331
    const-string v4, "tx_power_level: "

    invoke-direct {p0, v2, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 332
    const-string v4, "serv_rla_full_value_in_quater_dbm: "

    invoke-direct {p0, v2, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 333
    const-string v4, "nco: "

    invoke-direct {p0, v0, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 334
    const-string v4, "rxqual_sub: "

    invoke-direct {p0, v0, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 335
    const-string v4, "rxqual_full: "

    invoke-direct {p0, v0, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 336
    const-string v4, "using_tx_power_in_dbm: "

    invoke-direct {p0, v2, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 337
    const-string v2, "amr_info_valid: "

    invoke-direct {p0, v3, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 338
    const-string v2, "cmr_cmc_cmiu_cmid: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 339
    const-string v2, "c_i: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 340
    const-string v2, "icm: "

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 341
    const-string v2, "acs: "

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 342
    const-string v2, "dl_dtx_used: "

    invoke-direct {p0, v3, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 343
    sget-object v2, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->FWPNC_LAI_INFO_ENABLE:Ljava/lang/Boolean;

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-eqz v2, :cond_5

    .line 344
    const-string v2, "num_of_nc_lai: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 345
    iget-object v2, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    const-string v4, "nc_lai:\n"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 346
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    const/4 v4, 0x6

    if-ge v2, v4, :cond_5

    .line 347
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "nc_lai["

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, "]:\nmcc:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {p0, v0, v4, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 348
    const-string v4, "mnc:"

    invoke-direct {p0, v0, v4, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 349
    const/4 v4, 0x2

    const-string v5, "lac:"

    invoke-direct {p0, v0, v5, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 350
    const-string v4, "cell_id: "

    invoke-direct {p0, v1, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 351
    const-string v4, "nc_info_index: "

    invoke-direct {p0, v0, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 346
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 354
    .end local v2    # "i":I
    :cond_5
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getRACHCtrlInfo()Ljava/lang/String;
    .locals 3

    .line 251
    const/4 v0, 0x0

    const-string v1, "max_retrans: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 252
    const-string v1, "tx_integer: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 253
    const-string v1, "cba: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 254
    const-string v1, "re: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 255
    const-string v1, "acc_class:"

    const/4 v2, 0x2

    invoke-direct {p0, v0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 256
    const/4 v0, 0x3

    const-string v1, "CB_supported: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 257
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getRadioLinkInfo()Ljava/lang/String;
    .locals 2

    .line 279
    const/4 v0, 0x1

    const-string v1, "max_value: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 280
    const/4 v0, 0x4

    const-string v1, "current_value: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 281
    const/4 v0, 0x0

    const-string v1, "dtx_ind: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 282
    const-string v1, "dtx_used: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 283
    const/4 v0, 0x3

    const-string v1, "is_dsf: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 284
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getSI2QInfo()Ljava/lang/String;
    .locals 3

    .line 380
    const/4 v0, 0x3

    const-string v1, "present: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 381
    const/4 v1, 0x0

    const-string v2, "no_of_instance: "

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 382
    const-string v1, "emr_report: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 383
    const-string v1, "pemr_report: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 384
    const-string v1, "umts_parameter_exist: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 385
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getSecurityConfigInfo()Ljava/lang/String;
    .locals 2

    .line 529
    const/4 v0, 0x0

    const-string v1, "Ciphering Algorithm: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 530
    const-string v1, "Integrity Algorithm: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 531
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getSlceVoiceInfo()Ljava/lang/String;
    .locals 2

    .line 516
    sget-object v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->IS_MOLY:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 517
    const-string v0, "ULAMRType: "

    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 518
    const-string v0, "DLAMRType: "

    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    goto :goto_0

    .line 520
    :cond_0
    const-string v0, "voice: "

    invoke-direct {p0, v1, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 522
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getSmEmInfo()Ljava/lang/String;
    .locals 5

    .line 561
    const/4 v0, 0x0

    const-string v1, "num_of_active_pdp_context: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 562
    const/16 v1, 0x8

    const-string v2, ""

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 563
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    const/16 v2, 0xb

    if-ge v1, v2, :cond_3

    .line 564
    iget-object v2, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    const-string v3, "--------------------\n"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 565
    iget-object v2, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "pdp["

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "]:\n"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 566
    const-string v2, "pdp_index: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 567
    const-string v2, "nsapi: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 568
    sget-object v2, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->IS_MOLY:Ljava/lang/Boolean;

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 569
    const-string v2, "ti_value: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 571
    :cond_0
    const-string v2, "pdp_context_status: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 572
    sget-object v2, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->IS_MOLY:Ljava/lang/Boolean;

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 573
    const-string v2, "context_type: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 574
    const-string v2, "initiated_by: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 575
    const-string v2, "pdp_addr_type: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 577
    :cond_1
    const/16 v2, 0x10

    const-string v3, "ip:"

    invoke-direct {p0, v0, v3, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 578
    const/4 v2, 0x1

    const-string v3, "sdu_size:"

    invoke-direct {p0, v2, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 579
    const/16 v2, 0x9

    const/16 v3, 0x64

    const-string v4, "apn: "

    invoke-direct {p0, v2, v4, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 580
    const-string v2, "sm_cause: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 581
    sget-object v2, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->IS_MOLY:Ljava/lang/Boolean;

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-eqz v2, :cond_2

    .line 582
    iget v2, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit16 v2, v2, 0x1f2

    iput v2, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    goto :goto_1

    .line 584
    :cond_2
    iget v2, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit16 v2, v2, 0x9a

    iput v2, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 563
    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto/16 :goto_0

    .line 587
    .end local v1    # "i":I
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getTBFInfo()Ljava/lang/String;
    .locals 3

    .line 434
    const/4 v0, 0x0

    const-string v1, "tbf_mode: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 435
    const-string v1, "ul_tbf_status: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 436
    const-string v1, "ul_rel_cause: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 437
    const-string v1, "ul_ts_allocation: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 438
    const-string v1, "ul_rlc_mode: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 439
    const-string v1, "ul_mac_mode: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 440
    const/4 v1, 0x1

    const-string v2, "number_rlc_octect: "

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 441
    const-string v2, "ul_tfi: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 442
    const-string v2, "ul_granularity: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 443
    const-string v2, "ul_usf: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 444
    const-string v2, "ul_tai: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 445
    const-string v2, "ul_tqi: "

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 446
    const-string v2, "ul_window_size: "

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 447
    const-string v2, "dl_tbf_status: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 448
    const-string v2, "dl_rel_cause: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 449
    const-string v2, "dl_ts_allocation: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 450
    const-string v2, "dl_rlc_mode: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 451
    const-string v2, "dl_mac_mode: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 452
    const-string v2, "dl_tfi: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 453
    const-string v2, "dl_tai: "

    invoke-direct {p0, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 454
    const-string v2, "dl_window_size: "

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 455
    sget-object v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->GPRS_MODE_ENABLE:Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 456
    const-string v1, "dl_out_of_memory: "

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 458
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getxGCsceEMNeighCellSStatusIndStructSize(Z)Ljava/lang/String;
    .locals 23
    .param p1, "isTdd"    # Z

    .line 929
    move-object/from16 v0, p0

    sget-object v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->IS_MOLY:Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-nez v1, :cond_0

    .line 930
    const-string v1, "ref_count:"

    invoke-direct {v0, v3, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 931
    const-string v1, "msg_len"

    invoke-direct {v0, v2, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 933
    :cond_0
    const-string v1, "neigh_cell_count:"

    invoke-direct {v0, v3, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 934
    const-string v1, "operation:"

    invoke-direct {v0, v3, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 935
    iget-object v1, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    iget v4, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    invoke-direct {v0, v1, v4, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getValueFromByte(Ljava/lang/String;IZ)Ljava/lang/String;

    move-result-object v1

    .line 936
    .local v1, "xgType":Ljava/lang/String;
    const-string v4, "RAT_type:"

    invoke-direct {v0, v3, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 937
    const/16 v4, 0x8

    const-string v5, ""

    invoke-direct {v0, v4, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 939
    const-string v6, "1"

    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    const-string v7, "srxlev"

    const-string v8, "is_s_criteria_saticified"

    const-string v9, "cellidx"

    const-string v10, "threshx_low2"

    const-string v11, "threshx_high2"

    const-string v12, "threshx_low"

    const-string v13, "threshx_high"

    const-string v14, "apbcr_priority"

    const-string v15, "qRxlevmin"

    const/16 v4, 0x10

    const-string v2, ":"

    if-eqz v6, :cond_3

    .line 940
    iget-object v6, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    const-string v3, "----GSM_neigh_cells----\n"

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 941
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    if-ge v3, v4, :cond_2

    .line 942
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    const/4 v4, 0x0

    invoke-direct {v0, v4, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 943
    const-string v4, "arfcn"

    const/4 v6, 0x1

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 944
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "bsic"

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x0

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 945
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "is_bsic_verified"

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x0

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 946
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 947
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "freq_band"

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x0

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 948
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x3

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 949
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x5

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 950
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "rssi"

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x5

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 951
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x3

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 952
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x0

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 953
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 954
    sget-object v4, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->IS_MOLY:Ljava/lang/Boolean;

    invoke-virtual {v4}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v4

    if-eqz v4, :cond_1

    .line 955
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x0

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 956
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 958
    :cond_1
    const/16 v4, 0x8

    invoke-direct {v0, v4, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 941
    add-int/lit8 v3, v3, 0x1

    const/16 v4, 0x10

    goto/16 :goto_0

    :cond_2
    move-object/from16 v17, v1

    .end local v3    # "i":I
    goto/16 :goto_a

    .line 960
    :cond_3
    const-string v3, "2"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_5

    .line 961
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    const-string v4, "----LTE_neigh_cells----\n"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 962
    const/4 v3, 0x0

    .restart local v3    # "i":I
    :goto_1
    const/16 v4, 0x10

    if-ge v3, v4, :cond_4

    .line 963
    const-string v4, "earfcn"

    const/4 v6, 0x1

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 964
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "pci"

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 965
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "rsrp"

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x5

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 966
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "rsrq"

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 967
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "Treselection"

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 968
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x3

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 969
    const/4 v4, 0x4

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-direct {v0, v4, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 970
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "qQualMinEUTRA"

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x3

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 971
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x0

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 972
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 973
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 974
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 975
    const/16 v4, 0x8

    invoke-direct {v0, v4, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 962
    add-int/lit8 v3, v3, 0x1

    goto/16 :goto_1

    :cond_4
    move-object/from16 v17, v1

    .end local v3    # "i":I
    goto/16 :goto_a

    .line 978
    :cond_5
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    const-string v4, "----3G_neigh_cells----\n"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 979
    const/4 v3, 0x0

    .restart local v3    # "i":I
    :goto_2
    const/16 v4, 0x10

    if-ge v3, v4, :cond_f

    .line 980
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    const/4 v4, 0x0

    invoke-direct {v0, v4, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 981
    const-string v4, "arfcn_DL"

    const/4 v6, 0x1

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 982
    const-string v4, "psc"

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 983
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x0

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 984
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "qQualmin"

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x3

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 985
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 986
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x5

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 987
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "squal"

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x5

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 988
    const/4 v4, 0x6

    const-string v6, "rscp: "

    invoke-direct {v0, v4, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 989
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "ec_no"

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x5

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 990
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x3

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 991
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x0

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 992
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 993
    sget-object v4, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->IS_MOLY:Ljava/lang/Boolean;

    invoke-virtual {v4}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v4

    if-eqz v4, :cond_6

    .line 994
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x0

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 995
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 997
    :cond_6
    if-nez p1, :cond_e

    .line 998
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "cell_identity"

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x2

    invoke-direct {v0, v6, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 999
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFromByte()I

    move-result v4

    .line 1000
    .local v4, "plmnValid":I
    if-eqz v4, :cond_8

    .line 1001
    const-string v6, "multi_plmn_count: "

    move-object/from16 v17, v1

    const/4 v1, 0x0

    .end local v1    # "xgType":Ljava/lang/String;
    .local v17, "xgType":Ljava/lang/String;
    invoke-direct {v0, v1, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 1002
    const/4 v1, 0x0

    .local v1, "j":I
    :goto_3
    const/4 v6, 0x6

    if-ge v1, v6, :cond_7

    .line 1003
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v18, v2

    const-string v2, "multi_plmn_id["

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move/from16 v19, v4

    .end local v4    # "plmnValid":I
    .local v19, "plmnValid":I
    const-string v4, "].mcc: "

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    move-object/from16 v16, v7

    const/4 v6, 0x3

    const/4 v7, 0x0

    invoke-direct {v0, v7, v4, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 1004
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "].mnc: "

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v7, v2, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 1002
    add-int/lit8 v1, v1, 0x1

    move-object/from16 v7, v16

    move-object/from16 v2, v18

    move/from16 v4, v19

    goto :goto_3

    .end local v19    # "plmnValid":I
    .restart local v4    # "plmnValid":I
    :cond_7
    move-object/from16 v18, v2

    move/from16 v19, v4

    move-object/from16 v16, v7

    const/4 v6, 0x3

    .end local v1    # "j":I
    .end local v4    # "plmnValid":I
    .restart local v19    # "plmnValid":I
    goto :goto_4

    .line 1007
    .end local v17    # "xgType":Ljava/lang/String;
    .end local v19    # "plmnValid":I
    .local v1, "xgType":Ljava/lang/String;
    .restart local v4    # "plmnValid":I
    :cond_8
    move-object/from16 v17, v1

    move-object/from16 v18, v2

    move/from16 v19, v4

    move-object/from16 v16, v7

    const/4 v6, 0x3

    .end local v1    # "xgType":Ljava/lang/String;
    .end local v4    # "plmnValid":I
    .restart local v17    # "xgType":Ljava/lang/String;
    .restart local v19    # "plmnValid":I
    iget v1, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v1, v1, 0x4a

    iput v1, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1010
    :goto_4
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFromByte()I

    move-result v1

    .line 1011
    .local v1, "lacValid":I
    if-eqz v1, :cond_9

    .line 1012
    const-string v2, "lac: "

    const/4 v4, 0x1

    invoke-direct {v0, v4, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    goto :goto_5

    .line 1014
    :cond_9
    iget-object v2, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    const-string v4, "lac: invalid\n"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1015
    iget v2, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    const/4 v4, 0x6

    add-int/2addr v2, v4

    iput v2, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1018
    :goto_5
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFromByte()I

    move-result v2

    .line 1019
    .local v2, "racValid":I
    if-eqz v2, :cond_a

    .line 1020
    const-string v4, "rac: "

    const/4 v7, 0x0

    invoke-direct {v0, v7, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    goto :goto_6

    .line 1022
    :cond_a
    iget-object v4, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    const-string v7, "rac: invalid\n"

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1023
    iget v4, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    const/4 v7, 0x2

    add-int/2addr v4, v7

    iput v4, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1026
    :goto_6
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFromByte()I

    move-result v4

    .line 1027
    .local v4, "uraValid":I
    if-eqz v4, :cond_d

    .line 1028
    const-string v7, "num_ura_id: "

    const/4 v6, 0x0

    invoke-direct {v0, v6, v7}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 1029
    const/4 v6, 0x0

    .local v6, "j":I
    :goto_7
    const/16 v7, 0x8

    if-ge v6, v7, :cond_c

    .line 1030
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFromByte()I

    move-result v7

    .line 1031
    .local v7, "numBits":I
    move/from16 v20, v1

    .end local v1    # "lacValid":I
    .local v20, "lacValid":I
    const-string v1, "]: "

    move/from16 v21, v2

    .end local v2    # "racValid":I
    .local v21, "racValid":I
    const-string v2, "uraIdentity["

    move/from16 v22, v4

    const/4 v4, 0x1

    .end local v4    # "uraValid":I
    .local v22, "uraValid":I
    if-ne v7, v4, :cond_b

    .line 1032
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-direct {v0, v2, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 1033
    iget v1, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    const/4 v4, 0x2

    add-int/2addr v1, v4

    iput v1, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    move v2, v4

    const/4 v4, 0x0

    goto :goto_8

    .line 1035
    :cond_b
    const/4 v4, 0x2

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x2

    const/4 v4, 0x0

    invoke-direct {v0, v4, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;I)Ljava/lang/String;

    .line 1029
    .end local v7    # "numBits":I
    :goto_8
    add-int/lit8 v6, v6, 0x1

    move/from16 v1, v20

    move/from16 v2, v21

    move/from16 v4, v22

    goto :goto_7

    .end local v20    # "lacValid":I
    .end local v21    # "racValid":I
    .end local v22    # "uraValid":I
    .restart local v1    # "lacValid":I
    .restart local v2    # "racValid":I
    .restart local v4    # "uraValid":I
    :cond_c
    move/from16 v20, v1

    move/from16 v21, v2

    move/from16 v22, v4

    const/4 v4, 0x0

    .end local v1    # "lacValid":I
    .end local v2    # "racValid":I
    .end local v4    # "uraValid":I
    .end local v6    # "j":I
    .restart local v20    # "lacValid":I
    .restart local v21    # "racValid":I
    .restart local v22    # "uraValid":I
    goto :goto_9

    .line 1039
    .end local v20    # "lacValid":I
    .end local v21    # "racValid":I
    .end local v22    # "uraValid":I
    .restart local v1    # "lacValid":I
    .restart local v2    # "racValid":I
    .restart local v4    # "uraValid":I
    :cond_d
    move/from16 v20, v1

    move/from16 v21, v2

    move/from16 v22, v4

    const/4 v4, 0x0

    .end local v1    # "lacValid":I
    .end local v2    # "racValid":I
    .end local v4    # "uraValid":I
    .restart local v20    # "lacValid":I
    .restart local v21    # "racValid":I
    .restart local v22    # "uraValid":I
    iget v1, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v1, v1, 0x32

    iput v1, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1040
    iget-object v1, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    const-string v2, "ura: invalid\n"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_9

    .line 997
    .end local v17    # "xgType":Ljava/lang/String;
    .end local v19    # "plmnValid":I
    .end local v20    # "lacValid":I
    .end local v21    # "racValid":I
    .end local v22    # "uraValid":I
    .local v1, "xgType":Ljava/lang/String;
    :cond_e
    move-object/from16 v17, v1

    move-object/from16 v18, v2

    move-object/from16 v16, v7

    const/4 v4, 0x0

    .line 1043
    .end local v1    # "xgType":Ljava/lang/String;
    .restart local v17    # "xgType":Ljava/lang/String;
    :goto_9
    const/16 v1, 0x8

    invoke-direct {v0, v1, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseElement(ILjava/lang/String;)Ljava/lang/String;

    .line 979
    add-int/lit8 v3, v3, 0x1

    move-object/from16 v7, v16

    move-object/from16 v1, v17

    move-object/from16 v2, v18

    goto/16 :goto_2

    .end local v17    # "xgType":Ljava/lang/String;
    .restart local v1    # "xgType":Ljava/lang/String;
    :cond_f
    move-object/from16 v17, v1

    .line 1046
    .end local v1    # "xgType":Ljava/lang/String;
    .end local v3    # "i":I
    .restart local v17    # "xgType":Ljava/lang/String;
    :goto_a
    iget-object v1, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method parseAntennaDiversity(ILjava/lang/String;)[Ljava/lang/String;
    .locals 22
    .param p1, "type"    # I
    .param p2, "info"    # Ljava/lang/String;

    .line 1417
    move-object/from16 v0, p0

    move/from16 v1, p1

    move-object/from16 v2, p2

    const/4 v3, 0x0

    if-nez v2, :cond_0

    .line 1418
    return-object v3

    .line 1420
    :cond_0
    const/4 v4, 0x0

    .line 1421
    .local v4, "ret":[Ljava/lang/String;
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "NetworkInfo ------ Type is: "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v6, "NetworkInfo/UrcParser"

    invoke-static {v6, v5}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 1422
    const-string v5, "NetworkInfo ------ Data is:\n"

    invoke-static {v6, v5}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 1423
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "\n"

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v6, v5}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 1424
    const-string v5, "NetworkInfo ---------------------------"

    invoke-static {v6, v5}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 1425
    iput-object v2, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    .line 1426
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iput-object v5, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    .line 1427
    const/4 v5, 0x0

    iput v5, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1429
    const/16 v6, 0xb1

    const/4 v7, 0x5

    const/4 v8, 0x4

    const/4 v9, 0x3

    const/4 v10, 0x2

    const/4 v11, 0x1

    if-eq v1, v6, :cond_4

    const/16 v6, 0xf9

    if-eq v1, v6, :cond_1

    goto/16 :goto_3

    .line 1431
    :cond_1
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFromByte()I

    move-result v6

    .line 1432
    .local v6, "band":I
    if-nez v6, :cond_2

    .line 1433
    return-object v3

    .line 1435
    :cond_2
    iget v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v3, v3, 0x1e

    iput v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1436
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFrom2Byte()I

    move-result v3

    .line 1437
    .local v3, "rsrp0":I
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFrom2Byte()I

    move-result v13

    .line 1438
    .local v13, "rsrp1":I
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFrom2Byte()I

    move-result v14

    .line 1439
    .local v14, "rssi0":I
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFrom2Byte()I

    move-result v15

    .line 1440
    .local v15, "rssi1":I
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFrom2Byte()I

    move-result v16

    .line 1441
    .local v16, "snr0":I
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFrom2Byte()I

    move-result v17

    .line 1442
    .local v17, "snr1":I
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFrom2Byte()I

    move-result v18

    .line 1443
    .local v18, "rsrp":I
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFrom2Byte()I

    move-result v19

    .line 1444
    .local v19, "rsrq":I
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFrom2Byte()I

    move-result v20

    .line 1445
    .local v20, "snr":I
    const/16 v12, 0xc

    new-array v12, v12, [Ljava/lang/String;

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v21

    aput-object v21, v12, v5

    invoke-static/range {v19 .. v19}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v12, v11

    invoke-static {v14}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v12, v10

    .line 1446
    invoke-static/range {v16 .. v16}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v12, v9

    invoke-static {v13}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v12, v8

    invoke-static/range {v19 .. v19}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v12, v7

    .line 1447
    invoke-static {v15}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    const/4 v7, 0x6

    aput-object v5, v12, v7

    const/4 v5, 0x7

    invoke-static/range {v17 .. v17}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v7

    aput-object v7, v12, v5

    const/16 v5, 0x8

    invoke-static/range {v18 .. v18}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v7

    aput-object v7, v12, v5

    const/16 v5, 0x9

    .line 1448
    invoke-static/range {v19 .. v19}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v7

    aput-object v7, v12, v5

    const/16 v5, 0xa

    if-le v14, v15, :cond_3

    move v7, v14

    goto :goto_0

    :cond_3
    move v7, v15

    :goto_0
    invoke-static {v7}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v7

    aput-object v7, v12, v5

    const/16 v5, 0xb

    .line 1449
    invoke-static/range {v20 .. v20}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v7

    aput-object v7, v12, v5

    move-object v4, v12

    .line 1450
    goto :goto_3

    .line 1452
    .end local v3    # "rsrp0":I
    .end local v6    # "band":I
    .end local v13    # "rsrp1":I
    .end local v14    # "rssi0":I
    .end local v15    # "rssi1":I
    .end local v16    # "snr0":I
    .end local v17    # "snr1":I
    .end local v18    # "rsrp":I
    .end local v19    # "rsrq":I
    .end local v20    # "snr":I
    :cond_4
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFrom2Byte()I

    move-result v3

    .line 1453
    .local v3, "rscp0":I
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFrom2Byte()I

    move-result v6

    .line 1454
    .local v6, "rscp1":I
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFrom2Byte()I

    move-result v12

    .line 1455
    .local v12, "pssi0":I
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFrom2Byte()I

    move-result v13

    .line 1456
    .local v13, "pssi1":I
    const/4 v14, 0x6

    new-array v14, v14, [Ljava/lang/String;

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v15

    aput-object v15, v14, v5

    invoke-static {v12}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v14, v11

    .line 1457
    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v14, v10

    invoke-static {v13}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v14, v9

    .line 1458
    if-le v3, v6, :cond_5

    move v5, v3

    goto :goto_1

    :cond_5
    move v5, v6

    :goto_1
    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v14, v8

    .line 1459
    if-le v12, v13, :cond_6

    move v5, v12

    goto :goto_2

    :cond_6
    move v5, v13

    :goto_2
    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    aput-object v5, v14, v7

    move-object v4, v14

    .line 1460
    nop

    .line 1464
    .end local v3    # "rscp0":I
    .end local v6    # "rscp1":I
    .end local v12    # "pssi0":I
    .end local v13    # "pssi1":I
    :goto_3
    return-object v4
.end method

.method public parseCdmaInfo(ILjava/lang/String;)Ljava/util/ArrayList;
    .locals 3
    .param p1, "type"    # I
    .param p2, "info"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/ArrayList<",
            "[",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1496
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "NetworkInfo ------ Type is: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "NetworkInfo/UrcParser"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 1497
    const-string v0, "NetworkInfo ------ Data is:\n"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 1498
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "\n"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 1499
    const-string v0, "NetworkInfo ---------------------------"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 1500
    iput-object p2, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    .line 1501
    const-string v0, ","

    invoke-virtual {p2, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawValues:[Ljava/lang/String;

    .line 1502
    const/4 v0, 0x1

    iput v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1503
    iput p1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mType:I

    .line 1505
    const v0, 0x7f010070

    packed-switch p1, :pswitch_data_0

    goto/16 :goto_0

    .line 1541
    :pswitch_0
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const v1, 0x7f010071

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mLabels:[Ljava/lang/String;

    .line 1542
    goto/16 :goto_0

    .line 1538
    :pswitch_1
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const v1, 0x7f01006e

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mLabels:[Ljava/lang/String;

    .line 1539
    goto/16 :goto_0

    .line 1535
    :pswitch_2
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const v1, 0x7f01006d

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mLabels:[Ljava/lang/String;

    .line 1536
    goto/16 :goto_0

    .line 1532
    :pswitch_3
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mContext:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mLabels:[Ljava/lang/String;

    .line 1533
    goto/16 :goto_0

    .line 1529
    :pswitch_4
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mContext:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mLabels:[Ljava/lang/String;

    .line 1530
    goto :goto_0

    .line 1526
    :pswitch_5
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const v1, 0x7f01006c

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mLabels:[Ljava/lang/String;

    .line 1527
    goto :goto_0

    .line 1522
    :pswitch_6
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const v1, 0x7f01006f

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mLabels:[Ljava/lang/String;

    .line 1524
    goto :goto_0

    .line 1519
    :pswitch_7
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const v1, 0x7f01006a

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mLabels:[Ljava/lang/String;

    .line 1520
    goto :goto_0

    .line 1516
    :pswitch_8
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const v1, 0x7f01006b

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mLabels:[Ljava/lang/String;

    .line 1517
    goto :goto_0

    .line 1513
    :pswitch_9
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const v1, 0x7f010069

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mLabels:[Ljava/lang/String;

    .line 1514
    goto :goto_0

    .line 1510
    :pswitch_a
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const v1, 0x7f010067

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mLabels:[Ljava/lang/String;

    .line 1511
    goto :goto_0

    .line 1507
    :pswitch_b
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const v1, 0x7f010068

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mLabels:[Ljava/lang/String;

    .line 1508
    nop

    .line 1547
    :goto_0
    packed-switch p1, :pswitch_data_1

    .line 1555
    :pswitch_c
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseCommonCdmaInfo()Ljava/util/ArrayList;

    move-result-object v0

    return-object v0

    .line 1553
    :pswitch_d
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseCellInfo()Ljava/util/ArrayList;

    move-result-object v0

    return-object v0

    .line 1549
    :pswitch_e
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parse1xRttServing()Ljava/util/ArrayList;

    move-result-object v0

    return-object v0

    nop

    :pswitch_data_0
    .packed-switch 0x12c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x130
        :pswitch_e
        :pswitch_c
        :pswitch_d
        :pswitch_d
        :pswitch_d
    .end packed-switch
.end method

.method public parseInfo(ILjava/lang/String;I)Ljava/lang/String;
    .locals 4
    .param p1, "type"    # I
    .param p2, "info"    # Ljava/lang/String;
    .param p3, "simType"    # I

    .line 97
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "NetworkInfo ------ Type is: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "NetworkInfo/UrcParser"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 98
    const-string v0, "NetworkInfo ------ Data is:\n"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 99
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "\n"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 100
    const-string v0, "NetworkInfo ---------------------------"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 101
    iput-object p2, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    .line 102
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    .line 103
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 105
    const/16 v1, 0x38

    if-eq p1, v1, :cond_16

    const/16 v1, 0x46

    if-eq p1, v1, :cond_15

    packed-switch p1, :pswitch_data_0

    .line 142
    sget v1, Lcom/mediatek/engineermode/networkinfo/Content;->SM_INFO_INDEX:I

    if-ne p1, v1, :cond_0

    .line 143
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getSmEmInfo()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 144
    :cond_0
    sget v1, Lcom/mediatek/engineermode/networkinfo/Content;->SLCE_VOICE_INDEX:I

    if-ne p1, v1, :cond_1

    .line 145
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getSlceVoiceInfo()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 146
    :cond_1
    sget v1, Lcom/mediatek/engineermode/networkinfo/Content;->SECURITY_CONFIGURATION_INDEX:I

    if-ne p1, v1, :cond_2

    .line 147
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getSecurityConfigInfo()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 148
    :cond_2
    sget v1, Lcom/mediatek/engineermode/networkinfo/Content;->MM_INFO_INDEX:I

    if-ne p1, v1, :cond_3

    .line 149
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->get3GMmEmInfo()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 150
    :cond_3
    sget v1, Lcom/mediatek/engineermode/networkinfo/Content;->TCM_MMI_INDEX:I

    if-ne p1, v1, :cond_4

    .line 151
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->get3GTcmMmiEmInfo()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 152
    :cond_4
    sget v1, Lcom/mediatek/engineermode/networkinfo/Content;->CSCE_MULTIPLMN_INDEX:I

    if-ne p1, v1, :cond_5

    .line 153
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->get3GCsceEmInfoMultiPlmn()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 154
    :cond_5
    sget v1, Lcom/mediatek/engineermode/networkinfo/Content;->PERIOD_IC_BLER_REPORT_INDEX:I

    if-ne p1, v1, :cond_6

    .line 155
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->get3GMemeEmPeriodicBlerReportInd()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 156
    :cond_6
    sget v1, Lcom/mediatek/engineermode/networkinfo/Content;->URR_UMTS_SRNC_INDEX:I

    if-ne p1, v1, :cond_7

    .line 157
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->get3GUrrUmtsSrncId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 158
    :cond_7
    sget v1, Lcom/mediatek/engineermode/networkinfo/Content;->HSERV_CELL_INDEX:I

    if-ne p1, v1, :cond_8

    .line 159
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->get3GMemeEmInfoHServCellInd()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 160
    :cond_8
    sget v1, Lcom/mediatek/engineermode/networkinfo/Content;->CSCE_NEIGH_CELL_STATUS_INDEX:I

    const/4 v2, 0x1

    const/4 v3, 0x2

    if-ne p1, v1, :cond_a

    .line 161
    nop

    .line 162
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getModemType()I

    move-result v1

    if-ne v1, v3, :cond_9

    move v0, v2

    .line 161
    :cond_9
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getxGCsceEMNeighCellSStatusIndStructSize(Z)Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 163
    :cond_a
    sget v1, Lcom/mediatek/engineermode/networkinfo/Content;->CSCE_SERV_CELL_STATUS_INDEX:I

    if-ne p1, v1, :cond_c

    .line 164
    nop

    .line 165
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getModemType()I

    move-result v1

    if-ne v1, v3, :cond_b

    move v0, v2

    .line 164
    :cond_b
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->get3GCsceEMServCellSStatusInd(Z)Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 168
    :cond_c
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getModemType()I

    move-result v0

    if-ne v0, v2, :cond_e

    .line 169
    sget v0, Lcom/mediatek/engineermode/networkinfo/Content;->UMTS_CELL_STATUS_INDEX:I

    if-ne p1, v0, :cond_d

    .line 170
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->get3GMemeEmInfoUmtsCellStatus()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 171
    :cond_d
    sget v0, Lcom/mediatek/engineermode/networkinfo/Content;->PSDATA_RATE_STATUS_INDEX:I

    if-ne p1, v0, :cond_14

    .line 172
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->get3GSlceEmPsDataRateStatusInd()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 174
    :cond_e
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getModemType()I

    move-result v0

    if-ne v0, v3, :cond_14

    .line 175
    sget v0, Lcom/mediatek/engineermode/networkinfo/Content;->HANDOVER_SEQUENCE_INDEX:I

    if-ne p1, v0, :cond_f

    .line 176
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->get3GHandoverSequenceIndStuct()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 177
    :cond_f
    sget v0, Lcom/mediatek/engineermode/networkinfo/Content;->UL_ADM_POOL_STATUS_INDEX:I

    if-ne p1, v0, :cond_10

    .line 178
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->get3GUl2EmAdmPoolStatusIndStruct()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 179
    :cond_10
    sget v0, Lcom/mediatek/engineermode/networkinfo/Content;->UL_PSDATA_RATE_STATUS_INDEX:I

    if-ne p1, v0, :cond_11

    .line 180
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->get3GUl2EmPsDataRateStatusIndStruct()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 181
    :cond_11
    sget v0, Lcom/mediatek/engineermode/networkinfo/Content;->UL_HSDSCH_RECONFIG_STATUS_INDEX:I

    if-ne p1, v0, :cond_12

    .line 182
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->get3Gul2EmHsdschReconfigStatusIndStruct()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 183
    :cond_12
    sget v0, Lcom/mediatek/engineermode/networkinfo/Content;->UL_URLC_EVENT_STATUS_INDEX:I

    if-ne p1, v0, :cond_13

    .line 184
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->get3GUl2EmUrlcEventStatusIndStruct()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 185
    :cond_13
    sget v0, Lcom/mediatek/engineermode/networkinfo/Content;->UL_PERIOD_IC_BLER_REPORT_INDEX:I

    if-ne p1, v0, :cond_14

    .line 186
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->get3GUl2EmPeriodicBlerReportInd()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 190
    :cond_14
    const/4 v0, 0x0

    return-object v0

    .line 133
    :pswitch_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getGPRSGenInfo()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 131
    :pswitch_1
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getTBFInfo()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 129
    :pswitch_2
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getBLKInfo()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 127
    :pswitch_3
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getMIInfo()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 125
    :pswitch_4
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getSI2QInfo()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 123
    :pswitch_5
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getControlMsgInfo()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 121
    :pswitch_6
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getCaListInfo()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 119
    :pswitch_7
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getMeasRepInfo()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 117
    :pswitch_8
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getRadioLinkInfo()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 115
    :pswitch_9
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getLAIInfo()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 113
    :pswitch_a
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getRACHCtrlInfo()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 111
    :pswitch_b
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getCtrlchanInfo()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 109
    :pswitch_c
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getChDscrInfo()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 107
    :pswitch_d
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getCellSelInfo()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 135
    :cond_15
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->get3GGeneralInfo()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 137
    :cond_16
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getGmmEmInfo()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method parseSecurityStatus(ILjava/lang/String;)[Ljava/lang/String;
    .locals 18
    .param p1, "type"    # I
    .param p2, "info"    # Ljava/lang/String;

    .line 1332
    move-object/from16 v0, p0

    move/from16 v1, p1

    move-object/from16 v2, p2

    const-string v3, "No Ciphering"

    const-string v4, "A5/1"

    const-string v5, "A5/2"

    const-string v6, "A5/3"

    const-string v7, "A5/4"

    const-string v8, "A5/5"

    const-string v9, "A5/6"

    const-string v10, "A5/7"

    filled-new-array/range {v3 .. v10}, [Ljava/lang/String;

    move-result-object v3

    .line 1334
    .local v3, "m2gCipher":[Ljava/lang/String;
    const-string v4, "No Ciphering"

    const-string v5, "GEA1"

    const-string v6, "GEA2"

    const-string v7, "GEA3"

    filled-new-array {v4, v5, v6, v7}, [Ljava/lang/String;

    move-result-object v5

    .line 1335
    .local v5, "m2gGprs":[Ljava/lang/String;
    const-string v6, "UEA0"

    const-string v7, "UEA1"

    const-string v8, ""

    const-string v9, "UEA2"

    filled-new-array {v4, v6, v7, v8, v9}, [Ljava/lang/String;

    move-result-object v4

    .line 1336
    .local v4, "m3gCipher":[Ljava/lang/String;
    const-string v6, "No Integrity"

    const-string v7, "UIA1"

    const-string v8, "UIA2"

    filled-new-array {v6, v7, v8}, [Ljava/lang/String;

    move-result-object v6

    .line 1337
    .local v6, "m3gIntegrity":[Ljava/lang/String;
    const-string v7, "EEA0(NULL)"

    const-string v8, "EEA1(SNOW3G)"

    const-string v9, "EEA2(AES)"

    const-string v10, "EEA3(ZUC)"

    filled-new-array {v7, v8, v9, v10}, [Ljava/lang/String;

    move-result-object v11

    .line 1339
    .local v11, "m4gEnasCipher":[Ljava/lang/String;
    const-string v12, "EIA0(NULL)"

    const-string v13, "EIA1(SNOW3G)"

    const-string v14, "EIA2(AES)"

    const-string v15, "EIA3(ZUC)"

    filled-new-array {v12, v13, v14, v15}, [Ljava/lang/String;

    move-result-object v16

    move-object/from16 v17, v16

    .line 1341
    .local v17, "m4gEnasIntegrity":[Ljava/lang/String;
    filled-new-array {v7, v8, v9, v10}, [Ljava/lang/String;

    move-result-object v7

    .line 1343
    .local v7, "m4gErrcCipher":[Ljava/lang/String;
    filled-new-array {v12, v13, v14, v15}, [Ljava/lang/String;

    move-result-object v8

    .line 1346
    .local v8, "m4gErrcIntegrity":[Ljava/lang/String;
    const-string v9, "---"

    filled-new-array {v9, v9}, [Ljava/lang/String;

    move-result-object v9

    .line 1347
    .local v9, "ret":[Ljava/lang/String;
    if-nez v2, :cond_0

    .line 1348
    return-object v9

    .line 1350
    :cond_0
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "NetworkInfo ------ Type is: "

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    const-string v12, "NetworkInfo/UrcParser"

    invoke-static {v12, v10}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 1351
    const-string v10, "NetworkInfo ------ Data is:\n"

    invoke-static {v12, v10}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 1352
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "\n"

    invoke-virtual {v10, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-static {v12, v10}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 1353
    const-string v10, "NetworkInfo ---------------------------"

    invoke-static {v12, v10}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 1354
    iput-object v2, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    .line 1355
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    iput-object v10, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mResult:Ljava/lang/StringBuilder;

    .line 1356
    const/4 v10, 0x0

    iput v10, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1360
    const/4 v12, 0x1

    if-ne v1, v12, :cond_2

    .line 1361
    add-int/lit16 v12, v10, 0x118

    iput v12, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1362
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFromByte()I

    move-result v12

    .line 1363
    .local v12, "cipherAlgo":I
    if-ltz v12, :cond_1

    array-length v13, v3

    if-ge v12, v13, :cond_1

    .line 1364
    aget-object v13, v3, v12

    aput-object v13, v9, v10

    move-object/from16 v15, v17

    goto/16 :goto_3

    .line 1363
    :cond_1
    move-object/from16 v15, v17

    goto/16 :goto_3

    .line 1366
    .end local v12    # "cipherAlgo":I
    :cond_2
    const/16 v13, 0x39

    if-ne v1, v13, :cond_4

    .line 1367
    add-int/lit8 v12, v10, 0x40

    iput v12, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1368
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFromByte()I

    move-result v12

    .line 1369
    .restart local v12    # "cipherAlgo":I
    if-ltz v12, :cond_3

    array-length v13, v5

    if-ge v12, v13, :cond_3

    .line 1370
    aget-object v13, v5, v12

    aput-object v13, v9, v10

    move-object/from16 v15, v17

    goto/16 :goto_3

    .line 1369
    :cond_3
    move-object/from16 v15, v17

    goto/16 :goto_3

    .line 1372
    .end local v12    # "cipherAlgo":I
    :cond_4
    sget v13, Lcom/mediatek/engineermode/networkinfo/Content;->SECURITY_CONFIGURATION_INDEX:I

    if-ne v1, v13, :cond_7

    .line 1373
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFromByte()I

    move-result v13

    .line 1374
    .local v13, "cipherAlgo":I
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFromByte()I

    move-result v14

    .line 1375
    .local v14, "integrityAlgo":I
    if-ltz v13, :cond_5

    array-length v15, v4

    if-ge v13, v15, :cond_5

    .line 1376
    aget-object v15, v4, v13

    aput-object v15, v9, v10

    .line 1378
    :cond_5
    if-ltz v14, :cond_6

    array-length v10, v6

    if-ge v14, v10, :cond_6

    .line 1379
    aget-object v10, v6, v14

    aput-object v10, v9, v12

    move-object/from16 v15, v17

    goto/16 :goto_3

    .line 1378
    :cond_6
    move-object/from16 v15, v17

    goto/16 :goto_3

    .line 1381
    .end local v13    # "cipherAlgo":I
    .end local v14    # "integrityAlgo":I
    :cond_7
    const/16 v13, 0xd9

    const-string v14, "N/A"

    if-ne v1, v13, :cond_c

    .line 1382
    iget v13, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit8 v13, v13, 0x4

    iput v13, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1383
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFromByte()I

    move-result v13

    .line 1384
    .local v13, "integrityAlgo":I
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFromByte()I

    move-result v12

    .line 1385
    .restart local v12    # "cipherAlgo":I
    if-ltz v12, :cond_8

    array-length v15, v7

    if-ge v12, v15, :cond_8

    .line 1386
    aget-object v15, v7, v12

    aput-object v15, v9, v10

    goto :goto_0

    .line 1387
    :cond_8
    const/16 v15, 0xff

    if-ne v12, v15, :cond_9

    .line 1388
    aput-object v14, v9, v10

    .line 1390
    :cond_9
    :goto_0
    if-ltz v13, :cond_a

    array-length v10, v8

    if-ge v13, v10, :cond_a

    .line 1391
    aget-object v10, v8, v13

    const/4 v15, 0x1

    aput-object v10, v9, v15

    move-object/from16 v15, v17

    goto :goto_3

    .line 1390
    :cond_a
    const/4 v15, 0x1

    .line 1392
    const/16 v10, 0xff

    if-ne v13, v10, :cond_b

    .line 1393
    aput-object v14, v9, v15

    move-object/from16 v15, v17

    goto :goto_3

    .line 1392
    :cond_b
    move-object/from16 v15, v17

    goto :goto_3

    .line 1395
    .end local v12    # "cipherAlgo":I
    .end local v13    # "integrityAlgo":I
    :cond_c
    const/16 v12, 0xf4

    if-ne v1, v12, :cond_11

    .line 1396
    iget v12, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    add-int/lit16 v12, v12, 0xb2

    iput v12, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    .line 1397
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFromByte()I

    move-result v12

    .line 1398
    .local v12, "integrityAlgo":I
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->readIntegerFromByte()I

    move-result v13

    .line 1399
    .local v13, "cipherAlgo":I
    if-ltz v13, :cond_d

    array-length v15, v11

    if-ge v13, v15, :cond_d

    .line 1400
    aget-object v15, v11, v13

    aput-object v15, v9, v10

    goto :goto_1

    .line 1401
    :cond_d
    const/16 v15, 0xff

    if-ne v13, v15, :cond_e

    .line 1402
    aput-object v14, v9, v10

    .line 1404
    :cond_e
    :goto_1
    if-ltz v12, :cond_10

    move-object/from16 v15, v17

    .end local v17    # "m4gEnasIntegrity":[Ljava/lang/String;
    .local v15, "m4gEnasIntegrity":[Ljava/lang/String;
    array-length v10, v15

    if-ge v12, v10, :cond_f

    .line 1405
    aget-object v10, v15, v12

    const/16 v16, 0x1

    aput-object v10, v9, v16

    goto :goto_3

    .line 1404
    :cond_f
    const/16 v16, 0x1

    goto :goto_2

    .end local v15    # "m4gEnasIntegrity":[Ljava/lang/String;
    .restart local v17    # "m4gEnasIntegrity":[Ljava/lang/String;
    :cond_10
    move-object/from16 v15, v17

    const/16 v16, 0x1

    .line 1406
    .end local v17    # "m4gEnasIntegrity":[Ljava/lang/String;
    .restart local v15    # "m4gEnasIntegrity":[Ljava/lang/String;
    :goto_2
    const/16 v10, 0xff

    if-ne v12, v10, :cond_12

    .line 1407
    aput-object v14, v9, v16

    goto :goto_3

    .line 1409
    .end local v12    # "integrityAlgo":I
    .end local v13    # "cipherAlgo":I
    .end local v15    # "m4gEnasIntegrity":[Ljava/lang/String;
    .restart local v17    # "m4gEnasIntegrity":[Ljava/lang/String;
    :cond_11
    move-object/from16 v15, v17

    .end local v17    # "m4gEnasIntegrity":[Ljava/lang/String;
    .restart local v15    # "m4gEnasIntegrity":[Ljava/lang/String;
    const/16 v12, 0xde

    if-ne v1, v12, :cond_12

    .line 1410
    iget-object v12, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mRawString:Ljava/lang/String;

    iget v13, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->mOffset:I

    invoke-direct {v0, v12, v13, v10}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->getValueFromByte(Ljava/lang/String;IZ)Ljava/lang/String;

    move-result-object v12

    aput-object v12, v9, v10

    .line 1412
    :cond_12
    :goto_3
    return-object v9
.end method
