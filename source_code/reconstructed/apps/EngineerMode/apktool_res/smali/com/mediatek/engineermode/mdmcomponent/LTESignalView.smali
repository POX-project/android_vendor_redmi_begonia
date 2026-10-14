.class Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field dlBler0:I

.field dlBler0Addrs:[I

.field dlBler1:I

.field dlBler1Addrs:[I

.field lteDlTb0:I

.field lteDlTb1:I

.field recordsAddrs:[I

.field riAddrs:[I

.field tbNum0Addrs:[[I

.field tbNum1Addrs:[[I

.field tput0Addrs:[I

.field tput1Addrs:[I


# direct methods
.method static constructor <clinit>()V
    .locals 4

    .line 946
    const-string v0, "type_icd_record"

    const-string v1, "7007"

    const-string v2, "7008"

    const-string v3, "7013"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 6
    .param p1, "context"    # Landroid/app/Activity;

    .line 979
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 953
    const/4 v0, 0x3

    new-array v1, v0, [I

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->dlBler0Addrs:[I

    .line 955
    new-array v1, v0, [I

    fill-array-data v1, :array_1

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->dlBler1Addrs:[I

    .line 957
    new-array v1, v0, [I

    fill-array-data v1, :array_2

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->tput0Addrs:[I

    .line 959
    new-array v1, v0, [I

    fill-array-data v1, :array_3

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->tput1Addrs:[I

    .line 961
    new-array v1, v0, [[I

    const/4 v2, 0x0

    new-array v3, v2, [I

    aput-object v3, v1, v2

    new-array v3, v0, [I

    fill-array-data v3, :array_4

    const/4 v4, 0x1

    aput-object v3, v1, v4

    new-array v3, v0, [I

    fill-array-data v3, :array_5

    const/4 v5, 0x2

    aput-object v3, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->tbNum0Addrs:[[I

    .line 967
    new-array v1, v0, [[I

    new-array v3, v2, [I

    aput-object v3, v1, v2

    new-array v3, v0, [I

    fill-array-data v3, :array_6

    aput-object v3, v1, v4

    new-array v3, v0, [I

    fill-array-data v3, :array_7

    aput-object v3, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->tbNum1Addrs:[[I

    .line 973
    new-array v0, v0, [I

    fill-array-data v0, :array_8

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->recordsAddrs:[I

    .line 974
    const/4 v0, 0x4

    new-array v0, v0, [I

    fill-array-data v0, :array_9

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->riAddrs:[I

    .line 976
    iput v2, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->dlBler0:I

    iput v2, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->dlBler1:I

    iput v2, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->lteDlTb0:I

    iput v2, p0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->lteDlTb1:I

    .line 980
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0x38
        0x7
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x38
        0x7
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x18
        0x20
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x18
        0x20
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x3f
        0xa
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x46
        0xa
    .end array-data

    :array_6
    .array-data 4
        0x8
        0x3f
        0xa
    .end array-data

    :array_7
    .array-data 4
        0x8
        0x46
        0xa
    .end array-data

    :array_8
    .array-data 4
        0x8
        0x0
        0x5
    .end array-data

    :array_9
    .array-data 4
        0x8
        0x18
        0x1d
        0x2
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 994
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 989
    const-string v0, "5. LTE EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 2

    .line 998
    const-string v0, "PDSCH BLER"

    const-string v1, "RI"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 984
    const-string v0, "Signal View"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 1003
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 17
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 1007
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    check-cast v2, Ljava/nio/ByteBuffer;

    .line 1009
    .local v2, "icdPacket":Ljava/nio/ByteBuffer;
    const-string v3, "7007"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const-string v4, " not support, return"

    const/4 v5, 0x1

    const/4 v6, 0x2

    const-string v7, ", condition = "

    const/4 v8, 0x0

    const-string v9, ", version = "

    const-string v10, " update,name id = "

    const-string v11, "EmInfo/MDMComponent"

    const-string v12, ", "

    if-eqz v3, :cond_2

    .line 1010
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->dlBler0Addrs:[I

    aget v3, v3, v8

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v3

    .line 1011
    .local v3, "version":I
    if-ge v3, v6, :cond_0

    .line 1012
    sget-object v5, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->icdLogInfo:[Ljava/lang/String;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->getName()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v11, v5, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1014
    return-void

    .line 1016
    :cond_0
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->dlBler0Addrs:[I

    invoke-virtual {v0, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v4

    iput v4, v0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->dlBler0:I

    .line 1017
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->tbNum0Addrs:[[I

    .line 1018
    array-length v6, v4

    if-le v3, v6, :cond_1

    array-length v6, v4

    goto :goto_0

    :cond_1
    move v6, v3

    :goto_0
    sub-int/2addr v6, v5

    aget-object v4, v4, v6

    .line 1017
    invoke-virtual {v0, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v4

    iput v4, v0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->lteDlTb0:I

    .line 1019
    sget-object v4, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->icdLogInfo:[Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->getName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v6, v0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->dlBler0:I

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v6, v0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->lteDlTb0:I

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v11, v4, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1022
    .end local v3    # "version":I
    goto/16 :goto_3

    :cond_2
    const-string v3, "7008"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const-string v13, ", values = "

    if-eqz v3, :cond_5

    .line 1023
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->dlBler1Addrs:[I

    aget v3, v3, v8

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v3

    .line 1024
    .restart local v3    # "version":I
    if-ge v3, v6, :cond_3

    .line 1025
    sget-object v5, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->icdLogInfo:[Ljava/lang/String;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->getName()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v11, v5, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1027
    return-void

    .line 1029
    :cond_3
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->dlBler1Addrs:[I

    invoke-virtual {v0, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v4

    iput v4, v0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->dlBler1:I

    .line 1030
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->tbNum0Addrs:[[I

    invoke-virtual {v0, v2, v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v4

    iput v4, v0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->lteDlTb1:I

    .line 1031
    iget v5, v0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->dlBler0:I

    iget v6, v0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->lteDlTb0:I

    mul-int/2addr v5, v6

    .line 1032
    .local v5, "lteDlNack0":I
    iget v14, v0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->dlBler1:I

    mul-int/2addr v14, v4

    .line 1033
    .local v14, "lteDlNack1":I
    add-int/2addr v6, v4

    .line 1034
    .local v6, "lteDlTb":I
    if-eqz v6, :cond_4

    add-int v4, v5, v14

    div-int/2addr v4, v6

    int-to-float v4, v4

    goto :goto_1

    :cond_4
    const/4 v4, 0x0

    .line 1036
    .local v4, "lteDlBler":F
    :goto_1
    sget-object v15, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->icdLogInfo:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v16, v6

    .end local v6    # "lteDlTb":I
    .local v16, "lteDlTb":I
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->getName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v6, v0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->dlBler0:I

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v6, v0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->lteDlTb0:I

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v6, v0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->dlBler1:I

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v6, v0, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->lteDlTb1:I

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    const-string v6, "%"

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v11, v15, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1040
    new-instance v7, Ljava/text/DecimalFormat;

    const-string v8, "#.##"

    invoke-direct {v7, v8}, Ljava/text/DecimalFormat;-><init>(Ljava/lang/String;)V

    .line 1041
    .local v7, "df":Ljava/text/DecimalFormat;
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    float-to-double v9, v4

    invoke-virtual {v7, v9, v10}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    const/4 v8, 0x0

    invoke-virtual {v0, v8, v6}, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->setData(ILjava/lang/Object;)V

    .line 1042
    .end local v3    # "version":I
    .end local v4    # "lteDlBler":F
    .end local v5    # "lteDlNack0":I
    .end local v7    # "df":Ljava/text/DecimalFormat;
    .end local v14    # "lteDlNack1":I
    .end local v16    # "lteDlTb":I
    goto :goto_3

    .line 1043
    :cond_5
    const/4 v3, 0x3

    new-array v3, v3, [I

    fill-array-data v3, :array_0

    .line 1044
    .local v3, "recordsAddrs":[I
    const/4 v4, 0x4

    new-array v4, v4, [I

    fill-array-data v4, :array_1

    .line 1045
    .local v4, "riAddrs":[I
    const/4 v6, 0x0

    aget v6, v3, v6

    invoke-virtual {v0, v2, v6}, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v6

    .line 1046
    .local v6, "version":I
    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v8

    .line 1047
    .local v8, "records":I
    invoke-virtual {v0, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v12

    .line 1048
    .local v12, "ri":I
    sget-object v14, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->icdLogInfo:[Ljava/lang/String;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->getName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v11, v14, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1052
    if-eqz v8, :cond_6

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    goto :goto_2

    :cond_6
    const-string v5, ""

    :goto_2
    const/4 v7, 0x1

    invoke-virtual {v0, v7, v5}, Lcom/mediatek/engineermode/mdmcomponent/LTESignalView;->setData(ILjava/lang/Object;)V

    .line 1054
    .end local v3    # "recordsAddrs":[I
    .end local v4    # "riAddrs":[I
    .end local v6    # "version":I
    .end local v8    # "records":I
    .end local v12    # "ri":I
    :goto_3
    return-void

    :array_0
    .array-data 4
        0x8
        0x0
        0x5
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x18
        0x1d
        0x2
    .end array-data
.end method
