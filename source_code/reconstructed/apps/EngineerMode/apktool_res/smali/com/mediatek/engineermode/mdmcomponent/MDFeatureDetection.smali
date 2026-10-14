.class Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponent.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field FileNamePS:Ljava/lang/String;

.field FileNamePS1:Ljava/lang/String;

.field FileNamePS2:Ljava/lang/String;

.field StartTime:Ljava/lang/String;

.field event:[Ljava/lang/String;

.field isFirstTimeRecord:Z

.field title:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 12669
    const-string v0, "MSG_ID_EM_L4C_MD_EVENT_IND"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 12682
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 12671
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->StartTime:Ljava/lang/String;

    .line 12673
    const/4 v1, 0x1

    iput-boolean v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->isFirstTimeRecord:Z

    .line 12674
    const-string v1, "_md_feature_detection.txt"

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->FileNamePS:Ljava/lang/String;

    .line 12675
    const-string v1, "Time,event"

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->title:Ljava/lang/String;

    .line 12676
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->FileNamePS1:Ljava/lang/String;

    .line 12677
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->FileNamePS2:Ljava/lang/String;

    .line 12679
    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->event:[Ljava/lang/String;

    .line 12683
    return-void
.end method


# virtual methods
.method LogRecord(I)V
    .locals 9
    .param p1, "sim_idx"    # I

    .line 12710
    const/4 v0, 0x0

    .line 12712
    .local v0, "CurTime":Ljava/lang/String;
    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/String;

    .line 12713
    .local v1, "Content":[Ljava/lang/String;
    const-string v2, "/Download"

    .line 12715
    .local v2, "path":Ljava/lang/String;
    iget-boolean v3, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->isFirstTimeRecord:Z

    const-string v4, ","

    const-string v5, "EmInfo/MDMComponent"

    const/4 v6, 0x1

    if-ne v3, v6, :cond_0

    .line 12716
    const/4 v3, 0x0

    iput-boolean v3, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->isFirstTimeRecord:Z

    .line 12717
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->getCurrectTime()Ljava/lang/String;

    move-result-object v7

    iput-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->StartTime:Ljava/lang/String;

    .line 12719
    :try_start_0
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->StartTime:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "_ps_1_"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v8, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v8, v8, v3

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->FileNamePS:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    iput-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->FileNamePS1:Ljava/lang/String;

    .line 12721
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->StartTime:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "_ps_2_"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v8, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mSimMccMnc:[Ljava/lang/String;

    aget-object v8, v8, v6

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->FileNamePS:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    iput-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->FileNamePS2:Ljava/lang/String;

    .line 12723
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->FileNamePS1:Ljava/lang/String;

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->title:Ljava/lang/String;

    invoke-virtual {p0, v2, v7, v8, v3}, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->saveToSDCard(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    .line 12724
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->FileNamePS2:Ljava/lang/String;

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->title:Ljava/lang/String;

    invoke-virtual {p0, v2, v7, v8, v3}, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->saveToSDCard(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 12727
    goto :goto_0

    .line 12725
    :catch_0
    move-exception v3

    .line 12726
    .local v3, "e":Ljava/lang/Exception;
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 12728
    .end local v3    # "e":Ljava/lang/Exception;
    :goto_0
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "isFirstTimeRecord = "

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v7, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->isFirstTimeRecord:Z

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->title:Ljava/lang/String;

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v5, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 12730
    :cond_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->getCurrectTime()Ljava/lang/String;

    move-result-object v0

    .line 12731
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->event:[Ljava/lang/String;

    aget-object v4, v4, p1

    invoke-virtual {v4}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, p1

    .line 12734
    const-string v3, " to "

    const-string v4, "save "

    if-nez p1, :cond_1

    .line 12735
    :try_start_1
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v4, v1, p1

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->FileNamePS1:Ljava/lang/String;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v5, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 12736
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->FileNamePS1:Ljava/lang/String;

    aget-object v4, v1, p1

    invoke-virtual {p0, v2, v3, v4, v6}, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->saveToSDCard(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    goto :goto_1

    .line 12738
    :cond_1
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v4, v1, p1

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->FileNamePS2:Ljava/lang/String;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v5, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 12739
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->FileNamePS2:Ljava/lang/String;

    aget-object v4, v1, p1

    invoke-virtual {p0, v2, v3, v4, v6}, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->saveToSDCard(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 12743
    :goto_1
    goto :goto_2

    .line 12741
    :catch_1
    move-exception v3

    .line 12742
    .restart local v3    # "e":Ljava/lang/Exception;
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 12744
    .end local v3    # "e":Ljava/lang/Exception;
    :goto_2
    return-void
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 12697
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 12692
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 12701
    const-string v0, "Event"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 12687
    const-string v0, "MD Feature Detection"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 12706
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 7
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 12748
    move-object v0, p2

    check-cast v0, Lcom/mediatek/mdml/Msg;

    .line 12749
    .local v0, "data":Lcom/mediatek/mdml/Msg;
    invoke-virtual {v0}, Lcom/mediatek/mdml/Msg;->getSimIdx()I

    move-result v1

    add-int/lit8 v1, v1, -0x1

    .line 12751
    .local v1, "sim_idx":I
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->event:[Ljava/lang/String;

    const-string v3, ""

    aput-object v3, v2, v1

    .line 12752
    const-string v2, "MSG_ID_EM_L4C_MD_EVENT_IND"

    invoke-virtual {v2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 12753
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    const/16 v3, 0x32

    if-ge v2, v3, :cond_0

    .line 12754
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "event["

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "]"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->getFieldValue(Lcom/mediatek/mdml/Msg;Ljava/lang/String;)I

    move-result v3

    int-to-char v3, v3

    .line 12755
    .local v3, "info":C
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->event:[Ljava/lang/String;

    aget-object v6, v5, v1

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    aput-object v4, v5, v1

    .line 12753
    .end local v3    # "info":C
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 12757
    .end local v2    # "i":I
    :cond_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "MD Event Lte,event = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->event:[Ljava/lang/String;

    aget-object v3, v3, v1

    invoke-virtual {v3}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "EmInfo/MDMComponent"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 12760
    :cond_1
    sget-object v2, Lcom/mediatek/engineermode/mdmcomponent/ComponentSelectActivity;->mAutoRecordFlag:Ljava/lang/String;

    const-string v3, "1"

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    const/4 v2, 0x2

    if-ge v1, v2, :cond_2

    .line 12761
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->LogRecord(I)V

    .line 12764
    :cond_2
    add-int/lit8 v2, v1, 0x1

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/MDMComponentDetailActivity;->mModemType:I

    if-eq v2, v3, :cond_3

    .line 12765
    return-void

    .line 12768
    :cond_3
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->clearData()V

    .line 12769
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->event:[Ljava/lang/String;

    aget-object v2, v2, v1

    invoke-virtual {v2}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/MDFeatureDetection;->addData(Ljava/lang/String;)V

    .line 12770
    return-void
.end method
