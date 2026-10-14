.class Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field FileNamePS:Ljava/lang/String;

.field FileNamePS1:Ljava/lang/String;

.field FileNamePS2:Ljava/lang/String;

.field StartTime:Ljava/lang/String;

.field attempt:[I

.field event:[Ljava/lang/String;

.field isFirstTimeRecord:Z

.field procId:[I

.field status:[I

.field success:[I

.field title:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 8543
    const-string v0, "MSG_ID_EM_ERRC_SUCCESS_RATE_KPI_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 8559
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 8545
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->StartTime:Ljava/lang/String;

    .line 8547
    const/4 v1, 0x1

    iput-boolean v1, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->isFirstTimeRecord:Z

    .line 8548
    const-string v1, "_Handover_Intra_LTE.txt"

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->FileNamePS:Ljava/lang/String;

    .line 8549
    const-string v1, "Time,success,procId,status"

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->title:Ljava/lang/String;

    .line 8550
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->FileNamePS1:Ljava/lang/String;

    .line 8551
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->FileNamePS2:Ljava/lang/String;

    .line 8552
    const/4 v0, 0x3

    new-array v1, v0, [I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->success:[I

    .line 8553
    new-array v1, v0, [I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->procId:[I

    .line 8554
    new-array v1, v0, [I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->status:[I

    .line 8555
    new-array v1, v0, [I

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->attempt:[I

    .line 8556
    new-array v0, v0, [Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->event:[Ljava/lang/String;

    .line 8560
    return-void
.end method


# virtual methods
.method LogRecord(I)V
    .locals 9
    .param p1, "sim_idx"    # I

    .line 8587
    const/4 v0, 0x0

    .line 8589
    .local v0, "CurTime":Ljava/lang/String;
    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/String;

    .line 8590
    .local v1, "Content":[Ljava/lang/String;
    const-string v2, "/Download"

    .line 8592
    .local v2, "path":Ljava/lang/String;
    iget-boolean v3, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->isFirstTimeRecord:Z

    const-string v4, "EmInfo/MDMComponent"

    const-string v5, ","

    const/4 v6, 0x1

    if-ne v3, v6, :cond_0

    .line 8593
    const/4 v3, 0x0

    iput-boolean v3, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->isFirstTimeRecord:Z

    .line 8594
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->getCurrectTime()Ljava/lang/String;

    move-result-object v7

    iput-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->StartTime:Ljava/lang/String;

    .line 8596
    :try_start_0
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->StartTime:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "_ps_1_"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v8, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v8, v8, v3

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->FileNamePS:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    iput-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->FileNamePS1:Ljava/lang/String;

    .line 8598
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->StartTime:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "_ps_2_"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v8, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v8, v8, v6

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->FileNamePS:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    iput-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->FileNamePS2:Ljava/lang/String;

    .line 8600
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->FileNamePS1:Ljava/lang/String;

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->title:Ljava/lang/String;

    invoke-virtual {p0, v2, v7, v8, v3}, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->saveToSDCard(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    .line 8601
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->FileNamePS2:Ljava/lang/String;

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->title:Ljava/lang/String;

    invoke-virtual {p0, v2, v7, v8, v3}, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->saveToSDCard(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 8604
    goto :goto_0

    .line 8602
    :catch_0
    move-exception v3

    .line 8603
    .local v3, "e":Ljava/lang/Exception;
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 8605
    .end local v3    # "e":Ljava/lang/Exception;
    :goto_0
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "isFirstTimeRecord = "

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v7, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->isFirstTimeRecord:Z

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->title:Ljava/lang/String;

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 8607
    :cond_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->getCurrectTime()Ljava/lang/String;

    move-result-object v0

    .line 8608
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->success:[I

    aget v7, v7, p1

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->procId:[I

    aget v7, v7, p1

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->status:[I

    aget v5, v5, p1

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, p1

    .line 8612
    const-string v3, " to "

    const-string v5, "save "

    if-nez p1, :cond_1

    .line 8613
    :try_start_1
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v5, v1, p1

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->FileNamePS1:Ljava/lang/String;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 8614
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->FileNamePS1:Ljava/lang/String;

    aget-object v4, v1, p1

    invoke-virtual {p0, v2, v3, v4, v6}, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->saveToSDCard(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    goto :goto_1

    .line 8616
    :cond_1
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v5, v1, p1

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->FileNamePS2:Ljava/lang/String;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 8617
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->FileNamePS2:Ljava/lang/String;

    aget-object v4, v1, p1

    invoke-virtual {p0, v2, v3, v4, v6}, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->saveToSDCard(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 8621
    :goto_1
    goto :goto_2

    .line 8619
    :catch_1
    move-exception v3

    .line 8620
    .restart local v3    # "e":Ljava/lang/Exception;
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 8622
    .end local v3    # "e":Ljava/lang/Exception;
    :goto_2
    return-void
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 8574
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 8569
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 3

    .line 8578
    const-string v0, "Attempt"

    const-string v1, "Success"

    const-string v2, "Fail"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 8564
    const-string v0, "Handover (Intra-LTE)"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 8583
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 7
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 8626
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 8627
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual {v0}, Lcom/mediatek/mdml/Msg;->getSimIdx()I

    move-result v1

    const/4 v2, 0x1

    sub-int/2addr v1, v2

    .line 8629
    .local v1, "sim_idx":I
    const-string v3, "MSG_ID_EM_ERRC_SUCCESS_RATE_KPI_IND"

    invoke-virtual {v3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 8630
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->attempt:[I

    const-string v4, "attempt"

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    aput v4, v3, v1

    .line 8631
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->success:[I

    const-string v4, "success"

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    aput v4, v3, v1

    .line 8632
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->procId:[I

    const-string v4, "proc_id"

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    aput v4, v3, v1

    .line 8633
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->status:[I

    const-string v4, "status"

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v4

    aput v4, v3, v1

    .line 8634
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "HandoverIntraLte,success = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->success:[I

    aget v4, v4, v1

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "EmInfo/MDMComponent"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 8636
    :cond_0
    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mAutoRecordFlag:Ljava/lang/String;

    const-string v4, "1"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const/4 v4, 0x2

    if-eqz v3, :cond_1

    if-ge v1, v4, :cond_1

    .line 8637
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->LogRecord(I)V

    .line 8639
    :cond_1
    add-int/lit8 v3, v1, 0x1

    sget v5, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    if-eq v3, v5, :cond_2

    .line 8640
    return-void

    .line 8642
    :cond_2
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->clearData()V

    .line 8643
    const/4 v3, 0x3

    new-array v3, v3, [Ljava/lang/Object;

    const/4 v5, 0x0

    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->attempt:[I

    aget v6, v6, v1

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v3, v5

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->success:[I

    aget v5, v5, v1

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v3, v2

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->attempt:[I

    aget v2, v2, v1

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->success:[I

    aget v5, v5, v1

    sub-int/2addr v2, v5

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v3, v4

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/mdmcomponent/HandoverIntraLte;->addData([Ljava/lang/Object;)V

    .line 8645
    return-void
.end method
