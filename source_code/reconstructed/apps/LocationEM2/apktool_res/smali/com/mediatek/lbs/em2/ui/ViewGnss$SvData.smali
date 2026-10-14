.class Lcom/mediatek/lbs/em2/ui/ViewGnss$SvData;
.super Ljava/lang/Object;
.source "ViewGnss.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/ViewGnss;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "SvData"
.end annotation


# instance fields
.field azi:F

.field color:I

.field ele:F

.field freq:F

.field snr:F

.field svid:I

.field type:I

.field used:Z


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/ViewGnss;)V
    .locals 0

    .line 32
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
