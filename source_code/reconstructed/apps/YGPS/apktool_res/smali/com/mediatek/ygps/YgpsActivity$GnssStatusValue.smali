.class final enum Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;
.super Ljava/lang/Enum;
.source "YgpsActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/ygps/YgpsActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4018
    name = "GnssStatusValue"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

.field public static final enum GNSS_STATUS_CHANGE:Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

.field public static final enum GNSS_STATUS_FIRST_FIX:Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

.field public static final enum GNSS_STATUS_START:Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

.field public static final enum GNSS_STATUS_STOP:Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;


# direct methods
.method static constructor <clinit>()V
    .locals 7

    .line 281
    new-instance v0, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

    const-string v1, "GNSS_STATUS_START"

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;->GNSS_STATUS_START:Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

    .line 282
    new-instance v0, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

    const-string v1, "GNSS_STATUS_STOP"

    const/4 v3, 0x1

    invoke-direct {v0, v1, v3}, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;->GNSS_STATUS_STOP:Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

    .line 283
    new-instance v0, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

    const-string v1, "GNSS_STATUS_FIRST_FIX"

    const/4 v4, 0x2

    invoke-direct {v0, v1, v4}, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;->GNSS_STATUS_FIRST_FIX:Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

    .line 284
    new-instance v0, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

    const-string v1, "GNSS_STATUS_CHANGE"

    const/4 v5, 0x3

    invoke-direct {v0, v1, v5}, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;->GNSS_STATUS_CHANGE:Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

    const/4 v1, 0x4

    new-array v1, v1, [Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

    .line 280
    sget-object v6, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;->GNSS_STATUS_START:Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

    aput-object v6, v1, v2

    sget-object v2, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;->GNSS_STATUS_STOP:Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;->GNSS_STATUS_FIRST_FIX:Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

    aput-object v2, v1, v4

    aput-object v0, v1, v5

    sput-object v1, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;->$VALUES:[Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 280
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;
    .locals 1

    .line 280
    const-class v0, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

    return-object p0
.end method

.method public static values()[Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;
    .locals 1

    .line 280
    sget-object v0, Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;->$VALUES:[Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

    invoke-virtual {v0}, [Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/mediatek/ygps/YgpsActivity$GnssStatusValue;

    return-object v0
.end method
