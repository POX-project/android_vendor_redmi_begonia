.class Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field bandWidthMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field bwAddrs:[[I

.field carrierTypeAddrs:[[I

.field dlBandSizeAddrs:[[I

.field pciAddrs:[[I

.field rsrpAddrs:[[I

.field rsrqAddrs:[[I

.field rssiAddrs:[[I

.field scellNumAddrs:[[I

.field sinrAddrs:[[I


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 4897
    const-string v0, "type_icd_record"

    const-string v1, "9014"

    const-string v2, "9001"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 17
    .param p1, "context"    # Landroid/app/Activity;

    .line 5016
    move-object/from16 v0, p0

    invoke-direct/range {p0 .. p1}, Lcom/mediatek/engineermode/mdmcomponent/ArrayTableComponent;-><init>(Landroid/app/Activity;)V

    .line 4903
    const/16 v1, 0xd

    new-array v2, v1, [[I

    const/4 v3, 0x0

    new-array v4, v3, [I

    aput-object v4, v2, v3

    new-array v4, v3, [I

    const/4 v5, 0x1

    aput-object v4, v2, v5

    new-array v4, v3, [I

    const/4 v6, 0x2

    aput-object v4, v2, v6

    new-array v4, v3, [I

    const/4 v7, 0x3

    aput-object v4, v2, v7

    new-array v4, v3, [I

    const/4 v8, 0x4

    aput-object v4, v2, v8

    new-array v4, v3, [I

    const/4 v9, 0x5

    aput-object v4, v2, v9

    new-array v4, v3, [I

    const/4 v10, 0x6

    aput-object v4, v2, v10

    new-array v4, v8, [I

    fill-array-data v4, :array_0

    const/4 v11, 0x7

    aput-object v4, v2, v11

    new-array v4, v8, [I

    fill-array-data v4, :array_1

    const/16 v12, 0x8

    aput-object v4, v2, v12

    new-array v4, v8, [I

    fill-array-data v4, :array_2

    const/16 v13, 0x9

    aput-object v4, v2, v13

    new-array v4, v8, [I

    fill-array-data v4, :array_3

    const/16 v14, 0xa

    aput-object v4, v2, v14

    new-array v4, v8, [I

    fill-array-data v4, :array_4

    const/16 v15, 0xb

    aput-object v4, v2, v15

    new-array v4, v8, [I

    fill-array-data v4, :array_5

    const/16 v16, 0xc

    aput-object v4, v2, v16

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->dlBandSizeAddrs:[[I

    .line 4919
    new-array v2, v1, [[I

    new-array v4, v3, [I

    aput-object v4, v2, v3

    new-array v4, v3, [I

    aput-object v4, v2, v5

    new-array v4, v3, [I

    aput-object v4, v2, v6

    new-array v4, v3, [I

    aput-object v4, v2, v7

    new-array v4, v3, [I

    aput-object v4, v2, v8

    new-array v4, v3, [I

    aput-object v4, v2, v9

    new-array v4, v3, [I

    aput-object v4, v2, v10

    new-array v4, v7, [I

    fill-array-data v4, :array_6

    aput-object v4, v2, v11

    new-array v4, v7, [I

    fill-array-data v4, :array_7

    aput-object v4, v2, v12

    new-array v4, v7, [I

    fill-array-data v4, :array_8

    aput-object v4, v2, v13

    new-array v4, v7, [I

    fill-array-data v4, :array_9

    aput-object v4, v2, v14

    new-array v4, v7, [I

    fill-array-data v4, :array_a

    aput-object v4, v2, v15

    new-array v4, v7, [I

    fill-array-data v4, :array_b

    aput-object v4, v2, v16

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->scellNumAddrs:[[I

    .line 4935
    new-array v2, v1, [[I

    new-array v4, v3, [I

    aput-object v4, v2, v3

    new-array v4, v3, [I

    aput-object v4, v2, v5

    new-array v4, v3, [I

    aput-object v4, v2, v6

    new-array v4, v3, [I

    aput-object v4, v2, v7

    new-array v4, v3, [I

    aput-object v4, v2, v8

    new-array v4, v3, [I

    aput-object v4, v2, v9

    new-array v4, v3, [I

    aput-object v4, v2, v10

    new-array v4, v9, [I

    fill-array-data v4, :array_c

    aput-object v4, v2, v11

    new-array v4, v9, [I

    fill-array-data v4, :array_d

    aput-object v4, v2, v12

    new-array v4, v9, [I

    fill-array-data v4, :array_e

    aput-object v4, v2, v13

    new-array v4, v9, [I

    fill-array-data v4, :array_f

    aput-object v4, v2, v14

    new-array v4, v9, [I

    fill-array-data v4, :array_10

    aput-object v4, v2, v15

    new-array v4, v9, [I

    fill-array-data v4, :array_11

    aput-object v4, v2, v16

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->bwAddrs:[[I

    .line 4951
    new-array v1, v1, [[I

    new-array v2, v3, [I

    aput-object v2, v1, v3

    new-array v2, v3, [I

    aput-object v2, v1, v5

    new-array v2, v3, [I

    aput-object v2, v1, v6

    new-array v2, v3, [I

    aput-object v2, v1, v7

    new-array v2, v3, [I

    aput-object v2, v1, v8

    new-array v2, v3, [I

    aput-object v2, v1, v9

    new-array v2, v3, [I

    aput-object v2, v1, v10

    new-array v2, v8, [I

    fill-array-data v2, :array_12

    aput-object v2, v1, v11

    new-array v2, v8, [I

    fill-array-data v2, :array_13

    aput-object v2, v1, v12

    new-array v2, v8, [I

    fill-array-data v2, :array_14

    aput-object v2, v1, v13

    new-array v2, v8, [I

    fill-array-data v2, :array_15

    aput-object v2, v1, v14

    new-array v2, v8, [I

    fill-array-data v2, :array_16

    aput-object v2, v1, v15

    new-array v2, v8, [I

    fill-array-data v2, :array_17

    aput-object v2, v1, v16

    iput-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->pciAddrs:[[I

    .line 4967
    new-array v1, v7, [[I

    new-array v2, v7, [I

    fill-array-data v2, :array_18

    aput-object v2, v1, v3

    new-array v2, v7, [I

    fill-array-data v2, :array_19

    aput-object v2, v1, v5

    new-array v2, v7, [I

    fill-array-data v2, :array_1a

    aput-object v2, v1, v6

    iput-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->carrierTypeAddrs:[[I

    .line 4973
    new-array v1, v7, [[I

    new-array v2, v8, [I

    fill-array-data v2, :array_1b

    aput-object v2, v1, v3

    new-array v2, v8, [I

    fill-array-data v2, :array_1c

    aput-object v2, v1, v5

    new-array v2, v8, [I

    fill-array-data v2, :array_1d

    aput-object v2, v1, v6

    iput-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->rsrpAddrs:[[I

    .line 4979
    new-array v1, v7, [[I

    new-array v2, v8, [I

    fill-array-data v2, :array_1e

    aput-object v2, v1, v3

    new-array v2, v8, [I

    fill-array-data v2, :array_1f

    aput-object v2, v1, v5

    new-array v2, v8, [I

    fill-array-data v2, :array_20

    aput-object v2, v1, v6

    iput-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->rsrqAddrs:[[I

    .line 4985
    new-array v1, v7, [[I

    new-array v2, v8, [I

    fill-array-data v2, :array_21

    aput-object v2, v1, v3

    new-array v2, v8, [I

    fill-array-data v2, :array_22

    aput-object v2, v1, v5

    new-array v2, v8, [I

    fill-array-data v2, :array_23

    aput-object v2, v1, v6

    iput-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->rssiAddrs:[[I

    .line 4991
    new-array v1, v7, [[I

    new-array v2, v8, [I

    fill-array-data v2, :array_24

    aput-object v2, v1, v3

    new-array v2, v8, [I

    fill-array-data v2, :array_25

    aput-object v2, v1, v5

    new-array v2, v8, [I

    fill-array-data v2, :array_26

    aput-object v2, v1, v6

    iput-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->sinrAddrs:[[I

    .line 4996
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo$1;

    invoke-direct {v1, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;)V

    iput-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->bandWidthMapping:Ljava/util/HashMap;

    .line 5017
    return-void

    :array_0
    .array-data 4
        0x8
        0x738
        0x20
        0x7
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x838
        0x20
        0x7
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x878
        0x20
        0x7
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x8b8
        0x20
        0x7
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x918
        0x20
        0x8
    .end array-data

    :array_5
    .array-data 4
        0x8
        0xbd8
        0x20
        0x8
    .end array-data

    :array_6
    .array-data 4
        0x8
        0xd5
        0x3
    .end array-data

    :array_7
    .array-data 4
        0x8
        0xd5
        0x3
    .end array-data

    :array_8
    .array-data 4
        0x8
        0xd5
        0x3
    .end array-data

    :array_9
    .array-data 4
        0x8
        0xd5
        0x3
    .end array-data

    :array_a
    .array-data 4
        0x8
        0xd5
        0x3
    .end array-data

    :array_b
    .array-data 4
        0x8
        0xd5
        0x3
    .end array-data

    :array_c
    .array-data 4
        0x8
        0x738
        0x2a0
        0xc
        0x9
    .end array-data

    :array_d
    .array-data 4
        0x8
        0x838
        0x2a0
        0xc
        0x9
    .end array-data

    :array_e
    .array-data 4
        0x8
        0x878
        0x2a0
        0xc
        0x9
    .end array-data

    :array_f
    .array-data 4
        0x8
        0x8b8
        0x3a0
        0x18
        0x4
    .end array-data

    :array_10
    .array-data 4
        0x8
        0x918
        0x3a0
        0x18
        0x4
    .end array-data

    :array_11
    .array-data 4
        0x8
        0xbd8
        0x3a0
        0x18
        0x4
    .end array-data

    :array_12
    .array-data 4
        0x8
        0x738
        0x0
        0xa
    .end array-data

    :array_13
    .array-data 4
        0x8
        0x838
        0x0
        0xa
    .end array-data

    :array_14
    .array-data 4
        0x8
        0x878
        0x0
        0xa
    .end array-data

    :array_15
    .array-data 4
        0x8
        0x8b8
        0x0
        0xa
    .end array-data

    :array_16
    .array-data 4
        0x8
        0x918
        0x0
        0xa
    .end array-data

    :array_17
    .array-data 4
        0x8
        0xbd8
        0x0
        0xa
    .end array-data

    :array_18
    .array-data 4
        0x8
        0xa
        0x3
    .end array-data

    :array_19
    .array-data 4
        0x8
        0xa
        0x3
    .end array-data

    :array_1a
    .array-data 4
        0x8
        0xa
        0x3
    .end array-data

    :array_1b
    .array-data 4
        0x8
        0x58
        0x40
        0x10
    .end array-data

    :array_1c
    .array-data 4
        0x8
        0x58
        0x40
        0x10
    .end array-data

    :array_1d
    .array-data 4
        0x8
        0x58
        0x40
        0x10
    .end array-data

    :array_1e
    .array-data 4
        0x8
        0x58
        0xa0
        0x8
    .end array-data

    :array_1f
    .array-data 4
        0x8
        0x58
        0xa0
        0x8
    .end array-data

    :array_20
    .array-data 4
        0x8
        0x58
        0x80
        0x8
    .end array-data

    :array_21
    .array-data 4
        0x8
        0x58
        0xe0
        0x10
    .end array-data

    :array_22
    .array-data 4
        0x8
        0x58
        0xe0
        0x10
    .end array-data

    :array_23
    .array-data 4
        0x8
        0x58
        0xa0
        0x10
    .end array-data

    :array_24
    .array-data 4
        0x8
        0x58
        0x140
        0x8
    .end array-data

    :array_25
    .array-data 4
        0x8
        0x58
        0x140
        0x8
    .end array-data

    :array_26
    .array-data 4
        0x8
        0x58
        0xe0
        0x8
    .end array-data
.end method


# virtual methods
.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 5031
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 5026
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 7

    .line 5035
    const-string v0, "INDEX"

    const-string v1, "BAND"

    const-string v2, "BW"

    const-string v3, "PCI"

    const-string v4, "RSRP"

    const-string v5, "RSRQ"

    const-string v6, "SINR"

    filled-new-array/range {v0 .. v6}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 5021
    const-string v0, "SCell Info"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 5040
    const/4 v0, 0x1

    return v0
.end method

.method public testData()V
    .locals 12

    .line 5088
    const/4 v0, 0x1

    .line 5089
    .local v0, "version":I
    const/16 v1, 0x8

    .line 5090
    .local v1, "scellNum":I
    const/16 v2, 0x8

    new-array v3, v2, [Ljava/lang/String;

    .line 5091
    .local v3, "bandArray":[Ljava/lang/String;
    new-array v4, v2, [Ljava/lang/String;

    .line 5092
    .local v4, "bwArray":[Ljava/lang/String;
    new-array v2, v2, [Ljava/lang/String;

    .line 5093
    .local v2, "pciArray":[Ljava/lang/String;
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_0
    const/4 v6, 0x0

    if-ge v5, v1, :cond_0

    .line 5094
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->dlBandSizeAddrs:[[I

    aget-object v8, v7, v0

    mul-int/lit16 v9, v5, 0x300

    add-int/2addr v9, v6

    const/4 v10, -0x2

    invoke-virtual {p0, v8, v9, v10}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->updateElement([III)[I

    move-result-object v8

    aput-object v8, v7, v0

    .line 5095
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ""

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    aput-object v7, v3, v5

    .line 5096
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->bwAddrs:[[I

    aget-object v9, v7, v0

    mul-int/lit16 v11, v5, 0x300

    add-int/2addr v11, v6

    invoke-virtual {p0, v9, v11, v10}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->updateElement([III)[I

    move-result-object v9

    aput-object v9, v7, v0

    .line 5097
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    mul-int/lit8 v9, v5, 0x2

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    aput-object v7, v4, v5

    .line 5098
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->pciAddrs:[[I

    aget-object v9, v7, v0

    mul-int/lit16 v11, v5, 0x300

    add-int/2addr v11, v6

    invoke-virtual {p0, v9, v11, v10}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->updateElement([III)[I

    move-result-object v6

    aput-object v6, v7, v0

    .line 5099
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    add-int/lit8 v7, v5, 0xc

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    aput-object v6, v2, v5

    .line 5093
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 5101
    .end local v5    # "i":I
    :cond_0
    sget-object v5, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->icdLogInfo:[Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->getName()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, " update,name id = 9014, version = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ", values = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 5103
    invoke-static {v3}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, ", "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v4}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, ","

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v2}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    .line 5101
    const-string v8, "EmInfo/MDMComponent"

    invoke-static {v8, v5, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 5104
    invoke-virtual {p0, v6, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->setDataAtPosition(I[Ljava/lang/String;)V

    .line 5105
    const/4 v5, 0x1

    invoke-virtual {p0, v5, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->setDataAtPosition(I[Ljava/lang/String;)V

    .line 5106
    const/4 v5, 0x2

    invoke-virtual {p0, v5, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->setDataAtPosition(I[Ljava/lang/String;)V

    .line 5107
    return-void
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 25
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 5044
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    check-cast v2, Ljava/nio/ByteBuffer;

    .line 5045
    .local v2, "icdPacket":Ljava/nio/ByteBuffer;
    const-string v3, "0"

    const-string v4, "1"

    const-string v5, "2"

    const-string v6, "3"

    const-string v7, "4"

    const-string v8, "5"

    const-string v9, "6"

    const-string v10, "7"

    const-string v11, "8"

    filled-new-array/range {v3 .. v11}, [Ljava/lang/String;

    move-result-object v3

    .line 5046
    .local v3, "indexArray":[Ljava/lang/String;
    const-string v4, "9014"

    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    const-string v5, ","

    const-string v6, ", "

    const-string v7, ", values = "

    const-string v8, ", version = "

    const-string v9, " update,name id = "

    const-string v10, "EmInfo/MDMComponent"

    const/4 v11, 0x0

    const/4 v12, 0x1

    if-eqz v4, :cond_4

    .line 5047
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->bwAddrs:[[I

    array-length v13, v4

    sub-int/2addr v13, v12

    aget-object v4, v4, v13

    aget v4, v4, v11

    invoke-virtual {v0, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v4

    .line 5048
    .local v4, "version":I
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->scellNumAddrs:[[I

    invoke-virtual {v0, v2, v4, v13}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v13

    .line 5049
    .local v13, "scellNum":I
    const/16 v14, 0x9

    new-array v15, v14, [Ljava/lang/String;

    .line 5050
    .local v15, "bandArray":[Ljava/lang/String;
    new-array v11, v14, [Ljava/lang/String;

    .line 5051
    .local v11, "bwArray":[Ljava/lang/String;
    new-array v14, v14, [Ljava/lang/String;

    .line 5052
    .local v14, "pciArray":[Ljava/lang/String;
    const/16 v17, 0x0

    move/from16 v12, v17

    .local v12, "i":I
    :goto_0
    if-ge v12, v13, :cond_3

    .line 5053
    move/from16 v17, v13

    .end local v13    # "scellNum":I
    .local v17, "scellNum":I
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->dlBandSizeAddrs:[[I

    move-object/from16 v18, v3

    .end local v3    # "indexArray":[Ljava/lang/String;
    .local v18, "indexArray":[Ljava/lang/String;
    array-length v3, v13

    if-le v4, v3, :cond_0

    array-length v3, v13

    goto :goto_1

    :cond_0
    move v3, v4

    :goto_1
    const/4 v13, 0x1

    sub-int/2addr v3, v13

    .line 5054
    .local v3, "bandSizeIndex":I
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->dlBandSizeAddrs:[[I

    move-object/from16 v19, v10

    aget-object v10, v13, v3

    move-object/from16 v20, v5

    mul-int/lit16 v5, v12, 0x300

    const/16 v16, 0x0

    add-int/lit8 v5, v5, 0x0

    move-object/from16 v21, v6

    const/4 v6, -0x2

    invoke-virtual {v0, v10, v5, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->updateElement([III)[I

    move-result-object v5

    aput-object v5, v13, v3

    .line 5055
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, ""

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->dlBandSizeAddrs:[[I

    invoke-virtual {v0, v2, v4, v13}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v13

    invoke-virtual {v5, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v15, v12

    .line 5056
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->bwAddrs:[[I

    array-length v13, v5

    if-le v4, v13, :cond_1

    array-length v5, v5

    goto :goto_2

    :cond_1
    move v5, v4

    :goto_2
    const/4 v13, 0x1

    sub-int/2addr v5, v13

    .line 5057
    .local v5, "bwIndex":I
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->bwAddrs:[[I

    aget-object v6, v13, v5

    move/from16 v22, v3

    .end local v3    # "bandSizeIndex":I
    .local v22, "bandSizeIndex":I
    mul-int/lit16 v3, v12, 0x300

    const/16 v16, 0x0

    add-int/lit8 v3, v3, 0x0

    move-object/from16 v23, v15

    .end local v15    # "bandArray":[Ljava/lang/String;
    .local v23, "bandArray":[Ljava/lang/String;
    const/4 v15, -0x3

    invoke-virtual {v0, v6, v3, v15}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->updateElement([III)[I

    move-result-object v3

    aput-object v3, v13, v5

    .line 5058
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->bwAddrs:[[I

    invoke-virtual {v0, v2, v4, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v6

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v11, v12

    .line 5059
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->pciAddrs:[[I

    array-length v6, v3

    if-le v4, v6, :cond_2

    array-length v3, v3

    goto :goto_3

    :cond_2
    move v3, v4

    :goto_3
    const/4 v6, 0x1

    sub-int/2addr v3, v6

    .line 5060
    .local v3, "pciIndex":I
    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->pciAddrs:[[I

    aget-object v13, v6, v3

    mul-int/lit16 v15, v12, 0x300

    const/16 v16, 0x0

    add-int/lit8 v15, v15, 0x0

    move/from16 v24, v5

    const/4 v5, -0x2

    .end local v5    # "bwIndex":I
    .local v24, "bwIndex":I
    invoke-virtual {v0, v13, v15, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->updateElement([III)[I

    move-result-object v5

    aput-object v5, v6, v3

    .line 5061
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->pciAddrs:[[I

    invoke-virtual {v0, v2, v4, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v14, v12

    .line 5052
    .end local v3    # "pciIndex":I
    .end local v22    # "bandSizeIndex":I
    .end local v24    # "bwIndex":I
    add-int/lit8 v12, v12, 0x1

    move/from16 v13, v17

    move-object/from16 v3, v18

    move-object/from16 v10, v19

    move-object/from16 v5, v20

    move-object/from16 v6, v21

    move-object/from16 v15, v23

    goto/16 :goto_0

    .end local v17    # "scellNum":I
    .end local v18    # "indexArray":[Ljava/lang/String;
    .end local v23    # "bandArray":[Ljava/lang/String;
    .local v3, "indexArray":[Ljava/lang/String;
    .restart local v13    # "scellNum":I
    .restart local v15    # "bandArray":[Ljava/lang/String;
    :cond_3
    move-object/from16 v18, v3

    move-object/from16 v20, v5

    move-object/from16 v21, v6

    move-object/from16 v19, v10

    move/from16 v17, v13

    move-object/from16 v23, v15

    .line 5063
    .end local v3    # "indexArray":[Ljava/lang/String;
    .end local v12    # "i":I
    .end local v13    # "scellNum":I
    .end local v15    # "bandArray":[Ljava/lang/String;
    .restart local v17    # "scellNum":I
    .restart local v18    # "indexArray":[Ljava/lang/String;
    .restart local v23    # "bandArray":[Ljava/lang/String;
    sget-object v3, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->icdLogInfo:[Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->getName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 5065
    invoke-static/range {v23 .. v23}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v6, v21

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v11}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v10, v20

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v14}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 5063
    move-object/from16 v12, v19

    invoke-static {v12, v3, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 5066
    move-object/from16 v3, v18

    const/4 v5, 0x0

    .end local v18    # "indexArray":[Ljava/lang/String;
    .restart local v3    # "indexArray":[Ljava/lang/String;
    invoke-virtual {v0, v5, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->setDataAtPosition(I[Ljava/lang/String;)V

    .line 5067
    move-object/from16 v5, v23

    const/4 v6, 0x1

    .end local v23    # "bandArray":[Ljava/lang/String;
    .local v5, "bandArray":[Ljava/lang/String;
    invoke-virtual {v0, v6, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->setDataAtPosition(I[Ljava/lang/String;)V

    .line 5068
    const/4 v6, 0x2

    invoke-virtual {v0, v6, v11}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->setDataAtPosition(I[Ljava/lang/String;)V

    .line 5069
    const/4 v6, 0x3

    invoke-virtual {v0, v6, v14}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->setDataAtPosition(I[Ljava/lang/String;)V

    .line 5070
    .end local v4    # "version":I
    .end local v5    # "bandArray":[Ljava/lang/String;
    .end local v11    # "bwArray":[Ljava/lang/String;
    .end local v14    # "pciArray":[Ljava/lang/String;
    .end local v17    # "scellNum":I
    move-object/from16 v17, v2

    goto/16 :goto_4

    :cond_4
    move-object v12, v10

    move-object v10, v5

    const-string v4, "9001"

    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_5

    .line 5071
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->carrierTypeAddrs:[[I

    array-length v5, v4

    const/4 v11, 0x1

    sub-int/2addr v5, v11

    aget-object v4, v4, v5

    const/4 v5, 0x0

    aget v4, v4, v5

    invoke-virtual {v0, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v4

    .line 5072
    .restart local v4    # "version":I
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->carrierTypeAddrs:[[I

    invoke-virtual {v0, v2, v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v5

    .line 5073
    .local v5, "carrierType":I
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->rsrpAddrs:[[I

    invoke-virtual {v0, v2, v4, v11}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v11

    .line 5074
    .local v11, "rsrp":I
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->rsrqAddrs:[[I

    invoke-virtual {v0, v2, v4, v13}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v13

    .line 5075
    .local v13, "rsrq":I
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->sinrAddrs:[[I

    invoke-virtual {v0, v2, v4, v14}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v14

    .line 5076
    .local v14, "sinr":I
    sget-object v15, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->icdLogInfo:[Ljava/lang/String;

    move-object/from16 v17, v2

    .end local v2    # "icdPacket":Ljava/nio/ByteBuffer;
    .local v17, "icdPacket":Ljava/nio/ByteBuffer;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ", condition = "

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v12, v15, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 5080
    const/4 v2, 0x0

    move-object/from16 v0, p0

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->setDataAtPosition(I[Ljava/lang/String;)V

    .line 5081
    const/4 v2, 0x4

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v0, v5, v2, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->setDataAtPosition(IILjava/lang/Object;)V

    .line 5082
    const/4 v2, 0x5

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v0, v5, v2, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->setDataAtPosition(IILjava/lang/Object;)V

    .line 5083
    const/4 v2, 0x6

    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v0, v5, v2, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRSCellInfo;->setDataAtPosition(IILjava/lang/Object;)V

    goto :goto_4

    .line 5070
    .end local v4    # "version":I
    .end local v5    # "carrierType":I
    .end local v11    # "rsrp":I
    .end local v13    # "rsrq":I
    .end local v14    # "sinr":I
    .end local v17    # "icdPacket":Ljava/nio/ByteBuffer;
    .restart local v2    # "icdPacket":Ljava/nio/ByteBuffer;
    :cond_5
    move-object/from16 v17, v2

    .line 5085
    .end local v2    # "icdPacket":Ljava/nio/ByteBuffer;
    .restart local v17    # "icdPacket":Ljava/nio/ByteBuffer;
    :goto_4
    return-void
.end method
