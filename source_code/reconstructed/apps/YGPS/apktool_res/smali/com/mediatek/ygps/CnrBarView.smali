.class public Lcom/mediatek/ygps/CnrBarView;
.super Landroid/view/View;
.source "CnrBarView.java"


# static fields
.field private static sTextPaint:Landroid/graphics/Paint;


# instance fields
.field private mBarInUsedPaint:Landroid/graphics/Paint;

.field private mBarNotInUsedPaint:Landroid/graphics/Paint;

.field private mCnr:F

.field private mInUsed:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    .line 19
    invoke-direct {p0, p1, v0}, Lcom/mediatek/ygps/CnrBarView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 24
    invoke-direct {p0, p1, p2}, Landroid/view/View;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 26
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/mediatek/ygps/CnrBarView;->mBarInUsedPaint:Landroid/graphics/Paint;

    .line 27
    sget-object p2, Landroid/graphics/Paint$Style;->FILL:Landroid/graphics/Paint$Style;

    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 28
    sget-object p1, Lcom/mediatek/ygps/CnrBarView;->sTextPaint:Landroid/graphics/Paint;

    if-nez p1, :cond_0

    .line 29
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    sput-object p1, Lcom/mediatek/ygps/CnrBarView;->sTextPaint:Landroid/graphics/Paint;

    const/high16 p2, 0x41f00000    # 30.0f

    .line 30
    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setTextSize(F)V

    .line 32
    :cond_0
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/mediatek/ygps/CnrBarView;->mBarNotInUsedPaint:Landroid/graphics/Paint;

    .line 33
    sget-object p2, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 34
    iget-object p0, p0, Lcom/mediatek/ygps/CnrBarView;->mBarNotInUsedPaint:Landroid/graphics/Paint;

    const/high16 p1, 0x40400000    # 3.0f

    invoke-virtual {p0, p1}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    return-void
.end method


# virtual methods
.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 8

    .line 49
    invoke-super {p0, p1}, Landroid/view/View;->onDraw(Landroid/graphics/Canvas;)V

    .line 50
    invoke-virtual {p0}, Landroid/view/View;->getWidth()I

    move-result v0

    int-to-float v0, v0

    iget v1, p0, Lcom/mediatek/ygps/CnrBarView;->mCnr:F

    mul-float/2addr v0, v1

    const/high16 v1, 0x42c80000    # 100.0f

    div-float v5, v0, v1

    invoke-virtual {p0}, Landroid/view/View;->getHeight()I

    move-result v0

    add-int/lit8 v0, v0, -0x3

    int-to-float v6, v0

    iget-boolean v0, p0, Lcom/mediatek/ygps/CnrBarView;->mInUsed:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/ygps/CnrBarView;->mBarInUsedPaint:Landroid/graphics/Paint;

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/mediatek/ygps/CnrBarView;->mBarNotInUsedPaint:Landroid/graphics/Paint;

    :goto_0
    move-object v7, v0

    const/4 v3, 0x0

    const/high16 v4, 0x40400000    # 3.0f

    move-object v2, p1

    invoke-virtual/range {v2 .. v7}, Landroid/graphics/Canvas;->drawRect(FFFFLandroid/graphics/Paint;)V

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    .line 51
    iget v2, p0, Lcom/mediatek/ygps/CnrBarView;->mCnr:F

    invoke-static {v2}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v2

    aput-object v2, v0, v1

    const-string v1, "%3.1f"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    const/high16 v1, 0x40a00000    # 5.0f

    invoke-virtual {p0}, Landroid/view/View;->getHeight()I

    move-result p0

    int-to-double v2, p0

    const-wide/high16 v4, 0x3ff8000000000000L    # 1.5

    mul-double/2addr v2, v4

    const-wide/high16 v4, 0x4000000000000000L    # 2.0

    div-double/2addr v2, v4

    double-to-float p0, v2

    sget-object v2, Lcom/mediatek/ygps/CnrBarView;->sTextPaint:Landroid/graphics/Paint;

    invoke-virtual {p1, v0, v1, p0, v2}, Landroid/graphics/Canvas;->drawText(Ljava/lang/String;FFLandroid/graphics/Paint;)V

    return-void
.end method

.method setValue(FIZ)V
    .locals 0

    .line 38
    iput p1, p0, Lcom/mediatek/ygps/CnrBarView;->mCnr:F

    if-eqz p3, :cond_0

    .line 40
    iget-object p1, p0, Lcom/mediatek/ygps/CnrBarView;->mBarInUsedPaint:Landroid/graphics/Paint;

    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setColor(I)V

    goto :goto_0

    .line 42
    :cond_0
    iget-object p1, p0, Lcom/mediatek/ygps/CnrBarView;->mBarNotInUsedPaint:Landroid/graphics/Paint;

    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setColor(I)V

    .line 44
    :goto_0
    iput-boolean p3, p0, Lcom/mediatek/ygps/CnrBarView;->mInUsed:Z

    return-void
.end method
