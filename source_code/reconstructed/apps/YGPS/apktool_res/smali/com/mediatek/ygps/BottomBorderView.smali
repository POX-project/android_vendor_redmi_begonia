.class public Lcom/mediatek/ygps/BottomBorderView;
.super Landroid/widget/TextView;
.source "BottomBorderView.java"


# instance fields
.field private mBottomPaint:Landroid/graphics/Paint;


# direct methods
.method public constructor <init>(Landroid/content/Context;I)V
    .locals 1

    const/4 v0, 0x0

    .line 15
    invoke-direct {p0, p1, v0}, Lcom/mediatek/ygps/BottomBorderView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 16
    new-instance p1, Landroid/graphics/Paint;

    invoke-direct {p1}, Landroid/graphics/Paint;-><init>()V

    iput-object p1, p0, Lcom/mediatek/ygps/BottomBorderView;->mBottomPaint:Landroid/graphics/Paint;

    .line 17
    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setColor(I)V

    .line 18
    iget-object p1, p0, Lcom/mediatek/ygps/BottomBorderView;->mBottomPaint:Landroid/graphics/Paint;

    const/high16 p2, 0x40000000    # 2.0f

    invoke-virtual {p1, p2}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    const/high16 p1, 0x41200000    # 10.0f

    .line 19
    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setTextSize(F)V

    const/16 p1, 0x11

    .line 20
    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setGravity(I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 24
    invoke-direct {p0, p1, p2}, Landroid/widget/TextView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method


# virtual methods
.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 7

    .line 31
    invoke-super {p0, p1}, Landroid/widget/TextView;->onDraw(Landroid/graphics/Canvas;)V

    .line 32
    invoke-virtual {p0}, Landroid/widget/TextView;->getHeight()I

    move-result v0

    add-int/lit8 v0, v0, -0x2

    int-to-float v3, v0

    invoke-virtual {p0}, Landroid/widget/TextView;->getWidth()I

    move-result v0

    int-to-float v4, v0

    invoke-virtual {p0}, Landroid/widget/TextView;->getHeight()I

    move-result v0

    add-int/lit8 v0, v0, -0x2

    int-to-float v5, v0

    iget-object v6, p0, Lcom/mediatek/ygps/BottomBorderView;->mBottomPaint:Landroid/graphics/Paint;

    const/4 v2, 0x0

    move-object v1, p1

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    return-void
.end method
