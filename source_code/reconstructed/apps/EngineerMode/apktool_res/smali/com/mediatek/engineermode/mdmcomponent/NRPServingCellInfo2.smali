.class Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;
.super Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field BwpMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field PRlcEntityAddrs:[I

.field TAAddrs:[[I

.field UpLayerIndAddrs:[I

.field beamFlagAddrs:[[I

.field carTypeAddrs:[I

.field cfgRlcEntityAddrs:[I

.field cfgRlcEntityDLMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field cfgRlcEntityULMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field cpTypeAddr:[[I

.field curEndcPowerAddrs:[[I

.field dlBwpSizeAddrs:[[I

.field dlSubCarrSpacingAddrs:[[I

.field maxMcsAddr:[[I

.field recordLength:[I

.field recordNumAddrs:[[I

.field rrcStateAddrs:[I

.field rrcStateMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field rsrpAddrs:[[I

.field rsrqAddrs:[[I

.field rssiAddrs:[[I

.field sinrAddrs:[[I

.field ssbIndexAddrs:[[I

.field ueEndcAddrs:[I

.field ulBwpSizeAddrs:[[I

.field ulDataThresholdAddrs:[I

.field ulSubCarrSpacingAddrs:[[I


# direct methods
.method static constructor <clinit>()V
    .locals 10

    .line 1430
    const-string v0, "type_icd_record"

    const-string v1, "9025"

    const-string v2, "9001"

    const-string v3, "9014"

    const-string v4, "type_icd_event"

    const-string v5, "95D4"

    const-string v6, "9611"

    const-string v7, "9602"

    const-string v8, "9610"

    const-string v9, "9584"

    filled-new-array/range {v0 .. v9}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 17
    .param p1, "context"    # Landroid/app/Activity;

    .line 1679
    move-object/from16 v0, p0

    invoke-direct/range {p0 .. p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 1443
    const/4 v1, 0x3

    new-array v2, v1, [I

    fill-array-data v2, :array_0

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->carTypeAddrs:[I

    .line 1446
    new-array v2, v1, [[I

    new-array v3, v1, [I

    fill-array-data v3, :array_1

    const/4 v4, 0x0

    aput-object v3, v2, v4

    new-array v3, v1, [I

    fill-array-data v3, :array_2

    const/4 v5, 0x1

    aput-object v3, v2, v5

    new-array v3, v1, [I

    fill-array-data v3, :array_3

    const/4 v6, 0x2

    aput-object v3, v2, v6

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->recordNumAddrs:[[I

    .line 1451
    new-array v2, v1, [I

    fill-array-data v2, :array_4

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->recordLength:[I

    .line 1453
    new-array v2, v6, [[I

    new-array v3, v4, [I

    aput-object v3, v2, v4

    new-array v3, v1, [I

    fill-array-data v3, :array_5

    aput-object v3, v2, v5

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->curEndcPowerAddrs:[[I

    .line 1458
    new-array v2, v1, [I

    fill-array-data v2, :array_6

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->UpLayerIndAddrs:[I

    .line 1460
    new-array v2, v1, [I

    fill-array-data v2, :array_7

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->ueEndcAddrs:[I

    .line 1462
    new-array v2, v1, [I

    fill-array-data v2, :array_8

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->rrcStateAddrs:[I

    .line 1464
    const/16 v2, 0xd

    new-array v3, v2, [[I

    const/4 v7, 0x4

    new-array v8, v7, [I

    fill-array-data v8, :array_9

    aput-object v8, v3, v4

    new-array v8, v7, [I

    fill-array-data v8, :array_a

    aput-object v8, v3, v5

    new-array v8, v7, [I

    fill-array-data v8, :array_b

    aput-object v8, v3, v6

    new-array v8, v7, [I

    fill-array-data v8, :array_c

    aput-object v8, v3, v1

    new-array v8, v7, [I

    fill-array-data v8, :array_d

    aput-object v8, v3, v7

    new-array v8, v7, [I

    fill-array-data v8, :array_e

    const/4 v9, 0x5

    aput-object v8, v3, v9

    new-array v8, v7, [I

    fill-array-data v8, :array_f

    const/4 v10, 0x6

    aput-object v8, v3, v10

    new-array v8, v7, [I

    fill-array-data v8, :array_10

    const/4 v11, 0x7

    aput-object v8, v3, v11

    new-array v8, v7, [I

    fill-array-data v8, :array_11

    const/16 v12, 0x8

    aput-object v8, v3, v12

    new-array v8, v7, [I

    fill-array-data v8, :array_12

    const/16 v13, 0x9

    aput-object v8, v3, v13

    new-array v8, v7, [I

    fill-array-data v8, :array_13

    const/16 v14, 0xa

    aput-object v8, v3, v14

    new-array v8, v7, [I

    fill-array-data v8, :array_14

    const/16 v15, 0xb

    aput-object v8, v3, v15

    new-array v8, v7, [I

    fill-array-data v8, :array_15

    const/16 v16, 0xc

    aput-object v8, v3, v16

    iput-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->dlSubCarrSpacingAddrs:[[I

    .line 1480
    new-array v3, v2, [[I

    new-array v8, v7, [I

    fill-array-data v8, :array_16

    aput-object v8, v3, v4

    new-array v8, v7, [I

    fill-array-data v8, :array_17

    aput-object v8, v3, v5

    new-array v8, v7, [I

    fill-array-data v8, :array_18

    aput-object v8, v3, v6

    new-array v8, v7, [I

    fill-array-data v8, :array_19

    aput-object v8, v3, v1

    new-array v8, v7, [I

    fill-array-data v8, :array_1a

    aput-object v8, v3, v7

    new-array v8, v7, [I

    fill-array-data v8, :array_1b

    aput-object v8, v3, v9

    new-array v8, v7, [I

    fill-array-data v8, :array_1c

    aput-object v8, v3, v10

    new-array v8, v7, [I

    fill-array-data v8, :array_1d

    aput-object v8, v3, v11

    new-array v8, v7, [I

    fill-array-data v8, :array_1e

    aput-object v8, v3, v12

    new-array v8, v7, [I

    fill-array-data v8, :array_1f

    aput-object v8, v3, v13

    new-array v8, v7, [I

    fill-array-data v8, :array_20

    aput-object v8, v3, v14

    new-array v8, v7, [I

    fill-array-data v8, :array_21

    aput-object v8, v3, v15

    new-array v8, v7, [I

    fill-array-data v8, :array_22

    aput-object v8, v3, v16

    iput-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->dlBwpSizeAddrs:[[I

    .line 1496
    new-array v3, v2, [[I

    new-array v8, v7, [I

    fill-array-data v8, :array_23

    aput-object v8, v3, v4

    new-array v8, v7, [I

    fill-array-data v8, :array_24

    aput-object v8, v3, v5

    new-array v8, v7, [I

    fill-array-data v8, :array_25

    aput-object v8, v3, v6

    new-array v8, v7, [I

    fill-array-data v8, :array_26

    aput-object v8, v3, v1

    new-array v8, v7, [I

    fill-array-data v8, :array_27

    aput-object v8, v3, v7

    new-array v8, v7, [I

    fill-array-data v8, :array_28

    aput-object v8, v3, v9

    new-array v8, v7, [I

    fill-array-data v8, :array_29

    aput-object v8, v3, v10

    new-array v8, v7, [I

    fill-array-data v8, :array_2a

    aput-object v8, v3, v11

    new-array v8, v7, [I

    fill-array-data v8, :array_2b

    aput-object v8, v3, v12

    new-array v8, v7, [I

    fill-array-data v8, :array_2c

    aput-object v8, v3, v13

    new-array v8, v7, [I

    fill-array-data v8, :array_2d

    aput-object v8, v3, v14

    new-array v8, v7, [I

    fill-array-data v8, :array_2e

    aput-object v8, v3, v15

    new-array v8, v7, [I

    fill-array-data v8, :array_2f

    aput-object v8, v3, v16

    iput-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->ulSubCarrSpacingAddrs:[[I

    .line 1512
    new-array v3, v2, [[I

    new-array v8, v7, [I

    fill-array-data v8, :array_30

    aput-object v8, v3, v4

    new-array v8, v7, [I

    fill-array-data v8, :array_31

    aput-object v8, v3, v5

    new-array v8, v7, [I

    fill-array-data v8, :array_32

    aput-object v8, v3, v6

    new-array v8, v7, [I

    fill-array-data v8, :array_33

    aput-object v8, v3, v1

    new-array v8, v7, [I

    fill-array-data v8, :array_34

    aput-object v8, v3, v7

    new-array v8, v7, [I

    fill-array-data v8, :array_35

    aput-object v8, v3, v9

    new-array v8, v7, [I

    fill-array-data v8, :array_36

    aput-object v8, v3, v10

    new-array v8, v7, [I

    fill-array-data v8, :array_37

    aput-object v8, v3, v11

    new-array v8, v7, [I

    fill-array-data v8, :array_38

    aput-object v8, v3, v12

    new-array v8, v7, [I

    fill-array-data v8, :array_39

    aput-object v8, v3, v13

    new-array v8, v7, [I

    fill-array-data v8, :array_3a

    aput-object v8, v3, v14

    new-array v8, v7, [I

    fill-array-data v8, :array_3b

    aput-object v8, v3, v15

    new-array v8, v7, [I

    fill-array-data v8, :array_3c

    aput-object v8, v3, v16

    iput-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->ulBwpSizeAddrs:[[I

    .line 1528
    new-array v3, v2, [[I

    new-array v8, v4, [I

    aput-object v8, v3, v4

    new-array v8, v4, [I

    aput-object v8, v3, v5

    new-array v8, v4, [I

    aput-object v8, v3, v6

    new-array v8, v4, [I

    aput-object v8, v3, v1

    new-array v8, v4, [I

    aput-object v8, v3, v7

    new-array v8, v7, [I

    fill-array-data v8, :array_3d

    aput-object v8, v3, v9

    new-array v8, v7, [I

    fill-array-data v8, :array_3e

    aput-object v8, v3, v10

    new-array v8, v7, [I

    fill-array-data v8, :array_3f

    aput-object v8, v3, v11

    new-array v8, v7, [I

    fill-array-data v8, :array_40

    aput-object v8, v3, v12

    new-array v8, v7, [I

    fill-array-data v8, :array_41

    aput-object v8, v3, v13

    new-array v8, v7, [I

    fill-array-data v8, :array_42

    aput-object v8, v3, v14

    new-array v8, v7, [I

    fill-array-data v8, :array_43

    aput-object v8, v3, v15

    new-array v8, v7, [I

    fill-array-data v8, :array_44

    aput-object v8, v3, v16

    iput-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->maxMcsAddr:[[I

    .line 1544
    new-array v2, v2, [[I

    new-array v3, v4, [I

    aput-object v3, v2, v4

    new-array v3, v4, [I

    aput-object v3, v2, v5

    new-array v3, v4, [I

    aput-object v3, v2, v6

    new-array v3, v4, [I

    aput-object v3, v2, v1

    new-array v3, v4, [I

    aput-object v3, v2, v7

    new-array v3, v4, [I

    aput-object v3, v2, v9

    new-array v3, v1, [I

    fill-array-data v3, :array_45

    aput-object v3, v2, v10

    new-array v3, v1, [I

    fill-array-data v3, :array_46

    aput-object v3, v2, v11

    new-array v3, v1, [I

    fill-array-data v3, :array_47

    aput-object v3, v2, v12

    new-array v3, v1, [I

    fill-array-data v3, :array_48

    aput-object v3, v2, v13

    new-array v3, v1, [I

    fill-array-data v3, :array_49

    aput-object v3, v2, v14

    new-array v3, v1, [I

    fill-array-data v3, :array_4a

    aput-object v3, v2, v15

    new-array v3, v1, [I

    fill-array-data v3, :array_4b

    aput-object v3, v2, v16

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->cpTypeAddr:[[I

    .line 1560
    new-array v2, v7, [I

    fill-array-data v2, :array_4c

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->cfgRlcEntityAddrs:[I

    .line 1562
    new-array v2, v7, [I

    fill-array-data v2, :array_4d

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->PRlcEntityAddrs:[I

    .line 1564
    new-array v2, v7, [I

    fill-array-data v2, :array_4e

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->ulDataThresholdAddrs:[I

    .line 1566
    new-array v2, v5, [[I

    new-array v1, v1, [I

    fill-array-data v1, :array_4f

    aput-object v1, v2, v4

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->TAAddrs:[[I

    .line 1608
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$1;

    invoke-direct {v1, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;)V

    iput-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->cfgRlcEntityDLMapping:Ljava/util/HashMap;

    .line 1617
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$2;

    invoke-direct {v1, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;)V

    iput-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->cfgRlcEntityULMapping:Ljava/util/HashMap;

    .line 1625
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$3;

    invoke-direct {v1, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$3;-><init>(Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;)V

    iput-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->rrcStateMapping:Ljava/util/HashMap;

    .line 1639
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$4;

    invoke-direct {v1, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2$4;-><init>(Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;)V

    iput-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->BwpMapping:Ljava/util/HashMap;

    .line 1680
    return-void

    :array_0
    .array-data 4
        0x8
        0xa
        0x3
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x38
        0x5
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x38
        0x5
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x38
        0x5
    .end array-data

    :array_4
    .array-data 4
        0x180
        0x180
        0x100
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x88
        0x10
    .end array-data

    :array_6
    .array-data 4
        0x8
        0x70
        0x8
    .end array-data

    :array_7
    .array-data 4
        0x8
        0x0
        0x8
    .end array-data

    :array_8
    .array-data 4
        0x8
        0x0
        0x8
    .end array-data

    :array_9
    .array-data 4
        0x8
        0x398
        0x15
        0x3
    .end array-data

    :array_a
    .array-data 4
        0x8
        0x398
        0x15
        0x3
    .end array-data

    :array_b
    .array-data 4
        0x8
        0x498
        0x15
        0x3
    .end array-data

    :array_c
    .array-data 4
        0x8
        0x498
        0x15
        0x3
    .end array-data

    :array_d
    .array-data 4
        0x8
        0x598
        0x15
        0x3
    .end array-data

    :array_e
    .array-data 4
        0x8
        0x5b8
        0x15
        0x3
    .end array-data

    :array_f
    .array-data 4
        0x8
        0x5d8
        0x15
        0x3
    .end array-data

    :array_10
    .array-data 4
        0x8
        0x5d8
        0x15
        0x3
    .end array-data

    :array_11
    .array-data 4
        0x8
        0x6d8
        0x15
        0x3
    .end array-data

    :array_12
    .array-data 4
        0x8
        0x6d8
        0x15
        0x3
    .end array-data

    :array_13
    .array-data 4
        0x8
        0x6d8
        0x15
        0x3
    .end array-data

    :array_14
    .array-data 4
        0x8
        0x6f8
        0x15
        0x3
    .end array-data

    :array_15
    .array-data 4
        0x8
        0x718
        0x15
        0x3
    .end array-data

    :array_16
    .array-data 4
        0x8
        0x398
        0xc
        0x9
    .end array-data

    :array_17
    .array-data 4
        0x8
        0x398
        0xc
        0x9
    .end array-data

    :array_18
    .array-data 4
        0x8
        0x498
        0xc
        0x9
    .end array-data

    :array_19
    .array-data 4
        0x8
        0x498
        0xc
        0x9
    .end array-data

    :array_1a
    .array-data 4
        0x8
        0x598
        0xc
        0x9
    .end array-data

    :array_1b
    .array-data 4
        0x8
        0x5b8
        0xc
        0x9
    .end array-data

    :array_1c
    .array-data 4
        0x8
        0x5d8
        0xc
        0x9
    .end array-data

    :array_1d
    .array-data 4
        0x8
        0x5d8
        0xc
        0x9
    .end array-data

    :array_1e
    .array-data 4
        0x8
        0x6d8
        0xc
        0x9
    .end array-data

    :array_1f
    .array-data 4
        0x8
        0x6d8
        0xc
        0x9
    .end array-data

    :array_20
    .array-data 4
        0x8
        0x6d8
        0xc
        0x9
    .end array-data

    :array_21
    .array-data 4
        0x8
        0x6f8
        0xc
        0x9
    .end array-data

    :array_22
    .array-data 4
        0x8
        0x718
        0xc
        0x9
    .end array-data

    :array_23
    .array-data 4
        0x8
        0x358
        0x15
        0x3
    .end array-data

    :array_24
    .array-data 4
        0x8
        0x358
        0x15
        0x3
    .end array-data

    :array_25
    .array-data 4
        0x8
        0x358
        0x15
        0x3
    .end array-data

    :array_26
    .array-data 4
        0x8
        0x358
        0x15
        0x3
    .end array-data

    :array_27
    .array-data 4
        0x8
        0x358
        0x15
        0x3
    .end array-data

    :array_28
    .array-data 4
        0x8
        0x578
        0x15
        0x3
    .end array-data

    :array_29
    .array-data 4
        0x8
        0x578
        0x15
        0x3
    .end array-data

    :array_2a
    .array-data 4
        0x8
        0x578
        0x15
        0x3
    .end array-data

    :array_2b
    .array-data 4
        0x8
        0x678
        0x15
        0x3
    .end array-data

    :array_2c
    .array-data 4
        0x8
        0x678
        0x15
        0x3
    .end array-data

    :array_2d
    .array-data 4
        0x8
        0x678
        0x15
        0x3
    .end array-data

    :array_2e
    .array-data 4
        0x8
        0x698
        0x15
        0x3
    .end array-data

    :array_2f
    .array-data 4
        0x8
        0x6b8
        0x15
        0x3
    .end array-data

    :array_30
    .array-data 4
        0x8
        0x358
        0xc
        0x9
    .end array-data

    :array_31
    .array-data 4
        0x8
        0x358
        0xc
        0x9
    .end array-data

    :array_32
    .array-data 4
        0x8
        0x358
        0xc
        0x9
    .end array-data

    :array_33
    .array-data 4
        0x8
        0x358
        0xc
        0x9
    .end array-data

    :array_34
    .array-data 4
        0x8
        0x358
        0xc
        0x9
    .end array-data

    :array_35
    .array-data 4
        0x8
        0x578
        0xc
        0x9
    .end array-data

    :array_36
    .array-data 4
        0x8
        0x578
        0xc
        0x9
    .end array-data

    :array_37
    .array-data 4
        0x8
        0x578
        0xc
        0x9
    .end array-data

    :array_38
    .array-data 4
        0x8
        0x678
        0xc
        0x9
    .end array-data

    :array_39
    .array-data 4
        0x8
        0x678
        0xc
        0x9
    .end array-data

    :array_3a
    .array-data 4
        0x8
        0x678
        0xc
        0x9
    .end array-data

    :array_3b
    .array-data 4
        0x8
        0x698
        0xc
        0x9
    .end array-data

    :array_3c
    .array-data 4
        0x8
        0x6b8
        0xc
        0x9
    .end array-data

    :array_3d
    .array-data 4
        0x8
        0x298
        0x3
        0x1
    .end array-data

    :array_3e
    .array-data 4
        0x8
        0x298
        0x3
        0x1
    .end array-data

    :array_3f
    .array-data 4
        0x8
        0x298
        0x3
        0x1
    .end array-data

    :array_40
    .array-data 4
        0x8
        0x398
        0x3
        0x1
    .end array-data

    :array_41
    .array-data 4
        0x8
        0x398
        0x3
        0x1
    .end array-data

    :array_42
    .array-data 4
        0x8
        0x398
        0x3
        0x1
    .end array-data

    :array_43
    .array-data 4
        0x8
        0x3b8
        0x3
        0x1
    .end array-data

    :array_44
    .array-data 4
        0x8
        0x3b8
        0x3
        0x1
    .end array-data

    :array_45
    .array-data 4
        0x8
        0xf6
        0x1
    .end array-data

    :array_46
    .array-data 4
        0x8
        0xf6
        0x1
    .end array-data

    :array_47
    .array-data 4
        0x8
        0xf6
        0x1
    .end array-data

    :array_48
    .array-data 4
        0x8
        0xf6
        0x1
    .end array-data

    :array_49
    .array-data 4
        0x8
        0xf6
        0x1
    .end array-data

    :array_4a
    .array-data 4
        0x8
        0xf6
        0x1
    .end array-data

    :array_4b
    .array-data 4
        0x8
        0xf6
        0x1
    .end array-data

    :array_4c
    .array-data 4
        0x20
        0x20
        0x1b
        0x2
    .end array-data

    :array_4d
    .array-data 4
        0x20
        0x20
        0x1d
        0x1
    .end array-data

    :array_4e
    .array-data 4
        0x20
        0x20
        0x20
        0x20
    .end array-data

    :array_4f
    .array-data 4
        0x8
        0xe
        0x6
    .end array-data
.end method


# virtual methods
.method getBandWidth(I)I
    .locals 1
    .param p1, "YYY"    # I

    .line 1650
    const/16 v0, 0x1388

    if-ge p1, v0, :cond_0

    .line 1651
    const/4 p1, 0x5

    goto :goto_0

    .line 1652
    :cond_0
    const/16 v0, 0x2710

    if-ge p1, v0, :cond_1

    .line 1653
    const/16 p1, 0xa

    goto :goto_0

    .line 1654
    :cond_1
    const/16 v0, 0x3a98

    if-ge p1, v0, :cond_2

    .line 1655
    const/16 p1, 0xf

    goto :goto_0

    .line 1656
    :cond_2
    const/16 v0, 0x4e20

    if-ge p1, v0, :cond_3

    .line 1657
    const/16 p1, 0x14

    goto :goto_0

    .line 1658
    :cond_3
    const/16 v0, 0x61a8

    if-ge p1, v0, :cond_4

    .line 1659
    const/16 p1, 0x19

    goto :goto_0

    .line 1660
    :cond_4
    const/16 v0, 0x7530

    if-ge p1, v0, :cond_5

    .line 1661
    const/16 p1, 0x1e

    goto :goto_0

    .line 1662
    :cond_5
    const v0, 0x9c40

    if-ge p1, v0, :cond_6

    .line 1663
    const/16 p1, 0x28

    goto :goto_0

    .line 1664
    :cond_6
    const v0, 0xc350

    if-ge p1, v0, :cond_7

    .line 1665
    const/16 p1, 0x32

    goto :goto_0

    .line 1666
    :cond_7
    const v0, 0xea60

    if-ge p1, v0, :cond_8

    .line 1667
    const/16 p1, 0x3c

    goto :goto_0

    .line 1668
    :cond_8
    const v0, 0x13880

    if-ge p1, v0, :cond_9

    .line 1669
    const/16 p1, 0x50

    goto :goto_0

    .line 1670
    :cond_9
    const v0, 0x186a0

    if-ge p1, v0, :cond_a

    .line 1671
    const/16 p1, 0x64

    goto :goto_0

    .line 1673
    :cond_a
    const/4 p1, 0x0

    .line 1675
    :goto_0
    return p1
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 1694
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 1689
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 19

    .line 1698
    const-string v0, "RRC Status"

    const-string v1, "NR ENDC available"

    const-string v2, "EN-DE Status"

    const-string v3, "NR-SSB Index"

    const-string v4, "NR AvgRSRP, AvgRSRQ"

    const-string v5, "EN-DC Total Tx Pwr"

    const-string v6, "SSB - RSRP"

    const-string v7, "SSB - RSRQ"

    const-string v8, "SSB - RSSI"

    const-string v9, "SSB - SINR"

    const-string v10, "DL Data Split Path"

    const-string v11, "UL Data Split Path"

    const-string v12, "NR_DL_256QAM"

    const-string v13, "Cyclic Prefix"

    const-string v14, "DL Bandwidth"

    const-string v15, "UL Bandwidth"

    const-string v16, "DL Subcarrier Spacing"

    const-string v17, "UL Subcarrier Spacing"

    const-string v18, "NR_TA"

    filled-new-array/range {v0 .. v18}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 1684
    const-string v0, "NR Primary Serving Cell Info 2"

    return-object v0
.end method

.method initValue()V
    .locals 7

    .line 1572
    const/4 v0, 0x3

    new-array v1, v0, [[I

    const/4 v2, 0x0

    new-array v3, v2, [I

    aput-object v3, v1, v2

    const/4 v3, 0x4

    new-array v4, v3, [I

    fill-array-data v4, :array_0

    const/4 v5, 0x1

    aput-object v4, v1, v5

    new-array v4, v3, [I

    fill-array-data v4, :array_1

    const/4 v6, 0x2

    aput-object v4, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->beamFlagAddrs:[[I

    .line 1578
    new-array v1, v0, [[I

    new-array v4, v3, [I

    fill-array-data v4, :array_2

    aput-object v4, v1, v2

    new-array v4, v3, [I

    fill-array-data v4, :array_3

    aput-object v4, v1, v5

    new-array v4, v3, [I

    fill-array-data v4, :array_4

    aput-object v4, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->ssbIndexAddrs:[[I

    .line 1584
    new-array v1, v0, [[I

    new-array v4, v3, [I

    fill-array-data v4, :array_5

    aput-object v4, v1, v2

    new-array v4, v3, [I

    fill-array-data v4, :array_6

    aput-object v4, v1, v5

    new-array v4, v3, [I

    fill-array-data v4, :array_7

    aput-object v4, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->rsrpAddrs:[[I

    .line 1590
    new-array v1, v0, [[I

    new-array v4, v3, [I

    fill-array-data v4, :array_8

    aput-object v4, v1, v2

    new-array v4, v3, [I

    fill-array-data v4, :array_9

    aput-object v4, v1, v5

    new-array v4, v3, [I

    fill-array-data v4, :array_a

    aput-object v4, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->rsrqAddrs:[[I

    .line 1596
    new-array v1, v0, [[I

    new-array v4, v3, [I

    fill-array-data v4, :array_b

    aput-object v4, v1, v2

    new-array v4, v3, [I

    fill-array-data v4, :array_c

    aput-object v4, v1, v5

    new-array v4, v3, [I

    fill-array-data v4, :array_d

    aput-object v4, v1, v6

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->rssiAddrs:[[I

    .line 1602
    new-array v0, v0, [[I

    new-array v1, v3, [I

    fill-array-data v1, :array_e

    aput-object v1, v0, v2

    new-array v1, v3, [I

    fill-array-data v1, :array_f

    aput-object v1, v0, v5

    new-array v1, v3, [I

    fill-array-data v1, :array_10

    aput-object v1, v0, v6

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->sinrAddrs:[[I

    .line 1607
    return-void

    nop

    :array_0
    .array-data 4
        0x8
        0x58
        0x28
        0x1
    .end array-data

    :array_1
    .array-data 4
        0x8
        0x58
        0x28
        0x1
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x58
        0x20
        0x8
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x58
        0x20
        0x8
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x58
        0x20
        0x8
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x58
        0x40
        0x10
    .end array-data

    :array_6
    .array-data 4
        0x8
        0x58
        0x40
        0x10
    .end array-data

    :array_7
    .array-data 4
        0x8
        0x58
        0x40
        0x10
    .end array-data

    :array_8
    .array-data 4
        0x8
        0x58
        0xa0
        0x8
    .end array-data

    :array_9
    .array-data 4
        0x8
        0x58
        0xa0
        0x8
    .end array-data

    :array_a
    .array-data 4
        0x8
        0x58
        0x80
        0x8
    .end array-data

    :array_b
    .array-data 4
        0x8
        0x58
        0xe0
        0x10
    .end array-data

    :array_c
    .array-data 4
        0x8
        0x58
        0xe0
        0x10
    .end array-data

    :array_d
    .array-data 4
        0x8
        0x58
        0xa0
        0x10
    .end array-data

    :array_e
    .array-data 4
        0x8
        0x58
        0x140
        0x8
    .end array-data

    :array_f
    .array-data 4
        0x8
        0x58
        0x140
        0x8
    .end array-data

    :array_10
    .array-data 4
        0x8
        0x58
        0xe0
        0x8
    .end array-data
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 1708
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 34
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 1712
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    check-cast v2, Ljava/nio/ByteBuffer;

    .line 1714
    .local v2, "icdPacket":Ljava/nio/ByteBuffer;
    const-string v3, "9001"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const-string v5, ", condition = "

    const-string v6, ", version = "

    const-string v7, ", values = "

    const-string v9, " update,name id = "

    const-string v10, "EmInfo/MDMComponent"

    const/4 v12, 0x0

    const-string v13, ", "

    if-eqz v3, :cond_e

    .line 1716
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->initValue()V

    .line 1717
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->carTypeAddrs:[I

    aget v3, v3, v12

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v3

    .line 1718
    .local v3, "version":I
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->carTypeAddrs:[I

    invoke-virtual {v0, v2, v14}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v14

    .line 1719
    .local v14, "carType":I
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->recordNumAddrs:[[I

    invoke-virtual {v0, v2, v3, v15}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v15

    .line 1720
    .local v15, "recordNum":I
    const/16 v16, -0x8000

    .local v16, "maxRsrp":I
    const/16 v17, -0x8000

    .local v17, "maxRsrq":I
    const/16 v18, -0x8000

    .local v18, "maxRssi":I
    const/16 v19, -0x8000

    .line 1721
    .local v19, "maxSinr":I
    const/16 v20, 0x0

    .local v20, "avgrsrp":I
    const/16 v21, 0x0

    .local v21, "avgrsrq":I
    const/16 v22, 0x0

    .line 1722
    .local v22, "ssbIndex":I
    const/16 v23, 0x0

    .line 1723
    .local v23, "beamSet":Z
    const/16 v24, 0x0

    move/from16 v8, v16

    move/from16 v12, v17

    move/from16 v4, v18

    move/from16 v25, v19

    move/from16 v26, v20

    move/from16 v27, v21

    move/from16 v28, v22

    move/from16 v11, v24

    .end local v16    # "maxRsrp":I
    .end local v17    # "maxRsrq":I
    .end local v18    # "maxRssi":I
    .end local v19    # "maxSinr":I
    .end local v20    # "avgrsrp":I
    .end local v21    # "avgrsrq":I
    .end local v22    # "ssbIndex":I
    .local v4, "maxRssi":I
    .local v8, "maxRsrp":I
    .local v11, "i":I
    .local v12, "maxRsrq":I
    .local v25, "maxSinr":I
    .local v26, "avgrsrp":I
    .local v27, "avgrsrq":I
    .local v28, "ssbIndex":I
    :goto_0
    move-object/from16 v19, v10

    const-string v10, ""

    if-ge v11, v15, :cond_c

    .line 1724
    move-object/from16 v20, v7

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->beamFlagAddrs:[[I

    move/from16 v21, v15

    .end local v15    # "recordNum":I
    .local v21, "recordNum":I
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->recordLength:[I

    move/from16 v22, v14

    if-nez v11, :cond_0

    const/4 v14, 0x0

    goto :goto_1

    :cond_0
    const/4 v14, -0x1

    .end local v14    # "carType":I
    .local v22, "carType":I
    :goto_1
    invoke-virtual {v0, v7, v3, v15, v14}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->insertElement([[II[II)[[I

    move-result-object v7

    iput-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->beamFlagAddrs:[[I

    .line 1725
    invoke-virtual {v0, v2, v3, v7}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v7

    .line 1726
    .local v7, "beamFlag":I
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->rsrpAddrs:[[I

    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->recordLength:[I

    move-object/from16 v24, v5

    if-nez v11, :cond_1

    const/4 v5, 0x0

    goto :goto_2

    :cond_1
    const/4 v5, -0x1

    :goto_2
    invoke-virtual {v0, v14, v3, v15, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->insertElement([[II[II)[[I

    move-result-object v5

    iput-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->rsrpAddrs:[[I

    .line 1727
    const/4 v14, 0x1

    invoke-virtual {v0, v2, v3, v5, v14}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v5

    .line 1728
    .local v5, "rsrp":I
    if-eqz v5, :cond_2

    if-le v5, v8, :cond_2

    move v14, v5

    goto :goto_3

    :cond_2
    move v14, v8

    :goto_3
    move v8, v14

    .line 1729
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->rsrqAddrs:[[I

    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->recordLength:[I

    move/from16 v29, v8

    if-nez v11, :cond_3

    const/4 v8, 0x0

    goto :goto_4

    :cond_3
    const/4 v8, -0x1

    .end local v8    # "maxRsrp":I
    .local v29, "maxRsrp":I
    :goto_4
    invoke-virtual {v0, v14, v3, v15, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->insertElement([[II[II)[[I

    move-result-object v8

    iput-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->rsrqAddrs:[[I

    .line 1730
    const/4 v14, 0x1

    invoke-virtual {v0, v2, v3, v8, v14}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v8

    .line 1731
    .local v8, "rsrq":I
    if-eqz v8, :cond_4

    if-le v8, v12, :cond_4

    move v14, v8

    goto :goto_5

    :cond_4
    move v14, v12

    :goto_5
    move v12, v14

    .line 1732
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->rssiAddrs:[[I

    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->recordLength:[I

    move/from16 v30, v12

    if-nez v11, :cond_5

    const/4 v12, 0x0

    goto :goto_6

    :cond_5
    const/4 v12, -0x1

    .end local v12    # "maxRsrq":I
    .local v30, "maxRsrq":I
    :goto_6
    invoke-virtual {v0, v14, v3, v15, v12}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->insertElement([[II[II)[[I

    move-result-object v12

    iput-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->rssiAddrs:[[I

    .line 1733
    const/4 v14, 0x1

    invoke-virtual {v0, v2, v3, v12, v14}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v12

    .line 1734
    .local v12, "rssi":I
    if-eqz v12, :cond_6

    if-le v12, v4, :cond_6

    move v14, v12

    goto :goto_7

    :cond_6
    move v14, v4

    :goto_7
    move v4, v14

    .line 1735
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->sinrAddrs:[[I

    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->recordLength:[I

    move/from16 v31, v4

    if-nez v11, :cond_7

    const/4 v4, 0x0

    goto :goto_8

    :cond_7
    const/4 v4, -0x1

    .end local v4    # "maxRssi":I
    .local v31, "maxRssi":I
    :goto_8
    invoke-virtual {v0, v14, v3, v15, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->insertElement([[II[II)[[I

    move-result-object v4

    iput-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->sinrAddrs:[[I

    .line 1736
    const/4 v14, 0x1

    invoke-virtual {v0, v2, v3, v4, v14}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v4

    .line 1737
    .local v4, "sinr":I
    if-eqz v4, :cond_8

    move/from16 v14, v25

    .end local v25    # "maxSinr":I
    .local v14, "maxSinr":I
    if-le v4, v14, :cond_9

    move/from16 v25, v4

    goto :goto_9

    .end local v14    # "maxSinr":I
    .restart local v25    # "maxSinr":I
    :cond_8
    move/from16 v14, v25

    .end local v25    # "maxSinr":I
    .restart local v14    # "maxSinr":I
    :cond_9
    move/from16 v25, v14

    .line 1738
    .end local v14    # "maxSinr":I
    .restart local v25    # "maxSinr":I
    :goto_9
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->ssbIndexAddrs:[[I

    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->recordLength:[I

    move/from16 v32, v4

    if-nez v11, :cond_a

    const/4 v4, 0x0

    goto :goto_a

    :cond_a
    const/4 v4, -0x1

    .end local v4    # "sinr":I
    .local v32, "sinr":I
    :goto_a
    invoke-virtual {v0, v14, v3, v15, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->insertElement([[II[II)[[I

    move-result-object v4

    iput-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->ssbIndexAddrs:[[I

    .line 1746
    const/4 v14, 0x1

    if-ne v7, v14, :cond_b

    if-nez v23, :cond_b

    .line 1747
    invoke-virtual {v0, v2, v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v4

    .line 1748
    .end local v28    # "ssbIndex":I
    .local v4, "ssbIndex":I
    move v14, v5

    .line 1749
    .end local v26    # "avgrsrp":I
    .local v14, "avgrsrp":I
    move v15, v8

    .line 1750
    .end local v27    # "avgrsrq":I
    .local v15, "avgrsrq":I
    const/16 v23, 0x1

    .line 1751
    move/from16 v33, v5

    .end local v5    # "rsrp":I
    .local v33, "rsrp":I
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const/4 v10, 0x3

    invoke-virtual {v0, v10, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->setData(ILjava/lang/Object;)V

    .line 1752
    const/4 v5, 0x4

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v0, v5, v10}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->setData(ILjava/lang/Object;)V

    move/from16 v28, v4

    move/from16 v26, v14

    move/from16 v27, v15

    goto :goto_b

    .line 1746
    .end local v4    # "ssbIndex":I
    .end local v14    # "avgrsrp":I
    .end local v15    # "avgrsrq":I
    .end local v33    # "rsrp":I
    .restart local v5    # "rsrp":I
    .restart local v26    # "avgrsrp":I
    .restart local v27    # "avgrsrq":I
    .restart local v28    # "ssbIndex":I
    :cond_b
    move/from16 v33, v5

    .line 1723
    .end local v5    # "rsrp":I
    .end local v7    # "beamFlag":I
    .end local v8    # "rsrq":I
    .end local v12    # "rssi":I
    .end local v32    # "sinr":I
    :goto_b
    add-int/lit8 v11, v11, 0x1

    move-object/from16 v10, v19

    move-object/from16 v7, v20

    move/from16 v15, v21

    move/from16 v14, v22

    move-object/from16 v5, v24

    move/from16 v8, v29

    move/from16 v12, v30

    move/from16 v4, v31

    goto/16 :goto_0

    .end local v21    # "recordNum":I
    .end local v22    # "carType":I
    .end local v29    # "maxRsrp":I
    .end local v30    # "maxRsrq":I
    .end local v31    # "maxRssi":I
    .local v4, "maxRssi":I
    .local v8, "maxRsrp":I
    .local v12, "maxRsrq":I
    .local v14, "carType":I
    .local v15, "recordNum":I
    :cond_c
    move-object/from16 v24, v5

    move-object/from16 v20, v7

    move/from16 v22, v14

    move/from16 v21, v15

    move/from16 v14, v25

    .line 1755
    .end local v11    # "i":I
    .end local v15    # "recordNum":I
    .end local v25    # "maxSinr":I
    .local v14, "maxSinr":I
    .restart local v21    # "recordNum":I
    .restart local v22    # "carType":I
    sget-object v5, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->icdLogInfo:[Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getName()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v7, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-object/from16 v11, v24

    invoke-virtual {v7, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v6, v22

    .end local v22    # "carType":I
    .local v6, "carType":I
    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v9, v21

    .end local v21    # "recordNum":I
    .local v9, "recordNum":I
    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-object/from16 v15, v20

    invoke-virtual {v7, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v11, v28

    .end local v28    # "ssbIndex":I
    .local v11, "ssbIndex":I
    invoke-virtual {v7, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v15, v26

    .end local v26    # "avgrsrp":I
    .local v15, "avgrsrp":I
    invoke-virtual {v7, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v20, v3

    move/from16 v3, v27

    .end local v27    # "avgrsrq":I
    .local v3, "avgrsrq":I
    .local v20, "version":I
    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    move-object/from16 v13, v19

    invoke-static {v13, v5, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1761
    if-nez v6, :cond_d

    .line 1762
    const/4 v5, 0x6

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v5, v7}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->setData(ILjava/lang/Object;)V

    .line 1763
    const/4 v5, 0x7

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v5, v7}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->setData(ILjava/lang/Object;)V

    .line 1764
    const/16 v5, 0x8

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v5, v7}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->setData(ILjava/lang/Object;)V

    .line 1765
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const/16 v7, 0x9

    invoke-virtual {v0, v7, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->setData(ILjava/lang/Object;)V

    .line 1767
    .end local v3    # "avgrsrq":I
    .end local v4    # "maxRssi":I
    .end local v6    # "carType":I
    .end local v8    # "maxRsrp":I
    .end local v9    # "recordNum":I
    .end local v11    # "ssbIndex":I
    .end local v12    # "maxRsrq":I
    .end local v14    # "maxSinr":I
    .end local v15    # "avgrsrp":I
    .end local v20    # "version":I
    .end local v23    # "beamSet":Z
    :cond_d
    move-object v4, v0

    move-object v5, v2

    goto/16 :goto_12

    :cond_e
    move-object v11, v5

    move-object v15, v7

    move-object v3, v10

    const-string v4, "9014"

    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_11

    .line 1768
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->dlBwpSizeAddrs:[[I

    const/4 v5, 0x0

    aget-object v4, v4, v5

    aget v4, v4, v5

    invoke-virtual {v0, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v4

    .line 1770
    .local v4, "version":I
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->dlSubCarrSpacingAddrs:[[I

    invoke-virtual {v0, v2, v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v5

    .line 1771
    .local v5, "dlSubCarrSpacing":I
    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->dlBwpSizeAddrs:[[I

    invoke-virtual {v0, v2, v4, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v6

    .line 1772
    .local v6, "dlBwpSize":I
    mul-int/lit8 v7, v6, 0xc

    const/16 v8, 0xf

    shl-int v10, v8, v5

    mul-int/2addr v7, v10

    .line 1773
    .local v7, "YYY":I
    const/16 v10, 0xe

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v7}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getBandWidth(I)I

    move-result v14

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v14, " MHz"

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v0, v10, v12}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->setData(ILjava/lang/Object;)V

    .line 1774
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->BwpMapping:Ljava/util/HashMap;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    invoke-virtual {v8, v10}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    invoke-virtual {v12, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v8, " kHz"

    invoke-virtual {v12, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    const/16 v12, 0x10

    invoke-virtual {v0, v12, v10}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->setData(ILjava/lang/Object;)V

    .line 1776
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->ulSubCarrSpacingAddrs:[[I

    invoke-virtual {v0, v2, v4, v10}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v10

    .line 1777
    .local v10, "ulSubCarrSpacing":I
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->ulBwpSizeAddrs:[[I

    invoke-virtual {v0, v2, v4, v12}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v12

    .line 1778
    .local v12, "ulbwpSize":I
    mul-int/lit8 v17, v12, 0xc

    const/16 v16, 0xf

    shl-int v19, v16, v10

    move-object/from16 v20, v8

    mul-int v8, v17, v19

    .line 1779
    .local v8, "XXX":I
    move-object/from16 v17, v14

    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->maxMcsAddr:[[I

    invoke-virtual {v0, v2, v4, v14}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v14

    .line 1780
    .local v14, "maxMcs":I
    move-object/from16 v19, v3

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->cpTypeAddr:[[I

    invoke-virtual {v0, v2, v4, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v3

    .line 1781
    .local v3, "cpType":I
    move/from16 v21, v4

    .end local v4    # "version":I
    .local v21, "version":I
    sget-object v4, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->icdLogInfo:[Ljava/lang/String;

    move-object/from16 v22, v2

    .end local v2    # "icdPacket":Ljava/nio/ByteBuffer;
    .local v22, "icdPacket":Ljava/nio/ByteBuffer;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    move-object/from16 v2, v19

    invoke-static {v2, v4, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1785
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v4, p0

    invoke-virtual {v4, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getBandWidth(I)I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-object/from16 v2, v17

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/16 v2, 0xf

    invoke-virtual {v4, v2, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->setData(ILjava/lang/Object;)V

    .line 1786
    const/16 v0, 0x11

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v9, v4, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->BwpMapping:Ljava/util/HashMap;

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    invoke-virtual {v9, v11}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-object/from16 v9, v20

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->setData(ILjava/lang/Object;)V

    .line 1787
    const/4 v0, 0x1

    if-ne v14, v0, :cond_f

    const-string v0, "Enable"

    goto :goto_c

    :cond_f
    const-string v0, "Disable"

    :goto_c
    const/16 v2, 0xc

    invoke-virtual {v4, v2, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->setData(ILjava/lang/Object;)V

    .line 1788
    const/16 v0, 0xd

    if-nez v3, :cond_10

    const-string v2, "Normal"

    goto :goto_d

    :cond_10
    const-string v2, "Extended"

    :goto_d
    invoke-virtual {v4, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->setData(ILjava/lang/Object;)V

    .line 1789
    .end local v3    # "cpType":I
    .end local v5    # "dlSubCarrSpacing":I
    .end local v6    # "dlBwpSize":I
    .end local v7    # "YYY":I
    .end local v8    # "XXX":I
    .end local v10    # "ulSubCarrSpacing":I
    .end local v12    # "ulbwpSize":I
    .end local v14    # "maxMcs":I
    .end local v21    # "version":I
    move-object/from16 v5, v22

    goto/16 :goto_12

    .end local v22    # "icdPacket":Ljava/nio/ByteBuffer;
    .restart local v2    # "icdPacket":Ljava/nio/ByteBuffer;
    :cond_11
    move-object v4, v0

    move-object/from16 v22, v2

    move-object v2, v3

    .end local v2    # "icdPacket":Ljava/nio/ByteBuffer;
    .restart local v22    # "icdPacket":Ljava/nio/ByteBuffer;
    const-string v0, "95D4"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_15

    .line 1790
    iget-object v0, v4, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->cfgRlcEntityAddrs:[I

    const/4 v5, 0x0

    aget v0, v0, v5

    move-object/from16 v5, v22

    .end local v22    # "icdPacket":Ljava/nio/ByteBuffer;
    .local v5, "icdPacket":Ljava/nio/ByteBuffer;
    invoke-virtual {v4, v5, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v0

    .line 1792
    .local v0, "version":I
    iget-object v7, v4, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->cfgRlcEntityAddrs:[I

    invoke-virtual {v4, v5, v7}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v7

    .line 1793
    .local v7, "cfgRlcEntity":I
    const/16 v8, 0xa

    iget-object v10, v4, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->cfgRlcEntityDLMapping:Ljava/util/HashMap;

    invoke-virtual {v4, v10, v7}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v4, v8, v10}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->setData(ILjava/lang/Object;)V

    .line 1795
    iget-object v8, v4, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->PRlcEntityAddrs:[I

    invoke-virtual {v4, v5, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v8

    .line 1796
    .local v8, "PRlcEntity":I
    iget-object v10, v4, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->ulDataThresholdAddrs:[I

    invoke-virtual {v4, v5, v10}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v10

    .line 1797
    .local v10, "ulDataThreshold":I
    sget-object v12, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->icdLogInfo:[Ljava/lang/String;

    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v12, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1802
    const/16 v2, 0xb

    const/4 v3, 0x2

    if-ne v7, v3, :cond_14

    .line 1804
    const/4 v3, -0x1

    if-eq v10, v3, :cond_12

    const-string v3, "UL: LTE & NR"

    goto :goto_e

    .line 1805
    :cond_12
    if-nez v8, :cond_13

    const-string v3, "UL: LTE"

    goto :goto_e

    :cond_13
    const-string v3, "UL: NR"

    .line 1804
    :goto_e
    invoke-virtual {v4, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->setData(ILjava/lang/Object;)V

    goto :goto_f

    .line 1807
    :cond_14
    iget-object v3, v4, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->cfgRlcEntityULMapping:Ljava/util/HashMap;

    invoke-virtual {v4, v3, v7}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->setData(ILjava/lang/Object;)V

    .line 1809
    .end local v0    # "version":I
    .end local v7    # "cfgRlcEntity":I
    .end local v8    # "PRlcEntity":I
    .end local v10    # "ulDataThreshold":I
    :goto_f
    goto/16 :goto_12

    .end local v5    # "icdPacket":Ljava/nio/ByteBuffer;
    .restart local v22    # "icdPacket":Ljava/nio/ByteBuffer;
    :cond_15
    move-object/from16 v5, v22

    .end local v22    # "icdPacket":Ljava/nio/ByteBuffer;
    .restart local v5    # "icdPacket":Ljava/nio/ByteBuffer;
    const-string v0, "9611"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_17

    .line 1810
    iget-object v0, v4, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->ueEndcAddrs:[I

    const/4 v3, 0x0

    aget v0, v0, v3

    invoke-virtual {v4, v5, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v0

    .line 1812
    .restart local v0    # "version":I
    iget-object v3, v4, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->ueEndcAddrs:[I

    invoke-virtual {v4, v5, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v3

    .line 1813
    .local v3, "ueEndc":I
    sget-object v7, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->icdLogInfo:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v7, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1816
    if-nez v3, :cond_16

    const-string v2, "FALSE"

    goto :goto_10

    :cond_16
    const-string v2, "TRUE"

    :goto_10
    const/4 v6, 0x1

    invoke-virtual {v4, v6, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->setData(ILjava/lang/Object;)V

    .line 1817
    .end local v0    # "version":I
    .end local v3    # "ueEndc":I
    goto/16 :goto_12

    :cond_17
    const-string v0, "9602"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_19

    .line 1818
    iget-object v0, v4, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->rrcStateAddrs:[I

    const/4 v3, 0x0

    aget v0, v0, v3

    invoke-virtual {v4, v5, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v0

    .line 1820
    .restart local v0    # "version":I
    iget-object v3, v4, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->rrcStateAddrs:[I

    invoke-virtual {v4, v5, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v3

    .line 1821
    .local v3, "rrcState":I
    sget-object v7, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->icdLogInfo:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v7, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1824
    iget-object v2, v4, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->rrcStateMapping:Ljava/util/HashMap;

    invoke-virtual {v4, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;

    move-result-object v2

    const/4 v6, 0x0

    invoke-virtual {v4, v6, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->setData(ILjava/lang/Object;)V

    .line 1825
    const/16 v2, 0x9

    if-ne v3, v2, :cond_18

    const-string v2, "ON"

    goto :goto_11

    :cond_18
    const-string v2, "OFF"

    :goto_11
    const/4 v6, 0x2

    invoke-virtual {v4, v6, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->setData(ILjava/lang/Object;)V

    .line 1826
    .end local v0    # "version":I
    .end local v3    # "rrcState":I
    goto/16 :goto_12

    :cond_19
    const-string v0, "9025"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1a

    .line 1827
    iget-object v0, v4, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->curEndcPowerAddrs:[[I

    array-length v3, v0

    const/4 v7, 0x1

    sub-int/2addr v3, v7

    aget-object v0, v0, v3

    const/4 v3, 0x0

    aget v0, v0, v3

    invoke-virtual {v4, v5, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v0

    .line 1829
    .restart local v0    # "version":I
    iget-object v3, v4, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->curEndcPowerAddrs:[[I

    invoke-virtual {v4, v5, v0, v3, v7}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v3

    .line 1830
    .local v3, "curEndcPower":I
    sget-object v7, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->icdLogInfo:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v7, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1833
    const/4 v2, 0x5

    div-int/lit8 v6, v3, 0x20

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v4, v2, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->setData(ILjava/lang/Object;)V

    .line 1834
    .end local v0    # "version":I
    .end local v3    # "curEndcPower":I
    goto :goto_12

    :cond_1a
    const-string v0, "9584"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1b

    .line 1835
    iget-object v0, v4, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->TAAddrs:[[I

    array-length v3, v0

    const/4 v7, 0x1

    sub-int/2addr v3, v7

    aget-object v0, v0, v3

    const/4 v3, 0x0

    aget v0, v0, v3

    invoke-virtual {v4, v5, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v0

    .line 1836
    .restart local v0    # "version":I
    iget-object v3, v4, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->TAAddrs:[[I

    invoke-virtual {v4, v5, v0, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v3

    .line 1837
    .local v3, "TA":I
    sget-object v7, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->icdLogInfo:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ", value = "

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v7, v6}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1840
    const/16 v2, 0x12

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v4, v2, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->setData(ILjava/lang/Object;)V

    .line 1841
    .end local v0    # "version":I
    .end local v3    # "TA":I
    goto :goto_12

    .line 1842
    :cond_1b
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->icdLogInfo:[Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRPServingCellInfo2;->getName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " unhandled MSI_ID, return! "

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v0, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1845
    :goto_12
    return-void
.end method
