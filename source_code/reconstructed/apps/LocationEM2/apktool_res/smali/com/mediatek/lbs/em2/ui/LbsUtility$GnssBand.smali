.class final enum Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;
.super Ljava/lang/Enum;
.source "LbsUtility.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsUtility;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x401a
    name = "GnssBand"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

.field public static final enum GNSS_E6:Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

.field public static final enum GNSS_L1:Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

.field public static final enum GNSS_L2:Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

.field public static final enum GNSS_L5:Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;


# direct methods
.method static constructor <clinit>()V
    .locals 7

    .line 143
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    const-string v1, "GNSS_L1"

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;->GNSS_L1:Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    .line 144
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    const-string v1, "GNSS_L2"

    const/4 v3, 0x1

    invoke-direct {v0, v1, v3}, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;->GNSS_L2:Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    .line 145
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    const-string v1, "GNSS_L5"

    const/4 v4, 0x2

    invoke-direct {v0, v1, v4}, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;->GNSS_L5:Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    .line 146
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    const-string v1, "GNSS_E6"

    const/4 v5, 0x3

    invoke-direct {v0, v1, v5}, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;->GNSS_E6:Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    const/4 v1, 0x4

    new-array v1, v1, [Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    .line 142
    sget-object v6, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;->GNSS_L1:Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    aput-object v6, v1, v2

    sget-object v2, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;->GNSS_L2:Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;->GNSS_L5:Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    aput-object v2, v1, v4

    aput-object v0, v1, v5

    sput-object v1, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;->$VALUES:[Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 142
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;
    .locals 1

    .line 142
    const-class v0, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    return-object p0
.end method

.method public static values()[Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;
    .locals 1

    .line 142
    sget-object v0, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;->$VALUES:[Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    invoke-virtual {v0}, [Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    return-object v0
.end method
