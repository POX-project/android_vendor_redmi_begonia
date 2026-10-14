.class public Lcom/mediatek/ygps/SatelliteCnrController;
.super Ljava/lang/Object;
.source "SatelliteCnrController.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter;,
        Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;
    }
.end annotation


# instance fields
.field mAdapter:Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter;

.field mCbShowInSingle:Landroid/widget/CheckBox;

.field private mContext:Landroid/content/Context;

.field mGlOnePage:Landroid/widget/GridLayout;

.field mLlDetail:Landroid/view/View;

.field mLlOnePageTitle:Landroid/view/View;

.field mLvCnr:Landroid/widget/ListView;

.field mTvAveCnr:Landroid/widget/TextView;


# direct methods
.method public constructor <init>(Landroid/view/View;Landroid/app/Activity;)V
    .locals 1

    .line 43
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 45
    iput-object p2, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mContext:Landroid/content/Context;

    const v0, 0x7f05003e

    .line 46
    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ListView;

    iput-object v0, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mLvCnr:Landroid/widget/ListView;

    .line 47
    new-instance v0, Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter;

    invoke-direct {v0, p0, p2}, Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter;-><init>(Lcom/mediatek/ygps/SatelliteCnrController;Landroid/app/Activity;)V

    iput-object v0, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mAdapter:Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter;

    .line 48
    iget-object p2, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mLvCnr:Landroid/widget/ListView;

    invoke-virtual {p2, v0}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    const p2, 0x7f050055

    .line 49
    invoke-virtual {p1, p2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p2

    check-cast p2, Landroid/widget/TextView;

    iput-object p2, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mTvAveCnr:Landroid/widget/TextView;

    const p2, 0x7f05003c

    .line 50
    invoke-virtual {p1, p2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p2

    iput-object p2, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mLlDetail:Landroid/view/View;

    const p2, 0x7f05002e

    .line 51
    invoke-virtual {p1, p2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p2

    check-cast p2, Landroid/widget/GridLayout;

    iput-object p2, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mGlOnePage:Landroid/widget/GridLayout;

    const p2, 0x7f05003d

    .line 52
    invoke-virtual {p1, p2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p2

    iput-object p2, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mLlOnePageTitle:Landroid/view/View;

    const p2, 0x7f050015

    .line 53
    invoke-virtual {p1, p2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/CheckBox;

    iput-object p1, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mCbShowInSingle:Landroid/widget/CheckBox;

    .line 54
    new-instance p2, Lcom/mediatek/ygps/SatelliteCnrController$1;

    invoke-direct {p2, p0}, Lcom/mediatek/ygps/SatelliteCnrController$1;-><init>(Lcom/mediatek/ygps/SatelliteCnrController;)V

    invoke-virtual {p1, p2}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    return-void
.end method

.method private updateSingleView(Lcom/mediatek/ygps/SatelliteInfoManager;)V
    .locals 11

    .line 113
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    .line 114
    invoke-virtual {p0, p1, v0}, Lcom/mediatek/ygps/SatelliteCnrController;->genIdCnrMap(Lcom/mediatek/ygps/SatelliteInfoManager;Ljava/util/LinkedHashMap;)V

    .line 118
    iget-object p1, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mGlOnePage:Landroid/widget/GridLayout;

    invoke-virtual {p1}, Landroid/widget/GridLayout;->removeAllViews()V

    .line 119
    iget-object p1, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mGlOnePage:Landroid/widget/GridLayout;

    invoke-virtual {p1}, Landroid/widget/GridLayout;->getWidth()I

    move-result p1

    int-to-double v1, p1

    const-wide/high16 v3, 0x4028000000000000L    # 12.0

    div-double/2addr v1, v3

    double-to-int p1, v1

    .line 120
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    const/4 v2, 0x0

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 122
    div-int/lit8 v4, v2, 0x4

    invoke-static {v4}, Landroid/widget/GridLayout;->spec(I)Landroid/widget/GridLayout$Spec;

    move-result-object v5

    .line 123
    rem-int/lit8 v6, v2, 0x4

    mul-int/lit8 v6, v6, 0x2

    invoke-static {v6}, Landroid/widget/GridLayout;->spec(I)Landroid/widget/GridLayout$Spec;

    move-result-object v7

    .line 124
    new-instance v8, Landroid/widget/GridLayout$LayoutParams;

    invoke-direct {v8, v5, v7}, Landroid/widget/GridLayout$LayoutParams;-><init>(Landroid/widget/GridLayout$Spec;Landroid/widget/GridLayout$Spec;)V

    .line 125
    invoke-virtual {v0, v3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;

    .line 127
    new-instance v7, Lcom/mediatek/ygps/BottomBorderView;

    iget-object v9, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mContext:Landroid/content/Context;

    iget v10, v5, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;->color:I

    invoke-direct {v7, v9, v10}, Lcom/mediatek/ygps/BottomBorderView;-><init>(Landroid/content/Context;I)V

    .line 128
    invoke-virtual {v7, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 129
    invoke-virtual {v7, p1}, Landroid/widget/TextView;->setWidth(I)V

    const/16 v3, 0x32

    .line 130
    invoke-virtual {v7, v3}, Landroid/widget/TextView;->setHeight(I)V

    .line 131
    iget-object v9, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mGlOnePage:Landroid/widget/GridLayout;

    invoke-virtual {v9, v7, v8}, Landroid/widget/GridLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 133
    invoke-static {v4}, Landroid/widget/GridLayout;->spec(I)Landroid/widget/GridLayout$Spec;

    move-result-object v4

    add-int/lit8 v6, v6, 0x1

    .line 134
    invoke-static {v6}, Landroid/widget/GridLayout;->spec(I)Landroid/widget/GridLayout$Spec;

    move-result-object v7

    .line 135
    new-instance v8, Landroid/widget/GridLayout$LayoutParams;

    invoke-direct {v8, v4, v7}, Landroid/widget/GridLayout$LayoutParams;-><init>(Landroid/widget/GridLayout$Spec;Landroid/widget/GridLayout$Spec;)V

    const/4 v4, 0x7

    if-ne v6, v4, :cond_0

    .line 138
    new-instance v4, Lcom/mediatek/ygps/BottomBorderView;

    iget-object v6, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mContext:Landroid/content/Context;

    iget v7, v5, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;->color:I

    invoke-direct {v4, v6, v7}, Lcom/mediatek/ygps/BottomBorderView;-><init>(Landroid/content/Context;I)V

    .line 139
    invoke-virtual {v5}, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;->getCnrSummary()Landroid/text/SpannableString;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    mul-int/lit8 v5, p1, 0x2

    .line 140
    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setWidth(I)V

    .line 141
    invoke-virtual {v4, v3}, Landroid/widget/TextView;->setHeight(I)V

    .line 142
    iget-object v3, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mGlOnePage:Landroid/widget/GridLayout;

    invoke-virtual {v3, v4, v8}, Landroid/widget/GridLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_1

    .line 144
    :cond_0
    new-instance v4, Lcom/mediatek/ygps/TwoBorderView;

    iget-object v6, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mContext:Landroid/content/Context;

    iget v7, v5, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;->color:I

    invoke-direct {v4, v6, v7}, Lcom/mediatek/ygps/TwoBorderView;-><init>(Landroid/content/Context;I)V

    .line 145
    invoke-virtual {v5}, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;->getCnrSummary()Landroid/text/SpannableString;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    mul-int/lit8 v5, p1, 0x2

    .line 146
    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setWidth(I)V

    .line 147
    invoke-virtual {v4, v3}, Landroid/widget/TextView;->setHeight(I)V

    .line 148
    iget-object v3, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mGlOnePage:Landroid/widget/GridLayout;

    invoke-virtual {v3, v4, v8}, Landroid/widget/GridLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :goto_1
    add-int/lit8 v2, v2, 0x1

    goto/16 :goto_0

    :cond_1
    return-void
.end method


# virtual methods
.method genIdCnrMap(Lcom/mediatek/ygps/SatelliteInfoManager;Ljava/util/LinkedHashMap;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/mediatek/ygps/SatelliteInfoManager;",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;",
            ">;)V"
        }
    .end annotation

    .line 93
    invoke-virtual {p1}, Lcom/mediatek/ygps/SatelliteInfoManager;->getSatelInfoList()Ljava/util/List;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/ygps/SatelliteInfo;

    .line 94
    invoke-virtual {v0}, Lcom/mediatek/ygps/SatelliteInfo;->getTag()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;

    if-nez v1, :cond_0

    .line 96
    new-instance v1, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;

    const/4 v2, 0x0

    invoke-direct {v1, p0, v2}, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;-><init>(Lcom/mediatek/ygps/SatelliteCnrController;Lcom/mediatek/ygps/SatelliteCnrController$1;)V

    .line 98
    :cond_0
    invoke-virtual {v0}, Lcom/mediatek/ygps/SatelliteInfo;->getFq()Ljava/lang/String;

    move-result-object v2

    const-string v3, "L1"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 99
    iget v2, v0, Lcom/mediatek/ygps/SatelliteInfo;->mSnr:F

    iput v2, v1, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;->cnrL1:F

    .line 100
    iget-boolean v2, v0, Lcom/mediatek/ygps/SatelliteInfo;->mUsedInFix:Z

    iput-boolean v2, v1, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;->usedInFixL1:Z

    goto :goto_1

    .line 102
    :cond_1
    iget v2, v0, Lcom/mediatek/ygps/SatelliteInfo;->mSnr:F

    iput v2, v1, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;->cnrL5:F

    .line 103
    iget-boolean v2, v0, Lcom/mediatek/ygps/SatelliteInfo;->mUsedInFix:Z

    iput-boolean v2, v1, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;->usedInFixL5:Z

    .line 105
    :goto_1
    invoke-virtual {v0}, Lcom/mediatek/ygps/SatelliteInfo;->getColor()I

    move-result v2

    iput v2, v1, Lcom/mediatek/ygps/SatelliteCnrController$CnrInfo;->color:I

    .line 106
    invoke-virtual {v0}, Lcom/mediatek/ygps/SatelliteInfo;->getTag()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0, v1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_2
    return-void
.end method

.method updateView(Lcom/mediatek/ygps/SatelliteInfoManager;)V
    .locals 3

    .line 155
    iget-object v0, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mCbShowInSingle:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 156
    invoke-direct {p0, p1}, Lcom/mediatek/ygps/SatelliteCnrController;->updateSingleView(Lcom/mediatek/ygps/SatelliteInfoManager;)V

    goto :goto_0

    .line 158
    :cond_0
    iget-object v0, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mAdapter:Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter;

    invoke-virtual {v0}, Landroid/widget/ArrayAdapter;->clear()V

    .line 159
    iget-object v0, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mAdapter:Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter;

    invoke-virtual {p1}, Lcom/mediatek/ygps/SatelliteInfoManager;->getSatelInfoList()Ljava/util/List;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/ArrayAdapter;->addAll(Ljava/util/Collection;)V

    .line 160
    iget-object p1, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mAdapter:Lcom/mediatek/ygps/SatelliteCnrController$DataAdapter;

    invoke-virtual {p1}, Landroid/widget/ArrayAdapter;->notifyDataSetChanged()V

    .line 163
    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, ""

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 164
    invoke-static {}, Lcom/mediatek/ygps/SatelliteInfo;->getTalker()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 165
    invoke-static {v1}, Lcom/mediatek/ygps/SatelliteInfo;->getSystem(Ljava/lang/String;)Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    move-result-object v1

    .line 166
    invoke-virtual {v1}, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->getTag()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ":"

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->getCnr()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "    "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    .line 168
    :cond_1
    iget-object p0, p0, Lcom/mediatek/ygps/SatelliteCnrController;->mTvAveCnr:Landroid/widget/TextView;

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method
