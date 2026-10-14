.class final enum Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;
.super Ljava/lang/Enum;
.source "WiFiTestActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/wifi/WiFiTestActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4018
    name = "EnumRfAtAntswp"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;

.field public static final enum RF_AT_ANTSWP_AUX:Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;

.field public static final enum RF_AT_ANTSWP_MAIN:Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    .line 107
    new-instance v0, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;

    const-string v1, "RF_AT_ANTSWP_MAIN"

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;->RF_AT_ANTSWP_MAIN:Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;

    .line 108
    new-instance v0, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;

    const-string v1, "RF_AT_ANTSWP_AUX"

    const/4 v3, 0x1

    invoke-direct {v0, v1, v3}, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;->RF_AT_ANTSWP_AUX:Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;

    .line 106
    const/4 v1, 0x2

    new-array v1, v1, [Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;

    sget-object v4, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;->RF_AT_ANTSWP_MAIN:Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;

    aput-object v4, v1, v2

    aput-object v0, v1, v3

    sput-object v1, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;->$VALUES:[Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 106
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;
    .locals 1
    .param p0, "name"    # Ljava/lang/String;

    .line 106
    const-class v0, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;

    return-object v0
.end method

.method public static values()[Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;
    .locals 1

    .line 106
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;->$VALUES:[Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;

    invoke-virtual {v0}, [Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/mediatek/engineermode/wifi/WiFiTestActivity$EnumRfAtAntswp;

    return-object v0
.end method
