.class Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field ltesrsTriggerTypeAddrs:[I

.field srsResourceUsageAddrs:[[I

.field srsTriggerTypeAddrs:[[I

.field srsTriggerTypeMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 4

    .line 3989
    const-string v0, "type_icd_record"

    const-string v1, "9008"

    const-string v2, "9014"

    const-string v3, "7009"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 7
    .param p1, "context"    # Landroid/app/Activity;

    .line 4030
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 3996
    const/4 v0, 0x3

    new-array v1, v0, [[I

    const/4 v2, 0x4

    new-array v3, v2, [I

    fill-array-data v3, :array_0

    const/4 v4, 0x0

    aput-object v3, v1, v4

    new-array v3, v2, [I

    fill-array-data v3, :array_1

    const/4 v5, 0x1

    aput-object v3, v1, v5

    new-array v3, v2, [I

    fill-array-data v3, :array_2

    const/4 v6, 0x2

    aput-object v3, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->srsTriggerTypeAddrs:[[I

    .line 4002
    const/16 v1, 0xd

    new-array v1, v1, [[I

    new-array v3, v2, [I

    fill-array-data v3, :array_3

    aput-object v3, v1, v4

    new-array v3, v2, [I

    fill-array-data v3, :array_4

    aput-object v3, v1, v5

    new-array v3, v2, [I

    fill-array-data v3, :array_5

    aput-object v3, v1, v6

    new-array v3, v2, [I

    fill-array-data v3, :array_6

    aput-object v3, v1, v0

    new-array v0, v2, [I

    fill-array-data v0, :array_7

    aput-object v0, v1, v2

    new-array v0, v2, [I

    fill-array-data v0, :array_8

    const/4 v3, 0x5

    aput-object v0, v1, v3

    new-array v0, v2, [I

    fill-array-data v0, :array_9

    const/4 v3, 0x6

    aput-object v0, v1, v3

    new-array v0, v2, [I

    fill-array-data v0, :array_a

    const/4 v3, 0x7

    aput-object v0, v1, v3

    new-array v0, v2, [I

    fill-array-data v0, :array_b

    const/16 v3, 0x8

    aput-object v0, v1, v3

    new-array v0, v2, [I

    fill-array-data v0, :array_c

    const/16 v3, 0x9

    aput-object v0, v1, v3

    new-array v0, v2, [I

    fill-array-data v0, :array_d

    const/16 v3, 0xa

    aput-object v0, v1, v3

    new-array v0, v2, [I

    fill-array-data v0, :array_e

    const/16 v3, 0xb

    aput-object v0, v1, v3

    new-array v0, v2, [I

    fill-array-data v0, :array_f

    const/16 v3, 0xc

    aput-object v0, v1, v3

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->srsResourceUsageAddrs:[[I

    .line 4018
    new-array v0, v2, [I

    fill-array-data v0, :array_10

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->ltesrsTriggerTypeAddrs:[I

    .line 4020
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->srsTriggerTypeMapping:Ljava/util/HashMap;

    .line 4031
    return-void

    :array_0
    .array-data 4
        0x8
        0x18
        0x40
        0x2
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x18
        0x36
        0x2
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x18
        0x36
        0x2
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x298
        0x4
        0x2
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x298
        0x4
        0x2
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x298
        0x4
        0x2
    .end array-data

    :array_6
    .array-data 4
        0x8
        0x298
        0x4
        0x2
    .end array-data

    :array_7
    .array-data 4
        0x8
        0x298
        0x4
        0x2
    .end array-data

    :array_8
    .array-data 4
        0x8
        0x2b8
        0x4
        0x2
    .end array-data

    :array_9
    .array-data 4
        0x8
        0x2b8
        0x4
        0x2
    .end array-data

    :array_a
    .array-data 4
        0x8
        0x2b8
        0x4
        0x2
    .end array-data

    :array_b
    .array-data 4
        0x8
        0x3b8
        0x4
        0x2
    .end array-data

    :array_c
    .array-data 4
        0x8
        0x3b8
        0x4
        0x2
    .end array-data

    :array_d
    .array-data 4
        0x8
        0x3b8
        0x4
        0x2
    .end array-data

    :array_e
    .array-data 4
        0x8
        0x3d8
        0x4
        0x2
    .end array-data

    :array_f
    .array-data 4
        0x8
        0x3d8
        0x4
        0x2
    .end array-data

    :array_10
    .array-data 4
        0x8
        0x18
        0x40
        0x2
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 4045
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 4040
    const-string v0, "9. Tx Antenna Info"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 3

    .line 4049
    const-string v0, "NR Trigger Type"

    const-string v1, "NR Antenna Switch support"

    const-string v2, "LTE Trigger Type"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 4035
    const-string v0, "SRS Tx Status"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 4055
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 12
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 4059
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 4061
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    const-string v1, "9008"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const-string v2, ", condition = "

    const-string v3, ", values = "

    const-string v4, ", version = "

    const-string v5, " update,name id = "

    const-string v6, "EmInfo/MDMComponent"

    const/4 v7, 0x0

    const/4 v8, 0x1

    if-eqz v1, :cond_3

    .line 4062
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->srsTriggerTypeAddrs:[[I

    array-length v9, v1

    sub-int/2addr v9, v8

    aget-object v1, v1, v9

    aget v1, v1, v7

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 4063
    .local v1, "version":I
    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->srsTriggerTypeAddrs:[[I

    .line 4064
    array-length v10, v9

    if-ge v1, v10, :cond_0

    move v10, v1

    goto :goto_0

    :cond_0
    array-length v10, v9

    :goto_0
    sub-int/2addr v10, v8

    aget-object v8, v9, v10

    .line 4063
    invoke-virtual {p0, v0, v8}, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v8

    .line 4066
    .local v8, "srsTriggerType":I
    sget-object v9, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->icdLogInfo:[Ljava/lang/String;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->getName()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 4069
    const-string v2, "periodic"

    const-string v3, "aperiodic: "

    if-nez v8, :cond_1

    move-object v4, v2

    goto :goto_1

    :cond_1
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    :goto_1
    invoke-virtual {v10, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 4066
    invoke-static {v6, v9, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 4070
    if-nez v8, :cond_2

    goto :goto_2

    :cond_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    :goto_2
    invoke-virtual {p0, v7, v2}, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->setData(ILjava/lang/Object;)V

    .line 4071
    .end local v1    # "version":I
    .end local v8    # "srsTriggerType":I
    goto/16 :goto_4

    :cond_3
    const-string v1, "9014"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 4072
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->srsResourceUsageAddrs:[[I

    array-length v2, v1

    sub-int/2addr v2, v8

    aget-object v1, v1, v2

    aget v1, v1, v7

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 4073
    .restart local v1    # "version":I
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->srsResourceUsageAddrs:[[I

    invoke-virtual {p0, v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v2

    .line 4075
    .local v2, "srsResourceUsage":I
    sget-object v7, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->icdLogInfo:[Ljava/lang/String;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->getName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v6, v7, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 4078
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {p0, v8, v3}, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->setData(ILjava/lang/Object;)V

    .end local v1    # "version":I
    .end local v2    # "srsResourceUsage":I
    goto :goto_3

    .line 4079
    :cond_4
    const-string v1, "7009"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_5

    .line 4080
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->srsTriggerTypeAddrs:[[I

    array-length v3, v1

    sub-int/2addr v3, v8

    aget-object v1, v1, v3

    aget v1, v1, v7

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 4081
    .restart local v1    # "version":I
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->ltesrsTriggerTypeAddrs:[I

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v3

    .line 4083
    .local v3, "ltesrsTriggerType":I
    sget-object v7, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->icdLogInfo:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->getName()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v6, v7, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 4086
    const/4 v2, 0x2

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->srsTriggerTypeMapping:Ljava/util/HashMap;

    invoke-virtual {p0, v4, v3}, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/SRSTxStatus;->setData(ILjava/lang/Object;)V

    goto :goto_4

    .line 4079
    .end local v1    # "version":I
    .end local v3    # "ltesrsTriggerType":I
    :cond_5
    :goto_3
    nop

    .line 4088
    :goto_4
    return-void
.end method
