.class public Lcom/mediatek/engineermode/networkinfo/NetworkInfo;
.super Landroid/app/Activity;
.source "NetworkInfo.java"


# static fields
.field private static final CHECK_INFOMATION_ID:I = 0x1

.field public static final MODEM_FDD:I = 0x1

.field public static final MODEM_MASK_EDGE:I = 0x2

.field public static final MODEM_MASK_GPRS:I = 0x1

.field public static final MODEM_MASK_HSDPA:I = 0x10

.field public static final MODEM_MASK_HSUPA:I = 0x20

.field public static final MODEM_MASK_TDSCDMA:I = 0x8

.field public static final MODEM_MASK_WCDMA:I = 0x4

.field public static final MODEM_NO3G:I = 0x3

.field public static final MODEM_NONE:I = -0x1

.field public static final MODEM_TD:I = 0x2

.field public static final TAG:Ljava/lang/String; = "NetworkInfo"

.field public static final TOTAL_ITEM_NUM:I = 0x138

.field private static sModemType:I


# instance fields
.field private mCheckBox:[Landroid/widget/CheckBox;

.field private mChecked:[I

.field private mSimType:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 67
    const/4 v0, -0x1

    sput v0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->sModemType:I

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 52
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 11
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 76
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 78
    const v0, 0x7f0800a7

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->setContentView(I)V

    .line 79
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->getIntent()Landroid/content/Intent;

    move-result-object v0

    .line 80
    .local v0, "intent":Landroid/content/Intent;
    const-string v1, "mSimType"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mSimType:I

    .line 81
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->getModemType()I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->sModemType:I

    .line 83
    const/16 v1, 0x138

    new-array v3, v1, [Landroid/widget/CheckBox;

    iput-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    .line 84
    new-array v3, v1, [I

    iput-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mChecked:[I

    .line 86
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    if-ge v3, v1, :cond_0

    .line 87
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/4 v5, 0x0

    aput-object v5, v4, v3

    .line 88
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mChecked:[I

    aput v2, v4, v3

    .line 86
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 91
    .end local v3    # "i":I
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const v3, 0x7f060096

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/CheckBox;

    aput-object v3, v1, v2

    .line 92
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const v2, 0x7f060097

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    const/4 v3, 0x1

    aput-object v2, v1, v3

    .line 93
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const v2, 0x7f060099

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    const/4 v4, 0x2

    aput-object v2, v1, v4

    .line 94
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/4 v2, 0x3

    const v5, 0x7f0600ad

    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/CheckBox;

    aput-object v5, v1, v2

    .line 95
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/4 v2, 0x4

    const v5, 0x7f0600a4

    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/CheckBox;

    aput-object v5, v1, v2

    .line 96
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/4 v2, 0x5

    const v5, 0x7f0600ae

    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/CheckBox;

    aput-object v5, v1, v2

    .line 97
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/4 v2, 0x6

    const v5, 0x7f0600a8

    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/CheckBox;

    aput-object v5, v1, v2

    .line 98
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/4 v2, 0x7

    const v5, 0x7f060095

    invoke-virtual {p0, v5}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/CheckBox;

    aput-object v5, v1, v2

    .line 99
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const v2, 0x7f060098

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/CheckBox;

    const/16 v5, 0x8

    aput-object v2, v1, v5

    .line 100
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v2, 0x9

    const v6, 0x7f0600af

    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/CheckBox;

    aput-object v6, v1, v2

    .line 101
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v2, 0xa

    const v6, 0x7f0600a7

    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/CheckBox;

    aput-object v6, v1, v2

    .line 102
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v2, 0xb

    const v6, 0x7f060094

    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/CheckBox;

    aput-object v6, v1, v2

    .line 103
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v2, 0xc

    const v6, 0x7f0600b0

    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/CheckBox;

    aput-object v6, v1, v2

    .line 104
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v2, 0xd

    const v6, 0x7f0600a2

    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/CheckBox;

    aput-object v6, v1, v2

    .line 106
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v2, 0x46

    const v6, 0x7f060082

    .line 107
    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/CheckBox;

    aput-object v6, v1, v2

    .line 108
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    sget v2, Lcom/mediatek/engineermode/networkinfo/Content;->SM_INFO_INDEX:I

    const v6, 0x7f06008c

    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/CheckBox;

    aput-object v6, v1, v2

    .line 109
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    sget v2, Lcom/mediatek/engineermode/networkinfo/Content;->MM_INFO_INDEX:I

    const v6, 0x7f060088

    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/CheckBox;

    aput-object v6, v1, v2

    .line 110
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v2, 0x38

    const v6, 0x7f060083

    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/CheckBox;

    aput-object v6, v1, v2

    .line 111
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    sget v2, Lcom/mediatek/engineermode/networkinfo/Content;->TCM_MMI_INDEX:I

    const v6, 0x7f06008d

    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/CheckBox;

    aput-object v6, v1, v2

    .line 113
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    sget v2, Lcom/mediatek/engineermode/networkinfo/Content;->CSCE_SERV_CELL_STATUS_INDEX:I

    const v6, 0x7f060080

    .line 114
    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/CheckBox;

    aput-object v6, v1, v2

    .line 117
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    sget v2, Lcom/mediatek/engineermode/networkinfo/Content;->CSCE_NEIGH_CELL_STATUS_INDEX:I

    const v6, 0x7f0600b2

    .line 118
    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/CheckBox;

    aput-object v6, v1, v2

    .line 121
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    sget v2, Lcom/mediatek/engineermode/networkinfo/Content;->CSCE_MULTIPLMN_INDEX:I

    const v6, 0x7f060081

    .line 122
    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/CheckBox;

    aput-object v6, v1, v2

    .line 124
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    sget v2, Lcom/mediatek/engineermode/networkinfo/Content;->PERIOD_IC_BLER_REPORT_INDEX:I

    const v6, 0x7f060087

    .line 125
    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/CheckBox;

    aput-object v6, v1, v2

    .line 126
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    sget v2, Lcom/mediatek/engineermode/networkinfo/Content;->URR_UMTS_SRNC_INDEX:I

    const v6, 0x7f060092

    .line 127
    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/CheckBox;

    aput-object v6, v1, v2

    .line 128
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    sget v2, Lcom/mediatek/engineermode/networkinfo/Content;->HSERV_CELL_INDEX:I

    const v6, 0x7f060085

    .line 129
    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/CheckBox;

    aput-object v6, v1, v2

    .line 131
    const v1, 0x7f060115

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v1

    .line 132
    .local v1, "view2G":Landroid/view/View;
    const v2, 0x7f06011a

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v2

    .line 133
    .local v2, "viewCommon":Landroid/view/View;
    const v6, 0x7f060117

    invoke-virtual {p0, v6}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v6

    .line 134
    .local v6, "view3GFDD":Landroid/view/View;
    const v7, 0x7f060118

    invoke-virtual {p0, v7}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v7

    .line 135
    .local v7, "view3GTDD":Landroid/view/View;
    const v8, 0x7f060116

    invoke-virtual {p0, v8}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v8

    .line 136
    .local v8, "view3GCommon":Landroid/view/View;
    iget v9, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mSimType:I

    if-nez v9, :cond_3

    .line 137
    sget v9, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->sModemType:I

    if-ne v9, v3, :cond_1

    .line 138
    invoke-virtual {v7, v5}, Landroid/view/View;->setVisibility(I)V

    .line 139
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    sget v4, Lcom/mediatek/engineermode/networkinfo/Content;->UMTS_CELL_STATUS_INDEX:I

    const v9, 0x7f060086

    .line 140
    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v9

    check-cast v9, Landroid/widget/CheckBox;

    aput-object v9, v3, v4

    .line 141
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    sget v4, Lcom/mediatek/engineermode/networkinfo/Content;->PSDATA_RATE_STATUS_INDEX:I

    const v9, 0x7f06008a

    .line 142
    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v9

    check-cast v9, Landroid/widget/CheckBox;

    aput-object v9, v3, v4

    goto/16 :goto_1

    .line 143
    :cond_1
    if-ne v9, v4, :cond_2

    .line 144
    invoke-virtual {v6, v5}, Landroid/view/View;->setVisibility(I)V

    .line 145
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    sget v4, Lcom/mediatek/engineermode/networkinfo/Content;->HANDOVER_SEQUENCE_INDEX:I

    const v9, 0x7f060084

    .line 146
    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v9

    check-cast v9, Landroid/widget/CheckBox;

    aput-object v9, v3, v4

    .line 147
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    sget v4, Lcom/mediatek/engineermode/networkinfo/Content;->UL_ADM_POOL_STATUS_INDEX:I

    const v9, 0x7f06008e

    .line 148
    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v9

    check-cast v9, Landroid/widget/CheckBox;

    aput-object v9, v3, v4

    .line 149
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    sget v4, Lcom/mediatek/engineermode/networkinfo/Content;->UL_PSDATA_RATE_STATUS_INDEX:I

    const v9, 0x7f060090

    .line 150
    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v9

    check-cast v9, Landroid/widget/CheckBox;

    aput-object v9, v3, v4

    .line 151
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    sget v4, Lcom/mediatek/engineermode/networkinfo/Content;->UL_HSDSCH_RECONFIG_STATUS_INDEX:I

    const v9, 0x7f060093

    .line 152
    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v9

    check-cast v9, Landroid/widget/CheckBox;

    aput-object v9, v3, v4

    .line 153
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    sget v4, Lcom/mediatek/engineermode/networkinfo/Content;->UL_URLC_EVENT_STATUS_INDEX:I

    const v9, 0x7f060091

    .line 154
    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v9

    check-cast v9, Landroid/widget/CheckBox;

    aput-object v9, v3, v4

    .line 155
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    sget v4, Lcom/mediatek/engineermode/networkinfo/Content;->UL_PERIOD_IC_BLER_REPORT_INDEX:I

    const v9, 0x7f06008f

    .line 156
    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v9

    check-cast v9, Landroid/widget/CheckBox;

    aput-object v9, v3, v4

    goto :goto_1

    .line 158
    :cond_2
    invoke-virtual {v8, v5}, Landroid/view/View;->setVisibility(I)V

    .line 159
    invoke-virtual {v7, v5}, Landroid/view/View;->setVisibility(I)V

    .line 160
    invoke-virtual {v6, v5}, Landroid/view/View;->setVisibility(I)V

    goto :goto_1

    .line 163
    :cond_3
    invoke-virtual {v1, v5}, Landroid/view/View;->setVisibility(I)V

    .line 164
    invoke-virtual {v2, v5}, Landroid/view/View;->setVisibility(I)V

    .line 165
    invoke-virtual {v8, v5}, Landroid/view/View;->setVisibility(I)V

    .line 166
    invoke-virtual {v7, v5}, Landroid/view/View;->setVisibility(I)V

    .line 167
    invoke-virtual {v6, v5}, Landroid/view/View;->setVisibility(I)V

    .line 171
    :goto_1
    invoke-static {}, Lcom/mediatek/engineermode/ModemCategory;->isCdma()Z

    move-result v3

    const v4, 0x7f06009d

    if-eqz v3, :cond_4

    .line 172
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v9, 0x12c

    const v10, 0x7f06007c

    .line 173
    invoke-virtual {p0, v10}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/CheckBox;

    aput-object v10, v3, v9

    .line 174
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v9, 0x12d

    const v10, 0x7f06007b

    .line 175
    invoke-virtual {p0, v10}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/CheckBox;

    aput-object v10, v3, v9

    .line 176
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v9, 0x12e

    const v10, 0x7f06007d

    .line 177
    invoke-virtual {p0, v10}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/CheckBox;

    aput-object v10, v3, v9

    .line 178
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v9, 0x12f

    const v10, 0x7f06007f

    .line 179
    invoke-virtual {p0, v10}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/CheckBox;

    aput-object v10, v3, v9

    .line 180
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v9, 0x130

    const v10, 0x7f06007e

    .line 181
    invoke-virtual {p0, v10}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/CheckBox;

    aput-object v10, v3, v9

    .line 182
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v9, 0x131

    const v10, 0x7f0600a0

    .line 183
    invoke-virtual {p0, v10}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/CheckBox;

    aput-object v10, v3, v9

    .line 184
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v9, 0x132

    const v10, 0x7f06009a

    .line 185
    invoke-virtual {p0, v10}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/CheckBox;

    aput-object v10, v3, v9

    .line 186
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v9, 0x133

    const v10, 0x7f06009b

    .line 187
    invoke-virtual {p0, v10}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/CheckBox;

    aput-object v10, v3, v9

    .line 188
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v9, 0x134

    const v10, 0x7f06009e

    .line 189
    invoke-virtual {p0, v10}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/CheckBox;

    aput-object v10, v3, v9

    .line 190
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v9, 0x135

    const v10, 0x7f06009c

    .line 191
    invoke-virtual {p0, v10}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/CheckBox;

    aput-object v10, v3, v9

    .line 192
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v9, 0x136

    const v10, 0x7f06009f

    .line 193
    invoke-virtual {p0, v10}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/CheckBox;

    aput-object v10, v3, v9

    .line 194
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v9, 0x137

    const v10, 0x7f0600a1

    .line 195
    invoke-virtual {p0, v10}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/CheckBox;

    aput-object v10, v3, v9

    .line 197
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    const/16 v9, 0x12b

    .line 198
    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/CheckBox;

    aput-object v10, v3, v9

    goto :goto_2

    .line 201
    :cond_4
    const v3, 0x7f060119

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v3

    invoke-virtual {v3, v5}, Landroid/view/View;->setVisibility(I)V

    .line 204
    :goto_2
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->is90Modem()Z

    move-result v3

    if-eqz v3, :cond_5

    .line 205
    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v3

    invoke-virtual {v3, v5}, Landroid/view/View;->setVisibility(I)V

    .line 209
    :cond_5
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    sget v4, Lcom/mediatek/engineermode/networkinfo/Content;->SLCE_VOICE_INDEX:I

    const v9, 0x7f06008b

    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v9

    check-cast v9, Landroid/widget/CheckBox;

    aput-object v9, v3, v4

    .line 210
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    sget v4, Lcom/mediatek/engineermode/networkinfo/Content;->SECURITY_CONFIGURATION_INDEX:I

    const v9, 0x7f060089

    .line 211
    invoke-virtual {p0, v9}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->findViewById(I)Landroid/view/View;

    move-result-object v9

    check-cast v9, Landroid/widget/CheckBox;

    aput-object v9, v3, v4

    .line 213
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    sget v4, Lcom/mediatek/engineermode/networkinfo/Content;->SLCE_VOICE_INDEX:I

    aget-object v3, v3, v4

    invoke-virtual {v3, v5}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 214
    iget-object v3, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    sget v4, Lcom/mediatek/engineermode/networkinfo/Content;->SECURITY_CONFIGURATION_INDEX:I

    aget-object v3, v3, v4

    invoke-virtual {v3, v5}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 216
    return-void
.end method

.method public onCreateOptionsMenu(Landroid/view/Menu;)Z
    .locals 3
    .param p1, "menu"    # Landroid/view/Menu;

    .line 220
    const v0, 0x7f0a047d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->getString(I)Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    invoke-interface {p1, v1, v2, v1, v0}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 221
    return v2
.end method

.method public onOptionsItemSelected(Landroid/view/MenuItem;)Z
    .locals 6
    .param p1, "aMenuItem"    # Landroid/view/MenuItem;

    .line 227
    invoke-interface {p1}, Landroid/view/MenuItem;->getItemId()I

    move-result v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    goto :goto_2

    .line 229
    :cond_0
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    .line 230
    .local v2, "isAnyChechked":Ljava/lang/Boolean;
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    const/16 v4, 0x138

    if-ge v3, v4, :cond_3

    .line 231
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mCheckBox:[Landroid/widget/CheckBox;

    aget-object v5, v4, v3

    if-nez v5, :cond_1

    .line 232
    goto :goto_1

    .line 234
    :cond_1
    aget-object v4, v4, v3

    invoke-virtual {v4}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v4

    if-eqz v4, :cond_2

    .line 235
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mChecked:[I

    aput v1, v4, v3

    .line 236
    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    goto :goto_1

    .line 238
    :cond_2
    iget-object v4, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mChecked:[I

    aput v0, v4, v3

    .line 230
    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 241
    .end local v3    # "i":I
    :cond_3
    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-nez v0, :cond_4

    .line 242
    const v0, 0x7f0a047e

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 243
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 244
    goto :goto_2

    .line 246
    :cond_4
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 247
    .local v0, "intent":Landroid/content/Intent;
    iget-object v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mChecked:[I

    const-string v3, "mChecked"

    invoke-virtual {v0, v3, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;[I)Landroid/content/Intent;

    .line 248
    iget v1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->mSimType:I

    const-string v3, "mSimType"

    invoke-virtual {v0, v3, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 249
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfo;->startActivity(Landroid/content/Intent;)V

    .line 250
    nop

    .line 255
    .end local v0    # "intent":Landroid/content/Intent;
    .end local v2    # "isAnyChechked":Ljava/lang/Boolean;
    :goto_2
    invoke-super {p0, p1}, Landroid/app/Activity;->onOptionsItemSelected(Landroid/view/MenuItem;)Z

    move-result v0

    return v0
.end method
