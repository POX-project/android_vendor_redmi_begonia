.class Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;
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

.field bwpSizeAddrs:[[I

.field dlBandWidthAddrs:[[I

.field dlFreqAddrs:[[I

.field dlNarfcnAddrs:[I

.field guardPeriodAddrs:[I

.field guardPeriodV3Addrs:[I

.field power08Addrs:[I

.field power0EAddrs:[I

.field power11Addrs:[[I

.field prachConfAddrs:[I

.field prach_x:[I

.field preFormatAddrs:[I

.field preFormatMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field pucchFormatAddrs:[I

.field rrcStateAddrs:[I

.field subCarSpacAddrs:[[I

.field subCarrSpacingAddrs:[I


# direct methods
.method static constructor <clinit>()V
    .locals 11

    .line 4438
    const-string v0, "type_icd_record"

    const-string v1, "9014"

    const-string v2, "7100"

    const-string v3, "9006"

    const-string v4, "900D"

    const-string v5, "9103"

    const-string v6, "900E"

    const-string v7, "9011"

    const-string v8, "9008"

    const-string v9, "type_icd_event"

    const-string v10, "9602"

    filled-new-array/range {v0 .. v10}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 17
    .param p1, "context"    # Landroid/app/Activity;

    .line 4522
    move-object/from16 v0, p0

    invoke-direct/range {p0 .. p1}, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;-><init>(Landroid/app/Activity;)V

    .line 4452
    const/4 v1, 0x3

    new-array v2, v1, [I

    fill-array-data v2, :array_0

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->rrcStateAddrs:[I

    .line 4454
    new-array v2, v1, [I

    fill-array-data v2, :array_1

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->dlNarfcnAddrs:[I

    .line 4456
    const/16 v2, 0xd

    new-array v3, v2, [[I

    const/4 v4, 0x4

    new-array v5, v4, [I

    fill-array-data v5, :array_2

    const/4 v6, 0x0

    aput-object v5, v3, v6

    new-array v5, v4, [I

    fill-array-data v5, :array_3

    const/4 v7, 0x1

    aput-object v5, v3, v7

    new-array v5, v4, [I

    fill-array-data v5, :array_4

    const/4 v8, 0x2

    aput-object v5, v3, v8

    new-array v5, v4, [I

    fill-array-data v5, :array_5

    aput-object v5, v3, v1

    new-array v5, v4, [I

    fill-array-data v5, :array_6

    aput-object v5, v3, v4

    new-array v5, v4, [I

    fill-array-data v5, :array_7

    const/4 v9, 0x5

    aput-object v5, v3, v9

    new-array v5, v4, [I

    fill-array-data v5, :array_8

    const/4 v10, 0x6

    aput-object v5, v3, v10

    new-array v5, v4, [I

    fill-array-data v5, :array_9

    const/4 v11, 0x7

    aput-object v5, v3, v11

    new-array v5, v4, [I

    fill-array-data v5, :array_a

    const/16 v12, 0x8

    aput-object v5, v3, v12

    new-array v5, v4, [I

    fill-array-data v5, :array_b

    const/16 v13, 0x9

    aput-object v5, v3, v13

    new-array v5, v4, [I

    fill-array-data v5, :array_c

    const/16 v14, 0xa

    aput-object v5, v3, v14

    new-array v5, v4, [I

    fill-array-data v5, :array_d

    const/16 v15, 0xb

    aput-object v5, v3, v15

    new-array v5, v4, [I

    fill-array-data v5, :array_e

    const/16 v16, 0xc

    aput-object v5, v3, v16

    iput-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->subCarSpacAddrs:[[I

    .line 4472
    new-array v2, v2, [[I

    new-array v3, v4, [I

    fill-array-data v3, :array_f

    aput-object v3, v2, v6

    new-array v3, v4, [I

    fill-array-data v3, :array_10

    aput-object v3, v2, v7

    new-array v3, v4, [I

    fill-array-data v3, :array_11

    aput-object v3, v2, v8

    new-array v3, v4, [I

    fill-array-data v3, :array_12

    aput-object v3, v2, v1

    new-array v3, v4, [I

    fill-array-data v3, :array_13

    aput-object v3, v2, v4

    new-array v3, v4, [I

    fill-array-data v3, :array_14

    aput-object v3, v2, v9

    new-array v3, v4, [I

    fill-array-data v3, :array_15

    aput-object v3, v2, v10

    new-array v3, v4, [I

    fill-array-data v3, :array_16

    aput-object v3, v2, v11

    new-array v3, v4, [I

    fill-array-data v3, :array_17

    aput-object v3, v2, v12

    new-array v3, v4, [I

    fill-array-data v3, :array_18

    aput-object v3, v2, v13

    new-array v3, v4, [I

    fill-array-data v3, :array_19

    aput-object v3, v2, v14

    new-array v3, v4, [I

    fill-array-data v3, :array_1a

    aput-object v3, v2, v15

    new-array v3, v4, [I

    fill-array-data v3, :array_1b

    aput-object v3, v2, v16

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->bwpSizeAddrs:[[I

    .line 4488
    new-array v2, v1, [[I

    new-array v3, v1, [I

    fill-array-data v3, :array_1c

    aput-object v3, v2, v6

    new-array v3, v1, [I

    fill-array-data v3, :array_1d

    aput-object v3, v2, v7

    new-array v3, v1, [I

    fill-array-data v3, :array_1e

    aput-object v3, v2, v8

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->dlFreqAddrs:[[I

    .line 4494
    new-array v2, v1, [[I

    new-array v3, v1, [I

    fill-array-data v3, :array_1f

    aput-object v3, v2, v6

    new-array v3, v1, [I

    fill-array-data v3, :array_20

    aput-object v3, v2, v7

    new-array v3, v1, [I

    fill-array-data v3, :array_21

    aput-object v3, v2, v8

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->dlBandWidthAddrs:[[I

    .line 4500
    new-array v2, v1, [I

    fill-array-data v2, :array_22

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->guardPeriodAddrs:[I

    .line 4501
    new-array v2, v4, [I

    fill-array-data v2, :array_23

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->guardPeriodV3Addrs:[I

    .line 4503
    new-array v2, v4, [I

    fill-array-data v2, :array_24

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->preFormatAddrs:[I

    .line 4505
    new-array v2, v4, [I

    fill-array-data v2, :array_25

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->prachConfAddrs:[I

    .line 4507
    new-array v2, v4, [I

    fill-array-data v2, :array_26

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->pucchFormatAddrs:[I

    .line 4509
    new-array v2, v4, [I

    fill-array-data v2, :array_27

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->subCarrSpacingAddrs:[I

    .line 4511
    new-array v2, v4, [I

    fill-array-data v2, :array_28

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->power0EAddrs:[I

    .line 4512
    new-array v2, v4, [[I

    new-array v3, v4, [I

    fill-array-data v3, :array_29

    aput-object v3, v2, v6

    new-array v3, v4, [I

    fill-array-data v3, :array_2a

    aput-object v3, v2, v7

    new-array v3, v4, [I

    fill-array-data v3, :array_2b

    aput-object v3, v2, v8

    new-array v3, v4, [I

    fill-array-data v3, :array_2c

    aput-object v3, v2, v1

    iput-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->power11Addrs:[[I

    .line 4519
    new-array v1, v4, [I

    fill-array-data v1, :array_2d

    iput-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->power08Addrs:[I

    .line 4554
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon$1;

    invoke-direct {v1, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;)V

    iput-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->preFormatMapping:Ljava/util/HashMap;

    .line 4573
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon$2;

    invoke-direct {v1, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;)V

    iput-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->BwpMapping:Ljava/util/HashMap;

    .line 4583
    const/16 v1, 0x100

    new-array v1, v1, [I

    fill-array-data v1, :array_2e

    iput-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->prach_x:[I

    .line 4523
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
        0x18
        0x16
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x398
        0x15
        0x3
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x398
        0x15
        0x3
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x498
        0x15
        0x3
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x498
        0x15
        0x3
    .end array-data

    :array_6
    .array-data 4
        0x8
        0x598
        0x15
        0x3
    .end array-data

    :array_7
    .array-data 4
        0x8
        0x5b8
        0x15
        0x3
    .end array-data

    :array_8
    .array-data 4
        0x8
        0x5d8
        0x15
        0x3
    .end array-data

    :array_9
    .array-data 4
        0x8
        0x5d8
        0x15
        0x3
    .end array-data

    :array_a
    .array-data 4
        0x8
        0x6d8
        0x15
        0x3
    .end array-data

    :array_b
    .array-data 4
        0x8
        0x6d8
        0x15
        0x3
    .end array-data

    :array_c
    .array-data 4
        0x8
        0x6d8
        0x15
        0x3
    .end array-data

    :array_d
    .array-data 4
        0x8
        0x6f8
        0x15
        0x3
    .end array-data

    :array_e
    .array-data 4
        0x8
        0x718
        0x15
        0x3
    .end array-data

    :array_f
    .array-data 4
        0x8
        0x398
        0xc
        0x9
    .end array-data

    :array_10
    .array-data 4
        0x8
        0x398
        0xc
        0x9
    .end array-data

    :array_11
    .array-data 4
        0x8
        0x498
        0xc
        0x9
    .end array-data

    :array_12
    .array-data 4
        0x8
        0x498
        0xc
        0x9
    .end array-data

    :array_13
    .array-data 4
        0x8
        0x598
        0xc
        0x9
    .end array-data

    :array_14
    .array-data 4
        0x8
        0x5b8
        0xc
        0x9
    .end array-data

    :array_15
    .array-data 4
        0x8
        0x5d8
        0xc
        0x9
    .end array-data

    :array_16
    .array-data 4
        0x8
        0x5d8
        0xc
        0x9
    .end array-data

    :array_17
    .array-data 4
        0x8
        0x6d8
        0xc
        0x9
    .end array-data

    :array_18
    .array-data 4
        0x8
        0x6d8
        0xc
        0x9
    .end array-data

    :array_19
    .array-data 4
        0x8
        0x6d8
        0xc
        0x9
    .end array-data

    :array_1a
    .array-data 4
        0x8
        0x6f8
        0xc
        0x9
    .end array-data

    :array_1b
    .array-data 4
        0x8
        0x718
        0xc
        0x9
    .end array-data

    :array_1c
    .array-data 4
        0x8
        0x98
        0x20
    .end array-data

    :array_1d
    .array-data 4
        0x8
        0x98
        0x20
    .end array-data

    :array_1e
    .array-data 4
        0x8
        0x98
        0x20
    .end array-data

    :array_1f
    .array-data 4
        0x8
        0x60
        0x8
    .end array-data

    :array_20
    .array-data 4
        0x8
        0x60
        0x8
    .end array-data

    :array_21
    .array-data 4
        0x8
        0x60
        0x8
    .end array-data

    :array_22
    .array-data 4
        0x8
        0x52
        0x4
    .end array-data

    :array_23
    .array-data 4
        0x8
        0x38
        0x20
        0x4
    .end array-data

    :array_24
    .array-data 4
        0x8
        0x38
        0x22
        0x4
    .end array-data

    :array_25
    .array-data 4
        0x8
        0x38
        0x2b
        0x8
    .end array-data

    :array_26
    .array-data 4
        0x8
        0x18
        0x11
        0x4
    .end array-data

    :array_27
    .array-data 4
        0x8
        0x38
        0x0
        0x8
    .end array-data

    :array_28
    .array-data 4
        0x8
        0x18
        0x40
        0x8
    .end array-data

    :array_29
    .array-data 4
        0x8
        0x18
        0x40
        0x8
    .end array-data

    :array_2a
    .array-data 4
        0x8
        0x18
        0x60
        0x8
    .end array-data

    :array_2b
    .array-data 4
        0x8
        0x18
        0x60
        0x8
    .end array-data

    :array_2c
    .array-data 4
        0x8
        0x18
        0x60
        0x8
    .end array-data

    :array_2d
    .array-data 4
        0x8
        0x18
        0x60
        0x10
    .end array-data

    :array_2e
    .array-data 4
        0x10
        0x10
        0x10
        0x10
        0x8
        0x8
        0x8
        0x8
        0x4
        0x4
        0x4
        0x4
        0x2
        0x2
        0x2
        0x2
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x10
        0x10
        0x10
        0x10
        0x8
        0x8
        0x8
        0x8
        0x4
        0x4
        0x4
        0x4
        0x2
        0x2
        0x2
        0x2
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x10
        0x8
        0x4
        0x2
        0x2
        0x1
        0x1
        0x10
        0x10
        0x10
        0x10
        0x8
        0x8
        0x8
        0x4
        0x4
        0x4
        0x4
        0x2
        0x2
        0x2
        0x2
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x10
        0x10
        0x8
        0x8
        0x4
        0x4
        0x4
        0x2
        0x2
        0x2
        0x2
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x2
        0x2
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x10
        0x10
        0x8
        0x8
        0x4
        0x4
        0x2
        0x2
        0x2
        0x2
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x2
        0x2
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x10
        0x10
        0x8
        0x8
        0x4
        0x4
        0x2
        0x2
        0x2
        0x2
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x2
        0x2
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x10
        0x10
        0x8
        0x8
        0x4
        0x4
        0x4
        0x2
        0x2
        0x2
        0x2
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x10
        0x10
        0x8
        0x8
        0x4
        0x4
        0x4
        0x2
        0x2
        0x2
        0x2
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x8
        0x4
        0x4
        0x2
        0x2
        0x2
        0x2
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x10
        0x10
        0x8
        0x8
        0x4
        0x4
        0x2
        0x2
        0x2
        0x2
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
        0x1
    .end array-data
.end method


# virtual methods
.method getBandWidth(I)I
    .locals 1
    .param p1, "YYY"    # I

    .line 4603
    const/16 v0, 0x1388

    if-ge p1, v0, :cond_0

    .line 4604
    const/4 p1, 0x5

    goto :goto_0

    .line 4605
    :cond_0
    const/16 v0, 0x2710

    if-ge p1, v0, :cond_1

    .line 4606
    const/16 p1, 0xa

    goto :goto_0

    .line 4607
    :cond_1
    const/16 v0, 0x3a98

    if-ge p1, v0, :cond_2

    .line 4608
    const/16 p1, 0xf

    goto :goto_0

    .line 4609
    :cond_2
    const/16 v0, 0x4e20

    if-ge p1, v0, :cond_3

    .line 4610
    const/16 p1, 0x14

    goto :goto_0

    .line 4611
    :cond_3
    const/16 v0, 0x61a8

    if-ge p1, v0, :cond_4

    .line 4612
    const/16 p1, 0x19

    goto :goto_0

    .line 4613
    :cond_4
    const/16 v0, 0x7530

    if-ge p1, v0, :cond_5

    .line 4614
    const/16 p1, 0x1e

    goto :goto_0

    .line 4615
    :cond_5
    const v0, 0x9c40

    if-ge p1, v0, :cond_6

    .line 4616
    const/16 p1, 0x28

    goto :goto_0

    .line 4617
    :cond_6
    const v0, 0xc350

    if-ge p1, v0, :cond_7

    .line 4618
    const/16 p1, 0x32

    goto :goto_0

    .line 4619
    :cond_7
    const v0, 0xea60

    if-ge p1, v0, :cond_8

    .line 4620
    const/16 p1, 0x3c

    goto :goto_0

    .line 4621
    :cond_8
    const v0, 0x13880

    if-ge p1, v0, :cond_9

    .line 4622
    const/16 p1, 0x50

    goto :goto_0

    .line 4623
    :cond_9
    const v0, 0x186a0

    if-ge p1, v0, :cond_a

    .line 4624
    const/16 p1, 0x64

    goto :goto_0

    .line 4626
    :cond_a
    const/4 p1, 0x0

    .line 4628
    :goto_0
    return p1
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 4537
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 4532
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getLabels()[Ljava/lang/String;
    .locals 13

    .line 4541
    const-string v0, "5G Connection"

    const-string v1, "NR Frequency"

    const-string v2, "NR BW"

    const-string v3, "LTE Frequency"

    const-string v4, "LTE BW"

    const-string v5, "Special Sub-Frame GP"

    const-string v6, "PRACH Fromat"

    const-string v7, "PRACH Period"

    const-string v8, "PUCCH Format"

    const-string v9, "PBCH Subcarrier Spacing"

    const-string v10, "Uplink Power Control PUCCH"

    const-string v11, "Uplink Power Control PUSCH"

    const-string v12, "Uplink Power Control SRS"

    filled-new-array/range {v0 .. v12}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 4527
    const-string v0, "NR Network Configuration"

    return-object v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 4551
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 17
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 4632
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    check-cast v2, Ljava/nio/ByteBuffer;

    .line 4633
    .local v2, "icdPacket":Ljava/nio/ByteBuffer;
    const-string v3, "9602"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const/16 v4, 0x8

    const-string v5, ", values = "

    const-string v6, ", version = "

    const-string v7, " update,name id = "

    const-string v8, "EmInfo/MDMComponent"

    const/4 v9, 0x1

    const/4 v10, 0x0

    if-eqz v3, :cond_2

    .line 4634
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->rrcStateAddrs:[I

    aget v3, v3, v10

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v3

    .line 4636
    .local v3, "version":I
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->rrcStateAddrs:[I

    invoke-virtual {v0, v2, v11}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v11

    .line 4637
    .local v11, "rrcState":I
    sget-object v12, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->icdLogInfo:[Ljava/lang/String;

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getName()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v8, v12, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 4640
    if-nez v11, :cond_0

    const-string v4, "None"

    goto :goto_0

    :cond_0
    if-lt v11, v9, :cond_1

    if-gt v11, v4, :cond_1

    const-string v4, "SA"

    goto :goto_0

    :cond_1
    const-string v4, "NSA"

    :goto_0
    invoke-virtual {v0, v10, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->setData(ILjava/lang/Object;)V

    .line 4641
    .end local v3    # "version":I
    .end local v11    # "rrcState":I
    goto/16 :goto_7

    :cond_2
    const-string v3, "9014"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const/4 v11, 0x3

    const-string v12, " MHz"

    if-eqz v3, :cond_8

    .line 4642
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->subCarSpacAddrs:[[I

    array-length v4, v3

    sub-int/2addr v4, v9

    aget-object v3, v3, v4

    aget v3, v3, v10

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v3

    .line 4644
    .restart local v3    # "version":I
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->dlNarfcnAddrs:[I

    invoke-virtual {v0, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v4

    .line 4646
    .local v4, "dlNarfcn":I
    if-ge v3, v11, :cond_3

    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->guardPeriodAddrs:[I

    goto :goto_1

    :cond_3
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->guardPeriodV3Addrs:[I

    :goto_1
    invoke-virtual {v0, v2, v10}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v10

    .line 4649
    .local v10, "guardPeriod":I
    const/4 v11, 0x0

    .local v11, "subCarSpac":I
    const/4 v13, 0x0

    .line 4650
    .local v13, "bwpSize":I
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->subCarSpacAddrs:[[I

    .line 4651
    array-length v15, v14

    if-gt v3, v15, :cond_4

    move v15, v3

    goto :goto_2

    :cond_4
    array-length v15, v14

    :goto_2
    sub-int/2addr v15, v9

    aget-object v14, v14, v15

    .line 4650
    invoke-virtual {v0, v2, v14}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v11

    .line 4652
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->bwpSizeAddrs:[[I

    .line 4653
    array-length v15, v14

    if-gt v3, v15, :cond_5

    move v15, v3

    goto :goto_3

    :cond_5
    array-length v15, v14

    :goto_3
    sub-int/2addr v15, v9

    aget-object v14, v14, v15

    .line 4652
    invoke-virtual {v0, v2, v14}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v13

    .line 4654
    sget-object v14, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->icdLogInfo:[Ljava/lang/String;

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getName()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ", condition = "

    invoke-virtual {v15, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ", "

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v8, v14, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 4658
    const/4 v5, 0x0

    .local v5, "a":I
    const/4 v6, 0x0

    .local v6, "b":I
    const/4 v7, 0x0

    .line 4659
    .local v7, "c":I
    if-ltz v4, :cond_6

    const v8, 0x927bf

    if-gt v4, v8, :cond_6

    .line 4660
    const/4 v5, 0x0

    .line 4661
    const/4 v6, 0x5

    .line 4662
    const/4 v7, 0x0

    goto :goto_4

    .line 4663
    :cond_6
    const v8, 0x927c0

    if-gt v8, v4, :cond_7

    const v8, 0x1ec59a

    if-gt v4, v8, :cond_7

    .line 4664
    const/16 v5, 0xbb8

    .line 4665
    const/16 v6, 0xf

    .line 4666
    const v7, 0x927c0

    .line 4668
    :cond_7
    :goto_4
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    sub-int v9, v4, v7

    mul-int/2addr v9, v6

    div-int/lit16 v9, v9, 0x3e8

    add-int/2addr v9, v5

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    const/4 v9, 0x1

    invoke-virtual {v0, v9, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->setData(ILjava/lang/Object;)V

    .line 4669
    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->BwpMapping:Ljava/util/HashMap;

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/Integer;

    invoke-virtual {v8}, Ljava/lang/Integer;->intValue()I

    move-result v8

    .line 4670
    .local v8, "subCarrSpacing":I
    mul-int/lit8 v9, v13, 0xc

    const/16 v14, 0xf

    shl-int/2addr v14, v11

    mul-int/2addr v9, v14

    .line 4671
    .local v9, "YYY":I
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v9}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getBandWidth(I)I

    move-result v14

    invoke-virtual {v15, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const/4 v14, 0x2

    invoke-virtual {v0, v14, v12}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->setData(ILjava/lang/Object;)V

    .line 4672
    const/4 v12, 0x5

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v14

    invoke-virtual {v0, v12, v14}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->setData(ILjava/lang/Object;)V

    .line 4673
    .end local v3    # "version":I
    .end local v4    # "dlNarfcn":I
    .end local v5    # "a":I
    .end local v6    # "b":I
    .end local v7    # "c":I
    .end local v8    # "subCarrSpacing":I
    .end local v9    # "YYY":I
    .end local v10    # "guardPeriod":I
    .end local v11    # "subCarSpac":I
    .end local v13    # "bwpSize":I
    goto/16 :goto_7

    :cond_8
    const-string v3, "7100"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const-string v9, ","

    if-eqz v3, :cond_b

    .line 4674
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->dlFreqAddrs:[[I

    array-length v4, v3

    const/4 v13, 0x1

    sub-int/2addr v4, v13

    aget-object v3, v3, v4

    aget v3, v3, v10

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v3

    .line 4676
    .restart local v3    # "version":I
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->dlFreqAddrs:[[I

    invoke-virtual {v0, v2, v3, v4, v10}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v4

    int-to-long v13, v4

    .line 4678
    .local v13, "reqBandInd":J
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->dlBandWidthAddrs:[[I

    invoke-virtual {v0, v2, v3, v4, v10}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v4

    move-object/from16 v16, v12

    int-to-long v11, v4

    .line 4679
    .local v11, "bandWidth":J
    sget-object v4, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->icdLogInfo:[Ljava/lang/String;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getName()Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v10, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v13, v14}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v11, v12}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v8, v4, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 4682
    const-wide/16 v4, -0x1

    cmp-long v4, v13, v4

    if-nez v4, :cond_9

    const-string v4, "Invalid"

    move-object/from16 v5, v16

    goto :goto_5

    :cond_9
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v13, v14}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    move-object/from16 v5, v16

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    :goto_5
    const/4 v6, 0x3

    invoke-virtual {v0, v6, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->setData(ILjava/lang/Object;)V

    .line 4683
    const/4 v4, 0x4

    const-wide/16 v6, 0xff

    cmp-long v6, v11, v6

    if-nez v6, :cond_a

    const-string v5, ""

    goto :goto_6

    :cond_a
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-wide/16 v7, 0xa

    div-long v7, v11, v7

    invoke-virtual {v6, v7, v8}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    :goto_6
    invoke-virtual {v0, v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->setData(ILjava/lang/Object;)V

    .line 4684
    .end local v3    # "version":I
    .end local v11    # "bandWidth":J
    .end local v13    # "reqBandInd":J
    goto/16 :goto_7

    :cond_b
    const-string v3, "9006"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const/16 v11, 0xa

    if-eqz v3, :cond_c

    .line 4686
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->preFormatAddrs:[I

    aget v3, v3, v10

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v3

    .line 4688
    .restart local v3    # "version":I
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->preFormatAddrs:[I

    invoke-virtual {v0, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v4

    .line 4690
    .local v4, "preFormat":I
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->prachConfAddrs:[I

    invoke-virtual {v0, v2, v10}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v10

    .line 4691
    .local v10, "prachConf":I
    sget-object v12, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->icdLogInfo:[Ljava/lang/String;

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getName()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v8, v12, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 4694
    const/4 v5, 0x6

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->preFormatMapping:Ljava/util/HashMap;

    invoke-virtual {v0, v6, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v0, v5, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->setData(ILjava/lang/Object;)V

    .line 4695
    const/4 v5, 0x7

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v7, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->prach_x:[I

    aget v7, v7, v10

    mul-int/2addr v7, v11

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, " ms"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v0, v5, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->setData(ILjava/lang/Object;)V

    .line 4696
    .end local v3    # "version":I
    .end local v4    # "preFormat":I
    .end local v10    # "prachConf":I
    goto/16 :goto_7

    :cond_c
    const-string v3, "900D"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_d

    .line 4698
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->pucchFormatAddrs:[I

    aget v3, v3, v10

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v3

    .line 4699
    .restart local v3    # "version":I
    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->pucchFormatAddrs:[I

    invoke-virtual {v0, v2, v9}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v9

    .line 4700
    .local v9, "pucchFormat":I
    sget-object v10, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->icdLogInfo:[Ljava/lang/String;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getName()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v8, v10, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 4703
    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v0, v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->setData(ILjava/lang/Object;)V

    .line 4704
    .end local v3    # "version":I
    .end local v9    # "pucchFormat":I
    goto/16 :goto_7

    :cond_d
    const-string v3, "9103"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_e

    .line 4706
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->subCarrSpacingAddrs:[I

    aget v3, v3, v10

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v3

    .line 4707
    .restart local v3    # "version":I
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->subCarrSpacingAddrs:[I

    invoke-virtual {v0, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v4

    .line 4708
    .local v4, "subCarrSpacing":I
    sget-object v9, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->icdLogInfo:[Ljava/lang/String;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getName()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v8, v9, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 4711
    const/16 v5, 0x9

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v0, v5, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->setData(ILjava/lang/Object;)V

    .line 4712
    .end local v3    # "version":I
    .end local v4    # "subCarrSpacing":I
    goto/16 :goto_7

    :cond_e
    const-string v3, "900E"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_f

    .line 4714
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->power0EAddrs:[I

    aget v3, v3, v10

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v3

    .line 4715
    .restart local v3    # "version":I
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->power0EAddrs:[I

    const/4 v9, 0x1

    invoke-virtual {v0, v2, v4, v9}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcd(Ljava/nio/ByteBuffer;[IZ)I

    move-result v4

    .line 4716
    .local v4, "power":I
    sget-object v9, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->icdLogInfo:[Ljava/lang/String;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getName()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v10, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v8, v9, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 4719
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v0, v11, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->setData(ILjava/lang/Object;)V

    .line 4720
    .end local v3    # "version":I
    .end local v4    # "power":I
    goto/16 :goto_7

    :cond_f
    const-string v3, "9011"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_10

    .line 4722
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->power11Addrs:[[I

    array-length v4, v3

    const/4 v9, 0x1

    sub-int/2addr v4, v9

    aget-object v3, v3, v4

    aget v3, v3, v10

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v3

    .line 4723
    .restart local v3    # "version":I
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->power11Addrs:[[I

    invoke-virtual {v0, v2, v3, v4, v9}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v4

    .line 4724
    .restart local v4    # "power":I
    sget-object v9, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->icdLogInfo:[Ljava/lang/String;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getName()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v8, v9, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 4727
    const/16 v5, 0xb

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v0, v5, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->setData(ILjava/lang/Object;)V

    .line 4728
    .end local v3    # "version":I
    .end local v4    # "power":I
    goto :goto_7

    .line 4730
    :cond_10
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->power08Addrs:[I

    aget v3, v3, v10

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v3

    .line 4731
    .restart local v3    # "version":I
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->power08Addrs:[I

    const/4 v9, 0x1

    invoke-virtual {v0, v2, v4, v9}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getFieldValueIcd(Ljava/nio/ByteBuffer;[IZ)I

    move-result v4

    .line 4732
    .restart local v4    # "power":I
    sget-object v9, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->icdLogInfo:[Ljava/lang/String;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->getName()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v8, v9, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 4735
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    const/16 v6, 0xc

    invoke-virtual {v0, v6, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRNetCon;->setData(ILjava/lang/Object;)V

    .line 4737
    .end local v3    # "version":I
    .end local v4    # "power":I
    :goto_7
    return-void
.end method
