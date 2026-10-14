.class Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field CcmStateMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field RxSystemMapping:Ljava/util/HashMap;
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
    .locals 2

    .line 5558
    const-string v0, "MSG_ID_FDD_EM_UL1_TAS_INFO_IND"

    const-string v1, "MSG_ID_FDD_EM_UL1_UTAS_INFO_IND"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 3
    .param p1, "context"    # Landroid/app/Activity;

    .line 5597
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;-><init>(Landroid/app/Activity;)V

    .line 5561
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->RxSystemMapping:Ljava/util/HashMap;

    .line 5568
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->TasEnableMapping:Ljava/util/HashMap;

    .line 5575
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo$3;-><init>(Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->CcmStateMapping:Ljava/util/HashMap;

    .line 5582
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo$4;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo$4;-><init>(Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->labelsList:Ljava/util/List;

    .line 5588
    const-string v0, "Tas Common"

    const-string v1, "TX Info"

    const-string v2, "ANT Info"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->labelsKey:[Ljava/lang/String;

    .line 5589
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo$5;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo$5;-><init>(Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->valuesHashMap:Ljava/util/List;

    .line 5594
    const-string v0, "Common"

    const-string v1, "Detail"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->tabTitle:[Ljava/lang/String;

    .line 5598
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->initTableComponent([Ljava/lang/String;)V

    .line 5599
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

    .line 5638
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 5639
    .local v0, "arrayTypeKeys":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v2, 0x2

    aget-object v1, v1, v2

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 5640
    return-object v0
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 5628
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 5623
    const-string v0, "3. UMTS FDD EM Component"

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

    .line 5653
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    .line 5655
    .local v0, "hashMapkeyValues":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/util/LinkedHashMap;>;"
    if-eqz p1, :cond_1

    const/4 v1, 0x1

    if-eq p1, v1, :cond_0

    goto :goto_0

    .line 5660
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->labelsKey:[Ljava/lang/String;

    aget-object v2, v2, v1

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->valuesHashMap:Ljava/util/List;

    invoke-interface {v3, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, v2, v1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5661
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v2, 0x2

    aget-object v1, v1, v2

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->valuesHashMap:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 5657
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v2, 0x0

    aget-object v1, v1, v2

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->valuesHashMap:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5658
    nop

    .line 5664
    :goto_0
    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 5618
    const-string v0, "WCDMA UTAS Info"

    return-object v0
.end method

.method isLabelArrayType(Ljava/lang/String;)Z
    .locals 1
    .param p1, "label"    # Ljava/lang/String;

    .line 5645
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->getArrayTypeKey()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 5646
    const/4 v0, 0x1

    return v0

    .line 5648
    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method servingBandMapping(I)Ljava/lang/String;
    .locals 3
    .param p1, "bandidx"    # I

    .line 5611
    const-string v0, "Band"

    .line 5612
    .local v0, "bandidx_s":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 5613
    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 5633
    const/4 v0, 0x1

    return v0
.end method

.method tasEableMapping(I)Ljava/lang/String;
    .locals 3
    .param p1, "tasidx"    # I

    .line 5602
    const-string v0, ""

    .line 5603
    .local v0, "tasidx_s":Ljava/lang/String;
    if-ltz p1, :cond_0

    const/4 v1, 0x1

    if-gt p1, v1, :cond_0

    .line 5604
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->TasEnableMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    .line 5606
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

    .line 5607
    :goto_0
    return-object v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 29
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 5669
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 5670
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->clearData()V

    .line 5671
    const-string v2, "MSG_ID_FDD_EM_UL1_TAS_INFO_IND"

    move-object/from16 v3, p1

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    const/4 v4, 0x0

    const/4 v5, 0x1

    if-eqz v2, :cond_0

    .line 5672
    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->setInfoValid(I)V

    goto :goto_0

    .line 5674
    :cond_0
    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->setInfoValid(I)V

    .line 5676
    :goto_0
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->isInfoValid()Z

    move-result v2

    if-nez v2, :cond_1

    .line 5677
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->resetView()V

    .line 5678
    new-instance v2, Landroid/widget/TextView;

    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->mContext:Landroid/app/Activity;

    invoke-direct {v2, v5}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 5679
    .local v2, "textView":Landroid/widget/TextView;
    new-instance v5, Landroid/widget/AbsListView$LayoutParams;

    const/4 v6, -0x1

    const/4 v7, -0x2

    invoke-direct {v5, v6, v7}, Landroid/widget/AbsListView$LayoutParams;-><init>(II)V

    .line 5681
    .local v5, "layoutParams":Landroid/widget/AbsListView$LayoutParams;
    invoke-virtual {v2, v5}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 5682
    const/16 v6, 0x14

    invoke-virtual {v2, v6, v4, v6, v4}, Landroid/widget/TextView;->setPadding(IIII)V

    .line 5683
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Use "

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->getName()Ljava/lang/String;

    move-result-object v6

    const-string v7, "UTAS"

    const-string v8, "TAS"

    invoke-virtual {v6, v7, v8}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 5684
    const/high16 v4, 0x41800000    # 16.0f

    invoke-virtual {v2, v4}, Landroid/widget/TextView;->setTextSize(F)V

    .line 5685
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->scrollView:Landroid/widget/ScrollView;

    invoke-virtual {v4, v2}, Landroid/widget/ScrollView;->addView(Landroid/view/View;)V

    .line 5686
    return-void

    .line 5688
    .end local v2    # "textView":Landroid/widget/TextView;
    .end local v5    # "layoutParams":Landroid/widget/AbsListView$LayoutParams;
    :cond_1
    const-string v2, "tas_enable"

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 5689
    .local v2, "tas_enable":I
    const-string v6, "band"

    invoke-virtual {v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 5690
    .local v6, "surving_band":I
    const-string v7, "current_ant_state"

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 5691
    .local v7, "current_ant_state":I
    const-string v8, "previous_ant_state"

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 5692
    .local v8, "previous_ant_state":I
    const-string v9, "rx_system"

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 5693
    .local v9, "rx_system":I
    const-string v10, "ccmState"

    invoke-virtual {v0, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v10

    .line 5694
    .local v10, "ccm_state":I
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->labelsKey:[Ljava/lang/String;

    aget-object v11, v11, v4

    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v12, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v12

    check-cast v12, [Ljava/lang/String;

    const/4 v13, 0x6

    new-array v13, v13, [Ljava/lang/String;

    .line 5695
    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->tasEableMapping(I)Ljava/lang/String;

    move-result-object v14

    aput-object v14, v13, v4

    .line 5696
    invoke-virtual {v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->servingBandMapping(I)Ljava/lang/String;

    move-result-object v14

    aput-object v14, v13, v5

    .line 5697
    const/16 v14, 0x17

    const-string v15, ")"

    const-string v5, "-("

    const-string v4, ""

    if-ltz v7, :cond_2

    if-gt v7, v14, :cond_2

    .line 5698
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    :cond_2
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_1
    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    move/from16 v19, v2

    .end local v2    # "tas_enable":I
    .local v19, "tas_enable":I
    const/4 v2, 0x2

    aput-object v14, v13, v2

    .line 5699
    if-ltz v8, :cond_3

    const/16 v14, 0x17

    if-gt v8, v14, :cond_3

    .line 5700
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_2

    :cond_3
    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_2
    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    const/16 v18, 0x3

    aput-object v14, v13, v18

    .line 5701
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->RxSystemMapping:Ljava/util/HashMap;

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v14, v2}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_4

    .line 5702
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->RxSystemMapping:Ljava/util/HashMap;

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    invoke-virtual {v2, v14}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    goto :goto_3

    :cond_4
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    :goto_3
    const/4 v14, 0x4

    aput-object v2, v13, v14

    .line 5703
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->CcmStateMapping:Ljava/util/HashMap;

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v14, v2}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_5

    .line 5704
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->CcmStateMapping:Ljava/util/HashMap;

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    invoke-virtual {v2, v14}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    goto :goto_4

    :cond_5
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    :goto_4
    const/4 v14, 0x5

    aput-object v2, v13, v14

    .line 5694
    const/4 v2, 0x0

    invoke-virtual {v0, v11, v2, v12, v13}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->setHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;[Ljava/lang/Object;)V

    .line 5706
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->labelsKey:[Ljava/lang/String;

    aget-object v11, v11, v2

    invoke-virtual {v0, v11, v2}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->addData(Ljava/lang/String;I)V

    .line 5707
    const-string v2, "tx_index"

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 5708
    .local v2, "tx_index":I
    const-string v11, "rx_index"

    invoke-virtual {v0, v1, v11}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 5709
    .local v11, "rx_index":I
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v13, 0x1

    aget-object v12, v12, v13

    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v14, v13}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, [Ljava/lang/String;

    const/4 v13, 0x2

    new-array v3, v13, [Ljava/lang/String;

    .line 5710
    const/16 v13, 0xb

    if-ltz v2, :cond_6

    if-gt v2, v13, :cond_6

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_5

    :cond_6
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_5
    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    const/16 v17, 0x0

    aput-object v13, v3, v17

    .line 5711
    const/4 v13, 0x1

    if-le v9, v13, :cond_7

    if-ltz v11, :cond_7

    const/16 v13, 0xb

    if-gt v11, v13, :cond_7

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_6

    :cond_7
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_6
    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    move/from16 v21, v6

    const/4 v6, 0x1

    .end local v6    # "surving_band":I
    .local v21, "surving_band":I
    aput-object v13, v3, v6

    .line 5709
    invoke-virtual {v0, v12, v6, v14, v3}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->setHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;[Ljava/lang/Object;)V

    .line 5713
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->labelsKey:[Ljava/lang/String;

    aget-object v3, v3, v6

    invoke-virtual {v0, v3, v6}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->addData(Ljava/lang/String;I)V

    .line 5714
    const-string v3, "tx_index_txp"

    invoke-virtual {v0, v1, v3, v6}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v3

    .line 5715
    .local v3, "tx_index_txp":I
    const-string v12, "rx_index_txp"

    invoke-virtual {v0, v1, v12, v6}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    .line 5716
    .local v12, "rx_index_txp":I
    const-string v13, "tx_index_pwrhdr"

    invoke-virtual {v0, v1, v13, v6}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v13

    .line 5717
    .local v13, "tx_index_pwrhdr":I
    const-string v14, "rx_index_pwrhdr"

    invoke-virtual {v0, v1, v14, v6}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v14

    .line 5718
    .local v14, "rx_index_pwrhdr":I
    move/from16 v22, v7

    .end local v7    # "current_ant_state":I
    .local v22, "current_ant_state":I
    const-string v7, "tx_index_rscp"

    invoke-virtual {v0, v1, v7, v6}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    .line 5719
    .local v7, "tx_index_rscp":I
    move/from16 v23, v8

    .end local v8    # "previous_ant_state":I
    .local v23, "previous_ant_state":I
    const-string v8, "rx_index_rscp"

    invoke-virtual {v0, v1, v8, v6}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v8

    .line 5721
    .local v8, "rx_index_rscp":I
    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->labelsKey:[Ljava/lang/String;

    move-object/from16 v24, v1

    const/4 v1, 0x2

    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v24, "data":Lcom/mediatek/mdml/Msg;
    aget-object v6, v6, v1

    move/from16 v25, v10

    .end local v10    # "ccm_state":I
    .local v25, "ccm_state":I
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v10, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, [Ljava/lang/String;

    move/from16 v26, v8

    const/4 v1, 0x4

    .end local v8    # "rx_index_rscp":I
    .local v26, "rx_index_rscp":I
    new-array v8, v1, [Ljava/lang/String;

    .line 5722
    if-ltz v2, :cond_8

    const/16 v1, 0xb

    if-gt v2, v1, :cond_8

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_7

    :cond_8
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_7
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/16 v17, 0x0

    aput-object v1, v8, v17

    .line 5723
    const/16 v1, -0x80

    const-string v27, "-"

    if-ne v3, v1, :cond_9

    move-object/from16 v1, v27

    goto :goto_8

    :cond_9
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    :goto_8
    const/16 v16, 0x1

    aput-object v1, v8, v16

    .line 5724
    const/16 v1, -0x80

    if-ne v13, v1, :cond_a

    move-object/from16 v1, v27

    goto :goto_9

    :cond_a
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    :goto_9
    const/16 v20, 0x2

    aput-object v1, v8, v20

    .line 5725
    const/16 v1, -0x1e0

    if-ne v7, v1, :cond_b

    move-object/from16 v28, v27

    goto :goto_a

    :cond_b
    invoke-static {v7}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v28

    :goto_a
    aput-object v28, v8, v18

    .line 5721
    const/4 v1, 0x1

    invoke-virtual {v0, v6, v1, v10, v8}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->setHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;[Ljava/lang/Object;)V

    .line 5727
    if-le v9, v1, :cond_10

    .line 5728
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v6, 0x2

    aget-object v1, v1, v6

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v8, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, [Ljava/lang/String;

    const/4 v6, 0x4

    new-array v6, v6, [Ljava/lang/String;

    .line 5729
    if-ltz v11, :cond_c

    const/16 v10, 0xb

    if-gt v11, v10, :cond_c

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    goto :goto_b

    :cond_c
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    :goto_b
    const/4 v10, 0x0

    aput-object v5, v6, v10

    .line 5730
    const/16 v5, -0x80

    if-ne v12, v5, :cond_d

    move-object/from16 v5, v27

    goto :goto_c

    :cond_d
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    :goto_c
    const/4 v10, 0x1

    aput-object v5, v6, v10

    .line 5731
    const/16 v5, -0x80

    if-ne v14, v5, :cond_e

    move-object/from16 v4, v27

    goto :goto_d

    :cond_e
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    :goto_d
    const/4 v5, 0x2

    aput-object v4, v6, v5

    .line 5732
    move/from16 v4, v26

    const/16 v5, -0x1e0

    .end local v26    # "rx_index_rscp":I
    .local v4, "rx_index_rscp":I
    if-ne v4, v5, :cond_f

    goto :goto_e

    :cond_f
    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v27

    :goto_e
    aput-object v27, v6, v18

    .line 5728
    const/4 v5, 0x1

    invoke-virtual {v0, v1, v5, v8, v6}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->setHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_f

    .line 5727
    .end local v4    # "rx_index_rscp":I
    .restart local v26    # "rx_index_rscp":I
    :cond_10
    move v5, v1

    move/from16 v4, v26

    .line 5735
    .end local v26    # "rx_index_rscp":I
    .restart local v4    # "rx_index_rscp":I
    :goto_f
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v6, 0x2

    aget-object v1, v1, v6

    invoke-virtual {v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/WcdmaUTasInfo;->addData(Ljava/lang/String;I)V

    .line 5736
    return-void
.end method
