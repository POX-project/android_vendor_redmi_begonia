.class public Lcom/mediatek/engineermode/apc/ApcFakeInfo;
.super Landroid/app/Activity;
.source "ApcFakeInfo.java"


# static fields
.field private static final ACTION_APC_INFO_NOTIFY:Ljava/lang/String; = "com.mediatek.phone.ACTION_APC_INFO_NOTIFY"

.field private static final EXTRA_APC_INFO:Ljava/lang/String; = "info"

.field private static final EXTRA_APC_PHONE:Ljava/lang/String; = "phoneId"

.field private static TAG:Ljava/lang/String;

.field private static mRowNum:I

.field private static mTitle:[Ljava/lang/String;


# instance fields
.field private mReceiver:Landroid/content/BroadcastReceiver;

.field private mTableLayout:Landroid/widget/TableLayout;


# direct methods
.method static constructor <clinit>()V
    .locals 7

    .line 65
    const-string v0, "ApcFakeInfo"

    sput-object v0, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->TAG:Ljava/lang/String;

    .line 74
    const/4 v0, 0x0

    sput v0, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->mRowNum:I

    .line 75
    const-string v1, "TYPE"

    const-string v2, "PLMN"

    const-string v3, "LAC"

    const-string v4, "Cell ID"

    const-string v5, "ARFCN"

    const-string v6, "BSIC"

    filled-new-array/range {v1 .. v6}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->mTitle:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 64
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 79
    new-instance v0, Lcom/mediatek/engineermode/apc/ApcFakeInfo$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/apc/ApcFakeInfo$1;-><init>(Lcom/mediatek/engineermode/apc/ApcFakeInfo;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->mReceiver:Landroid/content/BroadcastReceiver;

    return-void
.end method

.method static synthetic access$000()Ljava/lang/String;
    .locals 1

    .line 64
    sget-object v0, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->TAG:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$100()I
    .locals 1

    .line 64
    sget v0, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->mRowNum:I

    return v0
.end method

.method static synthetic access$102(I)I
    .locals 0
    .param p0, "x0"    # I

    .line 64
    sput p0, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->mRowNum:I

    return p0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/apc/ApcFakeInfo;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/apc/ApcFakeInfo;

    .line 64
    invoke-direct {p0}, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->clearTableRow()V

    return-void
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/apc/ApcFakeInfo;Lcom/mediatek/internal/telephony/PseudoCellInfo;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/apc/ApcFakeInfo;
    .param p1, "x1"    # Lcom/mediatek/internal/telephony/PseudoCellInfo;

    .line 64
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->addTableRow(Lcom/mediatek/internal/telephony/PseudoCellInfo;)V

    return-void
.end method

.method private addTableRow(Lcom/mediatek/internal/telephony/PseudoCellInfo;)V
    .locals 13
    .param p1, "pbr"    # Lcom/mediatek/internal/telephony/PseudoCellInfo;

    .line 133
    invoke-virtual {p1}, Lcom/mediatek/internal/telephony/PseudoCellInfo;->getCellCount()I

    move-result v0

    .line 134
    .local v0, "num":I
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    if-ge v1, v0, :cond_0

    .line 135
    new-instance v2, Landroid/widget/TableRow;

    invoke-direct {v2, p0}, Landroid/widget/TableRow;-><init>(Landroid/content/Context;)V

    .line 136
    .local v2, "tableRow":Landroid/widget/TableRow;
    new-instance v3, Landroid/widget/TextView;

    invoke-direct {v3, p0}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 137
    .local v3, "tvType":Landroid/widget/TextView;
    sget-object v4, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->TAG:Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "tvType = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 138
    invoke-virtual {p1, v1}, Lcom/mediatek/internal/telephony/PseudoCellInfo;->getType(I)I

    move-result v4

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 139
    const/16 v4, 0x11

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setGravity(I)V

    .line 140
    invoke-virtual {v2, v3}, Landroid/widget/TableRow;->addView(Landroid/view/View;)V

    .line 141
    new-instance v5, Landroid/widget/TextView;

    invoke-direct {v5, p0}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 142
    .local v5, "tvPlmn":Landroid/widget/TextView;
    sget-object v6, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->TAG:Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "tvPlmn = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 143
    invoke-virtual {p1, v1}, Lcom/mediatek/internal/telephony/PseudoCellInfo;->getPlmn(I)I

    move-result v6

    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 144
    invoke-virtual {v5, v4}, Landroid/widget/TextView;->setGravity(I)V

    .line 145
    invoke-virtual {v2, v5}, Landroid/widget/TableRow;->addView(Landroid/view/View;)V

    .line 146
    new-instance v6, Landroid/widget/TextView;

    invoke-direct {v6, p0}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 147
    .local v6, "tvLai":Landroid/widget/TextView;
    sget-object v7, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->TAG:Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "tvLai = "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v7, v8}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 149
    invoke-virtual {p1, v1}, Lcom/mediatek/internal/telephony/PseudoCellInfo;->getLac(I)I

    move-result v7

    invoke-static {v7}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 150
    invoke-virtual {v6, v4}, Landroid/widget/TextView;->setGravity(I)V

    .line 151
    invoke-virtual {v2, v6}, Landroid/widget/TableRow;->addView(Landroid/view/View;)V

    .line 152
    new-instance v7, Landroid/widget/TextView;

    invoke-direct {v7, p0}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 153
    .local v7, "tvCi":Landroid/widget/TextView;
    sget-object v8, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->TAG:Ljava/lang/String;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "tvCi = "

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v8, v9}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 155
    invoke-virtual {p1, v1}, Lcom/mediatek/internal/telephony/PseudoCellInfo;->getCid(I)I

    move-result v8

    invoke-static {v8}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 156
    invoke-virtual {v7, v4}, Landroid/widget/TextView;->setGravity(I)V

    .line 157
    invoke-virtual {v2, v7}, Landroid/widget/TableRow;->addView(Landroid/view/View;)V

    .line 158
    new-instance v8, Landroid/widget/TextView;

    invoke-direct {v8, p0}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 159
    .local v8, "tvArfcn":Landroid/widget/TextView;
    sget-object v9, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->TAG:Ljava/lang/String;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "tvArfcn = "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-static {v9, v10}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 160
    invoke-virtual {p1, v1}, Lcom/mediatek/internal/telephony/PseudoCellInfo;->getArfcn(I)I

    move-result v9

    invoke-static {v9}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 161
    invoke-virtual {v8, v4}, Landroid/widget/TextView;->setGravity(I)V

    .line 162
    invoke-virtual {v2, v8}, Landroid/widget/TableRow;->addView(Landroid/view/View;)V

    .line 163
    new-instance v9, Landroid/widget/TextView;

    invoke-direct {v9, p0}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 164
    .local v9, "tvBsic":Landroid/widget/TextView;
    sget-object v10, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->TAG:Ljava/lang/String;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "tvBsic = "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-static {v10, v11}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 165
    invoke-virtual {p1, v1}, Lcom/mediatek/internal/telephony/PseudoCellInfo;->getBsic(I)I

    move-result v10

    invoke-static {v10}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 166
    invoke-virtual {v9, v4}, Landroid/widget/TextView;->setGravity(I)V

    .line 167
    invoke-virtual {v2, v9}, Landroid/widget/TableRow;->addView(Landroid/view/View;)V

    .line 169
    iget-object v4, p0, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->mTableLayout:Landroid/widget/TableLayout;

    new-instance v10, Landroid/widget/TableLayout$LayoutParams;

    const/4 v11, -0x1

    const/4 v12, -0x2

    invoke-direct {v10, v11, v12}, Landroid/widget/TableLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v4, v2, v10}, Landroid/widget/TableLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 172
    sget v4, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->mRowNum:I

    add-int/lit8 v4, v4, 0x1

    sput v4, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->mRowNum:I

    .line 134
    .end local v2    # "tableRow":Landroid/widget/TableRow;
    .end local v3    # "tvType":Landroid/widget/TextView;
    .end local v5    # "tvPlmn":Landroid/widget/TextView;
    .end local v6    # "tvLai":Landroid/widget/TextView;
    .end local v7    # "tvCi":Landroid/widget/TextView;
    .end local v8    # "tvArfcn":Landroid/widget/TextView;
    .end local v9    # "tvBsic":Landroid/widget/TextView;
    add-int/lit8 v1, v1, 0x1

    goto/16 :goto_0

    .line 174
    .end local v1    # "i":I
    :cond_0
    return-void
.end method

.method private addTableTitle()V
    .locals 5

    .line 177
    new-instance v0, Landroid/widget/TableRow;

    invoke-direct {v0, p0}, Landroid/widget/TableRow;-><init>(Landroid/content/Context;)V

    .line 178
    .local v0, "tableRow":Landroid/widget/TableRow;
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    sget-object v2, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->mTitle:[Ljava/lang/String;

    array-length v2, v2

    if-ge v1, v2, :cond_0

    .line 179
    new-instance v2, Landroid/widget/TextView;

    invoke-direct {v2, p0}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 180
    .local v2, "title":Landroid/widget/TextView;
    sget-object v3, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->mTitle:[Ljava/lang/String;

    aget-object v3, v3, v1

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 181
    const/16 v3, 0x11

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setGravity(I)V

    .line 182
    invoke-virtual {v0, v2}, Landroid/widget/TableRow;->addView(Landroid/view/View;)V

    .line 178
    .end local v2    # "title":Landroid/widget/TextView;
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 185
    .end local v1    # "i":I
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->mTableLayout:Landroid/widget/TableLayout;

    new-instance v2, Landroid/widget/TableLayout$LayoutParams;

    const/4 v3, -0x1

    const/4 v4, -0x2

    invoke-direct {v2, v3, v4}, Landroid/widget/TableLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v1, v0, v2}, Landroid/widget/TableLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 188
    sget v1, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->mRowNum:I

    add-int/lit8 v1, v1, 0x1

    sput v1, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->mRowNum:I

    .line 189
    return-void
.end method

.method private clearTableRow()V
    .locals 1

    .line 129
    iget-object v0, p0, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->mTableLayout:Landroid/widget/TableLayout;

    invoke-virtual {v0}, Landroid/widget/TableLayout;->removeAllViews()V

    .line 130
    return-void
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 1
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 101
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 102
    const v0, 0x7f08000a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->setContentView(I)V

    .line 103
    const v0, 0x7f0606dd

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TableLayout;

    iput-object v0, p0, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->mTableLayout:Landroid/widget/TableLayout;

    .line 104
    return-void
.end method

.method public onDestroy()V
    .locals 1

    .line 124
    iget-object v0, p0, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    .line 125
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 126
    return-void
.end method

.method public onPause()V
    .locals 0

    .line 119
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    .line 120
    return-void
.end method

.method protected onResume()V
    .locals 3

    .line 108
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 109
    invoke-direct {p0}, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->addTableTitle()V

    .line 111
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    .line 112
    .local v0, "intentFilter":Landroid/content/IntentFilter;
    const-string v1, "com.mediatek.phone.ACTION_APC_INFO_NOTIFY"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 113
    sget-object v1, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->TAG:Ljava/lang/String;

    const-string v2, "before registerReceiver: com.mediatek.phone.ACTION_APC_INFO_NOTIFY"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 114
    iget-object v1, p0, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->mReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/apc/ApcFakeInfo;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    .line 115
    return-void
.end method
