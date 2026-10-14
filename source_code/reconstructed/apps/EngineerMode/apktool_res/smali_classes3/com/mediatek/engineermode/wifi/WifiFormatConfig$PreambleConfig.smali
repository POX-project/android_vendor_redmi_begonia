.class final enum Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;
.super Ljava/lang/Enum;
.source "WifiFormatConfig.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/wifi/WifiFormatConfig;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4018
    name = "PreambleConfig"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

.field public static final enum PA_CCK:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

.field public static final enum PA_HE_ER:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

.field public static final enum PA_HE_MU:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

.field public static final enum PA_HE_SU:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

.field public static final enum PA_HE_TB:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

.field public static final enum PA_HT_GF:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

.field public static final enum PA_HT_MM:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

.field public static final enum PA_OFDM:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

.field public static final enum PA_VHT:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;


# instance fields
.field private mGI:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mIndex:I

.field private mName:Ljava/lang/String;

.field private mRateSupport:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 31

    .line 231
    new-instance v7, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    invoke-static {}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->access$000()Ljava/util/List;

    move-result-object v5

    const-string v0, "1M"

    const-string v1, "2M"

    const-string v2, "5.5M"

    const-string v3, "11M"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v6

    const-string v1, "PA_CCK"

    const/4 v2, 0x0

    const-string v3, "CCK"

    const/4 v4, 0x0

    move-object v0, v7

    invoke-direct/range {v0 .. v6}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;-><init>(Ljava/lang/String;ILjava/lang/String;ILjava/util/List;[Ljava/lang/String;)V

    sput-object v7, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->PA_CCK:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    .line 232
    new-instance v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    invoke-static {}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->access$000()Ljava/util/List;

    move-result-object v13

    const-string v1, "6M"

    const-string v2, "9M"

    const-string v3, "12M"

    const-string v4, "18M"

    const-string v5, "24M"

    const-string v6, "36M"

    const-string v7, "48M"

    const-string v8, "54M"

    filled-new-array/range {v1 .. v8}, [Ljava/lang/String;

    move-result-object v14

    const-string v9, "PA_OFDM"

    const/4 v10, 0x1

    const-string v11, "OFDM"

    const/4 v12, 0x1

    move-object v8, v0

    invoke-direct/range {v8 .. v14}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;-><init>(Ljava/lang/String;ILjava/lang/String;ILjava/util/List;[Ljava/lang/String;)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->PA_OFDM:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    .line 234
    new-instance v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    invoke-static {}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->access$000()Ljava/util/List;

    move-result-object v6

    const-string v7, "MCS0"

    const-string v8, "MCS1"

    const-string v9, "MCS2"

    const-string v10, "MCS3"

    const-string v11, "MCS4"

    const-string v12, "MCS5"

    const-string v13, "MCS6"

    const-string v14, "MCS7"

    const-string v15, "MCS8"

    const-string v16, "MCS9"

    const-string v17, "MCS10"

    const-string v18, "MCS11"

    const-string v19, "MCS12"

    const-string v20, "MCS13"

    const-string v21, "MCS14"

    const-string v22, "MCS15"

    const-string v23, "MCS32"

    filled-new-array/range {v7 .. v23}, [Ljava/lang/String;

    move-result-object v7

    const-string v2, "PA_HT_MM"

    const/4 v3, 0x2

    const-string v4, "HT_MM"

    const/4 v5, 0x2

    move-object v1, v0

    invoke-direct/range {v1 .. v7}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;-><init>(Ljava/lang/String;ILjava/lang/String;ILjava/util/List;[Ljava/lang/String;)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->PA_HT_MM:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    .line 237
    new-instance v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    invoke-static {}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->access$000()Ljava/util/List;

    move-result-object v13

    const-string v14, "MCS0"

    const-string v15, "MCS1"

    const-string v16, "MCS2"

    const-string v17, "MCS3"

    const-string v18, "MCS4"

    const-string v19, "MCS5"

    const-string v20, "MCS6"

    const-string v21, "MCS7"

    const-string v22, "MCS8"

    const-string v23, "MCS9"

    const-string v24, "MCS10"

    const-string v25, "MCS11"

    const-string v26, "MCS12"

    const-string v27, "MCS13"

    const-string v28, "MCS14"

    const-string v29, "MCS15"

    const-string v30, "MCS32"

    filled-new-array/range {v14 .. v30}, [Ljava/lang/String;

    move-result-object v14

    const-string v9, "PA_HT_GF"

    const/4 v10, 0x3

    const-string v11, "HT_GF"

    const/4 v12, 0x3

    move-object v8, v0

    invoke-direct/range {v8 .. v14}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;-><init>(Ljava/lang/String;ILjava/lang/String;ILjava/util/List;[Ljava/lang/String;)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->PA_HT_GF:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    .line 240
    new-instance v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    invoke-static {}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->access$000()Ljava/util/List;

    move-result-object v6

    const-string v7, "MCS0"

    const-string v8, "MCS1"

    const-string v9, "MCS2"

    const-string v10, "MCS3"

    const-string v11, "MCS4"

    const-string v12, "MCS5"

    const-string v13, "MCS6"

    const-string v14, "MCS7"

    const-string v15, "MCS8"

    const-string v16, "MCS9"

    const-string v17, "MCS10"

    const-string v18, "MCS11"

    filled-new-array/range {v7 .. v18}, [Ljava/lang/String;

    move-result-object v7

    const-string v2, "PA_VHT"

    const/4 v3, 0x4

    const-string v4, "VHT"

    const/4 v5, 0x4

    move-object v1, v0

    invoke-direct/range {v1 .. v7}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;-><init>(Ljava/lang/String;ILjava/lang/String;ILjava/util/List;[Ljava/lang/String;)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->PA_VHT:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    .line 243
    new-instance v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    invoke-static {}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->access$100()Ljava/util/List;

    move-result-object v13

    const-string v14, "MCS0"

    const-string v15, "MCS1"

    const-string v16, "MCS2"

    const-string v17, "MCS3"

    const-string v18, "MCS4"

    const-string v19, "MCS5"

    const-string v20, "MCS6"

    const-string v21, "MCS7"

    const-string v22, "MCS8"

    const-string v23, "MCS9"

    const-string v24, "MCS10"

    const-string v25, "MCS11"

    const-string v26, "MCS0 DCM"

    const-string v27, "MCS1 DCM"

    filled-new-array/range {v14 .. v27}, [Ljava/lang/String;

    move-result-object v14

    const-string v9, "PA_HE_SU"

    const/4 v10, 0x5

    const-string v11, "HE_SU"

    const/16 v12, 0x8

    move-object v8, v0

    invoke-direct/range {v8 .. v14}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;-><init>(Ljava/lang/String;ILjava/lang/String;ILjava/util/List;[Ljava/lang/String;)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->PA_HE_SU:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    .line 246
    new-instance v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    invoke-static {}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->access$100()Ljava/util/List;

    move-result-object v6

    const-string v7, "MCS0"

    const-string v8, "MCS1"

    const-string v9, "MCS2"

    const-string v10, "MCS3"

    const-string v11, "MCS4"

    const-string v12, "MCS5"

    const-string v13, "MCS6"

    const-string v14, "MCS7"

    const-string v15, "MCS8"

    const-string v16, "MCS9"

    const-string v17, "MCS10"

    const-string v18, "MCS11"

    const-string v19, "MCS0-242 DCM"

    const-string v20, "MCS1-242 DCM"

    const-string v21, "MCS0-106 DCM"

    filled-new-array/range {v7 .. v21}, [Ljava/lang/String;

    move-result-object v7

    const-string v2, "PA_HE_ER"

    const/4 v3, 0x6

    const-string v4, "HE_ER"

    const/16 v5, 0x9

    move-object v1, v0

    invoke-direct/range {v1 .. v7}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;-><init>(Ljava/lang/String;ILjava/lang/String;ILjava/util/List;[Ljava/lang/String;)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->PA_HE_ER:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    .line 249
    new-instance v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    invoke-static {}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->access$200()Ljava/util/List;

    move-result-object v13

    const-string v14, "MCS0"

    const-string v15, "MCS1"

    const-string v16, "MCS2"

    const-string v17, "MCS3"

    const-string v18, "MCS4"

    const-string v19, "MCS5"

    const-string v20, "MCS6"

    const-string v21, "MCS7"

    const-string v22, "MCS8"

    const-string v23, "MCS9"

    const-string v24, "MCS10"

    const-string v25, "MCS11"

    const-string v26, "MCS0 DCM"

    const-string v27, "MCS1 DCM"

    filled-new-array/range {v14 .. v27}, [Ljava/lang/String;

    move-result-object v14

    const-string v9, "PA_HE_TB"

    const/4 v10, 0x7

    const-string v11, "HE_TB"

    const/16 v12, 0xa

    move-object v8, v0

    invoke-direct/range {v8 .. v14}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;-><init>(Ljava/lang/String;ILjava/lang/String;ILjava/util/List;[Ljava/lang/String;)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->PA_HE_TB:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    .line 252
    new-instance v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    const-string v2, "PA_HE_MU"

    const/16 v3, 0x8

    const-string v4, "HE_MU"

    const/16 v5, 0xb

    const/4 v6, 0x0

    const/4 v7, 0x0

    move-object v1, v0

    invoke-direct/range {v1 .. v7}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;-><init>(Ljava/lang/String;ILjava/lang/String;ILjava/util/List;[Ljava/lang/String;)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->PA_HE_MU:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    .line 230
    const/16 v1, 0x9

    new-array v1, v1, [Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    sget-object v2, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->PA_CCK:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    const/4 v3, 0x0

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->PA_OFDM:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    const/4 v3, 0x1

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->PA_HT_MM:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    const/4 v3, 0x2

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->PA_HT_GF:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    const/4 v3, 0x3

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->PA_VHT:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    const/4 v3, 0x4

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->PA_HE_SU:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    const/4 v3, 0x5

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->PA_HE_ER:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    const/4 v3, 0x6

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->PA_HE_TB:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    const/4 v3, 0x7

    aput-object v2, v1, v3

    const/16 v2, 0x8

    aput-object v0, v1, v2

    sput-object v1, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->$VALUES:[Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;ILjava/lang/String;ILjava/util/List;[Ljava/lang/String;)V
    .locals 0
    .param p3, "name"    # Ljava/lang/String;
    .param p4, "index"    # I
    .param p6, "rateList"    # [Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "I",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;[",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 260
    .local p5, "giList":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    .line 261
    iput-object p3, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->mName:Ljava/lang/String;

    .line 262
    iput p4, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->mIndex:I

    .line 263
    iput-object p6, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->mRateSupport:[Ljava/lang/String;

    .line 264
    iput-object p5, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->mGI:Ljava/util/List;

    .line 265
    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;
    .locals 1
    .param p0, "name"    # Ljava/lang/String;

    .line 230
    const-class v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    return-object v0
.end method

.method public static values()[Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;
    .locals 1

    .line 230
    sget-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->$VALUES:[Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    invoke-virtual {v0}, [Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    return-object v0
.end method


# virtual methods
.method getGiList()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 276
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->mGI:Ljava/util/List;

    return-object v0
.end method

.method getIndex()I
    .locals 1

    .line 270
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->mIndex:I

    return v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 267
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->mName:Ljava/lang/String;

    return-object v0
.end method

.method getRateList()[Ljava/lang/String;
    .locals 1

    .line 273
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->mRateSupport:[Ljava/lang/String;

    return-object v0
.end method

.method is11AxItem()Z
    .locals 2

    .line 254
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->mIndex:I

    sget-object v1, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->PA_HE_SU:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->getIndex()I

    move-result v1

    if-lt v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 281
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->mName:Ljava/lang/String;

    return-object v0
.end method
