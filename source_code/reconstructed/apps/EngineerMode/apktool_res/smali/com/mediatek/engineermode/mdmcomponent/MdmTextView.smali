.class public Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;
.super Landroid/widget/TextView;
.source "MdmTextView.java"


# instance fields
.field private mContext:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0
    .param p1, "context"    # Landroid/content/Context;

    .line 28
    invoke-direct {p0, p1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 29
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->mContext:Landroid/content/Context;

    .line 30
    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "attrs"    # Landroid/util/AttributeSet;

    .line 23
    invoke-direct {p0, p1, p2}, Landroid/widget/TextView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 24
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->mContext:Landroid/content/Context;

    .line 25
    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "attrs"    # Landroid/util/AttributeSet;
    .param p3, "defStyle"    # I

    .line 18
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/TextView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    .line 19
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->mContext:Landroid/content/Context;

    .line 20
    return-void
.end method

.method private dip2px(F)F
    .locals 2
    .param p1, "dipValue"    # F

    .line 87
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    iget v0, v0, Landroid/util/DisplayMetrics;->density:F

    .line 88
    .local v0, "scale":F
    mul-float v1, p1, v0

    return v1
.end method

.method private getMaxLineHeight(Ljava/lang/String;II)F
    .locals 17
    .param p1, "str"    # Ljava/lang/String;
    .param p2, "widthSpec"    # I
    .param p3, "mode"    # I

    .line 53
    move-object/from16 v0, p0

    const/4 v1, 0x0

    .line 54
    .local v1, "height":F
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->mContext:Landroid/content/Context;

    check-cast v2, Landroid/app/Activity;

    invoke-virtual {v2}, Landroid/app/Activity;->getWindowManager()Landroid/view/WindowManager;

    move-result-object v2

    invoke-interface {v2}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object v2

    invoke-virtual {v2}, Landroid/view/Display;->getWidth()I

    move-result v2

    int-to-float v2, v2

    .line 55
    .local v2, "screenW":F
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    check-cast v3, Landroid/widget/LinearLayout;

    invoke-virtual {v3}, Landroid/widget/LinearLayout;->getPaddingLeft()I

    move-result v3

    int-to-float v3, v3

    .line 56
    .local v3, "pLeft":F
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->getParent()Landroid/view/ViewParent;

    move-result-object v4

    check-cast v4, Landroid/widget/LinearLayout;

    invoke-virtual {v4}, Landroid/widget/LinearLayout;->getPaddingRight()I

    move-result v4

    int-to-float v4, v4

    .line 57
    .local v4, "pRight":F
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->mContext:Landroid/content/Context;

    invoke-virtual {v5}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v5

    invoke-virtual {v5}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v5

    iget v5, v5, Landroid/util/DisplayMetrics;->widthPixels:I

    int-to-float v5, v5

    .line 59
    .local v5, "widthPixels":F
    const/4 v6, 0x0

    .line 60
    .local v6, "k":I
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->getParent()Landroid/view/ViewParent;

    move-result-object v7

    check-cast v7, Landroid/widget/LinearLayout;

    invoke-virtual {v7}, Landroid/widget/LinearLayout;->getChildCount()I

    move-result v7

    .line 61
    .local v7, "childNum":I
    const/4 v8, 0x0

    .local v8, "i":I
    :goto_0
    if-ge v8, v7, :cond_1

    .line 62
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->getParent()Landroid/view/ViewParent;

    move-result-object v9

    check-cast v9, Landroid/widget/LinearLayout;

    invoke-virtual {v9, v8}, Landroid/widget/LinearLayout;->getChildAt(I)Landroid/view/View;

    move-result-object v9

    invoke-virtual {v9}, Landroid/view/View;->getVisibility()I

    move-result v9

    if-nez v9, :cond_0

    rem-int/lit8 v9, v8, 0x2

    if-nez v9, :cond_0

    .line 64
    add-int/lit8 v6, v6, 0x1

    .line 61
    :cond_0
    add-int/lit8 v8, v8, 0x2

    goto :goto_0

    .line 67
    .end local v8    # "i":I
    :cond_1
    const-string v8, "\\r"

    const-string v9, "\n"

    move-object/from16 v10, p1

    invoke-virtual {v10, v8, v9}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v8

    const-string v11, "\\n"

    invoke-virtual {v8, v11, v9}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v8

    const-string v11, "\\t"

    const-string v12, "        "

    invoke-virtual {v8, v11, v12}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v8

    .line 68
    .end local p1    # "str":Ljava/lang/String;
    .local v8, "str":Ljava/lang/String;
    invoke-virtual {v8, v9}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v9

    .line 69
    .local v9, "contentArray":[Ljava/lang/String;
    const/4 v10, 0x0

    .line 70
    .local v10, "line":I
    array-length v11, v9

    const/4 v12, 0x0

    :goto_1
    if-ge v12, v11, :cond_3

    aget-object v13, v9, v12

    .line 71
    .local v13, "content":Ljava/lang/String;
    if-nez p3, :cond_2

    .line 72
    nop

    .line 73
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->getPaint()Landroid/text/TextPaint;

    move-result-object v14

    invoke-virtual {v14, v13}, Landroid/text/TextPaint;->measureText(Ljava/lang/String;)F

    move-result v14

    .line 74
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->getPaddingLeft()I

    move-result v15

    int-to-float v15, v15

    sub-float v15, v5, v15

    sub-float/2addr v15, v3

    sub-float/2addr v15, v4

    move/from16 v16, v1

    .end local v1    # "height":F
    .local v16, "height":F
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->getPaddingRight()I

    move-result v1

    int-to-float v1, v1

    sub-float/2addr v15, v1

    int-to-float v1, v6

    div-float/2addr v15, v1

    div-float/2addr v14, v15

    float-to-double v14, v14

    .line 73
    invoke-static {v14, v15}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v14

    double-to-int v1, v14

    add-int/2addr v10, v1

    goto :goto_2

    .line 76
    .end local v16    # "height":F
    .restart local v1    # "height":F
    :cond_2
    move/from16 v16, v1

    .line 77
    .end local v1    # "height":F
    .restart local v16    # "height":F
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->getPaint()Landroid/text/TextPaint;

    move-result-object v1

    invoke-virtual {v1, v13}, Landroid/text/TextPaint;->measureText(Ljava/lang/String;)F

    move-result v1

    .line 78
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->getPaddingLeft()I

    move-result v14

    int-to-float v14, v14

    sub-float v14, v2, v14

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->getPaddingRight()I

    move-result v15

    int-to-float v15, v15

    sub-float/2addr v14, v15

    int-to-float v15, v6

    div-float/2addr v14, v15

    div-float/2addr v1, v14

    float-to-double v14, v1

    .line 77
    invoke-static {v14, v15}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v14

    double-to-int v1, v14

    add-int/2addr v10, v1

    .line 70
    .end local v13    # "content":Ljava/lang/String;
    :goto_2
    add-int/lit8 v12, v12, 0x1

    move/from16 v1, v16

    goto :goto_1

    .line 81
    .end local v16    # "height":F
    .restart local v1    # "height":F
    :cond_3
    move/from16 v16, v1

    .end local v1    # "height":F
    .restart local v16    # "height":F
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->getPaint()Landroid/text/TextPaint;

    move-result-object v1

    invoke-virtual {v1}, Landroid/text/TextPaint;->getFontMetrics()Landroid/graphics/Paint$FontMetrics;

    move-result-object v1

    iget v1, v1, Landroid/graphics/Paint$FontMetrics;->descent:F

    .line 82
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->getPaint()Landroid/text/TextPaint;

    move-result-object v11

    invoke-virtual {v11}, Landroid/text/TextPaint;->getFontMetrics()Landroid/graphics/Paint$FontMetrics;

    move-result-object v11

    iget v11, v11, Landroid/graphics/Paint$FontMetrics;->ascent:F

    sub-float/2addr v1, v11

    int-to-float v11, v10

    mul-float/2addr v1, v11

    .line 83
    .end local v16    # "height":F
    .restart local v1    # "height":F
    const/high16 v11, 0x40400000    # 3.0f

    invoke-direct {v0, v11}, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->dip2px(F)F

    move-result v11

    add-float/2addr v1, v11

    .line 84
    return v1
.end method


# virtual methods
.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 0
    .param p1, "canvas"    # Landroid/graphics/Canvas;

    .line 34
    invoke-super {p0, p1}, Landroid/widget/TextView;->onDraw(Landroid/graphics/Canvas;)V

    .line 35
    return-void
.end method

.method protected onMeasure(II)V
    .locals 4
    .param p1, "widthMeasureSpec"    # I
    .param p2, "heightMeasureSpec"    # I

    .line 38
    invoke-super {p0, p1, p2}, Landroid/widget/TextView;->onMeasure(II)V

    .line 39
    invoke-static {p2}, Landroid/view/View$MeasureSpec;->getMode(I)I

    move-result v0

    .line 41
    .local v0, "mode":I
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->getLayout()Landroid/text/Layout;

    move-result-object v1

    .line 42
    .local v1, "layout":Landroid/text/Layout;
    if-eqz v1, :cond_0

    .line 43
    nop

    .line 44
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->getText()Ljava/lang/CharSequence;

    move-result-object v2

    invoke-interface {v2}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v2

    .line 45
    invoke-static {p1}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result v3

    .line 44
    invoke-direct {p0, v2, v3, v0}, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->getMaxLineHeight(Ljava/lang/String;II)F

    move-result v2

    float-to-double v2, v2

    .line 43
    invoke-static {v2, v3}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v2

    double-to-int v2, v2

    .line 46
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->getCompoundPaddingTop()I

    move-result v3

    add-int/2addr v2, v3

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->getCompoundPaddingBottom()I

    move-result v3

    add-int/2addr v2, v3

    .line 47
    .local v2, "height":I
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->getMeasuredWidth()I

    move-result v3

    .line 48
    .local v3, "width":I
    invoke-virtual {p0, v3, v2}, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;->setMeasuredDimension(II)V

    .line 50
    .end local v2    # "height":I
    .end local v3    # "width":I
    :cond_0
    return-void
.end method
