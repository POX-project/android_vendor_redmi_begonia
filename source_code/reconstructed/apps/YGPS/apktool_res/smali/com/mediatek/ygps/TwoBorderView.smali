.class Lcom/mediatek/ygps/TwoBorderView;
.super Lcom/mediatek/ygps/BottomBorderView;
.source "BottomBorderView.java"


# static fields
.field private static sPaint:Landroid/graphics/Paint;


# direct methods
.method public constructor <init>(Landroid/content/Context;I)V
    .locals 0

    .line 39
    invoke-direct {p0, p1, p2}, Lcom/mediatek/ygps/BottomBorderView;-><init>(Landroid/content/Context;I)V

    .line 40
    sget-object p0, Lcom/mediatek/ygps/TwoBorderView;->sPaint:Landroid/graphics/Paint;

    if-nez p0, :cond_0

    .line 41
    new-instance p0, Landroid/graphics/Paint;

    invoke-direct {p0}, Landroid/graphics/Paint;-><init>()V

    sput-object p0, Lcom/mediatek/ygps/TwoBorderView;->sPaint:Landroid/graphics/Paint;

    const p1, -0xffff01

    .line 42
    invoke-virtual {p0, p1}, Landroid/graphics/Paint;->setColor(I)V

    .line 43
    sget-object p0, Lcom/mediatek/ygps/TwoBorderView;->sPaint:Landroid/graphics/Paint;

    const/high16 p1, 0x40000000    # 2.0f

    invoke-virtual {p0, p1}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    :cond_0
    return-void
.end method


# virtual methods
.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 7

    .line 53
    invoke-super {p0, p1}, Lcom/mediatek/ygps/BottomBorderView;->onDraw(Landroid/graphics/Canvas;)V

    .line 54
    invoke-virtual {p0}, Landroid/widget/TextView;->getWidth()I

    move-result v0

    add-int/lit8 v0, v0, -0x2

    int-to-float v2, v0

    invoke-virtual {p0}, Landroid/widget/TextView;->getWidth()I

    move-result v0

    add-int/lit8 v0, v0, -0x2

    int-to-float v4, v0

    invoke-virtual {p0}, Landroid/widget/TextView;->getHeight()I

    move-result p0

    int-to-float v5, p0

    sget-object v6, Lcom/mediatek/ygps/TwoBorderView;->sPaint:Landroid/graphics/Paint;

    const/4 v3, 0x0

    move-object v1, p1

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    return-void
.end method
