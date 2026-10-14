.class public Lcom/mediatek/engineermode/bluetooth/TestModeActivity;
.super Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;
.source "TestModeActivity.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;
    }
.end annotation


# static fields
.field private static final DEFAULT_INT:I = 0x9

.field private static final MSG_OP_TEST_START:I = 0xb

.field private static final MSG_OP_TEST_STOP:I = 0xc

.field private static final MSG_UI_TEST_START:I = 0x1

.field private static final MSG_UI_TEST_STOP:I = 0x2

.field private static final POWER_INVALID:I = -0x1

.field private static final TAG:Ljava/lang/String; = "BtTestMode"


# instance fields
.field private mBtnDisableTm:Landroid/widget/Button;

.field private mBtnEnableTm:Landroid/widget/Button;

.field private mEtPower:Landroid/widget/EditText;

.field private mLayoutPower:Landroid/view/View;

.field private mRgPowerLevel:Landroid/widget/RadioGroup;

.field private final mUiHandler:Landroid/os/Handler;

.field private mWorkHandler:Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 61
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;-><init>()V

    .line 80
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mWorkHandler:Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;

    .line 82
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$1;-><init>(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mUiHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/TestModeActivity;
    .param p1, "x1"    # Z

    .line 61
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->enableUI(Z)V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;)Landroid/view/View;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mLayoutPower:Landroid/view/View;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mRgPowerLevel:Landroid/widget/RadioGroup;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    .line 61
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->getPowerInput()I

    move-result v0

    return v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;)Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mWorkHandler:Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;

    return-object v0
.end method

.method static synthetic access$600(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/TestModeActivity;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mUiHandler:Landroid/os/Handler;

    return-object v0
.end method

.method private enableUI(Z)V
    .locals 3
    .param p1, "enabled"    # Z

    .line 176
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mRgPowerLevel:Landroid/widget/RadioGroup;

    invoke-virtual {v0}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v0

    .line 177
    .local v0, "count":I
    const/4 v1, 0x0

    .local v1, "k":I
    :goto_0
    if-ge v1, v0, :cond_0

    .line 178
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mRgPowerLevel:Landroid/widget/RadioGroup;

    invoke-virtual {v2, v1}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    invoke-virtual {v2, p1}, Landroid/view/View;->setEnabled(Z)V

    .line 177
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 180
    .end local v1    # "k":I
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mEtPower:Landroid/widget/EditText;

    invoke-virtual {v1, p1}, Landroid/widget/EditText;->setEnabled(Z)V

    .line 181
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mBtnEnableTm:Landroid/widget/Button;

    invoke-virtual {v1, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 182
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mBtnDisableTm:Landroid/widget/Button;

    xor-int/lit8 v2, p1, 0x1

    invoke-virtual {v1, v2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 183
    return-void
.end method

.method private getPowerInput()I
    .locals 4

    .line 186
    const/4 v0, -0x1

    .line 187
    .local v0, "power":I
    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mEtPower:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 188
    .local v1, "val":Ljava/lang/String;
    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v2

    const/4 v3, 0x1

    if-ne v2, v3, :cond_0

    .line 190
    :try_start_0
    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    move v0, v2

    .line 195
    goto :goto_0

    .line 192
    :catch_0
    move-exception v2

    .line 193
    .local v2, "e":Ljava/lang/NumberFormatException;
    invoke-virtual {v2}, Ljava/lang/NumberFormatException;->printStackTrace()V

    .line 194
    const/4 v3, -0x1

    return v3

    .line 197
    .end local v2    # "e":Ljava/lang/NumberFormatException;
    :cond_0
    :goto_0
    return v0
.end method

.method private initComponent()V
    .locals 2

    .line 121
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->initAntComponent()V

    .line 122
    const v0, 0x7f06023b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mLayoutPower:Landroid/view/View;

    .line 123
    const v0, 0x7f06023a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/EditText;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mEtPower:Landroid/widget/EditText;

    .line 124
    const v0, 0x7f06023c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioGroup;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mRgPowerLevel:Landroid/widget/RadioGroup;

    .line 125
    new-instance v1, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$2;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$2;-><init>(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioGroup;->setOnCheckedChangeListener(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V

    .line 135
    const v0, 0x7f060237

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mBtnEnableTm:Landroid/widget/Button;

    .line 136
    new-instance v1, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$3;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$3;-><init>(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 160
    const v0, 0x7f060236

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mBtnDisableTm:Landroid/widget/Button;

    .line 161
    new-instance v1, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$4;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$4;-><init>(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 171
    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->enableUI(Z)V

    .line 172
    return-void
.end method


# virtual methods
.method protected couldExit()Z
    .locals 1

    .line 240
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mBtnEnableTm:Landroid/widget/Button;

    invoke-virtual {v0}, Landroid/widget/Button;->isEnabled()Z

    move-result v0

    return v0
.end method

.method public bridge synthetic onBackPressed()V
    .locals 0

    .line 61
    invoke-super {p0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->onBackPressed()V

    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 113
    invoke-super {p0, p1}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->onCreate(Landroid/os/Bundle;)V

    .line 115
    const v0, 0x7f080026

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->setContentView(I)V

    .line 116
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->getWorkLooper()Landroid/os/Looper;

    move-result-object v1

    const/4 v2, 0x0

    invoke-direct {v0, p0, v1, v2}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;-><init>(Lcom/mediatek/engineermode/bluetooth/TestModeActivity;Landroid/os/Looper;Lcom/mediatek/engineermode/bluetooth/TestModeActivity$1;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->mWorkHandler:Lcom/mediatek/engineermode/bluetooth/TestModeActivity$WorkHandler;

    .line 117
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/TestModeActivity;->initComponent()V

    .line 118
    return-void
.end method
