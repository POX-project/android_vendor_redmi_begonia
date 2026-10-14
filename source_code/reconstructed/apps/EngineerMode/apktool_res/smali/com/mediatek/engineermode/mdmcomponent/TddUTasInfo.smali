.class Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field ServingBandMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field TasEnableMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field labelsKey:[Ljava/lang/String;

.field labelsList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "[",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private tabTitle:[Ljava/lang/String;

.field valuesHashMap:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/util/LinkedHashMap;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 10728
    const-string v0, "MSG_ID_EM_TDD_L1_TAS_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 3
    .param p1, "context"    # Landroid/app/Activity;

    .line 10760
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;-><init>(Landroid/app/Activity;)V

    .line 10730
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->ServingBandMapping:Ljava/util/HashMap;

    .line 10737
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->TasEnableMapping:Ljava/util/HashMap;

    .line 10744
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo$3;-><init>(Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->labelsList:Ljava/util/List;

    .line 10751
    const-string v0, "Tas Common"

    const-string v1, "Main Info"

    const-string v2, "ANT Info"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->labelsKey:[Ljava/lang/String;

    .line 10752
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo$4;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo$4;-><init>(Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->valuesHashMap:Ljava/util/List;

    .line 10757
    const-string v0, "Common"

    const-string v1, "Detail"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->tabTitle:[Ljava/lang/String;

    .line 10761
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->initTableComponent([Ljava/lang/String;)V

    .line 10762
    return-void
.end method


# virtual methods
.method getArrayTypeKey()Ljava/util/ArrayList;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 10807
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 10808
    .local v0, "arrayTypeKeys":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v2, 0x2

    aget-object v1, v1, v2

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 10809
    return-object v0
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 10797
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 10792
    const-string v0, "4. UMTS TDD EM Component"

    return-object v0
.end method

.method getHashMapLabels(I)Ljava/util/LinkedHashMap;
    .locals 4
    .param p1, "index"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/util/LinkedHashMap;",
            ">;"
        }
    .end annotation

    .line 10822
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    .line 10824
    .local v0, "hashMapkeyValues":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/util/LinkedHashMap;>;"
    if-eqz p1, :cond_1

    const/4 v1, 0x1

    if-eq p1, v1, :cond_0

    goto :goto_0

    .line 10829
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->labelsKey:[Ljava/lang/String;

    aget-object v2, v2, v1

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->valuesHashMap:Ljava/util/List;

    invoke-interface {v3, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, v2, v1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 10830
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v2, 0x2

    aget-object v1, v1, v2

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->valuesHashMap:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 10826
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v2, 0x0

    aget-object v1, v1, v2

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->valuesHashMap:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 10827
    nop

    .line 10833
    :goto_0
    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 10787
    const-string v0, "TDD UTAS Info"

    return-object v0
.end method

.method isLabelArrayType(Ljava/lang/String;)Z
    .locals 1
    .param p1, "label"    # Ljava/lang/String;

    .line 10814
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->getArrayTypeKey()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 10815
    const/4 v0, 0x1

    return v0

    .line 10817
    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method servingBandMapping(I)Ljava/lang/String;
    .locals 3
    .param p1, "bandidx"    # I

    .line 10775
    const-string v0, " "

    .line 10776
    .local v0, "bandidx_s":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->ServingBandMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 10777
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->ServingBandMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    .line 10779
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "-("

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ")"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 10782
    :goto_0
    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 10802
    const/4 v0, 0x1

    return v0
.end method

.method tasEableMapping(I)Ljava/lang/String;
    .locals 3
    .param p1, "tasidx"    # I

    .line 10765
    const-string v0, " "

    .line 10766
    .local v0, "tasidx_s":Ljava/lang/String;
    if-ltz p1, :cond_0

    const/4 v1, 0x1

    if-gt p1, v1, :cond_0

    .line 10767
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->TasEnableMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    .line 10769
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "-("

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ")"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 10771
    :goto_0
    return-object v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 32
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 10838
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 10839
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->clearData()V

    .line 10840
    const-string v2, "cur_ant_state"

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 10841
    .local v3, "cur_ant_idx":I
    shr-int/lit8 v4, v3, 0x8

    const/4 v5, 0x3

    const/4 v6, 0x0

    const/4 v7, 0x1

    if-ne v4, v5, :cond_0

    move v4, v7

    goto :goto_0

    :cond_0
    move v4, v6

    .line 10842
    .local v4, "utas_info_valid":I
    :goto_0
    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->setInfoValid(I)V

    .line 10843
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->isInfoValid()Z

    move-result v8

    if-nez v8, :cond_1

    .line 10844
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->resetView()V

    .line 10845
    new-instance v2, Landroid/widget/TextView;

    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->mContext:Landroid/app/Activity;

    invoke-direct {v2, v5}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 10846
    .local v2, "textView":Landroid/widget/TextView;
    new-instance v5, Landroid/widget/AbsListView$LayoutParams;

    const/4 v7, -0x1

    const/4 v8, -0x2

    invoke-direct {v5, v7, v8}, Landroid/widget/AbsListView$LayoutParams;-><init>(II)V

    .line 10848
    .local v5, "layoutParams":Landroid/widget/AbsListView$LayoutParams;
    invoke-virtual {v2, v5}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 10849
    const/16 v7, 0x14

    invoke-virtual {v2, v7, v6, v7, v6}, Landroid/widget/TextView;->setPadding(IIII)V

    .line 10850
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "Use "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->getName()Ljava/lang/String;

    move-result-object v7

    const-string v8, "UTAS"

    const-string v9, "TAS"

    invoke-virtual {v7, v8, v9}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 10851
    const/high16 v6, 0x41800000    # 16.0f

    invoke-virtual {v2, v6}, Landroid/widget/TextView;->setTextSize(F)V

    .line 10852
    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->scrollView:Landroid/widget/ScrollView;

    invoke-virtual {v6, v2}, Landroid/widget/ScrollView;->addView(Landroid/view/View;)V

    .line 10853
    return-void

    .line 10855
    .end local v2    # "textView":Landroid/widget/TextView;
    .end local v5    # "layoutParams":Landroid/widget/AbsListView$LayoutParams;
    :cond_1
    const-string v8, "tas_enable_info"

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 10856
    .local v8, "tas_enable":I
    const-string v9, "force_tx_en"

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 10857
    .local v9, "force_tx_en":I
    const-string v10, "force_ant_state"

    invoke-virtual {v0, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v10

    .line 10858
    .local v10, "force_ant_state":I
    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 10859
    .local v2, "ant_state":I
    and-int/lit16 v11, v2, 0xff

    .line 10860
    .local v11, "cur_ant_state":I
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->labelsKey:[Ljava/lang/String;

    aget-object v12, v12, v6

    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v13, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, [Ljava/lang/String;

    const/4 v14, 0x4

    new-array v15, v14, [Ljava/lang/String;

    .line 10861
    invoke-virtual {v0, v8}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->tasEableMapping(I)Ljava/lang/String;

    move-result-object v16

    aput-object v16, v15, v6

    .line 10862
    invoke-virtual {v0, v9}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->tasEableMapping(I)Ljava/lang/String;

    move-result-object v16

    aput-object v16, v15, v7

    .line 10863
    const/16 v14, 0x17

    const-string v7, ")"

    const-string v6, "-("

    const-string v5, ""

    if-ltz v10, :cond_2

    if-gt v10, v14, :cond_2

    .line 10864
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    :cond_2
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_1
    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    move/from16 v21, v2

    .end local v2    # "ant_state":I
    .local v21, "ant_state":I
    const/4 v2, 0x2

    aput-object v14, v15, v2

    .line 10865
    if-ltz v11, :cond_3

    const/16 v14, 0x17

    if-gt v11, v14, :cond_3

    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    goto :goto_2

    .line 10866
    :cond_3
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    :goto_2
    const/16 v19, 0x3

    aput-object v14, v15, v19

    .line 10860
    const/4 v14, 0x0

    invoke-virtual {v0, v12, v14, v13, v15}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->setHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;[Ljava/lang/Object;)V

    .line 10869
    const-string v12, "current_serving_band"

    invoke-virtual {v0, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v12

    .line 10870
    .local v12, "serving_band":I
    const-string v13, "cur_ant_index"

    invoke-virtual {v0, v1, v13}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v13

    .line 10871
    .local v13, "cur_ant_index":I
    shr-int/lit8 v14, v13, 0x8

    .line 10872
    .local v14, "cur_ant_index_h":I
    and-int/lit16 v15, v13, 0xff

    .line 10873
    .local v15, "cur_ant_index_l":I
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->labelsKey:[Ljava/lang/String;

    move/from16 v22, v3

    const/4 v3, 0x1

    .end local v3    # "cur_ant_idx":I
    .local v22, "cur_ant_idx":I
    aget-object v2, v2, v3

    move/from16 v23, v4

    .end local v4    # "utas_info_valid":I
    .local v23, "utas_info_valid":I
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v4, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, [Ljava/lang/String;

    move/from16 v24, v8

    const/4 v3, 0x2

    .end local v8    # "tas_enable":I
    .local v24, "tas_enable":I
    new-array v8, v3, [Ljava/lang/String;

    .line 10874
    invoke-virtual {v0, v12}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->servingBandMapping(I)Ljava/lang/String;

    move-result-object v3

    const/16 v18, 0x0

    aput-object v3, v8, v18

    .line 10875
    const/4 v3, 0x7

    if-ltz v15, :cond_4

    if-gt v15, v3, :cond_4

    .line 10876
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_3

    :cond_4
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_3
    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    move/from16 v25, v9

    const/4 v9, 0x1

    .end local v9    # "force_tx_en":I
    .local v25, "force_tx_en":I
    aput-object v3, v8, v9

    .line 10873
    invoke-virtual {v0, v2, v9, v4, v8}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->setHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;[Ljava/lang/Object;)V

    .line 10878
    if-ne v12, v9, :cond_5

    .line 10879
    const-string v2, "B39_available_ant_num"

    goto :goto_4

    :cond_5
    const-string v2, "B34_available_ant_num"

    .line 10880
    .local v2, "antNumCoName":Ljava/lang/String;
    :goto_4
    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 10881
    .local v3, "cellNum":I
    const/4 v4, 0x1

    if-ne v12, v4, :cond_6

    .line 10882
    const-string v4, "B39_available_ant"

    goto :goto_5

    :cond_6
    const-string v4, "B34_available_ant"

    .line 10883
    .local v4, "coName":Ljava/lang/String;
    :goto_5
    const/4 v8, 0x0

    .local v8, "i":I
    :goto_6
    if-ge v8, v3, :cond_c

    .line 10884
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v26, v2

    .end local v2    # "antNumCoName":Ljava/lang/String;
    .local v26, "antNumCoName":Ljava/lang/String;
    const-string v2, "["

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "]"

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 10885
    .local v9, "ant_index":I
    move/from16 v27, v3

    .end local v3    # "cellNum":I
    .local v27, "cellNum":I
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v28, v4

    .end local v4    # "coName":Ljava/lang/String;
    .local v28, "coName":Ljava/lang/String;
    const-string v4, "tx_power["

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x1

    invoke-virtual {v0, v1, v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v3

    .line 10886
    .local v3, "tx_power":I
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v29, v10

    .end local v10    # "force_ant_state":I
    .local v29, "force_ant_state":I
    const-string v10, "ant_sinr["

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v10, 0x1

    invoke-virtual {v0, v1, v4, v10}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v4

    .line 10887
    .local v4, "ant_sinr":I
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v30, v11

    .end local v11    # "cur_ant_state":I
    .local v30, "cur_ant_state":I
    const-string v11, "ant_rscp["

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v10, 0x1

    invoke-virtual {v0, v1, v2, v10}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v2

    .line 10888
    .local v2, "ant_rscp":I
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v11, 0x2

    aget-object v10, v10, v11

    move-object/from16 v31, v1

    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v31, "data":Lcom/mediatek/mdml/Msg;
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v1, v11}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [Ljava/lang/String;

    move/from16 v16, v12

    const/4 v11, 0x4

    .end local v12    # "serving_band":I
    .local v16, "serving_band":I
    new-array v12, v11, [Ljava/lang/String;

    .line 10889
    const/4 v11, 0x7

    if-gt v9, v11, :cond_7

    if-ltz v9, :cond_7

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_7

    :cond_7
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_7
    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    const/16 v18, 0x0

    aput-object v11, v12, v18

    .line 10890
    const/16 v11, 0x20

    if-ne v8, v14, :cond_9

    if-gt v3, v11, :cond_8

    const/16 v11, -0x32

    if-lt v3, v11, :cond_8

    .line 10891
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_8

    :cond_8
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_8
    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    goto :goto_9

    :cond_9
    move-object v11, v5

    :goto_9
    const/16 v17, 0x1

    aput-object v11, v12, v17

    .line 10892
    const/16 v11, 0x20

    if-gt v4, v11, :cond_a

    const/16 v11, -0x32

    if-lt v4, v11, :cond_a

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_a

    :cond_a
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_a
    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    const/16 v20, 0x2

    aput-object v11, v12, v20

    .line 10893
    const/16 v11, -0x28

    if-gt v2, v11, :cond_b

    const/16 v11, -0x8c

    if-lt v2, v11, :cond_b

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_b

    :cond_b
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_b
    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    const/16 v19, 0x3

    aput-object v11, v12, v19

    .line 10888
    const/4 v11, 0x1

    invoke-virtual {v0, v10, v11, v1, v12}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->setHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;[Ljava/lang/Object;)V

    .line 10883
    .end local v2    # "ant_rscp":I
    .end local v3    # "tx_power":I
    .end local v4    # "ant_sinr":I
    .end local v9    # "ant_index":I
    add-int/lit8 v8, v8, 0x1

    move/from16 v12, v16

    move-object/from16 v2, v26

    move/from16 v3, v27

    move-object/from16 v4, v28

    move/from16 v10, v29

    move/from16 v11, v30

    move-object/from16 v1, v31

    goto/16 :goto_6

    .end local v16    # "serving_band":I
    .end local v26    # "antNumCoName":Ljava/lang/String;
    .end local v27    # "cellNum":I
    .end local v28    # "coName":Ljava/lang/String;
    .end local v29    # "force_ant_state":I
    .end local v30    # "cur_ant_state":I
    .end local v31    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v2, "antNumCoName":Ljava/lang/String;
    .local v3, "cellNum":I
    .local v4, "coName":Ljava/lang/String;
    .restart local v10    # "force_ant_state":I
    .restart local v11    # "cur_ant_state":I
    .restart local v12    # "serving_band":I
    :cond_c
    move-object/from16 v31, v1

    move-object/from16 v26, v2

    move/from16 v27, v3

    .line 10896
    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .end local v2    # "antNumCoName":Ljava/lang/String;
    .end local v3    # "cellNum":I
    .end local v8    # "i":I
    .restart local v26    # "antNumCoName":Ljava/lang/String;
    .restart local v27    # "cellNum":I
    .restart local v31    # "data":Lcom/mediatek/mdml/Msg;
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v2, 0x0

    aget-object v1, v1, v2

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->addData(Ljava/lang/String;I)V

    .line 10897
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v2, 0x1

    aget-object v1, v1, v2

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->addData(Ljava/lang/String;I)V

    .line 10898
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v3, 0x2

    aget-object v1, v1, v3

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/TddUTasInfo;->addData(Ljava/lang/String;I)V

    .line 10899
    return-void
.end method
