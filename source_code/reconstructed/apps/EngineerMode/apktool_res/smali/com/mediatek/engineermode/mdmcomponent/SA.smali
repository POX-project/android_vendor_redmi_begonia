.class Lcom/mediatek/engineermode/mdmcomponent/SA;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field carrIndexAddrs:[[I

.field statusAddrs:[[I

.field txIndex0Addrs:[[I

.field txIndex1Addrs:[[I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 3907
    const-string v0, "type_icd_record"

    const-string v1, "9013"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/SA;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 7
    .param p1, "context"    # Landroid/app/Activity;

    .line 3938
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 3912
    const/4 v0, 0x3

    new-array v1, v0, [[I

    new-array v2, v0, [I

    fill-array-data v2, :array_0

    const/4 v3, 0x0

    aput-object v2, v1, v3

    const/4 v2, 0x4

    new-array v4, v2, [I

    fill-array-data v4, :array_1

    const/4 v5, 0x1

    aput-object v4, v1, v5

    new-array v4, v2, [I

    fill-array-data v4, :array_2

    const/4 v6, 0x2

    aput-object v4, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/SA;->statusAddrs:[[I

    .line 3918
    new-array v1, v0, [[I

    new-array v4, v2, [I

    fill-array-data v4, :array_3

    aput-object v4, v1, v3

    new-array v4, v2, [I

    fill-array-data v4, :array_4

    aput-object v4, v1, v5

    new-array v4, v2, [I

    fill-array-data v4, :array_5

    aput-object v4, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/SA;->carrIndexAddrs:[[I

    .line 3924
    new-array v1, v0, [[I

    new-array v4, v2, [I

    fill-array-data v4, :array_6

    aput-object v4, v1, v3

    new-array v4, v2, [I

    fill-array-data v4, :array_7

    aput-object v4, v1, v5

    new-array v4, v2, [I

    fill-array-data v4, :array_8

    aput-object v4, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/SA;->txIndex0Addrs:[[I

    .line 3931
    new-array v0, v0, [[I

    new-array v1, v2, [I

    fill-array-data v1, :array_9

    aput-object v1, v0, v3

    new-array v1, v2, [I

    fill-array-data v1, :array_a

    aput-object v1, v0, v5

    new-array v1, v2, [I

    fill-array-data v1, :array_b

    aput-object v1, v0, v6

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/SA;->txIndex1Addrs:[[I

    .line 3939
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0x0
        0x2
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x18
        0x0
        0x2
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x18
        0x0
        0x2
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x38
        0x0
        0x3
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x18
        0x2
        0x3
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x18
        0x2
        0x3
    .end array-data

    :array_6
    .array-data 4
        0x8
        0x38
        0x3
        0x4
    .end array-data

    :array_7
    .array-data 4
        0x8
        0x18
        0x5
        0x5
    .end array-data

    :array_8
    .array-data 4
        0x8
        0x18
        0x8
        0x8
    .end array-data

    :array_9
    .array-data 4
        0x8
        0x38
        0x8
        0x4
    .end array-data

    :array_a
    .array-data 4
        0x8
        0x18
        0xa
        0x5
    .end array-data

    :array_b
    .array-data 4
        0x8
        0x18
        0x10
        0x8
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 3953
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/SA;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 3948
    const-string v0, "9. Tx Antenna Info"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 1

    .line 3957
    const-string v0, "NR Primary Cell Tx Antenna"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 3943
    const-string v0, "SA"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 3962
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 11
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 3966
    move-object v0, p2

    check-cast v0, Ljava/nio/ByteBuffer;

    .line 3967
    .local v0, "icdPacket":Ljava/nio/ByteBuffer;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/SA;->carrIndexAddrs:[[I

    array-length v2, v1

    add-int/lit8 v2, v2, -0x1

    aget-object v1, v1, v2

    const/4 v2, 0x0

    aget v1, v1, v2

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/SA;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v1

    .line 3969
    .local v1, "version":I
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/SA;->carrIndexAddrs:[[I

    .line 3970
    array-length v4, v3

    if-ge v1, v4, :cond_0

    move v4, v1

    goto :goto_0

    :cond_0
    array-length v4, v3

    :goto_0
    add-int/lit8 v4, v4, -0x1

    aget-object v3, v3, v4

    .line 3969
    invoke-virtual {p0, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/SA;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v3

    .line 3971
    .local v3, "carrIndex":I
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/SA;->txIndex0Addrs:[[I

    .line 3972
    array-length v5, v4

    if-ge v1, v5, :cond_1

    move v5, v1

    goto :goto_1

    :cond_1
    array-length v5, v4

    :goto_1
    add-int/lit8 v5, v5, -0x1

    aget-object v4, v4, v5

    .line 3971
    invoke-virtual {p0, v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/SA;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v4

    .line 3974
    .local v4, "txIndex0":I
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/SA;->txIndex1Addrs:[[I

    .line 3975
    array-length v6, v5

    if-ge v1, v6, :cond_2

    move v6, v1

    goto :goto_2

    :cond_2
    array-length v6, v5

    :goto_2
    add-int/lit8 v6, v6, -0x1

    aget-object v5, v5, v6

    .line 3974
    invoke-virtual {p0, v0, v5}, Lcom/mediatek/engineermode/mdmcomponent/SA;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v5

    .line 3976
    .local v5, "txIndex1":I
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/SA;->statusAddrs:[[I

    .line 3977
    array-length v7, v6

    if-ge v1, v7, :cond_3

    move v7, v1

    goto :goto_3

    :cond_3
    array-length v7, v6

    :goto_3
    add-int/lit8 v7, v7, -0x1

    aget-object v6, v6, v7

    .line 3976
    invoke-virtual {p0, v0, v6}, Lcom/mediatek/engineermode/mdmcomponent/SA;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v6

    .line 3978
    .local v6, "status":I
    sget-object v7, Lcom/mediatek/engineermode/mdmcomponent/SA;->icdLogInfo:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/SA;->getName()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, " update,name id = "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, ", version = "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ", condition = "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ", "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, ", values = "

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    const-string v9, "EmInfo/MDMComponent"

    invoke-static {v9, v7, v8}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 3982
    if-nez v3, :cond_5

    .line 3983
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const/4 v8, 0x2

    if-ne v6, v8, :cond_4

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, ","

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    goto :goto_4

    :cond_4
    const-string v8, ""

    :goto_4
    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {p0, v2, v7}, Lcom/mediatek/engineermode/mdmcomponent/SA;->setData(ILjava/lang/Object;)V

    .line 3985
    :cond_5
    return-void
.end method
