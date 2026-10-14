.class Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;
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

.field rlf_cause:[I

.field rlf_causeother:[I

.field rlf_counter:[I

.field title:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 12473
    const-string v0, "MSG_ID_EM_ERRC_RLF_EVENT_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 12486
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 12475
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->StartTime:Ljava/lang/String;

    .line 12476
    const/4 v1, 0x1

    iput-boolean v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->isFirstTimeRecord:Z

    .line 12477
    const-string v1, "_LTE_ERRC_RLF_Event_Info.txt"

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->FileNamePS:Ljava/lang/String;

    .line 12478
    const-string v1, "Time,rlf_counter,rlf_cause,rlf_causeother"

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->title:Ljava/lang/String;

    .line 12479
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->FileNamePS1:Ljava/lang/String;

    .line 12480
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->FileNamePS2:Ljava/lang/String;

    .line 12481
    const/4 v0, 0x3

    new-array v1, v0, [I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->rlf_counter:[I

    .line 12482
    new-array v1, v0, [I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->rlf_cause:[I

    .line 12483
    new-array v0, v0, [I

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->rlf_causeother:[I

    .line 12487
    return-void
.end method


# virtual methods
.method LogRecord(I)V
    .locals 9
    .param p1, "sim_idx"    # I

    .line 12514
    const/4 v0, 0x0

    .line 12516
    .local v0, "CurTime":Ljava/lang/String;
    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/String;

    .line 12517
    .local v1, "Content":[Ljava/lang/String;
    const-string v2, "/Download"

    .line 12519
    .local v2, "path":Ljava/lang/String;
    iget-boolean v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->isFirstTimeRecord:Z

    const-string v4, "EmInfo/MDMComponent"

    const-string v5, ","

    const/4 v6, 0x1

    if-ne v3, v6, :cond_0

    .line 12520
    const/4 v3, 0x0

    iput-boolean v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->isFirstTimeRecord:Z

    .line 12521
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->getCurrectTime()Ljava/lang/String;

    move-result-object v7

    iput-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->StartTime:Ljava/lang/String;

    .line 12523
    :try_start_0
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->StartTime:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "_ps_1_"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v8, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v8, v8, v3

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->FileNamePS:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    iput-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->FileNamePS1:Ljava/lang/String;

    .line 12525
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->StartTime:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "_ps_2_"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v8, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v8, v8, v6

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->FileNamePS:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    iput-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->FileNamePS2:Ljava/lang/String;

    .line 12527
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->FileNamePS1:Ljava/lang/String;

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->title:Ljava/lang/String;

    invoke-virtual {p0, v2, v7, v8, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->saveToSDCard(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    .line 12528
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->FileNamePS2:Ljava/lang/String;

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->title:Ljava/lang/String;

    invoke-virtual {p0, v2, v7, v8, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->saveToSDCard(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 12531
    goto :goto_0

    .line 12529
    :catch_0
    move-exception v3

    .line 12530
    .local v3, "e":Ljava/lang/Exception;
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 12532
    .end local v3    # "e":Ljava/lang/Exception;
    :goto_0
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "isFirstTimeRecord = "

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v7, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->isFirstTimeRecord:Z

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->title:Ljava/lang/String;

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 12534
    :cond_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->getCurrectTime()Ljava/lang/String;

    move-result-object v0

    .line 12535
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->rlf_counter:[I

    aget v7, v7, p1

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->rlf_cause:[I

    aget v7, v7, p1

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->rlf_causeother:[I

    aget v5, v5, p1

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, p1

    .line 12539
    const-string v3, " to "

    const-string v5, "save "

    if-nez p1, :cond_1

    .line 12540
    :try_start_1
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v5, v1, p1

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->FileNamePS1:Ljava/lang/String;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 12541
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->FileNamePS1:Ljava/lang/String;

    aget-object v4, v1, p1

    invoke-virtual {p0, v2, v3, v4, v6}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->saveToSDCard(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    goto :goto_1

    .line 12543
    :cond_1
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v5, v1, p1

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->FileNamePS2:Ljava/lang/String;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 12544
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->FileNamePS2:Ljava/lang/String;

    aget-object v4, v1, p1

    invoke-virtual {p0, v2, v3, v4, v6}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->saveToSDCard(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 12548
    :goto_1
    goto :goto_2

    .line 12546
    :catch_1
    move-exception v3

    .line 12547
    .restart local v3    # "e":Ljava/lang/Exception;
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 12549
    .end local v3    # "e":Ljava/lang/Exception;
    :goto_2
    return-void
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 12501
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 12496
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 3

    .line 12505
    const-string v0, "rlf_counter"

    const-string v1, "rlf_cause"

    const-string v2, "rlf_causeother"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 12491
    const-string v0, "LTE ERRC ELF Event Info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 12510
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 6
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 12553
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 12554
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual {v0}, Lcom/mediatek/mdml/Msg;->getSimIdx()I

    move-result v1

    const/4 v2, 0x1

    sub-int/2addr v1, v2

    .line 12555
    .local v1, "sim_idx":I
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->rlf_counter:[I

    const-string v4, "rlf_counter"

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    aput v4, v3, v1

    .line 12556
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->rlf_cause:[I

    const-string v4, "rlf_cause"

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    aput v4, v3, v1

    .line 12557
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->rlf_causeother:[I

    const-string v4, "rlf_causeother"

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    aput v4, v3, v1

    .line 12558
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "rlf_counter = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->rlf_counter:[I

    aget v4, v4, v1

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "EmInfo/MDMComponent"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 12559
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "rlf_cause = "

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->rlf_cause:[I

    aget v5, v5, v1

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 12560
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "rlf_causeother = "

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->rlf_causeother:[I

    aget v5, v5, v1

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 12562
    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mAutoRecordFlag:Ljava/lang/String;

    const-string v4, "1"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    const/4 v3, 0x2

    if-ge v1, v3, :cond_0

    .line 12563
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->LogRecord(I)V

    .line 12565
    :cond_0
    add-int/lit8 v3, v1, 0x1

    sget v4, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    if-eq v3, v4, :cond_1

    .line 12566
    return-void

    .line 12568
    :cond_1
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->clearData()V

    .line 12569
    new-array v3, v2, [Ljava/lang/Object;

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->rlf_counter:[I

    aget v4, v4, v1

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    const/4 v5, 0x0

    aput-object v4, v3, v5

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->addData([Ljava/lang/Object;)V

    .line 12570
    new-array v3, v2, [Ljava/lang/Object;

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->rlf_cause:[I

    aget v4, v4, v1

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v3, v5

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->addData([Ljava/lang/Object;)V

    .line 12571
    new-array v2, v2, [Ljava/lang/Object;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->rlf_causeother:[I

    aget v3, v3, v1

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v2, v5

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/LteErrcRlfEvent;->addData([Ljava/lang/Object;)V

    .line 12572
    return-void
.end method
