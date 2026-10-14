.class synthetic Lcom/mediatek/lbs/em2/ui/LbsUtility$1;
.super Ljava/lang/Object;
.source "LbsUtility.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsUtility;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1008
    name = null
.end annotation


# static fields
.field static final synthetic $SwitchMap$com$mediatek$lbs$em2$ui$LbsUtility$GnssBand:[I


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 166
    invoke-static {}, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;->values()[Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    move-result-object v0

    array-length v0, v0

    new-array v0, v0, [I

    sput-object v0, Lcom/mediatek/lbs/em2/ui/LbsUtility$1;->$SwitchMap$com$mediatek$lbs$em2$ui$LbsUtility$GnssBand:[I

    :try_start_0
    sget-object v1, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;->GNSS_L1:Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    invoke-virtual {v1}, Ljava/lang/Enum;->ordinal()I

    move-result v1

    const/4 v2, 0x1

    aput v2, v0, v1
    :try_end_0
    .catch Ljava/lang/NoSuchFieldError; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :try_start_1
    sget-object v0, Lcom/mediatek/lbs/em2/ui/LbsUtility$1;->$SwitchMap$com$mediatek$lbs$em2$ui$LbsUtility$GnssBand:[I

    sget-object v1, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;->GNSS_L2:Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    invoke-virtual {v1}, Ljava/lang/Enum;->ordinal()I

    move-result v1

    const/4 v2, 0x2

    aput v2, v0, v1
    :try_end_1
    .catch Ljava/lang/NoSuchFieldError; {:try_start_1 .. :try_end_1} :catch_1

    :catch_1
    :try_start_2
    sget-object v0, Lcom/mediatek/lbs/em2/ui/LbsUtility$1;->$SwitchMap$com$mediatek$lbs$em2$ui$LbsUtility$GnssBand:[I

    sget-object v1, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;->GNSS_L5:Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    invoke-virtual {v1}, Ljava/lang/Enum;->ordinal()I

    move-result v1

    const/4 v2, 0x3

    aput v2, v0, v1
    :try_end_2
    .catch Ljava/lang/NoSuchFieldError; {:try_start_2 .. :try_end_2} :catch_2

    :catch_2
    :try_start_3
    sget-object v0, Lcom/mediatek/lbs/em2/ui/LbsUtility$1;->$SwitchMap$com$mediatek$lbs$em2$ui$LbsUtility$GnssBand:[I

    sget-object v1, Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;->GNSS_E6:Lcom/mediatek/lbs/em2/ui/LbsUtility$GnssBand;

    invoke-virtual {v1}, Ljava/lang/Enum;->ordinal()I

    move-result v1

    const/4 v2, 0x4

    aput v2, v0, v1
    :try_end_3
    .catch Ljava/lang/NoSuchFieldError; {:try_start_3 .. :try_end_3} :catch_3

    :catch_3
    return-void
.end method
