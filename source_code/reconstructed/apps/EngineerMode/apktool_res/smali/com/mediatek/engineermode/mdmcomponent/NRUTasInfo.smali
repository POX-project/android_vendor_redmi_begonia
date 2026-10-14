.class Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;
.super Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;
.source "MDMComponentICD.java"


# static fields
.field private static final EM_TYPES:[Ljava/lang/String;


# instance fields
.field RRCStateMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field TasEnableMapping:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field antReportdLen:I

.field antReportsAntIndexAddrs:[[I

.field antReportsPhrAddrs:[[I

.field antReportsRsrpAddrs:[[I

.field antReportsTxPowerAddrs:[[I

.field antReportsValidAddrs:[[I

.field antStatusAddrs:[[I

.field bandAddrs:[[I

.field bandStr:Ljava/lang/String;

.field carrIndexAddrs:[[I

.field ccIndexValid:[Z

.field labelKeys:[Ljava/lang/String;

.field labelsList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "[",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field rrcStateAddrs:[I

.field rxStateAddrs:[[I

.field statusAddrs:[[I

.field private tabTitle:[Ljava/lang/String;

.field txIndex0Addrs:[[I

.field txIndex1Addrs:[[I

.field txIndex1ValidAddrsV1:[I

.field txStateAddrs:[[I

.field valuesHashMap:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/util/LinkedHashMap;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 5

    .line 4093
    const-string v0, "type_icd_record"

    const-string v1, "9013"

    const-string v2, "9014"

    const-string v3, "type_icd_event"

    const-string v4, "9602"

    filled-new-array {v0, v1, v2, v3, v4}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->EM_TYPES:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 10
    .param p1, "context"    # Landroid/app/Activity;

    .line 4137
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;-><init>(Landroid/app/Activity;)V

    .line 4100
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelsList:Ljava/util/List;

    .line 4106
    const-string v0, "Tas Common"

    const-string v1, "Cell Info"

    const-string v2, "UL Info"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    .line 4107
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$2;-><init>(Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->valuesHashMap:Ljava/util/List;

    .line 4112
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$3;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$3;-><init>(Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->TasEnableMapping:Ljava/util/HashMap;

    .line 4118
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$4;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo$4;-><init>(Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->RRCStateMapping:Ljava/util/HashMap;

    .line 4133
    const-string v1, "CM"

    const-string v2, "CC0"

    const-string v3, "CC1"

    const-string v4, "CC2"

    const-string v5, "CC3"

    const-string v6, "CC4"

    const-string v7, "CC5"

    const-string v8, "CC6"

    const-string v9, "CC7"

    filled-new-array/range {v1 .. v9}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->tabTitle:[Ljava/lang/String;

    .line 4143
    const/4 v1, 0x3

    new-array v2, v1, [[I

    new-array v3, v1, [I

    fill-array-data v3, :array_0

    const/4 v4, 0x0

    aput-object v3, v2, v4

    new-array v3, v1, [I

    fill-array-data v3, :array_1

    const/4 v5, 0x1

    aput-object v3, v2, v5

    new-array v3, v1, [I

    fill-array-data v3, :array_2

    const/4 v6, 0x2

    aput-object v3, v2, v6

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->statusAddrs:[[I

    .line 4149
    new-array v2, v1, [[I

    new-array v3, v1, [I

    fill-array-data v3, :array_3

    aput-object v3, v2, v4

    const/4 v3, 0x4

    new-array v7, v3, [I

    fill-array-data v7, :array_4

    aput-object v7, v2, v5

    new-array v7, v3, [I

    fill-array-data v7, :array_5

    aput-object v7, v2, v6

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->antStatusAddrs:[[I

    .line 4155
    new-array v2, v1, [[I

    new-array v7, v3, [I

    fill-array-data v7, :array_6

    aput-object v7, v2, v4

    new-array v7, v3, [I

    fill-array-data v7, :array_7

    aput-object v7, v2, v5

    new-array v7, v3, [I

    fill-array-data v7, :array_8

    aput-object v7, v2, v6

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->carrIndexAddrs:[[I

    .line 4161
    new-array v2, v1, [[I

    new-array v7, v3, [I

    fill-array-data v7, :array_9

    aput-object v7, v2, v4

    new-array v7, v3, [I

    fill-array-data v7, :array_a

    aput-object v7, v2, v5

    new-array v7, v3, [I

    fill-array-data v7, :array_b

    aput-object v7, v2, v6

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->txIndex0Addrs:[[I

    .line 4167
    new-array v2, v3, [I

    fill-array-data v2, :array_c

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->txIndex1ValidAddrsV1:[I

    .line 4169
    new-array v2, v1, [[I

    new-array v7, v3, [I

    fill-array-data v7, :array_d

    aput-object v7, v2, v4

    new-array v7, v3, [I

    fill-array-data v7, :array_e

    aput-object v7, v2, v5

    new-array v7, v3, [I

    fill-array-data v7, :array_f

    aput-object v7, v2, v6

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->txIndex1Addrs:[[I

    .line 4175
    new-array v2, v1, [[I

    new-array v7, v4, [I

    aput-object v7, v2, v4

    new-array v7, v3, [I

    fill-array-data v7, :array_10

    aput-object v7, v2, v5

    new-array v7, v3, [I

    fill-array-data v7, :array_11

    aput-object v7, v2, v6

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->rxStateAddrs:[[I

    .line 4181
    new-array v2, v1, [[I

    new-array v7, v4, [I

    aput-object v7, v2, v4

    new-array v7, v3, [I

    fill-array-data v7, :array_12

    aput-object v7, v2, v5

    new-array v7, v3, [I

    fill-array-data v7, :array_13

    aput-object v7, v2, v6

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->txStateAddrs:[[I

    .line 4186
    const/16 v2, 0x40

    iput v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->antReportdLen:I

    .line 4188
    new-array v2, v1, [[I

    const/4 v7, 0x6

    new-array v8, v7, [I

    fill-array-data v8, :array_14

    aput-object v8, v2, v4

    new-array v8, v7, [I

    fill-array-data v8, :array_15

    aput-object v8, v2, v5

    new-array v8, v7, [I

    fill-array-data v8, :array_16

    aput-object v8, v2, v6

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->antReportsValidAddrs:[[I

    .line 4194
    new-array v2, v1, [[I

    new-array v8, v7, [I

    fill-array-data v8, :array_17

    aput-object v8, v2, v4

    new-array v8, v7, [I

    fill-array-data v8, :array_18

    aput-object v8, v2, v5

    new-array v8, v7, [I

    fill-array-data v8, :array_19

    aput-object v8, v2, v6

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->antReportsAntIndexAddrs:[[I

    .line 4200
    new-array v2, v1, [[I

    new-array v8, v7, [I

    fill-array-data v8, :array_1a

    aput-object v8, v2, v4

    new-array v8, v7, [I

    fill-array-data v8, :array_1b

    aput-object v8, v2, v5

    new-array v8, v7, [I

    fill-array-data v8, :array_1c

    aput-object v8, v2, v6

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->antReportsTxPowerAddrs:[[I

    .line 4206
    new-array v2, v1, [[I

    new-array v8, v7, [I

    fill-array-data v8, :array_1d

    aput-object v8, v2, v4

    new-array v8, v7, [I

    fill-array-data v8, :array_1e

    aput-object v8, v2, v5

    new-array v8, v7, [I

    fill-array-data v8, :array_1f

    aput-object v8, v2, v6

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->antReportsPhrAddrs:[[I

    .line 4212
    new-array v2, v1, [[I

    new-array v8, v7, [I

    fill-array-data v8, :array_20

    aput-object v8, v2, v4

    new-array v8, v7, [I

    fill-array-data v8, :array_21

    aput-object v8, v2, v5

    new-array v8, v7, [I

    fill-array-data v8, :array_22

    aput-object v8, v2, v6

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->antReportsRsrpAddrs:[[I

    .line 4218
    const/16 v2, 0xd

    new-array v2, v2, [[I

    new-array v8, v4, [I

    aput-object v8, v2, v4

    new-array v8, v4, [I

    aput-object v8, v2, v5

    new-array v5, v4, [I

    aput-object v5, v2, v6

    new-array v5, v4, [I

    aput-object v5, v2, v1

    new-array v4, v4, [I

    aput-object v4, v2, v3

    new-array v3, v1, [I

    fill-array-data v3, :array_23

    const/4 v4, 0x5

    aput-object v3, v2, v4

    new-array v3, v1, [I

    fill-array-data v3, :array_24

    aput-object v3, v2, v7

    new-array v3, v1, [I

    fill-array-data v3, :array_25

    const/4 v4, 0x7

    aput-object v3, v2, v4

    new-array v3, v1, [I

    fill-array-data v3, :array_26

    const/16 v4, 0x8

    aput-object v3, v2, v4

    new-array v3, v1, [I

    fill-array-data v3, :array_27

    const/16 v5, 0x9

    aput-object v3, v2, v5

    new-array v3, v1, [I

    fill-array-data v3, :array_28

    const/16 v5, 0xa

    aput-object v3, v2, v5

    new-array v3, v1, [I

    fill-array-data v3, :array_29

    const/16 v5, 0xb

    aput-object v3, v2, v5

    new-array v3, v1, [I

    fill-array-data v3, :array_2a

    const/16 v5, 0xc

    aput-object v3, v2, v5

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->bandAddrs:[[I

    .line 4234
    new-array v1, v1, [I

    fill-array-data v1, :array_2b

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->rrcStateAddrs:[I

    .line 4235
    const-string v1, ""

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->bandStr:Ljava/lang/String;

    .line 4236
    new-array v1, v4, [Z

    fill-array-data v1, :array_2c

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->ccIndexValid:[Z

    .line 4138
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->initTableComponent([Ljava/lang/String;)V

    .line 4139
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->clearData()V

    .line 4140
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
        0x0
        0x1
    .end array-data

    :array_2
    .array-data 4
        0x8
        0x0
        0x1
    .end array-data

    :array_3
    .array-data 4
        0x8
        0x0
        0x2
    .end array-data

    :array_4
    .array-data 4
        0x8
        0x18
        0x0
        0x2
    .end array-data

    :array_5
    .array-data 4
        0x8
        0x18
        0x0
        0x2
    .end array-data

    :array_6
    .array-data 4
        0x8
        0x38
        0x0
        0x3
    .end array-data

    :array_7
    .array-data 4
        0x8
        0x18
        0x2
        0x3
    .end array-data

    :array_8
    .array-data 4
        0x8
        0x18
        0x2
        0x3
    .end array-data

    :array_9
    .array-data 4
        0x8
        0x38
        0x3
        0x4
    .end array-data

    :array_a
    .array-data 4
        0x8
        0x18
        0x5
        0x5
    .end array-data

    :array_b
    .array-data 4
        0x8
        0x18
        0x8
        0x8
    .end array-data

    :array_c
    .array-data 4
        0x8
        0x38
        0x7
        0x1
    .end array-data

    :array_d
    .array-data 4
        0x8
        0x38
        0x8
        0x4
    .end array-data

    :array_e
    .array-data 4
        0x8
        0x18
        0xa
        0x5
    .end array-data

    :array_f
    .array-data 4
        0x8
        0x18
        0x10
        0x8
    .end array-data

    :array_10
    .array-data 4
        0x8
        0x18
        0xf
        0x5
    .end array-data

    :array_11
    .array-data 4
        0x8
        0x18
        0x18
        0x8
    .end array-data

    :array_12
    .array-data 4
        0x8
        0x18
        0x14
        0x5
    .end array-data

    :array_13
    .array-data 4
        0x8
        0x18
        0x20
        0x8
    .end array-data

    :array_14
    .array-data 4
        0x8
        0x38
        0x20
        0x10
        0x0
        0x1
    .end array-data

    :array_15
    .array-data 4
        0x8
        0x18
        0x20
        0x10
        0x0
        0x1
    .end array-data

    :array_16
    .array-data 4
        0x8
        0x18
        0x40
        0x10
        0x0
        0x1
    .end array-data

    :array_17
    .array-data 4
        0x8
        0x38
        0x20
        0x19
        0x0
        0x7
    .end array-data

    :array_18
    .array-data 4
        0x8
        0x18
        0x20
        0x19
        0x0
        0x7
    .end array-data

    :array_19
    .array-data 4
        0x8
        0x18
        0x40
        0x19
        0x0
        0x7
    .end array-data

    :array_1a
    .array-data 4
        0x8
        0x38
        0x20
        0x0
        0x0
        0x8
    .end array-data

    :array_1b
    .array-data 4
        0x8
        0x18
        0x20
        0x0
        0x0
        0x8
    .end array-data

    :array_1c
    .array-data 4
        0x8
        0x18
        0x40
        0x0
        0x0
        0x8
    .end array-data

    :array_1d
    .array-data 4
        0x8
        0x38
        0x20
        0x8
        0x0
        0x8
    .end array-data

    :array_1e
    .array-data 4
        0x8
        0x18
        0x20
        0x8
        0x0
        0x8
    .end array-data

    :array_1f
    .array-data 4
        0x8
        0x18
        0x40
        0x8
        0x0
        0x8
    .end array-data

    :array_20
    .array-data 4
        0x8
        0x38
        0x20
        0x20
        0x0
        0x10
    .end array-data

    :array_21
    .array-data 4
        0x8
        0x18
        0x20
        0x20
        0x0
        0x10
    .end array-data

    :array_22
    .array-data 4
        0x8
        0x18
        0x40
        0x20
        0x0
        0x10
    .end array-data

    :array_23
    .array-data 4
        0x8
        0x31
        0x7
    .end array-data

    :array_24
    .array-data 4
        0x8
        0x31
        0x7
    .end array-data

    :array_25
    .array-data 4
        0x8
        0x31
        0x7
    .end array-data

    :array_26
    .array-data 4
        0x8
        0x2e
        0x7
    .end array-data

    :array_27
    .array-data 4
        0x8
        0x2e
        0x7
    .end array-data

    :array_28
    .array-data 4
        0x8
        0x2e
        0x7
    .end array-data

    :array_29
    .array-data 4
        0x8
        0x2e
        0x8
    .end array-data

    :array_2a
    .array-data 4
        0x8
        0x2e
        0x8
    .end array-data

    :array_2b
    .array-data 4
        0x8
        0x0
        0x8
    .end array-data

    :array_2c
    .array-data 1
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
        0x0t
    .end array-data
.end method


# virtual methods
.method public addDataToList(Ljava/util/ArrayList;[I)V
    .locals 4
    .param p2, "value"    # [I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "[I>;[I)V"
        }
    .end annotation

    .line 4382
    .local p1, "list":Ljava/util/ArrayList;, "Ljava/util/ArrayList<[I>;"
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    array-length v1, p2

    if-ge v0, v1, :cond_1

    .line 4383
    invoke-virtual {p1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    const/4 v2, 0x1

    if-nez v1, :cond_0

    .line 4384
    new-array v1, v2, [I

    const/4 v2, 0x0

    aget v3, p2, v0

    aput v3, v1, v2

    invoke-virtual {p1, v0, v1}, Ljava/util/ArrayList;->add(ILjava/lang/Object;)V

    goto :goto_1

    .line 4386
    :cond_0
    invoke-virtual {p1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [I

    invoke-virtual {p1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [I

    array-length v3, v3

    add-int/2addr v3, v2

    invoke-static {v1, v3}, Ljava/util/Arrays;->copyOf([II)[I

    move-result-object v1

    .line 4387
    .local v1, "newValue":[I
    array-length v3, v1

    sub-int/2addr v3, v2

    aget v2, p2, v0

    aput v2, v1, v3

    .line 4388
    invoke-virtual {p1, v0, v1}, Ljava/util/ArrayList;->add(ILjava/lang/Object;)V

    .line 4382
    .end local v1    # "newValue":[I
    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 4391
    .end local v0    # "i":I
    :cond_1
    return-void
.end method

.method getArrayTypeKey()Ljava/util/ArrayList;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 4418
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 4419
    .local v0, "arrayTypeKeys":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v2, 0x2

    aget-object v1, v1, v2

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 4420
    return-object v0
.end method

.method getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 4433
    sget-object v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->EM_TYPES:[Ljava/lang/String;

    return-object v0
.end method

.method getGroup()Ljava/lang/String;
    .locals 1

    .line 4245
    const-string v0, "8. NR EM Component"

    return-object v0
.end method

.method getHashMapLabels(I)Ljava/util/LinkedHashMap;
    .locals 4
    .param p1, "index"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/util/LinkedHashMap;",
            ">;"
        }
    .end annotation

    .line 4395
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    .line 4397
    .local v0, "hashMapkeyValues":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/util/LinkedHashMap;>;"
    packed-switch p1, :pswitch_data_0

    goto :goto_0

    .line 4409
    :pswitch_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v2, 0x1

    aget-object v1, v1, v2

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->valuesHashMap:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 4410
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v2, 0x2

    aget-object v1, v1, v2

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->valuesHashMap:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 4399
    :pswitch_1
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v2, 0x0

    aget-object v1, v1, v2

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->valuesHashMap:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 4400
    nop

    .line 4413
    :goto_0
    return-object v0

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_1
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
    .end packed-switch
.end method

.method getName()Ljava/lang/String;
    .locals 1

    .line 4240
    const-string v0, "NR UTAS Info"

    return-object v0
.end method

.method isLabelArrayType(Ljava/lang/String;)Z
    .locals 1
    .param p1, "label"    # Ljava/lang/String;

    .line 4425
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getArrayTypeKey()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 4426
    const/4 v0, 0x1

    return v0

    .line 4428
    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method supportMultiSIM()Z
    .locals 1

    .line 4250
    const/4 v0, 0x1

    return v0
.end method

.method update(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 36
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "msg"    # Ljava/lang/Object;

    .line 4255
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    check-cast v2, Ljava/nio/ByteBuffer;

    .line 4257
    .local v2, "icdPacket":Ljava/nio/ByteBuffer;
    const-string v3, "9602"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const-string v4, ", values = "

    const-string v5, ", version = "

    const-string v6, " update,name id = "

    const-string v7, "EmInfo/MDMComponent"

    const/4 v8, 0x2

    const/4 v9, 0x0

    if-eqz v3, :cond_0

    .line 4258
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->rrcStateAddrs:[I

    aget v3, v3, v9

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v3

    .line 4260
    .local v3, "version":I
    iget-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->rrcStateAddrs:[I

    invoke-virtual {v0, v2, v10}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;[I)I

    move-result v10

    .line 4261
    .local v10, "rrcState":I
    sget-object v11, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->icdLogInfo:[Ljava/lang/String;

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getName()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v7, v11, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 4264
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    aget-object v4, v4, v9

    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v5, v9}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, [Ljava/lang/String;

    aget-object v5, v5, v8

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->RRCStateMapping:Ljava/util/HashMap;

    .line 4265
    invoke-virtual {v0, v6, v10}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;

    move-result-object v6

    .line 4264
    invoke-virtual {v0, v4, v9, v5, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 4266
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    aget-object v4, v4, v9

    invoke-virtual {v0, v4, v9}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->addData(Ljava/lang/String;I)V

    .line 4267
    .end local v3    # "version":I
    .end local v10    # "rrcState":I
    move-object/from16 v25, v2

    goto/16 :goto_b

    :cond_0
    const-string v3, "9014"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const-string v10, ""

    const/4 v11, 0x1

    if-eqz v3, :cond_2

    .line 4268
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->bandAddrs:[[I

    array-length v8, v3

    sub-int/2addr v8, v11

    aget-object v3, v3, v8

    aget v3, v3, v9

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v3

    .line 4269
    .restart local v3    # "version":I
    const/4 v8, 0x6

    if-lt v3, v8, :cond_1

    .line 4270
    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->bandAddrs:[[I

    invoke-virtual {v0, v2, v3, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v8

    .line 4271
    .local v8, "band":I
    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    iput-object v10, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->bandStr:Ljava/lang/String;

    .line 4272
    sget-object v10, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->icdLogInfo:[Ljava/lang/String;

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getName()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v7, v10, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 4275
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    aget-object v4, v4, v9

    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v5, v9}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, [Ljava/lang/String;

    aget-object v5, v5, v11

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v0, v4, v9, v5, v6}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 4276
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    aget-object v4, v4, v9

    invoke-virtual {v0, v4, v9}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->addData(Ljava/lang/String;I)V

    .line 4277
    .end local v8    # "band":I
    goto :goto_0

    .line 4278
    :cond_1
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getName()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ", this version is error, return"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v7, v4}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 4281
    .end local v3    # "version":I
    :goto_0
    move-object/from16 v25, v2

    goto/16 :goto_b

    .line 4282
    :cond_2
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->statusAddrs:[[I

    array-length v12, v3

    sub-int/2addr v12, v11

    aget-object v3, v3, v12

    aget v3, v3, v9

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getFieldValueIcdVersion(Ljava/nio/ByteBuffer;I)I

    move-result v3

    .line 4284
    .restart local v3    # "version":I
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->statusAddrs:[[I

    invoke-virtual {v0, v2, v3, v12}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v12

    .line 4286
    .local v12, "tasEnable":I
    iget-object v13, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->antStatusAddrs:[[I

    invoke-virtual {v0, v2, v3, v13}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v13

    .line 4288
    .local v13, "antStatus":I
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->carrIndexAddrs:[[I

    invoke-virtual {v0, v2, v3, v14}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v14

    .line 4289
    .local v14, "ccIndex":I
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->ccIndexValid:[Z

    aput-boolean v11, v15, v14

    .line 4291
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->txIndex0Addrs:[[I

    invoke-virtual {v0, v2, v3, v15}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v15

    .line 4293
    .local v15, "txIndex0":I
    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->txIndex1Addrs:[[I

    invoke-virtual {v0, v2, v3, v9}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v9

    .line 4295
    .local v9, "txIndex1":I
    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->rxStateAddrs:[[I

    invoke-virtual {v0, v2, v3, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v8

    .line 4297
    .local v8, "rxState":I
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->txStateAddrs:[[I

    invoke-virtual {v0, v2, v3, v11}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v11

    .line 4298
    .local v11, "txState":I
    move/from16 v19, v11

    .end local v11    # "txState":I
    .local v19, "txState":I
    const/4 v11, 0x5

    move/from16 v20, v8

    .end local v8    # "rxState":I
    .local v20, "rxState":I
    new-array v8, v11, [I

    .line 4299
    .local v8, "antReportsValid":[I
    move/from16 v21, v12

    .end local v12    # "tasEnable":I
    .local v21, "tasEnable":I
    new-array v12, v11, [I

    .line 4300
    .local v12, "antReportsAntIndex":[I
    move-object/from16 v22, v4

    new-array v4, v11, [I

    .line 4301
    .local v4, "antReportsTxPower":[I
    move-object/from16 v23, v10

    new-array v10, v11, [I

    .line 4302
    .local v10, "antReportsPhr":[I
    move/from16 v24, v9

    .end local v9    # "txIndex1":I
    .local v24, "txIndex1":I
    new-array v9, v11, [I

    .line 4303
    .local v9, "antReportsRsrp":[I
    move/from16 v25, v15

    .end local v15    # "txIndex0":I
    .local v25, "txIndex0":I
    new-array v15, v11, [Ljava/lang/String;

    .line 4304
    .local v15, "antReportsPhrS":[Ljava/lang/String;
    move-object/from16 v26, v15

    .end local v15    # "antReportsPhrS":[Ljava/lang/String;
    .local v26, "antReportsPhrS":[Ljava/lang/String;
    new-array v15, v11, [Ljava/lang/String;

    .line 4305
    .local v15, "antReportsRsrpS":[Ljava/lang/String;
    move-object/from16 v27, v15

    .end local v15    # "antReportsRsrpS":[Ljava/lang/String;
    .local v27, "antReportsRsrpS":[Ljava/lang/String;
    new-array v15, v11, [Ljava/lang/String;

    .line 4306
    .local v15, "antReportsAntIndexS":[Ljava/lang/String;
    move-object/from16 v28, v15

    .end local v15    # "antReportsAntIndexS":[Ljava/lang/String;
    .local v28, "antReportsAntIndexS":[Ljava/lang/String;
    new-array v15, v11, [Ljava/lang/String;

    .line 4307
    .local v15, "antReportsTxPowerS":[Ljava/lang/String;
    const-string v11, ", "

    if-nez v13, :cond_3

    .line 4308
    move-object/from16 v29, v15

    .end local v15    # "antReportsTxPowerS":[Ljava/lang/String;
    .local v29, "antReportsTxPowerS":[Ljava/lang/String;
    sget-object v15, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->icdLogInfo:[Ljava/lang/String;

    move-object/from16 v30, v9

    .end local v9    # "antReportsRsrp":[I
    .local v30, "antReportsRsrp":[I
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v31, v10

    .end local v10    # "antReportsPhr":[I
    .local v31, "antReportsPhr":[I
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ", condition = "

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v7, v15, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 4311
    return-void

    .line 4313
    .end local v29    # "antReportsTxPowerS":[Ljava/lang/String;
    .end local v30    # "antReportsRsrp":[I
    .end local v31    # "antReportsPhr":[I
    .restart local v9    # "antReportsRsrp":[I
    .restart local v10    # "antReportsPhr":[I
    .restart local v15    # "antReportsTxPowerS":[Ljava/lang/String;
    :cond_3
    move-object/from16 v30, v9

    move-object/from16 v31, v10

    move-object/from16 v29, v15

    .end local v9    # "antReportsRsrp":[I
    .end local v10    # "antReportsPhr":[I
    .end local v15    # "antReportsTxPowerS":[Ljava/lang/String;
    .restart local v29    # "antReportsTxPowerS":[Ljava/lang/String;
    .restart local v30    # "antReportsRsrp":[I
    .restart local v31    # "antReportsPhr":[I
    const/4 v9, 0x0

    .line 4314
    .local v9, "j":I
    const/4 v10, 0x0

    .local v10, "i":I
    :goto_1
    const/4 v15, 0x5

    if-ge v10, v15, :cond_9

    .line 4316
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->antReportsValidAddrs:[[I

    move-object/from16 v33, v7

    array-length v7, v15

    if-gt v3, v7, :cond_4

    move v7, v3

    goto :goto_2

    :cond_4
    array-length v7, v15

    :goto_2
    const/4 v15, 0x1

    sub-int/2addr v7, v15

    .line 4317
    .local v7, "index":I
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->antReportsValidAddrs:[[I

    aget-object v34, v15, v7

    mul-int/lit8 v35, v10, 0x40

    const/16 v32, 0x4

    aput v35, v34, v32

    .line 4318
    invoke-virtual {v0, v2, v3, v15}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v15

    aput v15, v8, v10

    .line 4319
    aget v15, v8, v10

    if-nez v15, :cond_5

    .line 4320
    move-object/from16 v34, v8

    move-object/from16 v7, v23

    move/from16 v23, v24

    move/from16 v15, v25

    move-object/from16 v25, v2

    goto/16 :goto_6

    .line 4323
    :cond_5
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->antReportsAntIndexAddrs:[[I

    aget-object v34, v15, v7

    mul-int/lit8 v35, v10, 0x40

    const/16 v32, 0x4

    aput v35, v34, v32

    .line 4324
    invoke-virtual {v0, v2, v3, v15}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[I)I

    move-result v15

    aput v15, v12, v10

    .line 4326
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->antReportsTxPowerAddrs:[[I

    aget-object v34, v15, v7

    mul-int/lit8 v35, v10, 0x40

    aput v35, v34, v32

    .line 4327
    move-object/from16 v34, v8

    const/4 v8, 0x1

    .end local v8    # "antReportsValid":[I
    .local v34, "antReportsValid":[I
    invoke-virtual {v0, v2, v3, v15, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v15

    aput v15, v4, v10

    .line 4329
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->antReportsPhrAddrs:[[I

    aget-object v18, v15, v7

    mul-int/lit8 v35, v10, 0x40

    aput v35, v18, v32

    .line 4330
    invoke-virtual {v0, v2, v3, v15, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v15

    aput v15, v31, v10

    .line 4332
    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->antReportsRsrpAddrs:[[I

    aget-object v18, v15, v7

    mul-int/lit8 v35, v10, 0x40

    aput v35, v18, v32

    .line 4333
    invoke-virtual {v0, v2, v3, v15, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getFieldValueIcd(Ljava/nio/ByteBuffer;I[[IZ)I

    move-result v15

    aput v15, v30, v10

    .line 4335
    aget v8, v12, v10

    move/from16 v15, v25

    .end local v25    # "txIndex0":I
    .local v15, "txIndex0":I
    if-ne v8, v15, :cond_7

    if-nez v13, :cond_6

    goto :goto_3

    :cond_6
    move-object/from16 v25, v2

    move/from16 v2, v24

    goto :goto_4

    :cond_7
    :goto_3
    aget v8, v12, v10

    move-object/from16 v25, v2

    move/from16 v2, v24

    .end local v24    # "txIndex1":I
    .local v2, "txIndex1":I
    .local v25, "icdPacket":Ljava/nio/ByteBuffer;
    if-ne v8, v2, :cond_8

    const/4 v8, 0x2

    if-lt v13, v8, :cond_8

    .line 4337
    :goto_4
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    move/from16 v24, v7

    move-object/from16 v7, v23

    .end local v7    # "index":I
    .local v24, "index":I
    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v23, v2

    .end local v2    # "txIndex1":I
    .local v23, "txIndex1":I
    aget v2, v31, v10

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v26, v9

    .line 4338
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    aget v8, v4, v10

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v29, v9

    goto :goto_5

    .line 4335
    .end local v23    # "txIndex1":I
    .end local v24    # "index":I
    .restart local v2    # "txIndex1":I
    .restart local v7    # "index":I
    :cond_8
    move/from16 v24, v7

    move-object/from16 v7, v23

    move/from16 v23, v2

    .line 4340
    .end local v2    # "txIndex1":I
    .end local v7    # "index":I
    .restart local v23    # "txIndex1":I
    .restart local v24    # "index":I
    aput-object v7, v26, v9

    .line 4341
    aput-object v7, v29, v9

    .line 4343
    :goto_5
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    aget v8, v12, v10

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v28, v9

    .line 4344
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget v8, v30, v10

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v27, v9

    .line 4345
    add-int/lit8 v9, v9, 0x1

    .line 4314
    .end local v24    # "index":I
    :goto_6
    add-int/lit8 v10, v10, 0x1

    move/from16 v24, v23

    move-object/from16 v2, v25

    move-object/from16 v8, v34

    move-object/from16 v23, v7

    move/from16 v25, v15

    move-object/from16 v7, v33

    goto/16 :goto_1

    .end local v15    # "txIndex0":I
    .end local v23    # "txIndex1":I
    .end local v34    # "antReportsValid":[I
    .local v2, "icdPacket":Ljava/nio/ByteBuffer;
    .restart local v8    # "antReportsValid":[I
    .local v24, "txIndex1":I
    .local v25, "txIndex0":I
    :cond_9
    move-object/from16 v33, v7

    move-object/from16 v34, v8

    move-object/from16 v7, v23

    move/from16 v23, v24

    move/from16 v15, v25

    move-object/from16 v25, v2

    .line 4347
    .end local v2    # "icdPacket":Ljava/nio/ByteBuffer;
    .end local v8    # "antReportsValid":[I
    .end local v10    # "i":I
    .end local v24    # "txIndex1":I
    .restart local v15    # "txIndex0":I
    .restart local v23    # "txIndex1":I
    .local v25, "icdPacket":Ljava/nio/ByteBuffer;
    .restart local v34    # "antReportsValid":[I
    sget-object v2, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->icdLogInfo:[Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ", conditions = "

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ","

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->antReportsValidAddrs:[[I

    .line 4349
    invoke-static {v5}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v5, v22

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v5, v21

    .end local v21    # "tasEnable":I
    .local v5, "tasEnable":I
    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v6, v20

    .end local v20    # "rxState":I
    .local v6, "rxState":I
    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v10, v19

    .end local v19    # "txState":I
    .local v10, "txState":I
    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move/from16 v1, v23

    .end local v23    # "txIndex1":I
    .local v1, "txIndex1":I
    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 4351
    move/from16 v19, v3

    .end local v3    # "version":I
    .local v19, "version":I
    invoke-static {v12}, Ljava/util/Arrays;->toString([I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 4352
    invoke-static {v4}, Ljava/util/Arrays;->toString([I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 4353
    invoke-static/range {v26 .. v26}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static/range {v27 .. v27}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 4347
    move-object/from16 v8, v33

    invoke-static {v8, v2, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 4354
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v3, 0x0

    aget-object v2, v2, v3

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v8, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, [Ljava/lang/String;

    aget-object v8, v8, v3

    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->TasEnableMapping:Ljava/util/HashMap;

    .line 4355
    invoke-virtual {v0, v11, v5}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->getValueByMapping(Ljava/util/HashMap;I)Ljava/lang/String;

    move-result-object v11

    .line 4354
    invoke-virtual {v0, v2, v3, v8, v11}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 4356
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    aget-object v2, v2, v3

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->addData(Ljava/lang/String;I)V

    .line 4357
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v8, 0x1

    aget-object v2, v2, v8

    add-int/lit8 v11, v14, 0x1

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v3, v8}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [Ljava/lang/String;

    const/16 v16, 0x0

    aget-object v3, v3, v16

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->bandStr:Ljava/lang/String;

    invoke-virtual {v0, v2, v11, v3, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 4358
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v3, 0x1

    aget-object v2, v2, v3

    add-int/lit8 v8, v14, 0x1

    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v11, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, [Ljava/lang/String;

    aget-object v11, v11, v3

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v0, v2, v8, v11, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 4359
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v3, 0x1

    aget-object v2, v2, v3

    add-int/lit8 v8, v14, 0x1

    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v11, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, [Ljava/lang/String;

    const/16 v17, 0x2

    aget-object v11, v11, v17

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v0, v2, v8, v11, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 4360
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v3, 0x1

    aget-object v2, v2, v3

    add-int/lit8 v8, v14, 0x1

    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v11, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, [Ljava/lang/String;

    const/4 v3, 0x3

    aget-object v11, v11, v3

    .line 4361
    if-nez v13, :cond_a

    move-object v3, v7

    goto :goto_7

    :cond_a
    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v20

    move-object/from16 v3, v20

    .line 4360
    :goto_7
    invoke-virtual {v0, v2, v8, v11, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 4362
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v3, 0x1

    aget-object v2, v2, v3

    add-int/lit8 v8, v14, 0x1

    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v11, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, [Ljava/lang/String;

    const/4 v3, 0x4

    aget-object v3, v11, v3

    .line 4363
    const/4 v11, 0x2

    if-ge v13, v11, :cond_b

    goto :goto_8

    :cond_b
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    .line 4362
    :goto_8
    invoke-virtual {v0, v2, v8, v3, v7}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V

    .line 4364
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v3, 0x1

    aget-object v2, v2, v3

    add-int/lit8 v3, v14, 0x1

    invoke-virtual {v0, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->addData(Ljava/lang/String;I)V

    .line 4365
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v3, 0x2

    aget-object v2, v2, v3

    add-int/lit8 v7, v14, 0x1

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v8, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, [Ljava/lang/String;

    const/4 v11, 0x0

    aget-object v8, v8, v11

    move-object/from16 v11, v28

    .end local v28    # "antReportsAntIndexS":[Ljava/lang/String;
    .local v11, "antReportsAntIndexS":[Ljava/lang/String;
    invoke-virtual {v0, v2, v7, v8, v11}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 4366
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    aget-object v2, v2, v3

    add-int/lit8 v7, v14, 0x1

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v8, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, [Ljava/lang/String;

    const/16 v16, 0x1

    aget-object v8, v8, v16

    move-object/from16 v3, v29

    .end local v29    # "antReportsTxPowerS":[Ljava/lang/String;
    .local v3, "antReportsTxPowerS":[Ljava/lang/String;
    invoke-virtual {v0, v2, v7, v8, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 4367
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v7, 0x2

    aget-object v2, v2, v7

    add-int/lit8 v8, v14, 0x1

    move/from16 v24, v1

    .end local v1    # "txIndex1":I
    .restart local v24    # "txIndex1":I
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v1, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [Ljava/lang/String;

    aget-object v1, v1, v7

    move-object/from16 v7, v26

    .end local v26    # "antReportsPhrS":[Ljava/lang/String;
    .local v7, "antReportsPhrS":[Ljava/lang/String;
    invoke-virtual {v0, v2, v8, v1, v7}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 4368
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v2, 0x2

    aget-object v1, v1, v2

    add-int/lit8 v8, v14, 0x1

    .end local v3    # "antReportsTxPowerS":[Ljava/lang/String;
    .restart local v29    # "antReportsTxPowerS":[Ljava/lang/String;
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [Ljava/lang/String;

    const/16 v16, 0x3

    aget-object v3, v3, v16

    move-object/from16 v2, v27

    .end local v27    # "antReportsRsrpS":[Ljava/lang/String;
    .local v2, "antReportsRsrpS":[Ljava/lang/String;
    invoke-virtual {v0, v1, v8, v3, v2}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V

    .line 4369
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v3, 0x2

    aget-object v1, v1, v3

    add-int/lit8 v3, v14, 0x1

    invoke-virtual {v0, v1, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->addData(Ljava/lang/String;I)V

    .line 4370
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_9
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->ccIndexValid:[Z

    array-length v8, v3

    if-ge v1, v8, :cond_d

    .line 4371
    aget-boolean v3, v3, v1

    if-nez v3, :cond_c

    .line 4372
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v8, 0x1

    aget-object v3, v3, v8

    move-object/from16 v27, v2

    .end local v2    # "antReportsRsrpS":[Ljava/lang/String;
    .restart local v27    # "antReportsRsrpS":[Ljava/lang/String;
    add-int/lit8 v2, v1, 0x1

    move-object/from16 v16, v4

    .end local v4    # "antReportsTxPower":[I
    .local v16, "antReportsTxPower":[I
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v4, v8}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, [Ljava/lang/Object;

    invoke-virtual {v0, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->initArrayHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v4

    invoke-virtual {v0, v3, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->setHashMapKeyArrays(Ljava/lang/String;ILjava/util/LinkedHashMap;)V

    .line 4373
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v3, 0x2

    aget-object v2, v2, v3

    add-int/lit8 v4, v1, 0x1

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelsList:Ljava/util/List;

    invoke-interface {v8, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, [Ljava/lang/Object;

    invoke-virtual {v0, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->initArrayHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v3

    invoke-virtual {v0, v2, v4, v3}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->setHashMapKeyArrays(Ljava/lang/String;ILjava/util/LinkedHashMap;)V

    .line 4374
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v3, 0x1

    aget-object v2, v2, v3

    add-int/lit8 v4, v1, 0x1

    invoke-virtual {v0, v2, v4}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->addData(Ljava/lang/String;I)V

    .line 4375
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->labelKeys:[Ljava/lang/String;

    const/4 v4, 0x2

    aget-object v2, v2, v4

    add-int/lit8 v8, v1, 0x1

    invoke-virtual {v0, v2, v8}, Lcom/mediatek/engineermode/mdmcomponent/NRUTasInfo;->addData(Ljava/lang/String;I)V

    goto :goto_a

    .line 4371
    .end local v16    # "antReportsTxPower":[I
    .end local v27    # "antReportsRsrpS":[Ljava/lang/String;
    .restart local v2    # "antReportsRsrpS":[Ljava/lang/String;
    .restart local v4    # "antReportsTxPower":[I
    :cond_c
    move-object/from16 v27, v2

    move-object/from16 v16, v4

    const/4 v3, 0x1

    const/4 v4, 0x2

    .line 4370
    .end local v2    # "antReportsRsrpS":[Ljava/lang/String;
    .end local v4    # "antReportsTxPower":[I
    .restart local v16    # "antReportsTxPower":[I
    .restart local v27    # "antReportsRsrpS":[Ljava/lang/String;
    :goto_a
    add-int/lit8 v1, v1, 0x1

    move-object/from16 v4, v16

    move-object/from16 v2, v27

    goto :goto_9

    .end local v16    # "antReportsTxPower":[I
    .end local v27    # "antReportsRsrpS":[Ljava/lang/String;
    .restart local v2    # "antReportsRsrpS":[Ljava/lang/String;
    .restart local v4    # "antReportsTxPower":[I
    :cond_d
    move-object/from16 v27, v2

    move-object/from16 v16, v4

    .line 4379
    .end local v1    # "i":I
    .end local v2    # "antReportsRsrpS":[Ljava/lang/String;
    .end local v4    # "antReportsTxPower":[I
    .end local v5    # "tasEnable":I
    .end local v6    # "rxState":I
    .end local v7    # "antReportsPhrS":[Ljava/lang/String;
    .end local v9    # "j":I
    .end local v10    # "txState":I
    .end local v11    # "antReportsAntIndexS":[Ljava/lang/String;
    .end local v12    # "antReportsAntIndex":[I
    .end local v13    # "antStatus":I
    .end local v14    # "ccIndex":I
    .end local v15    # "txIndex0":I
    .end local v19    # "version":I
    .end local v24    # "txIndex1":I
    .end local v29    # "antReportsTxPowerS":[Ljava/lang/String;
    .end local v30    # "antReportsRsrp":[I
    .end local v31    # "antReportsPhr":[I
    .end local v34    # "antReportsValid":[I
    :goto_b
    return-void
.end method
