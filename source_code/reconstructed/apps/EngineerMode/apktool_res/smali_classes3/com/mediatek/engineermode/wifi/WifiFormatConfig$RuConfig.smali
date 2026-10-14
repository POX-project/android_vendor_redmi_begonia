.class final enum Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;
.super Ljava/lang/Enum;
.source "WifiFormatConfig.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/wifi/WifiFormatConfig;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4018
    name = "RuConfig"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

.field public static final enum RU_CONFIG_106by2:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

.field public static final enum RU_CONFIG_242by1:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

.field public static final enum RU_CONFIG_26by9:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

.field public static final enum RU_CONFIG_484by1:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

.field public static final enum RU_CONFIG_52by4:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

.field public static final enum RU_CONFIG_996by1:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;


# instance fields
.field private mAllocation:I

.field private mIndex:I

.field private mName:Ljava/lang/String;

.field private mOffset:I


# direct methods
.method static constructor <clinit>()V
    .locals 15

    .line 192
    new-instance v7, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    const-string v1, "RU_CONFIG_26by9"

    const/4 v2, 0x0

    const-string v3, "1:26*9"

    const/4 v4, 0x1

    const/4 v5, 0x0

    const/4 v6, 0x0

    move-object v0, v7

    invoke-direct/range {v0 .. v6}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;-><init>(Ljava/lang/String;ILjava/lang/String;III)V

    sput-object v7, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->RU_CONFIG_26by9:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    .line 193
    new-instance v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    const-string v9, "RU_CONFIG_52by4"

    const/4 v10, 0x1

    const-string v11, "6:52*4"

    const/4 v12, 0x6

    const/high16 v13, 0x1110000

    const/16 v14, 0x25

    move-object v8, v0

    invoke-direct/range {v8 .. v14}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;-><init>(Ljava/lang/String;ILjava/lang/String;III)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->RU_CONFIG_52by4:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    .line 194
    new-instance v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    const-string v2, "RU_CONFIG_106by2"

    const/4 v3, 0x2

    const-string v4, "12:106*2"

    const/16 v5, 0xc

    const/high16 v6, 0x1100000

    const/16 v7, 0x35

    move-object v1, v0

    invoke-direct/range {v1 .. v7}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;-><init>(Ljava/lang/String;ILjava/lang/String;III)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->RU_CONFIG_106by2:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    .line 195
    new-instance v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    const-string v9, "RU_CONFIG_242by1"

    const/4 v10, 0x3

    const-string v11, "13:242*1"

    const/16 v12, 0xd

    const/high16 v13, 0x11000000

    const/16 v14, 0x3d

    move-object v8, v0

    invoke-direct/range {v8 .. v14}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;-><init>(Ljava/lang/String;ILjava/lang/String;III)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->RU_CONFIG_242by1:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    .line 196
    new-instance v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    const-string v2, "RU_CONFIG_484by1"

    const/4 v3, 0x4

    const-string v4, "14:484*1"

    const/16 v5, 0xe

    const v6, 0x11001000

    const/16 v7, 0x41

    move-object v1, v0

    invoke-direct/range {v1 .. v7}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;-><init>(Ljava/lang/String;ILjava/lang/String;III)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->RU_CONFIG_484by1:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    .line 197
    new-instance v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    const-string v9, "RU_CONFIG_996by1"

    const/4 v10, 0x5

    const-string v11, "15:996*1"

    const/16 v12, 0xf

    const/high16 v13, 0x11010000

    const/16 v14, 0x43

    move-object v8, v0

    invoke-direct/range {v8 .. v14}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;-><init>(Ljava/lang/String;ILjava/lang/String;III)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->RU_CONFIG_996by1:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    .line 191
    const/4 v1, 0x6

    new-array v1, v1, [Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    sget-object v2, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->RU_CONFIG_26by9:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    const/4 v3, 0x0

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->RU_CONFIG_52by4:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    const/4 v3, 0x1

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->RU_CONFIG_106by2:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    const/4 v3, 0x2

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->RU_CONFIG_242by1:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    const/4 v3, 0x3

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->RU_CONFIG_484by1:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    const/4 v3, 0x4

    aput-object v2, v1, v3

    const/4 v2, 0x5

    aput-object v0, v1, v2

    sput-object v1, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->$VALUES:[Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;ILjava/lang/String;III)V
    .locals 0
    .param p3, "name"    # Ljava/lang/String;
    .param p4, "index"    # I
    .param p5, "allocation"    # I
    .param p6, "offset"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "III)V"
        }
    .end annotation

    .line 202
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    .line 203
    iput-object p3, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->mName:Ljava/lang/String;

    .line 204
    iput p4, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->mIndex:I

    .line 205
    iput p5, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->mAllocation:I

    .line 206
    iput p6, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->mOffset:I

    .line 207
    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;
    .locals 1
    .param p0, "name"    # Ljava/lang/String;

    .line 191
    const-class v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    return-object v0
.end method

.method public static values()[Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;
    .locals 1

    .line 191
    sget-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->$VALUES:[Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    invoke-virtual {v0}, [Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;

    return-object v0
.end method


# virtual methods
.method getAllocation()I
    .locals 1

    .line 209
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->mAllocation:I

    return v0
.end method

.method getIndex()I
    .locals 1

    .line 212
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->mIndex:I

    return v0
.end method

.method getOffset()I
    .locals 1

    .line 216
    iget v0, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->mOffset:I

    return v0
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 221
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;->mName:Ljava/lang/String;

    return-object v0
.end method
