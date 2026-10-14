.class Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field FileNamePS:Ljava/lang/String;

.field FileNamePS1:Ljava/lang/String;

.field FileNamePS2:Ljava/lang/String;

.field StartTime:Ljava/lang/String;

.field isFirstTimeRecord:Z

.field oos_counter:[I

.field title:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 12379
    const-string v0, "MSG_ID_EM_ERRC_OOS_EVENT_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 12391
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 12381
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->StartTime:Ljava/lang/String;

    .line 12383
    const/4 v1, 0x1

    iput-boolean v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->isFirstTimeRecord:Z

    .line 12384
    const-string v1, "_LTE_ERRC_OOS_Event_Info.txt"

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->FileNamePS:Ljava/lang/String;

    .line 12385
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->FileNamePS1:Ljava/lang/String;

    .line 12386
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->FileNamePS2:Ljava/lang/String;

    .line 12387
    const/4 v0, 0x3

    new-array v0, v0, [I

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->oos_counter:[I

    .line 12388
    const-string v0, "Time,oos_counter"

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->title:Ljava/lang/String;

    .line 12392
    return-void
.end method


# virtual methods
.method LogRecord(I)V
    .locals 9
    .param p1, "sim_idx"    # I

    .line 12419
    const/4 v0, 0x0

    .line 12421
    .local v0, "CurTime":Ljava/lang/String;
    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/String;

    .line 12422
    .local v1, "Content":[Ljava/lang/String;
    const-string v2, "/Download"

    .line 12424
    .local v2, "path":Ljava/lang/String;
    iget-boolean v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->isFirstTimeRecord:Z

    const-string v4, ","

    const-string v5, "EmInfo/MDMComponent"

    const/4 v6, 0x1

    if-ne v3, v6, :cond_0

    .line 12425
    const/4 v3, 0x0

    iput-boolean v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->isFirstTimeRecord:Z

    .line 12426
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->getCurrectTime()Ljava/lang/String;

    move-result-object v7

    iput-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->StartTime:Ljava/lang/String;

    .line 12428
    :try_start_0
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->StartTime:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "_ps_1_"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v8, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v8, v8, v3

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->FileNamePS:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    iput-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->FileNamePS1:Ljava/lang/String;

    .line 12430
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->StartTime:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "_ps_2_"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v8, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v8, v8, v6

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->FileNamePS:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    iput-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->FileNamePS2:Ljava/lang/String;

    .line 12432
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->FileNamePS1:Ljava/lang/String;

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->title:Ljava/lang/String;

    invoke-virtual {p0, v2, v7, v8, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->saveToSDCard(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    .line 12433
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->FileNamePS2:Ljava/lang/String;

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->title:Ljava/lang/String;

    invoke-virtual {p0, v2, v7, v8, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->saveToSDCard(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 12436
    goto :goto_0

    .line 12434
    :catch_0
    move-exception v3

    .line 12435
    .local v3, "e":Ljava/lang/Exception;
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 12437
    .end local v3    # "e":Ljava/lang/Exception;
    :goto_0
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "isFirstTimeRecord = "

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v7, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->isFirstTimeRecord:Z

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->title:Ljava/lang/String;

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v5, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 12439
    :cond_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->getCurrectTime()Ljava/lang/String;

    move-result-object v0

    .line 12440
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->oos_counter:[I

    aget v4, v4, p1

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, p1

    .line 12443
    const-string v3, " to "

    const-string v4, "save "

    if-nez p1, :cond_1

    .line 12444
    :try_start_1
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v4, v1, p1

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->FileNamePS1:Ljava/lang/String;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v5, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 12445
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->FileNamePS1:Ljava/lang/String;

    aget-object v4, v1, p1

    invoke-virtual {p0, v2, v3, v4, v6}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->saveToSDCard(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    goto :goto_1

    .line 12447
    :cond_1
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v4, v1, p1

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->FileNamePS2:Ljava/lang/String;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v5, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 12448
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->FileNamePS2:Ljava/lang/String;

    aget-object v4, v1, p1

    invoke-virtual {p0, v2, v3, v4, v6}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->saveToSDCard(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 12452
    :goto_1
    goto :goto_2

    .line 12450
    :catch_1
    move-exception v3

    .line 12451
    .restart local v3    # "e":Ljava/lang/Exception;
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 12453
    .end local v3    # "e":Ljava/lang/Exception;
    :goto_2
    return-void
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 12406
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 12401
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 12410
    const-string v0, "oos_counter"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 12396
    const-string v0, "LTE ERRC OOS Event Info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 12415
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 5
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 12457
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 12458
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual {v0}, Lcom/mediatek/mdml/Msg;->getSimIdx()I

    move-result v1

    const/4 v2, 0x1

    sub-int/2addr v1, v2

    .line 12459
    .local v1, "sim_idx":I
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->oos_counter:[I

    const-string v4, "oos_counter"

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    aput v4, v3, v1

    .line 12460
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "oos_counter = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->oos_counter:[I

    aget v4, v4, v1

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "EmInfo/MDMComponent"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 12461
    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mAutoRecordFlag:Ljava/lang/String;

    const-string v4, "1"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    const/4 v3, 0x2

    if-ge v1, v3, :cond_0

    .line 12462
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->LogRecord(I)V

    .line 12464
    :cond_0
    add-int/lit8 v3, v1, 0x1

    sget v4, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    if-eq v3, v4, :cond_1

    .line 12465
    return-void

    .line 12467
    :cond_1
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->clearData()V

    .line 12468
    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->oos_counter:[I

    aget v4, v4, v1

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v2, v3

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcOosEvent;->addData([Ljava/lang/Object;)V

    .line 12469
    return-void
.end method
