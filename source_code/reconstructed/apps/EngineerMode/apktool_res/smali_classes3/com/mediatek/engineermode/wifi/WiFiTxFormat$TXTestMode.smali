.class final enum Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;
.super Ljava/lang/Enum;
.source "WiFiTxFormat.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/wifi/WiFiTxFormat;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4018
    name = "TXTestMode"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

.field public static final enum TM_100_PERCENT_DUTY:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

.field public static final enum TM_CONTINUES:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

.field public static final enum TM_CW_TONE:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;


# instance fields
.field private mName:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    .line 966
    new-instance v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    const-string v1, "TM_CONTINUES"

    const/4 v2, 0x0

    const-string v3, "continuous packet tx"

    invoke-direct {v0, v1, v2, v3}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->TM_CONTINUES:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    .line 967
    new-instance v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    const-string v1, "TM_100_PERCENT_DUTY"

    const/4 v3, 0x1

    const-string v4, "100% duty cycle"

    invoke-direct {v0, v1, v3, v4}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->TM_100_PERCENT_DUTY:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    .line 968
    new-instance v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    const-string v1, "TM_CW_TONE"

    const/4 v4, 0x2

    const-string v5, "CW tone"

    invoke-direct {v0, v1, v4, v5}, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->TM_CW_TONE:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    .line 965
    const/4 v1, 0x3

    new-array v1, v1, [Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    sget-object v5, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->TM_CONTINUES:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    aput-object v5, v1, v2

    sget-object v2, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->TM_100_PERCENT_DUTY:Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    aput-object v2, v1, v3

    aput-object v0, v1, v4

    sput-object v1, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->$VALUES:[Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;ILjava/lang/String;)V
    .locals 0
    .param p3, "name"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 970
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    .line 971
    iput-object p3, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->mName:Ljava/lang/String;

    .line 972
    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;
    .locals 1
    .param p0, "name"    # Ljava/lang/String;

    .line 965
    const-class v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    return-object v0
.end method

.method public static values()[Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;
    .locals 1

    .line 965
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->$VALUES:[Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    invoke-virtual {v0}, [Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;

    return-object v0
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 976
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiTxFormat$TXTestMode;->mName:Ljava/lang/String;

    return-object v0
.end method
