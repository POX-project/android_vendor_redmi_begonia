.class public Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;
.super Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;
.source "BtRelayerModeActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;
    }
.end annotation


# static fields
.field private static final INDEX_USB:I = 0x4

.field private static final MSG_OP_TEST_START:I = 0xb

.field private static final MSG_OP_TEST_STOP:I = 0xc

.field private static final MSG_UI_TEST_START:I = 0x1

.field private static final MSG_UI_TEST_STOP:I = 0x2

.field private static final TAG:Ljava/lang/String; = "BtRelayerMode"


# instance fields
.field private mBaudrate:I

.field private mBtnStart:Landroid/widget/Button;

.field private mBtnStop:Landroid/widget/Button;

.field private mPortNumber:I

.field private mSpBaudrate:Landroid/widget/Spinner;

.field private mSpUartPort:Landroid/widget/Spinner;

.field private final mUiHandler:Landroid/os/Handler;

.field private mWorkHandler:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 61
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;-><init>()V

    .line 76
    const/16 v0, 0x2580

    iput v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mBaudrate:I

    .line 77
    const/4 v0, 0x3

    iput v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mPortNumber:I

    .line 79
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mWorkHandler:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;

    .line 156
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$2;-><init>(Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mUiHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mSpBaudrate:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    .line 61
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mUiHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    .line 61
    iget v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mPortNumber:I

    return v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;

    .line 61
    iget v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mBaudrate:I

    return v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;Z)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;
    .param p1, "x1"    # Z

    .line 61
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->enableUI(Z)V

    return-void
.end method

.method private checkAndGetParameters()Z
    .locals 3

    .line 206
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mSpBaudrate:Landroid/widget/Spinner;

    .line 207
    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v0

    .line 206
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mBaudrate:I
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    .line 212
    nop

    .line 214
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mSpUartPort:Landroid/widget/Spinner;

    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItemId()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    .line 215
    .local v0, "tmpLong":Ljava/lang/Long;
    invoke-virtual {v0}, Ljava/lang/Long;->intValue()I

    move-result v1

    iput v1, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mPortNumber:I

    .line 216
    const/4 v1, 0x1

    return v1

    .line 209
    .end local v0    # "tmpLong":Ljava/lang/Long;
    :catch_0
    move-exception v0

    .line 210
    .local v0, "e":Ljava/lang/NumberFormatException;
    invoke-virtual {v0}, Ljava/lang/NumberFormatException;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "BtRelayerMode"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 211
    const/4 v1, 0x0

    return v1
.end method

.method private enableUI(Z)V
    .locals 2
    .param p1, "enabled"    # Z

    .line 116
    if-eqz p1, :cond_0

    if-eqz p1, :cond_1

    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mSpUartPort:Landroid/widget/Spinner;

    .line 117
    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItemPosition()I

    move-result v0

    const/4 v1, 0x4

    if-eq v0, v1, :cond_1

    .line 118
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mSpBaudrate:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 120
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mSpUartPort:Landroid/widget/Spinner;

    invoke-virtual {v0, p1}, Landroid/widget/Spinner;->setEnabled(Z)V

    .line 121
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mBtnStart:Landroid/widget/Button;

    invoke-virtual {v0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 122
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mBtnStop:Landroid/widget/Button;

    xor-int/lit8 v1, p1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 123
    return-void
.end method

.method private initComponent()V
    .locals 2

    .line 91
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->initAntComponent()V

    .line 93
    const v0, 0x7f060228

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mSpBaudrate:Landroid/widget/Spinner;

    .line 94
    const v0, 0x7f060229

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mSpUartPort:Landroid/widget/Spinner;

    .line 95
    new-instance v1, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$1;-><init>(Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;)V

    .line 96
    invoke-virtual {v0, v1}, Landroid/widget/Spinner;->setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V

    .line 107
    const v0, 0x7f06022a

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mBtnStart:Landroid/widget/Button;

    .line 108
    const v0, 0x7f06022b

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mBtnStop:Landroid/widget/Button;

    .line 109
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mBtnStart:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 110
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mBtnStop:Landroid/widget/Button;

    invoke-virtual {v0, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 111
    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->enableUI(Z)V

    .line 112
    return-void
.end method


# virtual methods
.method protected couldExit()Z
    .locals 1

    .line 221
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mBtnStart:Landroid/widget/Button;

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

.method public onClick(Landroid/view/View;)V
    .locals 2
    .param p1, "v"    # Landroid/view/View;

    .line 187
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mBtnStart:Landroid/widget/Button;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 188
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->showWaitDlg()V

    .line 189
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->checkAndGetParameters()Z

    move-result v0

    if-nez v0, :cond_0

    .line 190
    const v0, 0x7f0a0199

    .line 191
    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->getText(I)Ljava/lang/CharSequence;

    move-result-object v0

    const/4 v1, 0x1

    .line 190
    invoke-static {p0, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 191
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 192
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->removeWaitDlg()V

    goto :goto_0

    .line 194
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mWorkHandler:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;

    const/16 v1, 0xb

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;->sendEmptyMessage(I)Z

    goto :goto_0

    .line 197
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mBtnStop:Landroid/widget/Button;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 198
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->showWaitDlg()V

    .line 199
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mWorkHandler:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;

    const/16 v1, 0xc

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;->sendEmptyMessage(I)Z

    .line 202
    :cond_2
    :goto_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 83
    invoke-super {p0, p1}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->onCreate(Landroid/os/Bundle;)V

    .line 84
    const v0, 0x7f080025

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->setContentView(I)V

    .line 85
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->getWorkLooper()Landroid/os/Looper;

    move-result-object v1

    const/4 v2, 0x0

    invoke-direct {v0, p0, v1, v2}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;-><init>(Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;Landroid/os/Looper;Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$1;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->mWorkHandler:Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity$WorkHandler;

    .line 86
    invoke-direct {p0}, Lcom/mediatek/engineermode/bluetooth/BtRelayerModeActivity;->initComponent()V

    .line 88
    return-void
.end method
