.class Lcom/mediatek/ygps/SatelLocationView$Point;
.super Ljava/lang/Object;
.source "SatelLocationView.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/ygps/SatelLocationView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "Point"
.end annotation


# instance fields
.field mCoX:F

.field mCoY:F


# direct methods
.method constructor <init>()V
    .locals 0

    .line 63
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method constructor <init>(FF)V
    .locals 0

    .line 64
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 65
    iput p1, p0, Lcom/mediatek/ygps/SatelLocationView$Point;->mCoX:F

    .line 66
    iput p2, p0, Lcom/mediatek/ygps/SatelLocationView$Point;->mCoY:F

    return-void
.end method
