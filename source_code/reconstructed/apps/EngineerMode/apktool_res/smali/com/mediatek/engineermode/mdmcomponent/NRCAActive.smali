.class Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field caAddrs:[I

.field sCellNum:I

.field sCellNumAddrs:[I


# direct methods
.method static constructor <clinit>()V
    .locals 4

    .line 4832
    const-string v0, "type_icd_record"

    const-string v1, "9014"

    const-string v2, "type_icd_event"

    const-string v3, "9586"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2
    .param p1, "context"    # Landroid/app/Activity;

    .line 4845
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 4839
    const/4 v0, 0x3

    new-array v1, v0, [I

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->caAddrs:[I

    .line 4841
    new-array v0, v0, [I

    fill-array-data v0, :array_1

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->sCellNumAddrs:[I

    .line 4842
    const/4 v0, -0x1

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->sCellNum:I

    .line 4846
    return-void

    :array_0
    .array-data 4
        0x8
        0x0
        0x1
    .end array-data

    :array_1
    .array-data 4
        0x8
        0xd5
        0x3
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 4860
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 4855
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 4864
    const-string v0, "DL CA State"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 4850
    const-string v0, "NR CA Active"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 4869
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 11
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 4873
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 4874
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    const-string v1, "9014"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v2, ", values = "

    const-string v3, ", version = "

    const-string v4, " update,name id = "

    const-string v5, "EmInfo/MDMComponent"

    const/4 v6, 0x0

    if-eqz v1, :cond_1

    .line 4875
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->sCellNumAddrs:[I

    aget v1, v1, v6

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 4876
    .local v1, "version":I
    const/16 v6, 0x8

    if-lt v1, v6, :cond_0

    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->sCellNumAddrs:[I

    invoke-virtual {p0, v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v6

    goto :goto_0

    :cond_0
    iget v6, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->sCellNum:I

    :goto_0
    iput v6, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->sCellNum:I

    .line 4877
    sget-object v6, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->icdLogInfo:[Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->getName()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->sCellNum:I

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v5, v6, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 4880
    .end local v1    # "version":I
    goto :goto_2

    .line 4881
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->caAddrs:[I

    aget v1, v1, v6

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 4882
    .restart local v1    # "version":I
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->caAddrs:[I

    invoke-virtual {p0, v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v7

    .line 4883
    .local v7, "ca":I
    sget-object v8, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->icdLogInfo:[Ljava/lang/String;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->getName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ", condition = "

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->sCellNum:I

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v5, v8, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 4887
    iget v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->sCellNum:I

    if-lez v2, :cond_3

    .line 4888
    const/4 v2, 0x1

    if-ne v7, v2, :cond_2

    const-string v2, "Configured"

    goto :goto_1

    :cond_2
    const-string v2, "Active"

    :goto_1
    invoke-virtual {p0, v6, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->setData(ILjava/lang/Object;)V

    goto :goto_2

    .line 4890
    :cond_3
    const-string v2, "Release"

    invoke-virtual {p0, v6, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRCAActive;->setData(ILjava/lang/Object;)V

    .line 4893
    .end local v1    # "version":I
    .end local v7    # "ca":I
    :goto_2
    return-void
.end method
