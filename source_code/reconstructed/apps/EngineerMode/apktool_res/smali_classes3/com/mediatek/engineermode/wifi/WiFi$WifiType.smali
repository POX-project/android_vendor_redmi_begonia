.class public final enum Lcom/mediatek/engineermode/wifi/WiFi$WifiType;
.super Ljava/lang/Enum;
.source "WiFi.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/wifi/WiFi;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "WifiType"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/mediatek/engineermode/wifi/WiFi$WifiType;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

.field public static final enum WIFI_6620:Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

.field public static final enum WIFI_6632:Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

.field public static final enum WIFI_FORMAT:Lcom/mediatek/engineermode/wifi/WiFi$WifiType;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    .line 109
    new-instance v0, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    const-string v1, "WIFI_6620"

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;->WIFI_6620:Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    .line 110
    new-instance v0, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    const-string v1, "WIFI_6632"

    const/4 v3, 0x1

    invoke-direct {v0, v1, v3}, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;->WIFI_6632:Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    .line 111
    new-instance v0, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    const-string v1, "WIFI_FORMAT"

    const/4 v4, 0x2

    invoke-direct {v0, v1, v4}, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;->WIFI_FORMAT:Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    .line 108
    const/4 v1, 0x3

    new-array v1, v1, [Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    sget-object v5, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;->WIFI_6620:Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    aput-object v5, v1, v2

    sget-object v2, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;->WIFI_6632:Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    aput-object v2, v1, v3

    aput-object v0, v1, v4

    sput-object v1, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;->$VALUES:[Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 108
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/mediatek/engineermode/wifi/WiFi$WifiType;
    .locals 1
    .param p0, "name"    # Ljava/lang/String;

    .line 108
    const-class v0, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    return-object v0
.end method

.method public static values()[Lcom/mediatek/engineermode/wifi/WiFi$WifiType;
    .locals 1

    .line 108
    sget-object v0, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;->$VALUES:[Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    invoke-virtual {v0}, [Lcom/mediatek/engineermode/wifi/WiFi$WifiType;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    return-object v0
.end method
