.class Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;
.source "MDMComponentC2k.java"


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

    .line 225
    const-string v0, "MSG_ID_EM_C2K_L4_RTT_RADIO_INFO_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 3
    .param p1, "context"    # Landroid/app/Activity;

    .line 261
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;-><init>(Landroid/app/Activity;)V

    .line 227
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->ServingBandMapping:Ljava/util/HashMap;

    .line 234
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->TasEnableMapping:Ljava/util/HashMap;

    .line 258
    const-string v0, "Common"

    const-string v1, "Detail"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->tabTitle:[Ljava/lang/String;

    .line 265
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$3;-><init>(Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->labelsList:Ljava/util/List;

    .line 273
    const-string v0, "Tas Common"

    const-string v1, "Main Info"

    const-string v2, "ANT Info"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->labelsKey:[Ljava/lang/String;

    .line 275
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$4;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo$4;-><init>(Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->valuesHashMap:Ljava/util/List;

    .line 262
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->tabTitle:[Ljava/lang/String;

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->initTableComponent([Ljava/lang/String;)V

    .line 263
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

    .line 303
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 304
    .local v0, "arrayTypeKeys":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v2, 0x2

    aget-object v1, v1, v2

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 305
    return-object v0
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 293
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 288
    const-string v0, "7. CDMA EM Component"

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

    .line 318
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    .line 320
    .local v0, "hashMapkeyValues":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/util/LinkedHashMap;>;"
    if-eqz p1, :cond_1

    const/4 v1, 0x1

    if-eq p1, v1, :cond_0

    goto :goto_0

    .line 325
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->labelsKey:[Ljava/lang/String;

    aget-object v2, v2, v1

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->valuesHashMap:Ljava/util/List;

    invoke-interface {v3, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, v2, v1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 326
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v2, 0x2

    aget-object v1, v1, v2

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->valuesHashMap:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 322
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v2, 0x0

    aget-object v1, v1, v2

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->valuesHashMap:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 323
    nop

    .line 329
    :goto_0
    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 283
    const-string v0, "1xRTT radio info(UTAS info)"

    return-object v0
.end method

.method isLabelArrayType(Ljava/lang/String;)Z
    .locals 1
    .param p1, "label"    # Ljava/lang/String;

    .line 310
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->getArrayTypeKey()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 311
    const/4 v0, 0x1

    return v0

    .line 313
    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method servingBandMapping(I)Ljava/lang/String;
    .locals 3
    .param p1, "bandidx"    # I

    .line 251
    const-string v0, " "

    .line 252
    .local v0, "bandidx_s":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->ServingBandMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 253
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->ServingBandMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    .line 255
    :cond_0
    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 298
    const/4 v0, 0x0

    return v0
.end method

.method tasEableMapping(I)Ljava/lang/String;
    .locals 3
    .param p1, "tasidx"    # I

    .line 243
    const-string v0, " "

    .line 244
    .local v0, "tasidx_s":Ljava/lang/String;
    if-ltz p1, :cond_0

    const/4 v1, 0x1

    if-gt p1, v1, :cond_0

    .line 245
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->TasEnableMapping:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    .line 247
    :cond_0
    return-object v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 28
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 334
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Lcom/mediatek/mdml/Msg;

    .line 335
    .local v1, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->clearData()V

    .line 336
    const-string v2, "utas_enable"

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 337
    .local v2, "utas_info_valid":I
    invoke-virtual {v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->setInfoValid(I)V

    .line 338
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->isInfoValid()Z

    move-result v3

    const/4 v4, 0x0

    if-nez v3, :cond_0

    .line 339
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->resetView()V

    .line 340
    new-instance v3, Landroid/widget/TextView;

    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->mContext:Landroid/app/Activity;

    invoke-direct {v3, v5}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 341
    .local v3, "textView":Landroid/widget/TextView;
    new-instance v5, Landroid/widget/AbsListView$LayoutParams;

    const/4 v6, -0x1

    const/4 v7, -0x2

    invoke-direct {v5, v6, v7}, Landroid/widget/AbsListView$LayoutParams;-><init>(II)V

    .line 343
    .local v5, "layoutParams":Landroid/widget/AbsListView$LayoutParams;
    invoke-virtual {v3, v5}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 344
    const/16 v6, 0x14

    invoke-virtual {v3, v6, v4, v6, v4}, Landroid/widget/TextView;->setPadding(IIII)V

    .line 345
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "Use "

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->getName()Ljava/lang/String;

    move-result-object v6

    const-string v7, "UTAS"

    const-string v8, "TAS"

    invoke-virtual {v6, v7, v8}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 346
    const/high16 v4, 0x41800000    # 16.0f

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setTextSize(F)V

    .line 347
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->scrollView:Landroid/widget/ScrollView;

    invoke-virtual {v4, v3}, Landroid/widget/ScrollView;->addView(Landroid/view/View;)V

    .line 348
    return-void

    .line 350
    .end local v3    # "textView":Landroid/widget/TextView;
    .end local v5    # "layoutParams":Landroid/widget/AbsListView$LayoutParams;
    :cond_0
    const-string v3, "tas_enable"

    invoke-virtual {v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    .line 351
    .local v3, "tas_enable":I
    const-string v5, "tas_ver"

    invoke-virtual {v0, v1, v5}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v5

    .line 352
    .local v5, "tas_ver":I
    const-string v6, "band_class"

    invoke-virtual {v0, v1, v6}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v6

    .line 353
    .local v6, "band_class":I
    const-string v7, "channel"

    invoke-virtual {v0, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v7

    .line 354
    .local v7, "channel":I
    const-string v8, "pilot_pn_offset"

    invoke-virtual {v0, v1, v8}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v8

    .line 355
    .local v8, "pilot_pn_offset":I
    const-string v9, "fer"

    invoke-virtual {v0, v1, v9}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v9

    .line 356
    .local v9, "fer":I
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->labelsKey:[Ljava/lang/String;

    aget-object v10, v10, v4

    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v11, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, [Ljava/lang/String;

    const/4 v12, 0x6

    new-array v12, v12, [Ljava/lang/String;

    .line 357
    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->tasEableMapping(I)Ljava/lang/String;

    move-result-object v13

    aput-object v13, v12, v4

    .line 358
    const/4 v13, 0x3

    const-string v14, ")"

    const-string v15, "-("

    const/4 v4, 0x1

    if-lt v5, v4, :cond_1

    if-gt v5, v13, :cond_1

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ".0"

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    goto :goto_0

    :cond_1
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    :goto_0
    const/4 v13, 0x1

    aput-object v4, v12, v13

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ""

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    move/from16 v19, v2

    .end local v2    # "utas_info_valid":I
    .local v19, "utas_info_valid":I
    const/4 v2, 0x2

    aput-object v4, v12, v2

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/16 v17, 0x3

    aput-object v4, v12, v17

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v2, 0x4

    aput-object v4, v12, v2

    const/4 v4, 0x5

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v12, v4

    .line 356
    const/4 v2, 0x0

    invoke-virtual {v0, v10, v2, v11, v12}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->setHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;[Ljava/lang/Object;)V

    .line 365
    const-string v2, "tas_state"

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 366
    .local v2, "tas_state":I
    const-string v4, "tx_ant"

    invoke-virtual {v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    .line 367
    .local v4, "tx_ant":I
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v11, 0x1

    aget-object v10, v10, v11

    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v12, v11}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v12

    check-cast v12, [Ljava/lang/String;

    move/from16 v22, v3

    const/4 v11, 0x2

    .end local v3    # "tas_enable":I
    .local v22, "tas_enable":I
    new-array v3, v11, [Ljava/lang/String;

    .line 368
    if-ltz v2, :cond_2

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v23, v5

    .end local v5    # "tas_ver":I
    .local v23, "tas_ver":I
    const-string v5, "State"

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    goto :goto_1

    .end local v23    # "tas_ver":I
    .restart local v5    # "tas_ver":I
    :cond_2
    move/from16 v23, v5

    .end local v5    # "tas_ver":I
    .restart local v23    # "tas_ver":I
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    :goto_1
    const/4 v11, 0x0

    aput-object v5, v3, v11

    .line 369
    if-ltz v4, :cond_3

    const/4 v5, 0x4

    if-gt v4, v5, :cond_3

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_2

    :cond_3
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_2
    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const/4 v11, 0x1

    aput-object v5, v3, v11

    .line 367
    invoke-virtual {v0, v10, v11, v12, v3}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->setHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;[Ljava/lang/Object;)V

    .line 371
    const-string v3, "em_c2k_l4_rtt_ant_info"

    .line 372
    .local v3, "coName":Ljava/lang/String;
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_3
    const/16 v10, 0x8

    if-ge v5, v10, :cond_8

    .line 373
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "["

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v12, "]."

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v24, v2

    .end local v2    # "tas_state":I
    .local v24, "tas_state":I
    const-string v2, "valid"

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v2

    .line 374
    .local v2, "valid":I
    if-nez v2, :cond_4

    move-object/from16 v27, v1

    move-object/from16 v21, v3

    move/from16 v26, v4

    const/16 v17, 0x3

    goto/16 :goto_7

    .line 375
    :cond_4
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v25, v2

    .end local v2    # "valid":I
    .local v25, "valid":I
    const-string v2, "rx_power"

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v10, 0x1

    invoke-virtual {v0, v1, v2, v10}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v2

    .line 376
    .local v2, "rx_power":I
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v26, v4

    .end local v4    # "tx_ant":I
    .local v26, "tx_ant":I
    const-string v4, "tx_power"

    invoke-virtual {v10, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v10, 0x1

    invoke-virtual {v0, v1, v4, v10}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v4

    .line 377
    .local v4, "tx_power":I
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "phr"

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    const/4 v11, 0x1

    invoke-virtual {v0, v1, v10, v11}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;Z)I

    move-result v10

    .line 378
    .local v10, "phr":I
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v12, 0x2

    aget-object v11, v11, v12

    move-object/from16 v27, v1

    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v27, "data":Lcom/mediatek/mdml/Msg;
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v1, v12}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [Ljava/lang/String;

    move-object/from16 v21, v3

    const/4 v12, 0x4

    .end local v3    # "coName":Ljava/lang/String;
    .local v21, "coName":Ljava/lang/String;
    new-array v3, v12, [Ljava/lang/String;

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const/16 v16, 0x0

    aput-object v12, v3, v16

    .line 380
    const/16 v12, -0x23

    if-gt v2, v12, :cond_5

    const/16 v12, -0x6e

    if-lt v2, v12, :cond_5

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_4

    :cond_5
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_4
    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const/16 v18, 0x1

    aput-object v12, v3, v18

    .line 381
    const/16 v12, 0x18

    if-gt v4, v12, :cond_6

    const/16 v12, -0x3c

    if-lt v4, v12, :cond_6

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_5

    :cond_6
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_5
    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const/16 v20, 0x2

    aput-object v12, v3, v20

    .line 382
    const/16 v12, 0x55

    if-gt v10, v12, :cond_7

    const/16 v12, -0x32

    if-lt v10, v12, :cond_7

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_6

    :cond_7
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_6
    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const/16 v17, 0x3

    aput-object v12, v3, v17

    .line 378
    const/4 v12, 0x1

    invoke-virtual {v0, v11, v12, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->setHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;[Ljava/lang/Object;)V

    .line 372
    .end local v2    # "rx_power":I
    .end local v4    # "tx_power":I
    .end local v10    # "phr":I
    .end local v25    # "valid":I
    :goto_7
    add-int/lit8 v5, v5, 0x1

    move-object/from16 v3, v21

    move/from16 v2, v24

    move/from16 v4, v26

    move-object/from16 v1, v27

    goto/16 :goto_3

    .end local v21    # "coName":Ljava/lang/String;
    .end local v24    # "tas_state":I
    .end local v26    # "tx_ant":I
    .end local v27    # "data":Lcom/mediatek/mdml/Msg;
    .restart local v1    # "data":Lcom/mediatek/mdml/Msg;
    .local v2, "tas_state":I
    .restart local v3    # "coName":Ljava/lang/String;
    .local v4, "tx_ant":I
    :cond_8
    move-object/from16 v27, v1

    move/from16 v24, v2

    move-object/from16 v21, v3

    .line 385
    .end local v1    # "data":Lcom/mediatek/mdml/Msg;
    .end local v2    # "tas_state":I
    .end local v3    # "coName":Ljava/lang/String;
    .end local v5    # "i":I
    .restart local v21    # "coName":Ljava/lang/String;
    .restart local v24    # "tas_state":I
    .restart local v27    # "data":Lcom/mediatek/mdml/Msg;
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v2, 0x0

    aget-object v1, v1, v2

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->addData(Ljava/lang/String;I)V

    .line 386
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v2, 0x1

    aget-object v1, v1, v2

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->addData(Ljava/lang/String;I)V

    .line 387
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->labelsKey:[Ljava/lang/String;

    const/4 v3, 0x2

    aget-object v1, v1, v3

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/Cdma1xrttRadioUTasInfo;->addData(Ljava/lang/String;I)V

    .line 388
    return-void
.end method
