.class public Lcom/mediatek/lbs/em2/ui/ViewNmea;
.super Landroid/view/View;
.source "ViewNmea.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;
    }
.end annotation


# instance fields
.field private mBackground:Landroid/graphics/Paint;

.field private mColoredText:Landroid/graphics/Paint;

.field private mGreen:Landroid/graphics/Paint;

.field private mLine:Landroid/graphics/Paint;

.field mPage:I

.field private mRed:Landroid/graphics/Paint;

.field mSatInView:I

.field mSvList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;",
            ">;"
        }
    .end annotation
.end field

.field private mText:Landroid/graphics/Paint;

.field mTextSize:F


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    const/4 v0, 0x0

    const/4 v1, 0x0

    .line 126
    invoke-direct {p0, p1, v0, v1}, Lcom/mediatek/lbs/em2/ui/ViewNmea;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    .line 129
    invoke-direct {p0, p1, p2, v0}, Lcom/mediatek/lbs/em2/ui/ViewNmea;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 3

    .line 132
    invoke-direct {p0, p1, p2, p3}, Landroid/view/View;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/high16 p1, 0x41a00000    # 20.0f

    .line 30
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mTextSize:F

    const/4 p2, 0x0

    .line 31
    iput p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mSatInView:I

    .line 32
    new-instance p3, Ljava/util/ArrayList;

    invoke-direct {p3}, Ljava/util/ArrayList;-><init>()V

    iput-object p3, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mSvList:Ljava/util/ArrayList;

    .line 34
    iput p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mPage:I

    .line 153
    new-instance p2, Landroid/graphics/Paint;

    invoke-direct {p2}, Landroid/graphics/Paint;-><init>()V

    iput-object p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mBackground:Landroid/graphics/Paint;

    const p3, -0xcccccd

    .line 154
    invoke-virtual {p2, p3}, Landroid/graphics/Paint;->setColor(I)V

    .line 156
    new-instance p2, Landroid/graphics/Paint;

    invoke-direct {p2}, Landroid/graphics/Paint;-><init>()V

    iput-object p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mLine:Landroid/graphics/Paint;

    const/4 p3, -0x1

    .line 157
    invoke-virtual {p2, p3}, Landroid/graphics/Paint;->setColor(I)V

    .line 158
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mLine:Landroid/graphics/Paint;

    const/4 v0, 0x1

    invoke-virtual {p2, v0}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 159
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mLine:Landroid/graphics/Paint;

    sget-object v1, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {p2, v1}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 160
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mLine:Landroid/graphics/Paint;

    const/high16 v1, 0x3f800000    # 1.0f

    invoke-virtual {p2, v1}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    .line 162
    new-instance p2, Landroid/graphics/Paint;

    invoke-direct {p2}, Landroid/graphics/Paint;-><init>()V

    iput-object p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mColoredText:Landroid/graphics/Paint;

    .line 163
    invoke-virtual {p2, p3}, Landroid/graphics/Paint;->setColor(I)V

    .line 164
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mColoredText:Landroid/graphics/Paint;

    invoke-virtual {p2, v0}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 165
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mColoredText:Landroid/graphics/Paint;

    sget-object v2, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {p2, v2}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 166
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mColoredText:Landroid/graphics/Paint;

    const/high16 v2, 0x40000000    # 2.0f

    invoke-virtual {p2, v2}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    .line 168
    new-instance p2, Landroid/graphics/Paint;

    invoke-direct {p2}, Landroid/graphics/Paint;-><init>()V

    iput-object p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mRed:Landroid/graphics/Paint;

    const/high16 v2, -0x10010000

    .line 169
    invoke-virtual {p2, v2}, Landroid/graphics/Paint;->setColor(I)V

    .line 170
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mRed:Landroid/graphics/Paint;

    invoke-virtual {p2, v0}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 171
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mRed:Landroid/graphics/Paint;

    sget-object v2, Landroid/graphics/Paint$Style;->FILL_AND_STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {p2, v2}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 172
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mRed:Landroid/graphics/Paint;

    invoke-virtual {p2, v1}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    .line 174
    new-instance p2, Landroid/graphics/Paint;

    invoke-direct {p2}, Landroid/graphics/Paint;-><init>()V

    iput-object p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mGreen:Landroid/graphics/Paint;

    const v2, -0x44ff4500

    .line 175
    invoke-virtual {p2, v2}, Landroid/graphics/Paint;->setColor(I)V

    .line 176
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mGreen:Landroid/graphics/Paint;

    invoke-virtual {p2, v0}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 177
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mGreen:Landroid/graphics/Paint;

    sget-object v2, Landroid/graphics/Paint$Style;->FILL:Landroid/graphics/Paint$Style;

    invoke-virtual {p2, v2}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 178
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mGreen:Landroid/graphics/Paint;

    invoke-virtual {p2, v1}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    .line 180
    new-instance p2, Landroid/graphics/Paint;

    invoke-direct {p2}, Landroid/graphics/Paint;-><init>()V

    iput-object p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mText:Landroid/graphics/Paint;

    .line 181
    invoke-virtual {p2, p3}, Landroid/graphics/Paint;->setColor(I)V

    .line 182
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mText:Landroid/graphics/Paint;

    invoke-virtual {p2, v0}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 183
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mText:Landroid/graphics/Paint;

    sget-object p3, Landroid/graphics/Paint$Style;->FILL:Landroid/graphics/Paint$Style;

    invoke-virtual {p2, p3}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 184
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mText:Landroid/graphics/Paint;

    invoke-virtual {p2, v1}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    .line 185
    iget-object p2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mText:Landroid/graphics/Paint;

    sget-object p3, Landroid/graphics/Paint$Align;->CENTER:Landroid/graphics/Paint$Align;

    invoke-virtual {p2, p3}, Landroid/graphics/Paint;->setTextAlign(Landroid/graphics/Paint$Align;)V

    .line 186
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mText:Landroid/graphics/Paint;

    invoke-virtual {p0, p1}, Landroid/graphics/Paint;->setTextSize(F)V

    return-void
.end method

.method private static checkCn(F)F
    .locals 2

    const/high16 v0, 0x42480000    # 50.0f

    cmpl-float v1, p0, v0

    if-lez v1, :cond_0

    return v0

    :cond_0
    return p0
.end method

.method private static checkEle(F)F
    .locals 2

    const/high16 v0, 0x42b40000    # 90.0f

    cmpl-float v1, p0, v0

    if-lez v1, :cond_0

    return v0

    :cond_0
    const/4 v0, 0x0

    cmpg-float v1, p0, v0

    if-gez v1, :cond_1

    return v0

    :cond_1
    return p0
.end method

.method private draw(Landroid/graphics/Canvas;FF)V
    .locals 10

    cmpl-float v0, p2, p3

    if-lez v0, :cond_0

    move v0, p3

    goto :goto_0

    :cond_0
    move v0, p2

    :goto_0
    const/high16 v1, 0x447a0000    # 1000.0f

    div-float v1, v0, v1

    const/high16 v2, 0x41f00000    # 30.0f

    mul-float/2addr v1, v2

    .line 233
    iput v1, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mTextSize:F

    .line 234
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mText:Landroid/graphics/Paint;

    invoke-virtual {v2, v1}, Landroid/graphics/Paint;->setTextSize(F)V

    .line 236
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "w="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    const-string v2, " h="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    const-string v2, " min="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    const-string v0, " mTextSize="

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mTextSize:F

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/ViewNmea;->log(Ljava/lang/String;)V

    const/4 v3, 0x0

    const/high16 v0, 0x40400000    # 3.0f

    mul-float/2addr v0, p3

    const/high16 v1, 0x40800000    # 4.0f

    div-float/2addr v0, v1

    move-object v1, p0

    move-object v2, p1

    move v4, v0

    move v5, p2

    move v6, p3

    .line 238
    invoke-direct/range {v1 .. v6}, Lcom/mediatek/lbs/em2/ui/ViewNmea;->drawSignals(Landroid/graphics/Canvas;FFFF)V

    .line 239
    iget v7, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mTextSize:F

    sub-float v8, p2, v7

    sub-float v9, v0, v7

    move-object v4, p0

    move-object v5, p1

    move v6, v7

    invoke-direct/range {v4 .. v9}, Lcom/mediatek/lbs/em2/ui/ViewNmea;->drawGpsView(Landroid/graphics/Canvas;FFFF)V

    return-void
.end method

.method private static drawCircleAndText(Landroid/graphics/Canvas;Ljava/lang/String;FFLandroid/graphics/Paint;Landroid/graphics/Paint;)V
    .locals 2

    .line 200
    invoke-static {p5}, Lcom/mediatek/lbs/em2/ui/ViewNmea;->getHeight(Landroid/graphics/Paint;)F

    move-result v0

    const v1, 0x3f99999a    # 1.2f

    mul-float/2addr v0, v1

    invoke-virtual {p0, p2, p3, v0, p4}, Landroid/graphics/Canvas;->drawCircle(FFFLandroid/graphics/Paint;)V

    .line 201
    invoke-static {p0, p1, p2, p3, p5}, Lcom/mediatek/lbs/em2/ui/ViewNmea;->drawTextInCenter(Landroid/graphics/Canvas;Ljava/lang/String;FFLandroid/graphics/Paint;)V

    return-void
.end method

.method private drawGpsView(Landroid/graphics/Canvas;FFFF)V
    .locals 10

    sub-float/2addr p4, p2

    sub-float/2addr p5, p3

    cmpg-float v0, p4, p5

    if-gez v0, :cond_0

    move v0, p4

    goto :goto_0

    :cond_0
    move v0, p5

    :goto_0
    const/high16 v1, 0x40000000    # 2.0f

    div-float/2addr p4, v1

    add-float/2addr p4, p2

    div-float/2addr p5, v1

    add-float/2addr p5, p3

    const/high16 p2, 0x40c00000    # 6.0f

    div-float p2, v0, p2

    const/high16 p3, 0x40400000    # 3.0f

    mul-float/2addr p3, p2

    .line 250
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mLine:Landroid/graphics/Paint;

    invoke-virtual {p1, p4, p5, p3, v2}, Landroid/graphics/Canvas;->drawCircle(FFFLandroid/graphics/Paint;)V

    mul-float p3, p2, v1

    .line 251
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mLine:Landroid/graphics/Paint;

    invoke-virtual {p1, p4, p5, p3, v2}, Landroid/graphics/Canvas;->drawCircle(FFFLandroid/graphics/Paint;)V

    const/high16 p3, 0x3f800000    # 1.0f

    mul-float/2addr p2, p3

    .line 252
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mLine:Landroid/graphics/Paint;

    invoke-virtual {p1, p4, p5, p2, v2}, Landroid/graphics/Canvas;->drawCircle(FFFLandroid/graphics/Paint;)V

    div-float/2addr v0, v1

    sub-float v3, p4, v0

    add-float v5, p4, v0

    .line 253
    iget-object v7, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mLine:Landroid/graphics/Paint;

    move-object v2, p1

    move v4, p5

    move v6, p5

    invoke-virtual/range {v2 .. v7}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    sub-float v4, p5, v0

    add-float v6, p5, v0

    .line 254
    iget-object v7, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mLine:Landroid/graphics/Paint;

    move v3, p4

    move v5, p4

    invoke-virtual/range {v2 .. v7}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    const/4 p2, 0x0

    .line 256
    :goto_1
    iget v1, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mSatInView:I

    if-ge p2, v1, :cond_2

    .line 257
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mSvList:Ljava/util/ArrayList;

    invoke-virtual {v1, p2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;

    .line 258
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, ""

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, v1, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;->svid:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 259
    iget v2, v1, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;->ele:F

    invoke-static {v2}, Lcom/mediatek/lbs/em2/ui/ViewNmea;->checkEle(F)F

    move-result v2

    .line 260
    iget v3, v1, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;->azi:F

    .line 261
    iget-boolean v4, v1, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;->used:Z

    .line 262
    iget-object v6, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mColoredText:Landroid/graphics/Paint;

    iget v1, v1, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;->color:I

    invoke-virtual {v6, v1}, Landroid/graphics/Paint;->setColor(I)V

    const/high16 v1, 0x42b40000    # 90.0f

    div-float/2addr v2, v1

    sub-float v1, p3, v2

    mul-float/2addr v1, v0

    float-to-double v2, v3

    const-wide v6, 0x400921fb54442d18L    # Math.PI

    mul-double/2addr v2, v6

    const-wide v6, 0x4066800000000000L    # 180.0

    div-double/2addr v2, v6

    .line 265
    invoke-static {v2, v3}, Ljava/lang/Math;->sin(D)D

    move-result-wide v6

    double-to-float v6, v6

    mul-float/2addr v6, v1

    .line 266
    invoke-static {v2, v3}, Ljava/lang/Math;->cos(D)D

    move-result-wide v2

    double-to-float v2, v2

    neg-float v2, v2

    mul-float/2addr v2, v1

    if-eqz v4, :cond_1

    .line 270
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mGreen:Landroid/graphics/Paint;

    goto :goto_2

    .line 272
    :cond_1
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mRed:Landroid/graphics/Paint;

    :goto_2
    move-object v8, v1

    add-float v1, p4, v6

    add-float/2addr v2, p5

    .line 274
    iget-object v9, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mText:Landroid/graphics/Paint;

    move-object v4, p1

    move v6, v1

    move v7, v2

    invoke-static/range {v4 .. v9}, Lcom/mediatek/lbs/em2/ui/ViewNmea;->drawCircleAndText(Landroid/graphics/Canvas;Ljava/lang/String;FFLandroid/graphics/Paint;Landroid/graphics/Paint;)V

    .line 275
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mText:Landroid/graphics/Paint;

    invoke-static {v3}, Lcom/mediatek/lbs/em2/ui/ViewNmea;->getHeight(Landroid/graphics/Paint;)F

    move-result v3

    const v4, 0x3f99999a    # 1.2f

    mul-float/2addr v3, v4

    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mColoredText:Landroid/graphics/Paint;

    invoke-virtual {p1, v1, v2, v3, v4}, Landroid/graphics/Canvas;->drawCircle(FFFLandroid/graphics/Paint;)V

    add-int/lit8 p2, p2, 0x1

    goto :goto_1

    :cond_2
    return-void
.end method

.method private drawSignals(Landroid/graphics/Canvas;FFFF)V
    .locals 21

    move-object/from16 v0, p0

    move-object/from16 v7, p1

    sub-float v1, p4, p2

    sub-float v2, p5, p3

    const/high16 v3, 0x41800000    # 16.0f

    div-float v8, v1, v3

    .line 283
    iget v1, v0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mTextSize:F

    sub-float/2addr v2, v1

    const/high16 v3, 0x42480000    # 50.0f

    div-float v9, v2, v3

    sub-float v10, p5, v1

    .line 285
    iget v1, v0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mSatInView:I

    iget v2, v0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mPage:I

    add-int/lit8 v3, v2, 0x1

    const/16 v11, 0x10

    mul-int/2addr v3, v11

    if-le v1, v3, :cond_0

    move v1, v11

    goto :goto_0

    :cond_0
    mul-int/2addr v2, v11

    sub-int/2addr v1, v2

    :goto_0
    const/4 v12, 0x0

    if-gez v1, :cond_1

    move v13, v12

    goto :goto_1

    :cond_1
    move v13, v1

    .line 291
    :goto_1
    iget-object v6, v0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mLine:Landroid/graphics/Paint;

    move-object/from16 v1, p1

    move/from16 v2, p2

    move v3, v10

    move/from16 v4, p4

    move v5, v10

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    move v1, v12

    :goto_2
    if-ge v1, v13, :cond_3

    .line 294
    iget v2, v0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mPage:I

    mul-int/2addr v2, v11

    add-int/2addr v2, v1

    .line 295
    iget-object v3, v0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mSvList:Ljava/util/ArrayList;

    invoke-virtual {v3, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;

    .line 296
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, ""

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, v2, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;->svid:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    .line 297
    iget v15, v2, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;->snr:F

    .line 298
    iget-boolean v3, v2, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;->used:Z

    .line 299
    iget-object v4, v0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mColoredText:Landroid/graphics/Paint;

    iget v2, v2, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;->color:I

    invoke-virtual {v4, v2}, Landroid/graphics/Paint;->setColor(I)V

    int-to-float v2, v1

    mul-float v16, v2, v8

    const/high16 v17, 0x40000000    # 2.0f

    div-float v2, v8, v17

    add-float v6, v16, v2

    if-eqz v3, :cond_2

    .line 305
    iget-object v2, v0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mGreen:Landroid/graphics/Paint;

    goto :goto_3

    .line 307
    :cond_2
    iget-object v2, v0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mRed:Landroid/graphics/Paint;

    :goto_3
    move-object/from16 v18, v2

    .line 309
    invoke-static {v15}, Lcom/mediatek/lbs/em2/ui/ViewNmea;->checkCn(F)F

    move-result v2

    mul-float/2addr v2, v9

    sub-float v3, v10, v2

    add-int/lit8 v5, v1, 0x1

    int-to-float v1, v5

    mul-float v19, v1, v8

    move-object/from16 v1, p1

    move/from16 v2, v16

    move/from16 v4, v19

    move/from16 v20, v5

    move v5, v10

    move v11, v6

    move-object/from16 v6, v18

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawRect(FFFFLandroid/graphics/Paint;)V

    .line 310
    invoke-static {v15}, Lcom/mediatek/lbs/em2/ui/ViewNmea;->checkCn(F)F

    move-result v1

    mul-float/2addr v1, v9

    sub-float v3, v10, v1

    iget-object v6, v0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mColoredText:Landroid/graphics/Paint;

    move-object/from16 v1, p1

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawRect(FFFFLandroid/graphics/Paint;)V

    .line 313
    iget v1, v0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mTextSize:F

    div-float v1, v1, v17

    add-float/2addr v1, v10

    iget-object v2, v0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mText:Landroid/graphics/Paint;

    invoke-static {v7, v14, v11, v1, v2}, Lcom/mediatek/lbs/em2/ui/ViewNmea;->drawTextInCenter(Landroid/graphics/Canvas;Ljava/lang/String;FFLandroid/graphics/Paint;)V

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    .line 316
    invoke-static {v15}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v2

    aput-object v2, v1, v12

    const-string v2, "%.01f"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    iget v2, v0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mTextSize:F

    div-float v2, v2, v17

    sub-float v2, v10, v2

    iget-object v3, v0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mText:Landroid/graphics/Paint;

    invoke-static {v7, v1, v11, v2, v3}, Lcom/mediatek/lbs/em2/ui/ViewNmea;->drawTextInCenter(Landroid/graphics/Canvas;Ljava/lang/String;FFLandroid/graphics/Paint;)V

    move/from16 v1, v20

    const/16 v11, 0x10

    goto/16 :goto_2

    :cond_3
    return-void
.end method

.method private static drawTextInCenter(Landroid/graphics/Canvas;Ljava/lang/String;FFLandroid/graphics/Paint;)V
    .locals 2

    .line 195
    invoke-static {p4}, Lcom/mediatek/lbs/em2/ui/ViewNmea;->getHeight(Landroid/graphics/Paint;)F

    move-result v0

    const/high16 v1, 0x40000000    # 2.0f

    div-float/2addr v0, v1

    add-float/2addr p3, v0

    invoke-virtual {p0, p1, p2, p3, p4}, Landroid/graphics/Canvas;->drawText(Ljava/lang/String;FFLandroid/graphics/Paint;)V

    return-void
.end method

.method private static getHeight(Landroid/graphics/Paint;)F
    .locals 1

    .line 190
    invoke-virtual {p0}, Landroid/graphics/Paint;->ascent()F

    move-result v0

    invoke-virtual {p0}, Landroid/graphics/Paint;->descent()F

    move-result p0

    add-float/2addr v0, p0

    neg-float p0, v0

    return p0
.end method

.method private getSvType(I)I
    .locals 0

    const/16 p0, 0xc8

    if-le p1, p0, :cond_0

    const/4 p0, 0x5

    return p0

    :cond_0
    const/16 p0, 0x40

    if-le p1, p0, :cond_1

    const/4 p0, 0x3

    return p0

    :cond_1
    const/4 p0, 0x1

    if-lez p1, :cond_2

    :cond_2
    return p0
.end method

.method private log(Ljava/lang/String;)V
    .locals 0

    const-string p0, "LocationEM"

    .line 322
    invoke-static {p0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method private sortByTypeAndSvidInView()V
    .locals 11

    .line 84
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mSatInView:I

    div-int/lit8 v1, v0, 0x10

    const/16 v2, 0x10

    .line 85
    rem-int/2addr v0, v2

    if-eqz v0, :cond_0

    add-int/lit8 v1, v1, 0x1

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-ge v0, v1, :cond_6

    .line 90
    iget v3, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mSatInView:I

    add-int/lit8 v4, v0, 0x1

    mul-int/lit8 v5, v4, 0x10

    if-le v3, v5, :cond_1

    move v3, v2

    goto :goto_1

    :cond_1
    mul-int/lit8 v5, v0, 0x10

    sub-int/2addr v3, v5

    :goto_1
    mul-int/lit8 v0, v0, 0x10

    move v5, v0

    :goto_2
    add-int v6, v0, v3

    if-ge v5, v6, :cond_5

    .line 93
    iget-object v6, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mSvList:Ljava/util/ArrayList;

    invoke-virtual {v6, v5}, Ljava/util/ArrayList;->remove(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;

    move v7, v0

    :goto_3
    if-ge v7, v5, :cond_4

    .line 96
    iget-object v8, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mSvList:Ljava/util/ArrayList;

    invoke-virtual {v8, v7}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;

    .line 97
    iget v9, v6, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;->type:I

    iget v10, v8, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;->type:I

    if-ge v9, v10, :cond_2

    goto :goto_4

    :cond_2
    if-ne v9, v10, :cond_3

    .line 99
    iget v9, v6, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;->svid:I

    iget v8, v8, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;->svid:I

    if-ge v9, v8, :cond_3

    goto :goto_4

    :cond_3
    add-int/lit8 v7, v7, 0x1

    goto :goto_3

    .line 103
    :cond_4
    :goto_4
    iget-object v8, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mSvList:Ljava/util/ArrayList;

    invoke-virtual {v8, v7, v6}, Ljava/util/ArrayList;->add(ILjava/lang/Object;)V

    add-int/lit8 v5, v5, 0x1

    goto :goto_2

    :cond_5
    move v0, v4

    goto :goto_0

    :cond_6
    return-void
.end method


# virtual methods
.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 2

    .line 223
    invoke-super {p0, p1}, Landroid/view/View;->onDraw(Landroid/graphics/Canvas;)V

    .line 225
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mBackground:Landroid/graphics/Paint;

    invoke-virtual {p1, v0}, Landroid/graphics/Canvas;->drawPaint(Landroid/graphics/Paint;)V

    .line 227
    invoke-virtual {p0}, Landroid/view/View;->getWidth()I

    move-result v0

    int-to-float v0, v0

    invoke-virtual {p0}, Landroid/view/View;->getHeight()I

    move-result v1

    int-to-float v1, v1

    invoke-direct {p0, p1, v0, v1}, Lcom/mediatek/lbs/em2/ui/ViewNmea;->draw(Landroid/graphics/Canvas;FF)V

    return-void
.end method

.method public setDisplayPage(I)V
    .locals 0

    .line 79
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mPage:I

    .line 80
    invoke-virtual {p0}, Landroid/view/View;->invalidate()V

    return-void
.end method

.method public setGpsStatus(Ljava/util/ArrayList;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;",
            ">;)V"
        }
    .end annotation

    .line 49
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mSvList:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 50
    invoke-virtual {p1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p1

    const/4 v0, 0x0

    move v1, v0

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;

    const/16 v3, 0x40

    if-lt v1, v3, :cond_0

    const-string p1, "ERR: the number of satellite is over 64"

    .line 52
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/ViewNmea;->log(Ljava/lang/String;)V

    goto :goto_3

    .line 55
    :cond_0
    new-instance v3, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;

    invoke-direct {v3, p0}, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;-><init>(Lcom/mediatek/lbs/em2/ui/ViewNmea;)V

    .line 56
    iget v4, v2, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mPrn:I

    iput v4, v3, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;->svid:I

    .line 57
    iget v5, v2, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mSnr:F

    iput v5, v3, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;->snr:F

    .line 58
    iget v5, v2, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mElevation:F

    iput v5, v3, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;->ele:F

    .line 59
    iget v5, v2, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mAzimuth:F

    iput v5, v3, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;->azi:F

    .line 60
    iget-boolean v5, v2, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mUsedInFix:Z

    iput-boolean v5, v3, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;->used:Z

    .line 61
    invoke-direct {p0, v4}, Lcom/mediatek/lbs/em2/ui/ViewNmea;->getSvType(I)I

    move-result v4

    iput v4, v3, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;->type:I

    .line 62
    iget v2, v2, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mColor:I

    iput v2, v3, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;->color:I

    move v2, v0

    :goto_1
    if-ge v2, v1, :cond_2

    .line 66
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mSvList:Ljava/util/ArrayList;

    invoke-virtual {v4, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;

    .line 67
    iget v5, v3, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;->snr:F

    iget v4, v4, Lcom/mediatek/lbs/em2/ui/ViewNmea$SvData;->snr:F

    cmpl-float v4, v5, v4

    if-lez v4, :cond_1

    goto :goto_2

    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    .line 70
    :cond_2
    :goto_2
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mSvList:Ljava/util/ArrayList;

    invoke-virtual {v4, v2, v3}, Ljava/util/ArrayList;->add(ILjava/lang/Object;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 73
    :cond_3
    :goto_3
    iput v1, p0, Lcom/mediatek/lbs/em2/ui/ViewNmea;->mSatInView:I

    .line 74
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/ViewNmea;->sortByTypeAndSvidInView()V

    .line 75
    invoke-virtual {p0}, Landroid/view/View;->invalidate()V

    return-void
.end method
