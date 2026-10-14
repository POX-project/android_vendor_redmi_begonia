.class public Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;
.super Landroid/app/Activity;
.source "NetworkInfoInfomation.java"

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter;,
        Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;
    }
.end annotation


# static fields
.field private static final CDMA_INTERVAL:I = 0x2

.field private static CDMA_URC_TYPE:I = 0x0

.field private static final FLAG_DATA_BIT:I = 0x8

.field private static final FLAG_OFFSET_BIT:I = 0x8

.field private static final FLAG_OR_DATA:I = -0x9

.field private static final MSG_NW_INFO:I = 0x1

.field private static final MSG_NW_INFO_CDMA:I = 0x7

.field private static final MSG_NW_INFO_CDMA_ENABLE:I = 0x8

.field private static final MSG_NW_INFO_CDMA_SET:I = 0x9

.field private static final MSG_NW_INFO_CLOSE:I = 0x4

.field private static final MSG_NW_INFO_OPEN:I = 0x3

.field private static final MSG_NW_INFO_URC:I = 0x2

.field private static final MSG_NW_INFO_URC_CDMA:I = 0x6

.field private static final MSG_UPDATE_UI:I = 0x5

.field private static final NO_CHANGE:Ljava/lang/String; = "FEFF"

.field private static final RRC_NO_CHANGE:Ljava/lang/String; = "06"

.field private static final SERVICE_NO_CHANGE:Ljava/lang/String; = "04"

.field private static final TAG:Ljava/lang/String; = "NetworkInfo/Infomation"

.field private static final TOTAL_TIMER:I = 0x3e8


# instance fields
.field private mATCmdHander:Landroid/os/Handler;

.field private mAdapter:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter;

.field private mCdmaItems:I

.field private mCdmaTestItems:I

.field private mCurrentForceTxAnt:Landroid/widget/TextView;

.field private mCurrentItem:I

.field private mCurrentTxAnt:Landroid/widget/TextView;

.field private mEnable:Landroid/widget/Button;

.field private mFlag:I

.field private mHeader:Landroid/widget/TextView;

.field private mInfo:Landroid/widget/TextView;

.field private mItem:[I

.field private mItemCount:I

.field private mList:Landroid/widget/ListView;

.field private mNetworkInfo:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;",
            ">;"
        }
    .end annotation
.end field

.field private mPageDown:Landroid/widget/Button;

.field private mPageUp:Landroid/widget/Button;

.field private mPageView:Landroid/widget/TextView;

.field private mSet:Landroid/widget/Button;

.field private mSimType:I

.field private mTimer:Ljava/util/Timer;

.field private mTxRadio0:Landroid/widget/RadioButton;

.field private mTxRadio1:Landroid/widget/RadioButton;

.field private final mUiHandler:Landroid/os/Handler;

.field private mUrcParser:Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 88
    const/16 v0, 0x2710

    sput v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->CDMA_URC_TYPE:I

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 68
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 92
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mItemCount:I

    .line 93
    iput v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCurrentItem:I

    .line 97
    new-instance v1, Ljava/util/Timer;

    invoke-direct {v1}, Ljava/util/Timer;-><init>()V

    iput-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mTimer:Ljava/util/Timer;

    .line 98
    iput v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mFlag:I

    .line 99
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    iput-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    .line 101
    iput v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCdmaItems:I

    .line 102
    iput v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCdmaTestItems:I

    .line 114
    new-instance v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$1;-><init>(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mUiHandler:Landroid/os/Handler;

    .line 121
    new-instance v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$2;-><init>(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mATCmdHander:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    .line 68
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->showNetworkInfo()V

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    .line 68
    iget v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mFlag:I

    return v0
.end method

.method static synthetic access$1000(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;
    .param p1, "x1"    # Ljava/lang/String;
    .param p2, "x2"    # Ljava/lang/String;

    .line 68
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->handle3gGeneralStatusInfo(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method static synthetic access$102(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;
    .param p1, "x1"    # I

    .line 68
    iput p1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mFlag:I

    return p1
.end method

.method static synthetic access$1100(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    .line 68
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mUiHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    .line 68
    iget v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mItemCount:I

    return v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)[I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    .line 68
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mItem:[I

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;[Ljava/lang/String;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;
    .param p1, "x1"    # [Ljava/lang/String;
    .param p2, "x2"    # I

    .line 68
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->sendATCommand([Ljava/lang/String;I)V

    return-void
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;[Ljava/lang/String;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;
    .param p1, "x1"    # [Ljava/lang/String;
    .param p2, "x2"    # I

    .line 68
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->sendATCommandCdma([Ljava/lang/String;I)V

    return-void
.end method

.method static synthetic access$600()I
    .locals 1

    .line 68
    sget v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->CDMA_URC_TYPE:I

    return v0
.end method

.method static synthetic access$602(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 68
    sput p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->CDMA_URC_TYPE:I

    return p0
.end method

.method static synthetic access$700(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;Ljava/lang/String;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;
    .param p1, "x1"    # Ljava/lang/String;

    .line 68
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->getCdmaInfoTypeForUrc(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method static synthetic access$800(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)Ljava/util/HashMap;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    .line 68
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    return-object v0
.end method

.method static synthetic access$900(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    .line 68
    iget v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCurrentItem:I

    return v0
.end method

.method private getCdmaInfoTypeForUrc(Ljava/lang/String;)I
    .locals 13
    .param p1, "urc"    # Ljava/lang/String;

    .line 599
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v0

    const/16 v1, 0x137

    const/16 v2, 0x136

    const/16 v3, 0x135

    const/16 v4, 0x134

    const/16 v5, 0x133

    const/16 v6, 0x132

    const/16 v7, 0x131

    const/16 v8, 0x130

    const/16 v9, 0x12f

    const/16 v10, 0x12e

    const/16 v11, 0x12d

    const/16 v12, 0x12c

    if-eqz v0, :cond_b

    .line 600
    const-string v0, "1xRTT_Radio_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 601
    return v12

    .line 603
    :cond_0
    const-string v0, "1xRTT_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 604
    return v11

    .line 606
    :cond_1
    const-string v0, "1xRTT_SCH_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 607
    return v10

    .line 609
    :cond_2
    const-string v0, "1xRTT_Stat_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 610
    return v9

    .line 612
    :cond_3
    const-string v0, "1xRTT_Serving_Neighbr_Set_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 613
    return v8

    .line 615
    :cond_4
    const-string v0, "EVDO_Serving_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 616
    return v7

    .line 618
    :cond_5
    const-string v0, "EVDO_Active_Set_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 619
    return v6

    .line 621
    :cond_6
    const-string v0, "EVDO_Cand_Set_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_7

    .line 622
    return v5

    .line 624
    :cond_7
    const-string v0, "EVDO_Nghbr_Set_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_8

    .line 625
    return v4

    .line 627
    :cond_8
    const-string v0, "EVDO_FL_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 628
    return v3

    .line 630
    :cond_9
    const-string v0, "EVDO_RL_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_a

    .line 631
    return v2

    .line 633
    :cond_a
    const-string v0, "EVDO_State_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_17

    .line 634
    return v1

    .line 637
    :cond_b
    const-string v0, "\"1xRTT_Radio_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_c

    .line 638
    return v12

    .line 640
    :cond_c
    const-string v0, "\"1xRTT_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_d

    .line 641
    return v11

    .line 643
    :cond_d
    const-string v0, "\"1xRTT_SCH_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_e

    .line 644
    return v10

    .line 646
    :cond_e
    const-string v0, "\"1xRTT_Stat_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_f

    .line 647
    return v9

    .line 649
    :cond_f
    const-string v0, "\"1xRTT_Serving_Neighbr_Set_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_10

    .line 650
    return v8

    .line 652
    :cond_10
    const-string v0, "\"EVDO_Serving_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_11

    .line 653
    return v7

    .line 655
    :cond_11
    const-string v0, "\"EVDO_Active_Set_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_12

    .line 656
    return v6

    .line 658
    :cond_12
    const-string v0, "\"EVDO_Cand_Set_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_13

    .line 659
    return v5

    .line 661
    :cond_13
    const-string v0, "\"EVDO_Nghbr_Set_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_14

    .line 662
    return v4

    .line 664
    :cond_14
    const-string v0, "\"EVDO_FL_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_15

    .line 665
    return v3

    .line 667
    :cond_15
    const-string v0, "\"EVDO_RL_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_16

    .line 668
    return v2

    .line 670
    :cond_16
    const-string v0, "\"EVDO_State_Info"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_17

    .line 671
    return v1

    .line 676
    :cond_17
    const/4 v0, -0x1

    return v0
.end method

.method private handle3gGeneralStatusInfo(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 12
    .param p1, "oldValue"    # Ljava/lang/String;
    .param p2, "newValue"    # Ljava/lang/String;

    .line 531
    sget-boolean v0, Lcom/mediatek/engineermode/networkinfo/Content;->IS_MOLY:Z

    const/16 v1, 0x8

    if-nez v0, :cond_1

    .line 532
    if-eqz p2, :cond_0

    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result v0

    if-le v0, v1, :cond_0

    .line 533
    invoke-virtual {p2, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    .line 535
    :cond_0
    const-string p2, ""

    .line 538
    :cond_1
    :goto_0
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    const/16 v2, 0xc

    if-lt v0, v2, :cond_7

    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result v0

    if-ge v0, v2, :cond_2

    goto/16 :goto_5

    .line 541
    :cond_2
    const/4 v0, 0x0

    const/4 v3, 0x2

    invoke-virtual {p1, v0, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v4

    .line 542
    .local v4, "oldServiceStatus":Ljava/lang/String;
    const/4 v5, 0x4

    invoke-virtual {p1, v3, v5}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v6

    .line 543
    .local v6, "oldUmtsRrcState":Ljava/lang/String;
    invoke-virtual {p1, v5, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v7

    .line 544
    .local v7, "oldUarfcn":Ljava/lang/String;
    invoke-virtual {p1, v1, v2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v8

    .line 545
    .local v8, "oldPsc":Ljava/lang/String;
    invoke-virtual {p2, v0, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    .line 546
    .local v0, "serviceStatus":Ljava/lang/String;
    invoke-virtual {p2, v3, v5}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v3

    .line 547
    .local v3, "umtsRrcState":Ljava/lang/String;
    invoke-virtual {p2, v5, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v5

    .line 548
    .local v5, "uarfcn":Ljava/lang/String;
    invoke-virtual {p2, v1, v2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v1

    .line 549
    .local v1, "psc":Ljava/lang/String;
    const-string v2, "04"

    invoke-virtual {v2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    move-object v2, v4

    goto :goto_1

    :cond_3
    move-object v2, v0

    .line 550
    .local v2, "info":Ljava/lang/String;
    :goto_1
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "06"

    invoke-virtual {v10, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v10

    if-eqz v10, :cond_4

    move-object v10, v6

    goto :goto_2

    :cond_4
    move-object v10, v3

    :goto_2
    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 551
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "FEFF"

    invoke-virtual {v10, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_5

    move-object v11, v7

    goto :goto_3

    :cond_5
    move-object v11, v5

    :goto_3
    invoke-virtual {v9, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 552
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v10

    if-eqz v10, :cond_6

    move-object v10, v8

    goto :goto_4

    :cond_6
    move-object v10, v1

    :goto_4
    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 553
    return-object v2

    .line 539
    .end local v0    # "serviceStatus":Ljava/lang/String;
    .end local v1    # "psc":Ljava/lang/String;
    .end local v2    # "info":Ljava/lang/String;
    .end local v3    # "umtsRrcState":Ljava/lang/String;
    .end local v4    # "oldServiceStatus":Ljava/lang/String;
    .end local v5    # "uarfcn":Ljava/lang/String;
    .end local v6    # "oldUmtsRrcState":Ljava/lang/String;
    .end local v7    # "oldUarfcn":Ljava/lang/String;
    .end local v8    # "oldPsc":Ljava/lang/String;
    :cond_7
    :goto_5
    return-object p2
.end method

.method private registerNetwork()V
    .locals 4

    .line 504
    const-string v0, "AT+EINFO?"

    const-string v1, "+EINFO"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    .line 505
    .local v0, "atCommand":[Ljava/lang/String;
    const/4 v1, 0x1

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->sendATCommand([Ljava/lang/String;I)V

    .line 507
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isCdma()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 508
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->registerNetworkCdma()V

    .line 510
    :cond_0
    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mSimType:I

    iget-object v2, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mATCmdHander:Landroid/os/Handler;

    const/4 v3, 0x2

    invoke-static {v1, v2, v3}, Lcom/mediatek/engineermode/EmUtils;->registerForNetworkInfo(ILandroid/os/Handler;I)V

    .line 511
    return-void
.end method

.method private registerNetworkCdma()V
    .locals 8

    .line 557
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCdmaItems:I

    .line 558
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    iget v2, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mItemCount:I

    const/4 v3, 0x1

    if-ge v1, v2, :cond_2

    .line 559
    iget-object v2, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mItem:[I

    aget v4, v2, v1

    const/16 v5, 0x12c

    if-lt v4, v5, :cond_0

    .line 560
    iget v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCdmaItems:I

    aget v2, v2, v1

    sub-int/2addr v2, v5

    shl-int v2, v3, v2

    or-int/2addr v2, v4

    iput v2, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCdmaItems:I

    goto :goto_1

    .line 561
    :cond_0
    aget v2, v2, v1

    const/16 v3, 0x12b

    if-ne v2, v3, :cond_1

    .line 562
    const/4 v2, 0x4

    iput v2, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCdmaTestItems:I

    .line 558
    :cond_1
    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 566
    .end local v1    # "i":I
    :cond_2
    const/4 v1, 0x3

    new-array v2, v1, [Ljava/lang/String;

    .line 567
    .local v2, "cmd":[Ljava/lang/String;
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v4

    const-string v5, ","

    const/4 v6, 0x2

    if-eqz v4, :cond_3

    .line 568
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "AT+ENWINFO=2,"

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v7, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCdmaItems:I

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    aput-object v4, v2, v0

    goto :goto_2

    .line 570
    :cond_3
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "AT+ECENGINFO=2,"

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v7, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCdmaItems:I

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    aput-object v4, v2, v0

    .line 572
    :goto_2
    const-string v4, ""

    aput-object v4, v2, v3

    .line 573
    const-string v3, "DESTRILD:C2K"

    aput-object v3, v2, v6

    .line 574
    invoke-static {v2}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v3

    .line 575
    .local v3, "cmd_s":[Ljava/lang/String;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "registerNetworkCdma:  "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v0, v3, v0

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ",cmd_s.length = "

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v0, v3

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v4, "NetworkInfo/Infomation"

    invoke-static {v4, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 576
    invoke-direct {p0, v3, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->sendATCommandCdma([Ljava/lang/String;I)V

    .line 577
    return-void
.end method

.method private sendATCommand([Ljava/lang/String;I)V
    .locals 2
    .param p1, "atCommand"    # [Ljava/lang/String;
    .param p2, "msg"    # I

    .line 527
    iget v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mSimType:I

    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mATCmdHander:Landroid/os/Handler;

    invoke-virtual {v1, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v1

    invoke-static {v0, p1, v1}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(I[Ljava/lang/String;Landroid/os/Message;)V

    .line 528
    return-void
.end method

.method private sendATCommandCdma([Ljava/lang/String;I)V
    .locals 2
    .param p1, "atCommand"    # [Ljava/lang/String;
    .param p2, "msg"    # I

    .line 594
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mATCmdHander:Landroid/os/Handler;

    invoke-virtual {v0, p2}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v0

    const/4 v1, 0x1

    invoke-static {v1, p1, v0}, Lcom/mediatek/engineermode/EmUtils;->invokeOemRilRequestStringsEm(Z[Ljava/lang/String;Landroid/os/Message;)V

    .line 595
    return-void
.end method

.method private showNetworkInfo()V
    .locals 13

    .line 470
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mItem:[I

    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCurrentItem:I

    aget v0, v0, v1

    .line 471
    .local v0, "type":I
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    iget-object v1, v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;->name:Ljava/lang/String;

    .line 472
    .local v1, "name":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    iget-object v2, v2, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;->info:Ljava/lang/String;

    .line 473
    .local v2, "info":Ljava/lang/String;
    const-string v3, "]"

    const-string v4, ">\n["

    const-string v5, "/"

    const-string v6, "<"

    const v7, 0x7f0600b1

    const/4 v8, 0x0

    const/16 v9, 0x8

    const/16 v10, 0x12c

    if-lt v0, v10, :cond_0

    .line 474
    invoke-virtual {p0, v7}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->findViewById(I)Landroid/view/View;

    move-result-object v7

    invoke-virtual {v7, v9}, Landroid/view/View;->setVisibility(I)V

    .line 475
    iget-object v7, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mInfo:Landroid/widget/TextView;

    invoke-virtual {v7, v9}, Landroid/widget/TextView;->setVisibility(I)V

    .line 476
    iget-object v7, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mList:Landroid/widget/ListView;

    invoke-virtual {v7, v8}, Landroid/widget/ListView;->setVisibility(I)V

    .line 477
    iget-object v7, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mHeader:Landroid/widget/TextView;

    invoke-virtual {v7, v8}, Landroid/widget/TextView;->setVisibility(I)V

    .line 478
    iget-object v7, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mHeader:Landroid/widget/TextView;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v6, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCurrentItem:I

    add-int/lit8 v6, v6, 0x1

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mItemCount:I

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v7, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 479
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mAdapter:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter;->clear()V

    .line 480
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mAdapter:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter;

    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mUrcParser:Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;

    invoke-virtual {v4, v0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseCdmaInfo(ILjava/lang/String;)Ljava/util/ArrayList;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter;->addAll(Ljava/util/Collection;)V

    .line 481
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mAdapter:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter;->notifyDataSetChanged()V

    goto/16 :goto_0

    .line 482
    :cond_0
    const/16 v10, 0x12b

    if-ge v0, v10, :cond_1

    .line 483
    invoke-virtual {p0, v7}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->findViewById(I)Landroid/view/View;

    move-result-object v3

    invoke-virtual {v3, v9}, Landroid/view/View;->setVisibility(I)V

    .line 484
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mInfo:Landroid/widget/TextView;

    invoke-virtual {v3, v8}, Landroid/widget/TextView;->setVisibility(I)V

    .line 485
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mList:Landroid/widget/ListView;

    invoke-virtual {v3, v9}, Landroid/widget/ListView;->setVisibility(I)V

    .line 486
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mHeader:Landroid/widget/TextView;

    invoke-virtual {v3, v9}, Landroid/widget/TextView;->setVisibility(I)V

    .line 487
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mInfo:Landroid/widget/TextView;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v6, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCurrentItem:I

    add-int/lit8 v6, v6, 0x1

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mItemCount:I

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "]\n"

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mUrcParser:Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;

    iget v5, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mSimType:I

    .line 488
    invoke-virtual {v4, v0, v2, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;->parseInfo(ILjava/lang/String;I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 487
    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto/16 :goto_0

    .line 489
    :cond_1
    if-ne v0, v10, :cond_2

    .line 490
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "in showNetworkInfo, mCurrentTxAnt = "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v11, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCurrentTxAnt:Landroid/widget/TextView;

    .line 491
    invoke-virtual {v11}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v11

    invoke-interface {v11}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    .line 490
    const-string v11, "NetworkInfo/Infomation"

    invoke-static {v11, v10}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 492
    iget-object v10, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mPageView:Landroid/widget/TextView;

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v6, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCurrentItem:I

    add-int/lit8 v6, v6, 0x1

    invoke-virtual {v12, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mItemCount:I

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v10, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 494
    invoke-virtual {p0, v7}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->findViewById(I)Landroid/view/View;

    move-result-object v3

    invoke-virtual {v3, v8}, Landroid/view/View;->setVisibility(I)V

    .line 495
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mInfo:Landroid/widget/TextView;

    invoke-virtual {v3, v9}, Landroid/widget/TextView;->setVisibility(I)V

    .line 496
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mList:Landroid/widget/ListView;

    invoke-virtual {v3, v9}, Landroid/widget/ListView;->setVisibility(I)V

    .line 497
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mHeader:Landroid/widget/TextView;

    invoke-virtual {v3, v9}, Landroid/widget/TextView;->setVisibility(I)V

    .line 498
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "after showNetworkInfo, mCurrentTxAnt = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCurrentTxAnt:Landroid/widget/TextView;

    .line 499
    invoke-virtual {v4}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v4

    invoke-interface {v4}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 498
    invoke-static {v11, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 501
    :cond_2
    :goto_0
    return-void
.end method

.method private unregisterNetwork()V
    .locals 3

    .line 514
    iget v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mFlag:I

    and-int/lit8 v0, v0, -0x9

    iput v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mFlag:I

    .line 515
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "The close flag is :"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mFlag:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "NetworkInfo/Infomation"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 516
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/String;

    .line 517
    .local v0, "atCloseCmd":[Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "AT+EINFO="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mFlag:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    .line 518
    const/4 v1, 0x1

    const-string v2, ""

    aput-object v2, v0, v1

    .line 519
    const/4 v1, 0x4

    invoke-direct {p0, v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->sendATCommand([Ljava/lang/String;I)V

    .line 520
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isCdma()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 521
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->unregisterNetworkCdma()V

    .line 523
    :cond_0
    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mSimType:I

    invoke-static {v1}, Lcom/mediatek/engineermode/EmUtils;->unregisterForNetworkInfo(I)V

    .line 524
    return-void
.end method

.method private unregisterNetworkCdma()V
    .locals 5

    .line 580
    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/String;

    .line 581
    .local v0, "cmd":[Ljava/lang/String;
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is93Modem()Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 582
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "AT+ENWINFO=0,"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCdmaItems:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    aput-object v1, v0, v2

    goto :goto_0

    .line 584
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "AT+ECENGINFO=0,"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCdmaItems:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    aput-object v1, v0, v2

    .line 586
    :goto_0
    const/4 v1, 0x1

    const-string v3, ""

    aput-object v3, v0, v1

    .line 587
    const/4 v1, 0x2

    const-string v3, "DESTRILD:C2K"

    aput-object v3, v0, v1

    .line 588
    invoke-static {v0}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 589
    .local v1, "cmd_s":[Ljava/lang/String;
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "set1XTime AT command: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v2, v1, v2

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ",cmd_s.length = "

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v2, v1

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "NetworkInfo/Infomation"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 590
    const/4 v2, 0x4

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->sendATCommandCdma([Ljava/lang/String;I)V

    .line 591
    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 2
    .param p1, "v"    # Landroid/widget/CompoundButton;
    .param p2, "checked"    # Z

    .line 234
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getId()I

    move-result v0

    packed-switch v0, :pswitch_data_0

    goto :goto_0

    .line 237
    :pswitch_0
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mSet:Landroid/widget/Button;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 238
    nop

    .line 242
    :goto_0
    return-void

    :pswitch_data_0
    .packed-switch 0x7f06074c
        :pswitch_0
        :pswitch_0
    .end packed-switch
.end method

.method public onClick(Landroid/view/View;)V
    .locals 4
    .param p1, "arg0"    # Landroid/view/View;

    .line 434
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mPageUp:Landroid/widget/Button;

    invoke-virtual {v1}, Landroid/widget/Button;->getId()I

    move-result v1

    if-ne v0, v1, :cond_0

    .line 435
    iget v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCurrentItem:I

    add-int/lit8 v0, v0, -0x1

    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mItemCount:I

    add-int/2addr v0, v1

    rem-int/2addr v0, v1

    iput v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCurrentItem:I

    .line 436
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->updateUI()V

    goto/16 :goto_2

    .line 437
    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mPageDown:Landroid/widget/Button;

    invoke-virtual {v1}, Landroid/widget/Button;->getId()I

    move-result v1

    if-ne v0, v1, :cond_1

    .line 438
    iget v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCurrentItem:I

    add-int/lit8 v0, v0, 0x1

    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mItemCount:I

    rem-int/2addr v0, v1

    iput v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCurrentItem:I

    .line 439
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->updateUI()V

    goto :goto_2

    .line 440
    :cond_1
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mEnable:Landroid/widget/Button;

    invoke-virtual {v1}, Landroid/widget/Button;->getId()I

    move-result v1

    const-string v2, "DESTRILD:C2K"

    const-string v3, ""

    if-ne v0, v1, :cond_2

    .line 441
    const-string v0, "AT+ETXANT=0,4"

    filled-new-array {v0, v3, v2}, [Ljava/lang/String;

    move-result-object v0

    .line 442
    .local v0, "atCommand":[Ljava/lang/String;
    invoke-static {v0}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 443
    .local v1, "cmd_s":[Ljava/lang/String;
    const/16 v2, 0x8

    invoke-direct {p0, v1, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->sendATCommandCdma([Ljava/lang/String;I)V

    .end local v0    # "atCommand":[Ljava/lang/String;
    .end local v1    # "cmd_s":[Ljava/lang/String;
    goto :goto_1

    .line 444
    :cond_2
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mSet:Landroid/widget/Button;

    invoke-virtual {v1}, Landroid/widget/Button;->getId()I

    move-result v1

    if-ne v0, v1, :cond_5

    .line 445
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mTxRadio0:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    const/16 v1, 0x9

    if-eqz v0, :cond_3

    .line 446
    const-string v0, "AT+ETXANT=1,4,0"

    filled-new-array {v0, v3, v2}, [Ljava/lang/String;

    move-result-object v0

    .line 447
    .restart local v0    # "atCommand":[Ljava/lang/String;
    invoke-static {v0}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v2

    .line 448
    .local v2, "cmd_s":[Ljava/lang/String;
    invoke-direct {p0, v2, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->sendATCommandCdma([Ljava/lang/String;I)V

    .end local v0    # "atCommand":[Ljava/lang/String;
    .end local v2    # "cmd_s":[Ljava/lang/String;
    goto :goto_0

    .line 449
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mTxRadio1:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 450
    const-string v0, "AT+ETXANT=1,4,1"

    filled-new-array {v0, v3, v2}, [Ljava/lang/String;

    move-result-object v0

    .line 451
    .restart local v0    # "atCommand":[Ljava/lang/String;
    invoke-static {v0}, Lcom/mediatek/engineermode/ModemCategory;->getCdmaCmdArr([Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v2

    .line 452
    .restart local v2    # "cmd_s":[Ljava/lang/String;
    invoke-direct {p0, v2, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->sendATCommandCdma([Ljava/lang/String;I)V

    goto :goto_2

    .line 449
    .end local v0    # "atCommand":[Ljava/lang/String;
    .end local v2    # "cmd_s":[Ljava/lang/String;
    :cond_4
    :goto_0
    goto :goto_2

    .line 444
    :cond_5
    :goto_1
    nop

    .line 455
    :goto_2
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 16
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 246
    move-object/from16 v0, p0

    invoke-super/range {p0 .. p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 247
    const v1, 0x7f0800a8

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->setContentView(I)V

    .line 250
    const/16 v1, 0x138

    new-array v1, v1, [I

    iput-object v1, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mItem:[I

    .line 251
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->getIntent()Landroid/content/Intent;

    move-result-object v1

    .line 252
    .local v1, "intent":Landroid/content/Intent;
    const-string v2, "mSimType"

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v2

    iput v2, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mSimType:I

    .line 253
    const-string v2, "mChecked"

    invoke-virtual {v1, v2}, Landroid/content/Intent;->getIntArrayExtra(Ljava/lang/String;)[I

    move-result-object v2

    .line 254
    .local v2, "checked":[I
    const/4 v4, 0x1

    if-eqz v2, :cond_1

    .line 255
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_0
    array-length v6, v2

    if-ge v5, v6, :cond_1

    .line 256
    aget v6, v2, v5

    if-ne v4, v6, :cond_0

    .line 257
    iget-object v6, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mItem:[I

    iget v7, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mItemCount:I

    aput v5, v6, v7

    .line 258
    add-int/2addr v7, v4

    iput v7, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mItemCount:I

    .line 255
    :cond_0
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 263
    .end local v5    # "i":I
    :cond_1
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getModemType()I

    move-result v5

    .line 265
    .local v5, "modemType":I
    iget-object v6, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    new-instance v8, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v9, "RR Cell Sel"

    const/4 v10, 0x6

    invoke-direct {v8, v9, v10}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v6, v7, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 267
    iget-object v6, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    new-instance v8, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const/16 v9, 0x154

    const-string v11, "RR Ch Dscr"

    invoke-direct {v8, v11, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v6, v7, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 269
    iget-object v6, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/4 v7, 0x2

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    new-instance v9, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v11, "RR Ctrl chan"

    const/16 v12, 0xe

    invoke-direct {v9, v11, v12}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v6, v8, v9}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 271
    iget-object v6, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/4 v8, 0x3

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    new-instance v9, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v11, "RR RACH Ctrl"

    invoke-direct {v9, v11, v12}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v6, v8, v9}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 273
    iget-object v6, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/4 v8, 0x4

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    new-instance v11, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const/16 v13, 0x1c

    const-string v14, "RR LAI Info"

    invoke-direct {v11, v14, v13}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v6, v9, v11}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 275
    iget-object v6, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/4 v9, 0x5

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    new-instance v11, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v13, "RR Radio Link"

    const/16 v14, 0x10

    invoke-direct {v11, v13, v14}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v6, v9, v11}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 277
    iget-object v6, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    new-instance v10, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const/16 v11, 0x568

    const-string v13, "RR Meas Rep"

    invoke-direct {v10, v13, v11}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v6, v9, v10}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 279
    iget-object v6, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/4 v9, 0x7

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    new-instance v10, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const/16 v11, 0x104

    const-string v13, "RR Ca List"

    invoke-direct {v10, v13, v11}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v6, v9, v10}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 281
    iget-object v6, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/16 v9, 0x8

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    new-instance v11, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v13, "RR Control Msg"

    invoke-direct {v11, v13, v8}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v6, v10, v11}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 283
    iget-object v6, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/16 v10, 0x9

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    new-instance v11, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v13, "RR SI2Q Info"

    const/16 v15, 0xa

    invoke-direct {v11, v13, v15}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v6, v10, v11}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 285
    iget-object v6, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    new-instance v11, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v13, "RR MI Info"

    invoke-direct {v11, v13, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v6, v10, v11}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 287
    iget-object v6, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/16 v9, 0xb

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    new-instance v10, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const/16 v11, 0x50

    const-string v13, "RR BLK Info"

    invoke-direct {v10, v13, v11}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v6, v9, v10}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 289
    iget-object v6, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/16 v9, 0xc

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    new-instance v11, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v13, "RR TBF Info"

    const/16 v15, 0x38

    invoke-direct {v11, v13, v15}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v6, v10, v11}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 291
    iget-object v6, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/16 v10, 0xd

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    new-instance v11, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v13, "RR GPRS Gen"

    const/16 v3, 0x20

    invoke-direct {v11, v13, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v6, v10, v11}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 293
    iget-object v6, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    sget v10, Lcom/mediatek/engineermode/networkinfo/Content;->SM_INFO_INDEX:I

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    new-instance v11, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const/16 v13, 0x1138

    const-string v3, "SM EM Info"

    invoke-direct {v11, v3, v13}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v6, v10, v11}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 295
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    invoke-static {v15}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    new-instance v10, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const/16 v11, 0x28

    const-string v13, "GMM EM Info"

    invoke-direct {v10, v13, v11}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v6, v10}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 297
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    sget v6, Lcom/mediatek/engineermode/networkinfo/Content;->MM_INFO_INDEX:I

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    new-instance v10, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const/16 v11, 0x3c

    const-string v13, "RR 3G MM EM Info"

    invoke-direct {v10, v13, v11}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v6, v10}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 299
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/16 v6, 0x46

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    new-instance v11, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v13, "URR 3G General Status"

    invoke-direct {v11, v13, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v10, v11}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 301
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    sget v9, Lcom/mediatek/engineermode/networkinfo/Content;->TCM_MMI_INDEX:I

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    new-instance v10, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v11, "RR 3G TCM MMI EM Info"

    invoke-direct {v10, v11, v12}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v9, v10}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 303
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    sget v9, Lcom/mediatek/engineermode/networkinfo/Content;->CSCE_SERV_CELL_STATUS_INDEX:I

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    new-instance v10, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const/16 v11, 0x68

    const-string v12, "RR 3G CsceEMServCellSStatusInd"

    invoke-direct {v10, v12, v11}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v9, v10}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 306
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    sget v9, Lcom/mediatek/engineermode/networkinfo/Content;->CSCE_NEIGH_CELL_STATUS_INDEX:I

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    new-instance v10, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const/16 v11, 0x410

    const-string v12, "RR xG CsceEMNeighCellSStatusIndStructSize"

    invoke-direct {v10, v12, v11}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v9, v10}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 309
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    sget v9, Lcom/mediatek/engineermode/networkinfo/Content;->CSCE_MULTIPLMN_INDEX:I

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    new-instance v10, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const/16 v11, 0x4a

    const-string v12, "RR 3G CsceEmInfoMultiPlmn"

    invoke-direct {v10, v12, v11}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v9, v10}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 311
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    sget v9, Lcom/mediatek/engineermode/networkinfo/Content;->PERIOD_IC_BLER_REPORT_INDEX:I

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    new-instance v10, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v11, "RR 3G MemeEmPeriodicBlerReportInd"

    const/16 v12, 0xc8

    invoke-direct {v10, v11, v12}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v9, v10}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 314
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    sget v9, Lcom/mediatek/engineermode/networkinfo/Content;->URR_UMTS_SRNC_INDEX:I

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    new-instance v10, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v11, "RR 3G UrrUmtsSrncId"

    invoke-direct {v10, v11, v8}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v9, v10}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 316
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    sget v9, Lcom/mediatek/engineermode/networkinfo/Content;->HSERV_CELL_INDEX:I

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    new-instance v10, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v11, "RR 3G MemeEmInfoHServCellInd"

    invoke-direct {v10, v11, v14}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v9, v10}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 319
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    sget v9, Lcom/mediatek/engineermode/networkinfo/Content;->SLCE_VOICE_INDEX:I

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    new-instance v10, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v11, "3G speech codec"

    invoke-direct {v10, v11, v7}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v9, v10}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 321
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    sget v9, Lcom/mediatek/engineermode/networkinfo/Content;->SECURITY_CONFIGURATION_INDEX:I

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    new-instance v10, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v11, "Security Configuration"

    invoke-direct {v10, v11, v8}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v9, v10}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 325
    if-ne v5, v4, :cond_2

    .line 326
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    sget v4, Lcom/mediatek/engineermode/networkinfo/Content;->UMTS_CELL_STATUS_INDEX:I

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-instance v7, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const/16 v8, 0x608

    const-string v9, "RR 3G MemeEmInfoUmtsCellStatus"

    invoke-direct {v7, v9, v8}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 329
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    sget v4, Lcom/mediatek/engineermode/networkinfo/Content;->PSDATA_RATE_STATUS_INDEX:I

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-instance v7, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v8, "RR 3G SlceEmPsDataRateStatusInd"

    invoke-direct {v7, v8, v12}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_1

    .line 332
    :cond_2
    if-ne v5, v7, :cond_3

    .line 333
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    sget v4, Lcom/mediatek/engineermode/networkinfo/Content;->HANDOVER_SEQUENCE_INDEX:I

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-instance v7, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v8, "RR 3G HandoverSequenceIndStuct"

    const/16 v9, 0x20

    invoke-direct {v7, v8, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 336
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    sget v4, Lcom/mediatek/engineermode/networkinfo/Content;->UL_ADM_POOL_STATUS_INDEX:I

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-instance v7, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const/16 v8, 0x40

    const-string v9, "RR 3G Ul2EmAdmPoolStatusIndStruct"

    invoke-direct {v7, v9, v8}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 339
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    sget v4, Lcom/mediatek/engineermode/networkinfo/Content;->UL_PSDATA_RATE_STATUS_INDEX:I

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-instance v7, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v8, "RR 3G Ul2EmPsDataRateStatusIndStruct"

    invoke-direct {v7, v8, v14}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 342
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    sget v4, Lcom/mediatek/engineermode/networkinfo/Content;->UL_HSDSCH_RECONFIG_STATUS_INDEX:I

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-instance v7, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v8, "RR 3G Ul2EmHsdschReconfigStatusIndStruct"

    invoke-direct {v7, v8, v14}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 345
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    sget v4, Lcom/mediatek/engineermode/networkinfo/Content;->UL_URLC_EVENT_STATUS_INDEX:I

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-instance v7, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const/16 v8, 0x24

    const-string v9, "RR 3G Ul2EmUrlcEventStatusIndStruct"

    invoke-direct {v7, v9, v8}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 348
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    sget v4, Lcom/mediatek/engineermode/networkinfo/Content;->UL_PERIOD_IC_BLER_REPORT_INDEX:I

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-instance v7, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v8, "RR 3G Ul2EmPeriodicBlerReportInd"

    invoke-direct {v7, v8, v12}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 354
    :cond_3
    :goto_1
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isCdma()Z

    move-result v3

    if-eqz v3, :cond_4

    .line 355
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/16 v4, 0x12c

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-instance v7, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v8, "1xRTT Radio"

    const/4 v9, 0x0

    invoke-direct {v7, v8, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 356
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/16 v4, 0x12d

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-instance v7, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v8, "1xRTT Info"

    invoke-direct {v7, v8, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 357
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/16 v4, 0x12e

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-instance v7, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v8, "1xRTT SCH Info"

    invoke-direct {v7, v8, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 359
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/16 v4, 0x12f

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-instance v7, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v8, "1xRTT Statistics"

    invoke-direct {v7, v8, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 361
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/16 v4, 0x130

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-instance v7, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v8, "1xRTT Serving/Neighbor"

    invoke-direct {v7, v8, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 363
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/16 v4, 0x131

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-instance v7, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v8, "EVDO Serving Info"

    invoke-direct {v7, v8, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 365
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/16 v4, 0x132

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-instance v7, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v8, "EVDO Active Set"

    invoke-direct {v7, v8, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 367
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/16 v4, 0x133

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-instance v7, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v8, "EVDO Candidate Set"

    invoke-direct {v7, v8, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 369
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/16 v4, 0x134

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-instance v7, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v8, "EVDO Neighbour Set"

    invoke-direct {v7, v8, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 371
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/16 v4, 0x135

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-instance v7, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v8, "EVDO FL"

    invoke-direct {v7, v8, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 372
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/16 v4, 0x136

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-instance v7, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v8, "EVDO RL"

    invoke-direct {v7, v8, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 373
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/16 v4, 0x137

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-instance v7, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v8, "EVDO State"

    invoke-direct {v7, v8, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 375
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    const/16 v4, 0x12b

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-instance v7, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v8, "CDMA Force TX ANT"

    invoke-direct {v7, v8, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v3, v4, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 380
    :cond_4
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mNetworkInfo:Ljava/util/HashMap;

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;

    const-string v4, "FFFFFFFFFFFF"

    iput-object v4, v3, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$NetworkInfoItem;->info:Ljava/lang/String;

    .line 382
    const v3, 0x7f0600a3

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    iput-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mInfo:Landroid/widget/TextView;

    .line 383
    const v3, 0x7f0600a5

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/ListView;

    iput-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mList:Landroid/widget/ListView;

    .line 384
    const v3, 0x7f0600a6

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    iput-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mHeader:Landroid/widget/TextView;

    .line 385
    new-instance v3, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter;

    invoke-direct {v3, v0, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter;-><init>(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;Landroid/app/Activity;)V

    iput-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mAdapter:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter;

    .line 386
    iget-object v4, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mList:Landroid/widget/ListView;

    invoke-virtual {v4, v3}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 388
    const v3, 0x7f0600ab

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/Button;

    iput-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mPageUp:Landroid/widget/Button;

    .line 389
    const v3, 0x7f0600a9

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/Button;

    iput-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mPageDown:Landroid/widget/Button;

    .line 390
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mPageUp:Landroid/widget/Button;

    invoke-virtual {v3, v0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 391
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mPageDown:Landroid/widget/Button;

    invoke-virtual {v3, v0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 393
    const v3, 0x7f0602c8

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    iput-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCurrentForceTxAnt:Landroid/widget/TextView;

    .line 394
    const v3, 0x7f0602c9

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    iput-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCurrentTxAnt:Landroid/widget/TextView;

    .line 395
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "mCurrentTxAnt = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mCurrentTxAnt:Landroid/widget/TextView;

    invoke-virtual {v4}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v4

    invoke-interface {v4}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "NetworkInfo/Infomation"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 397
    const v3, 0x7f060745

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/Button;

    iput-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mEnable:Landroid/widget/Button;

    .line 398
    invoke-virtual {v3, v0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 399
    const v3, 0x7f06074c

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/RadioButton;

    iput-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mTxRadio0:Landroid/widget/RadioButton;

    .line 400
    const v3, 0x7f06074d

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/RadioButton;

    iput-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mTxRadio1:Landroid/widget/RadioButton;

    .line 401
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mTxRadio0:Landroid/widget/RadioButton;

    invoke-virtual {v3, v0}, Landroid/widget/RadioButton;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 402
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mTxRadio1:Landroid/widget/RadioButton;

    invoke-virtual {v3, v0}, Landroid/widget/RadioButton;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 403
    const v3, 0x7f06074f

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/Button;

    iput-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mSet:Landroid/widget/Button;

    .line 404
    invoke-virtual {v3, v0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 405
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mSet:Landroid/widget/Button;

    const/4 v4, 0x0

    invoke-virtual {v3, v4}, Landroid/widget/Button;->setEnabled(Z)V

    .line 406
    iget-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mEnable:Landroid/widget/Button;

    invoke-virtual {v3, v4}, Landroid/widget/Button;->setEnabled(Z)V

    .line 407
    const v3, 0x7f0605f1

    invoke-virtual {v0, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    iput-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mPageView:Landroid/widget/TextView;

    .line 408
    new-instance v3, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;

    invoke-direct {v3, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;-><init>(Landroid/content/Context;)V

    iput-object v3, v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mUrcParser:Lcom/mediatek/engineermode/networkinfo/NetworkInfoUrcParser;

    .line 409
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->registerNetwork()V

    .line 410
    return-void
.end method

.method public onDestroy()V
    .locals 0

    .line 426
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->unregisterNetwork()V

    .line 427
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 428
    return-void
.end method

.method protected onResume()V
    .locals 0

    .line 414
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 415
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->updateUI()V

    .line 416
    return-void
.end method

.method public onStop()V
    .locals 1

    .line 420
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mTimer:Ljava/util/Timer;

    invoke-virtual {v0}, Ljava/util/Timer;->cancel()V

    .line 421
    invoke-super {p0}, Landroid/app/Activity;->onStop()V

    .line 422
    return-void
.end method

.method public updateUI()V
    .locals 7

    .line 458
    invoke-direct {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->showNetworkInfo()V

    .line 459
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mTimer:Ljava/util/Timer;

    invoke-virtual {v0}, Ljava/util/Timer;->cancel()V

    .line 460
    new-instance v1, Ljava/util/Timer;

    invoke-direct {v1}, Ljava/util/Timer;-><init>()V

    iput-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->mTimer:Ljava/util/Timer;

    .line 461
    new-instance v2, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$3;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$3;-><init>(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;)V

    const-wide/16 v3, 0x3e8

    const-wide/16 v5, 0x3e8

    invoke-virtual/range {v1 .. v6}, Ljava/util/Timer;->schedule(Ljava/util/TimerTask;JJ)V

    .line 467
    return-void
.end method
