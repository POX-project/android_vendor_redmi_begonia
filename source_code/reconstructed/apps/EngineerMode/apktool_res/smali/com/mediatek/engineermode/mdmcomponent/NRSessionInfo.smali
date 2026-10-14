.class Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field ambrArrays:[[Ljava/lang/String;

.field ambrLegthAddrs:[[I

.field dlAmbrAddrs:[[I

.field dlAmbrUnit:[[I

.field sessionIdAddrs:[I

.field ulAmbrAddrs:[[I

.field ulAmbrUnit:[[I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 1058
    const-string v0, "type_icd_event"

    const-string v1, "9680"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 7
    .param p1, "context"    # Landroid/app/Activity;

    .line 1103
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;-><init>(Landroid/app/Activity;)V

    .line 1064
    const/4 v0, 0x3

    new-array v1, v0, [I

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->sessionIdAddrs:[I

    .line 1067
    new-array v1, v0, [[I

    new-array v2, v0, [I

    fill-array-data v2, :array_1

    const/4 v3, 0x0

    aput-object v2, v1, v3

    new-array v2, v3, [I

    const/4 v4, 0x1

    aput-object v2, v1, v4

    new-array v2, v3, [I

    const/4 v5, 0x2

    aput-object v2, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->ambrLegthAddrs:[[I

    .line 1074
    new-array v1, v0, [[I

    new-array v2, v0, [I

    fill-array-data v2, :array_2

    aput-object v2, v1, v3

    const/4 v2, 0x4

    new-array v6, v2, [I

    fill-array-data v6, :array_3

    aput-object v6, v1, v4

    new-array v6, v2, [I

    fill-array-data v6, :array_4

    aput-object v6, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->ulAmbrUnit:[[I

    .line 1081
    new-array v1, v0, [[I

    new-array v6, v0, [I

    fill-array-data v6, :array_5

    aput-object v6, v1, v3

    new-array v6, v2, [I

    fill-array-data v6, :array_6

    aput-object v6, v1, v4

    new-array v6, v2, [I

    fill-array-data v6, :array_7

    aput-object v6, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->ulAmbrAddrs:[[I

    .line 1088
    new-array v1, v0, [[I

    new-array v6, v0, [I

    fill-array-data v6, :array_8

    aput-object v6, v1, v3

    new-array v6, v2, [I

    fill-array-data v6, :array_9

    aput-object v6, v1, v4

    new-array v6, v2, [I

    fill-array-data v6, :array_a

    aput-object v6, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->dlAmbrUnit:[[I

    .line 1095
    new-array v1, v0, [[I

    new-array v0, v0, [I

    fill-array-data v0, :array_b

    aput-object v0, v1, v3

    new-array v0, v2, [I

    fill-array-data v0, :array_c

    aput-object v0, v1, v4

    new-array v0, v2, [I

    fill-array-data v0, :array_d

    aput-object v0, v1, v5

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->dlAmbrAddrs:[[I

    .line 1100
    new-array v0, v5, [I

    fill-array-data v0, :array_e

    const-class v1, Ljava/lang/String;

    invoke-static {v1, v0}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [[Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->ambrArrays:[[Ljava/lang/String;

    .line 1104
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->clearData()V

    .line 1105
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0x0
        0x8
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x38
        0x8
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x40
        0x8
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x38
        0x8
        0x8
    .end array-data

    :array_4
    .array-data 4
        0x8
        0xa0
        0x8
        0x8
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x48
        0x10
    .end array-data

    :array_6
    .array-data 4
        0x8
        0x38
        0x40
        0x20
    .end array-data

    :array_7
    .array-data 4
        0x8
        0xa0
        0x40
        0x20
    .end array-data

    :array_8
    .array-data 4
        0x8
        0x58
        0x8
    .end array-data

    :array_9
    .array-data 4
        0x8
        0x38
        0x0
        0x8
    .end array-data

    :array_a
    .array-data 4
        0x8
        0xa0
        0x0
        0x8
    .end array-data

    :array_b
    .array-data 4
        0x8
        0x60
        0x10
    .end array-data

    :array_c
    .array-data 4
        0x8
        0x38
        0x20
        0x20
    .end array-data

    :array_d
    .array-data 4
        0x8
        0xa0
        0x20
        0x20
    .end array-data

    :array_e
    .array-data 4
        0xf
        0x3
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 1119
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 1114
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 3

    .line 1123
    const-string v0, "Session ID"

    const-string v1, "DL Session-AMBR"

    const-string v2, "UL Session-AMBR"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 1109
    const-string v0, "NR Session - AMBR"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 1128
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 17
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 1132
    move-object/from16 v0, p0

    move-object/from16 v1, p2

    check-cast v1, Ljava/nio/ByteBuffer;

    .line 1133
    .local v1, "icdPacket":Ljava/nio/ByteBuffer;
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->ambrLegthAddrs:[[I

    const/4 v3, 0x0

    aget-object v2, v2, v3

    aget v2, v2, v3

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v2

    .line 1134
    .local v2, "version":I
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->sessionIdAddrs:[I

    invoke-virtual {v0, v1, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v4

    .line 1136
    .local v4, "sessionId":I
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->ambrLegthAddrs:[[I

    invoke-virtual {v0, v1, v2, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v5

    .line 1137
    .local v5, "length":I
    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->ulAmbrUnit:[[I

    invoke-virtual {v0, v1, v2, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v6

    .line 1138
    .local v6, "ulUnit":I
    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->ulAmbrAddrs:[[I

    invoke-virtual {v0, v1, v2, v7}, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v7

    .line 1139
    .local v7, "ulAmbr":I
    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->dlAmbrUnit:[[I

    invoke-virtual {v0, v1, v2, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v8

    .line 1140
    .local v8, "dlUnit":I
    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->dlAmbrAddrs:[[I

    invoke-virtual {v0, v1, v2, v9}, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v9

    .line 1141
    .local v9, "dlAmbr":I
    sget-object v10, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->icdLogInfo:[Ljava/lang/String;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->getName()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, " update,name id = "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v12, p1

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, ", version = "

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ", condition = "

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ", values = "

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, ", "

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    const-string v13, "EmInfo/MDMComponent"

    invoke-static {v13, v10, v11}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1146
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->ambrArrays:[[Ljava/lang/String;

    add-int/lit8 v11, v4, -0x1

    const/4 v13, 0x3

    new-array v13, v13, [Ljava/lang/String;

    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v15, ""

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    aput-object v14, v13, v3

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    mul-int v14, v9, v8

    const v16, 0xf4240

    div-int v14, v14, v16

    invoke-virtual {v3, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v14, 0x1

    aput-object v3, v13, v14

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    mul-int v14, v7, v6

    div-int v14, v14, v16

    invoke-virtual {v3, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v14, 0x2

    aput-object v3, v13, v14

    aput-object v13, v10, v11

    .line 1148
    const/16 v3, 0xf

    if-ne v4, v3, :cond_0

    .line 1149
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->ambrArrays:[[Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRSessionInfo;->addData([[Ljava/lang/String;)V

    .line 1150
    :cond_0
    return-void
.end method
