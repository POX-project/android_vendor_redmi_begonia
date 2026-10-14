.class Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;
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
    .locals 2

    .line 10276
    const-string v0, "MSG_ID_EM_GSM_TAS_INFO_IND"

    const-string v1, "MSG_ID_EM_GSM_UTAS_INFO_IND"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 3
    .param p1, "context"    # Landroid/app/Activity;

    .line 10310
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;-><init>(Landroid/app/Activity;)V

    .line 10279
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->ServingBandMapping:Ljava/util/HashMap;

    .line 10287
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->TasEnableMapping:Ljava/util/HashMap;

    .line 10293
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo$3;-><init>(Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->labelsList:Ljava/util/List;

    .line 10301
    const-string v0, "Tas Common"

    const-string v1, "TX Info"

    const-string v2, "ANT Info"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->labelsKey:[Ljava/lang/String;

    .line 10302
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo$4;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo$4;-><init>(Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->valuesHashMap:Ljava/util/List;

    .line 10307
    const-string v0, "Common"

    const-string v1, "Detail"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->tabTitle:[Ljava/lang/String;

    .line 10311
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->initTableComponent([Ljava/lang/String;)V

    .line 10312
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

    .line 10356
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 10357
    .local v0, "arrayTypeKeys":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v2, 0x2

    aget-object v1, v1, v2

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 10358
    return-object v0
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 10346
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 10341
    const-string v0, "2. GSM EM Component"

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

    .line 10371
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    .line 10373
    .local v0, "hashMapkeyValues":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/util/LinkedHashMap;>;"
    if-eqz p1, :cond_1

    const/4 v1, 0x1

    if-eq p1, v1, :cond_0

    goto :goto_0

    .line 10378
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->labelsKey:[Ljava/lang/String;

    aget-object v2, v2, v1

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->valuesHashMap:Ljava/util/List;

    invoke-interface {v3, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, v2, v1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 10379
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v2, 0x2

    aget-object v1, v1, v2

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->valuesHashMap:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 10375
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v2, 0x0

    aget-object v1, v1, v2

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->valuesHashMap:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 10376
    nop

    .line 10382
    :goto_0
    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 10336
    const-string v0, "GSM UTAS Info"

    return-object v0
.end method

.method isLabelArrayType(Ljava/lang/String;)Z
    .locals 1
    .param p1, "label"    # Ljava/lang/String;

    .line 10363
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->getArrayTypeKey()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 10364
    const/4 v0, 0x1

    return v0

    .line 10366
    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method servingBandMapping(I)Ljava/lang/String;
    .locals 3
    .param p1, "bandidx"    # I

    .line 10324
    const-string v0, " "

    .line 10325
    .local v0, "bandidx_s":Ljava/lang/String;
    const/4 v1, 0x1

    if-lt p1, v1, :cond_0

    const/4 v1, 0x4

    if-gt p1, v1, :cond_0

    .line 10326
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->ServingBandMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    .line 10328
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

    .line 10331
    :goto_0
    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 10351
    const/4 v0, 0x1

    return v0
.end method

.method tasEableMapping(I)Ljava/lang/String;
    .locals 4
    .param p1, "tasidx"    # I

    .line 10315
    const-string v0, ""

    .line 10316
    .local v0, "tasidx_s":Ljava/lang/String;
    if-ltz p1, :cond_0

    const/4 v1, 0x1

    if-gt p1, v1, :cond_0

    .line 10317
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->TasEnableMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    .line 10319
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->TasEnableMapping:Ljava/util/HashMap;

    const/4 v3, 0x2

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "("

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ")"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 10320
    :goto_0
    return-object v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 28
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 10387
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 10388
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->clearData()V

    .line 10389
    const-string v2, "MSG_ID_EM_GSM_TAS_INFO_IND"

    move-object/from16 v3, p1

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    const/4 v4, 0x0

    const/4 v5, 0x1

    if-eqz v2, :cond_0

    .line 10390
    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->setInfoValid(I)V

    goto :goto_0

    .line 10392
    :cond_0
    invoke-virtual {v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->setInfoValid(I)V

    .line 10394
    :goto_0
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->isInfoValid()Z

    move-result v2

    const/4 v6, -0x1

    if-nez v2, :cond_1

    .line 10395
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->resetView()V

    .line 10396
    new-instance v2, Landroid/widget/TextView;

    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->mContext:Landroid/app/Activity;

    invoke-direct {v2, v5}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 10397
    .local v2, "textView":Landroid/widget/TextView;
    new-instance v5, Landroid/widget/AbsListView$LayoutParams;

    const/4 v7, -0x2

    invoke-direct {v5, v6, v7}, Landroid/widget/AbsListView$LayoutParams;-><init>(II)V

    .line 10399
    .local v5, "layoutParams":Landroid/widget/AbsListView$LayoutParams;
    invoke-virtual {v2, v5}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 10400
    const/16 v6, 0x14

    invoke-virtual {v2, v6, v4, v6, v4}, Landroid/widget/TextView;->setPadding(IIII)V

    .line 10401
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Use "

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->getName()Ljava/lang/String;

    move-result-object v6

    const-string v7, "UTAS"

    const-string v8, "TAS"

    invoke-virtual {v6, v7, v8}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 10402
    const/high16 v4, 0x41800000    # 16.0f

    invoke-virtual {v2, v4}, Landroid/widget/TextView;->setTextSize(F)V

    .line 10403
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->scrollView:Landroid/widget/ScrollView;

    invoke-virtual {v4, v2}, Landroid/widget/ScrollView;->addView(Landroid/view/View;)V

    .line 10404
    return-void

    .line 10406
    .end local v2    # "textView":Landroid/widget/TextView;
    .end local v5    # "layoutParams":Landroid/widget/AbsListView$LayoutParams;
    :cond_1
    const-string v2, "tas_enable"

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 10407
    .local v2, "tas_enable":I
    const-string v7, "serving_band"

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 10408
    .local v7, "surving_band":I
    const-string v8, "gsm_tx_antenna_rxLevel"

    invoke-virtual {v0, v1, v8, v5}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v8

    .line 10409
    .local v8, "tx_ant_rxLevel":I
    const-string v9, "gsm_drx_antenna_rxLevel"

    invoke-virtual {v0, v1, v9, v5}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v9

    .line 10410
    .local v9, "div_ant_rxLevel":I
    const-string v10, "gsm_current_average_snr"

    invoke-virtual {v0, v1, v10, v5}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v10

    .line 10411
    .local v10, "cur_average_snr":I
    const-string v11, "gsm_antenna_state"

    invoke-virtual {v0, v1, v11}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v11

    .line 10412
    .local v11, "ant_state":I
    const-string v12, "gsm_txPower_det"

    invoke-virtual {v0, v1, v12, v5}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v12

    .line 10413
    .local v12, "gsm_txPower_det":I
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->labelsKey:[Ljava/lang/String;

    aget-object v13, v13, v4

    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v14, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, [Ljava/lang/String;

    const/4 v15, 0x7

    new-array v15, v15, [Ljava/lang/String;

    .line 10414
    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->tasEableMapping(I)Ljava/lang/String;

    move-result-object v16

    aput-object v16, v15, v4

    .line 10415
    invoke-virtual {v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->servingBandMapping(I)Ljava/lang/String;

    move-result-object v16

    aput-object v16, v15, v5

    .line 10416
    const-string v5, ")"

    const-string v4, "-("

    const-string v6, ""

    if-ltz v11, :cond_2

    move/from16 v19, v2

    .end local v2    # "tas_enable":I
    .local v19, "tas_enable":I
    const/16 v2, 0x17

    if-gt v11, v2, :cond_3

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    .end local v19    # "tas_enable":I
    .restart local v2    # "tas_enable":I
    :cond_2
    move/from16 v19, v2

    .end local v2    # "tas_enable":I
    .restart local v19    # "tas_enable":I
    :cond_3
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_1
    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x2

    aput-object v2, v15, v3

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "dBm"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/16 v21, 0x3

    aput-object v2, v15, v21

    .line 10418
    const/4 v2, -0x1

    if-ne v9, v2, :cond_4

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_2

    :cond_4
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_2
    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    move/from16 v18, v7

    .end local v7    # "surving_band":I
    .local v18, "surving_band":I
    const/4 v7, 0x4

    aput-object v2, v15, v7

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v7, 0x5

    aput-object v2, v15, v7

    const/4 v2, 0x6

    .line 10420
    if-ltz v12, :cond_5

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    goto :goto_3

    :cond_5
    move-object v7, v6

    :goto_3
    aput-object v7, v15, v2

    .line 10413
    const/4 v2, 0x0

    invoke-virtual {v0, v13, v2, v14, v15}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->setHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;[Ljava/lang/Object;)V

    .line 10422
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->labelsKey:[Ljava/lang/String;

    aget-object v7, v7, v2

    invoke-virtual {v0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->addData(Ljava/lang/String;I)V

    .line 10423
    const-string v2, "gsm_tx_ant_index"

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 10424
    .local v2, "tx_ant_index":I
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v13, 0x1

    aget-object v7, v7, v13

    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v14, v13}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, [Ljava/lang/String;

    new-array v15, v13, [Ljava/lang/String;

    .line 10425
    move/from16 v23, v8

    .end local v8    # "tx_ant_rxLevel":I
    .local v23, "tx_ant_rxLevel":I
    const/16 v8, 0xe

    if-lt v2, v13, :cond_6

    if-gt v2, v8, :cond_6

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    goto :goto_4

    .line 10426
    :cond_6
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    :goto_4
    const/16 v17, 0x0

    aput-object v13, v15, v17

    .line 10424
    const/4 v13, 0x1

    invoke-virtual {v0, v7, v13, v14, v15}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->setHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;[Ljava/lang/Object;)V

    .line 10428
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->labelsKey:[Ljava/lang/String;

    aget-object v7, v7, v13

    invoke-virtual {v0, v7, v13}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->addData(Ljava/lang/String;I)V

    .line 10429
    const-string v7, "available_ant_num"

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 10430
    .local v7, "available_ant_num":I
    const/4 v13, 0x0

    .local v13, "i":I
    :goto_5
    if-ge v13, v7, :cond_a

    const/4 v14, 0x5

    if-gt v13, v14, :cond_a

    .line 10431
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    const-string v14, "gsm_available_ant["

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v14, "]"

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v0, v1, v15}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v15

    .line 10432
    .local v15, "available_ant":I
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v24, v2

    .end local v2    # "tx_ant_index":I
    .local v24, "tx_ant_index":I
    const-string v2, "gsm_antenna_rxLevel["

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v8, 0x1

    invoke-virtual {v0, v1, v2, v8}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v2

    .line 10434
    .local v2, "gsm_antenna_rxlev":I
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v25, v7

    .end local v7    # "available_ant_num":I
    .local v25, "available_ant_num":I
    const-string v7, "gsm_snr["

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v8, 0x1

    invoke-virtual {v0, v1, v7, v8}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v7

    .line 10435
    .local v7, "gsm_snr":I
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v26, v9

    .end local v9    # "div_ant_rxLevel":I
    .local v26, "div_ant_rxLevel":I
    const-string v9, "gsm_txpower["

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    const/4 v9, 0x1

    invoke-virtual {v0, v1, v8, v9}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v8

    .line 10436
    .local v8, "gsm_txpower":I
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v9, 0x2

    aget-object v14, v14, v9

    move-object/from16 v27, v1

    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v27, "data":Lcom/mediatek/mdml/Msg;
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v1, v9}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [Ljava/lang/String;

    move/from16 v22, v10

    const/4 v9, 0x4

    .end local v10    # "cur_average_snr":I
    .local v22, "cur_average_snr":I
    new-array v10, v9, [Ljava/lang/String;

    .line 10437
    const/4 v9, 0x1

    if-lt v15, v9, :cond_7

    const/16 v9, 0xe

    if-gt v15, v9, :cond_7

    .line 10438
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_6

    :cond_7
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_6
    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    const/16 v17, 0x0

    aput-object v9, v10, v17

    .line 10439
    if-ltz v8, :cond_8

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    goto :goto_7

    :cond_8
    move-object v9, v6

    :goto_7
    const/16 v16, 0x1

    aput-object v9, v10, v16

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    const/16 v20, 0x2

    aput-object v9, v10, v20

    .line 10441
    if-gtz v2, :cond_9

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    goto :goto_8

    :cond_9
    move-object v9, v6

    :goto_8
    aput-object v9, v10, v21

    .line 10436
    const/4 v9, 0x1

    invoke-virtual {v0, v14, v9, v1, v10}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->setHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;[Ljava/lang/Object;)V

    .line 10430
    .end local v2    # "gsm_antenna_rxlev":I
    .end local v7    # "gsm_snr":I
    .end local v8    # "gsm_txpower":I
    .end local v15    # "available_ant":I
    add-int/lit8 v13, v13, 0x1

    move/from16 v10, v22

    move/from16 v2, v24

    move/from16 v7, v25

    move/from16 v9, v26

    move-object/from16 v1, v27

    const/16 v8, 0xe

    goto/16 :goto_5

    .end local v22    # "cur_average_snr":I
    .end local v24    # "tx_ant_index":I
    .end local v25    # "available_ant_num":I
    .end local v26    # "div_ant_rxLevel":I
    .end local v27    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v2, "tx_ant_index":I
    .local v7, "available_ant_num":I
    .restart local v9    # "div_ant_rxLevel":I
    .restart local v10    # "cur_average_snr":I
    :cond_a
    move-object/from16 v27, v1

    move/from16 v24, v2

    move/from16 v25, v7

    move/from16 v26, v9

    move/from16 v22, v10

    .line 10444
    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .end local v2    # "tx_ant_index":I
    .end local v7    # "available_ant_num":I
    .end local v9    # "div_ant_rxLevel":I
    .end local v10    # "cur_average_snr":I
    .end local v13    # "i":I
    .restart local v22    # "cur_average_snr":I
    .restart local v24    # "tx_ant_index":I
    .restart local v25    # "available_ant_num":I
    .restart local v26    # "div_ant_rxLevel":I
    .restart local v27    # "data":Lcom/mediatek/mdml/Msg;
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v2, 0x2

    aget-object v1, v1, v2

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/GSMUTasInfo;->addData(Ljava/lang/String;I)V

    .line 10445
    return-void
.end method
