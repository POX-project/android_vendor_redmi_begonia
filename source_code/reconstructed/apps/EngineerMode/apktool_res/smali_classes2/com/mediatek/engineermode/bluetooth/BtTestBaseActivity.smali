.class abstract Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;
.super Landroid/app/Activity;
.source "BtTestBaseActivity.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$BaseOpHandler;
    }
.end annotation


# static fields
.field private static final DLG_INIT_CONFIG:I = 0x2

.field private static final DLG_WAIT:I = 0x1

.field private static final MSG_OP_ANT_SWAP:I = 0xb

.field private static final MSG_OP_INIT_CONFIG:I = 0xc

.field private static final MSG_UI_ANT_SWAP_RESULT:I = 0x1

.field private static final MSG_UI_INIT_CONFIG_DONE:I = 0x3

.field private static final MSG_UI_INIT_CONFIG_START:I = 0x2

.field private static final TAG:Ljava/lang/String; = "BtTestBaseActivity"


# instance fields
.field private mAntCurrentId:I

.field private mAntSwapInTestProcess:Z

.field private mAntSwapSupport:Z

.field private mBaseUiHandler:Landroid/os/Handler;

.field private mBaseWorkHandler:Landroid/os/Handler;

.field protected mBtAdapter:Landroid/bluetooth/BluetoothAdapter;

.field protected mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

.field private mConfigInited:Z

.field private mRgAntSwap:Landroid/widget/RadioGroup;

.field private mWorkThread:Landroid/os/HandlerThread;


# direct methods
.method constructor <init>()V
    .locals 1

    .line 32
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 43
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BtTest;

    invoke-direct {v0}, Lcom/mediatek/engineermode/bluetooth/BtTest;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    .line 46
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mAntSwapInTestProcess:Z

    .line 47
    iput-boolean v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mAntSwapSupport:Z

    .line 48
    iput-boolean v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mConfigInited:Z

    .line 49
    const v0, 0x7f060223

    iput v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mAntCurrentId:I

    .line 51
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mBaseWorkHandler:Landroid/os/Handler;

    .line 52
    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mWorkThread:Landroid/os/HandlerThread;

    .line 213
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$2;-><init>(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mBaseUiHandler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;)I
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    .line 32
    iget v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mAntCurrentId:I

    return v0
.end method

.method static synthetic access$102(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;I)I
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;
    .param p1, "x1"    # I

    .line 32
    iput p1, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mAntCurrentId:I

    return p1
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    .line 32
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mBaseWorkHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    .line 32
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mBaseUiHandler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    .line 32
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mAntSwapInTestProcess:Z

    return v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;)Landroid/widget/RadioGroup;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;

    .line 32
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mRgAntSwap:Landroid/widget/RadioGroup;

    return-object v0
.end method


# virtual methods
.method protected abstract couldExit()Z
.end method

.method protected enableAntSwap(Z)V
    .locals 3
    .param p1, "enabled"    # Z

    .line 247
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mAntSwapSupport:Z

    if-eqz v0, :cond_0

    .line 248
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mRgAntSwap:Landroid/widget/RadioGroup;

    invoke-virtual {v0}, Landroid/widget/RadioGroup;->getChildCount()I

    move-result v0

    .line 249
    .local v0, "antCount":I
    const/4 v1, 0x0

    .local v1, "k":I
    :goto_0
    if-ge v1, v0, :cond_0

    .line 250
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mRgAntSwap:Landroid/widget/RadioGroup;

    invoke-virtual {v2, v1}, Landroid/widget/RadioGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    invoke-virtual {v2, p1}, Landroid/view/View;->setEnabled(Z)V

    .line 249
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 253
    .end local v0    # "antCount":I
    .end local v1    # "k":I
    :cond_0
    return-void
.end method

.method protected getWorkLooper()Landroid/os/Looper;
    .locals 1

    .line 140
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mWorkThread:Landroid/os/HandlerThread;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v0

    return-object v0
.end method

.method protected handleInitResult(Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;)V
    .locals 0
    .param p1, "result"    # Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    .line 258
    return-void
.end method

.method protected initAntComponent()V
    .locals 4

    .line 145
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    const-string v1, "ant_num"

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    .line 146
    .local v0, "antNum":I
    const/4 v1, 0x0

    const/4 v3, 0x2

    if-ne v0, v3, :cond_0

    goto :goto_0

    :cond_0
    move v2, v1

    :goto_0
    iput-boolean v2, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mAntSwapSupport:Z

    .line 148
    const v2, 0x7f060226

    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    .line 149
    iget-boolean v3, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mAntSwapSupport:Z

    if-eqz v3, :cond_1

    goto :goto_1

    :cond_1
    const/16 v1, 0x8

    .line 148
    :goto_1
    invoke-virtual {v2, v1}, Landroid/view/View;->setVisibility(I)V

    .line 150
    iget-boolean v1, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mAntSwapSupport:Z

    if-eqz v1, :cond_2

    .line 151
    const v1, 0x7f060225

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RadioGroup;

    iput-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mRgAntSwap:Landroid/widget/RadioGroup;

    .line 152
    new-instance v2, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$1;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$1;-><init>(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;)V

    invoke-virtual {v1, v2}, Landroid/widget/RadioGroup;->setOnCheckedChangeListener(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V

    .line 169
    :cond_2
    return-void
.end method

.method protected initAntSwap()Z
    .locals 4

    .line 262
    const-string v0, "BtTestBaseActivity"

    const-string v1, "initAntSwap()"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 263
    const/4 v1, 0x1

    .line 264
    .local v1, "result":Z
    iget-boolean v2, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mAntSwapSupport:Z

    if-eqz v2, :cond_0

    .line 265
    iget-object v2, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    const/4 v3, 0x0

    invoke-virtual {v2, v3, v3}, Lcom/mediatek/engineermode/bluetooth/BtTest;->switchAnt(IZ)Z

    move-result v1

    .line 266
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "result "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 268
    :cond_0
    return v1
.end method

.method protected initParams()Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;
    .locals 1

    .line 256
    sget-object v0, Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;->RESULT_SUCCESS:Lcom/mediatek/engineermode/bluetooth/BtTest$BtTestResult;

    return-object v0
.end method

.method protected isAntSwapSupported()Z
    .locals 1

    .line 272
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mAntSwapSupport:Z

    return v0
.end method

.method public onBackPressed()V
    .locals 2

    .line 131
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->couldExit()Z

    move-result v0

    if-nez v0, :cond_0

    .line 132
    const v0, 0x7f0a01da

    const/4 v1, 0x1

    invoke-static {p0, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object v0

    .line 133
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    goto :goto_0

    .line 135
    :cond_0
    invoke-super {p0}, Landroid/app/Activity;->onBackPressed()V

    .line 137
    :goto_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 58
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 59
    new-instance v0, Landroid/os/HandlerThread;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->getLocalClassName()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mWorkThread:Landroid/os/HandlerThread;

    .line 60
    invoke-virtual {v0}, Landroid/os/HandlerThread;->start()V

    .line 61
    new-instance v0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$BaseOpHandler;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->getWorkLooper()Landroid/os/Looper;

    move-result-object v1

    const/4 v2, 0x0

    invoke-direct {v0, p0, v1, v2}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$BaseOpHandler;-><init>(Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;Landroid/os/Looper;Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity$1;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mBaseWorkHandler:Landroid/os/Handler;

    .line 62
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 4
    .param p1, "id"    # I

    .line 101
    const/4 v0, 0x0

    const/4 v1, 0x1

    if-eq p1, v1, :cond_1

    const/4 v2, 0x2

    if-eq p1, v2, :cond_0

    .line 115
    const/4 v0, 0x0

    return-object v0

    .line 109
    :cond_0
    new-instance v2, Landroid/app/ProgressDialog;

    invoke-direct {v2, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    .line 110
    .local v2, "dlgInitConfig":Landroid/app/ProgressDialog;
    const v3, 0x7f0a0196

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 111
    invoke-virtual {v2, v0}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 112
    invoke-virtual {v2, v1}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 113
    return-object v2

    .line 103
    .end local v2    # "dlgInitConfig":Landroid/app/ProgressDialog;
    :cond_1
    new-instance v2, Landroid/app/ProgressDialog;

    invoke-direct {v2, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    .line 104
    .local v2, "dlgWait":Landroid/app/ProgressDialog;
    const v3, 0x7f0a01b0

    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 105
    invoke-virtual {v2, v0}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 106
    invoke-virtual {v2, v1}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 107
    return-object v2
.end method

.method protected onDestroy()V
    .locals 1

    .line 122
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mWorkThread:Landroid/os/HandlerThread;

    if-eqz v0, :cond_0

    .line 123
    invoke-virtual {v0}, Landroid/os/HandlerThread;->quit()Z

    .line 125
    :cond_0
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 126
    return-void
.end method

.method protected onStart()V
    .locals 2

    .line 81
    invoke-super {p0}, Landroid/app/Activity;->onStart()V

    .line 82
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mBtAdapter:Landroid/bluetooth/BluetoothAdapter;

    if-nez v0, :cond_0

    .line 83
    invoke-static {}, Landroid/bluetooth/BluetoothAdapter;->getDefaultAdapter()Landroid/bluetooth/BluetoothAdapter;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mBtAdapter:Landroid/bluetooth/BluetoothAdapter;

    .line 86
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mBtTest:Lcom/mediatek/engineermode/bluetooth/BtTest;

    iget-object v1, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mBtAdapter:Landroid/bluetooth/BluetoothAdapter;

    invoke-virtual {v0, v1, p0}, Lcom/mediatek/engineermode/bluetooth/BtTest;->checkInitState(Landroid/bluetooth/BluetoothAdapter;Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 87
    invoke-virtual {p0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->finish()V

    .line 89
    :cond_1
    iget-boolean v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mConfigInited:Z

    if-nez v0, :cond_2

    .line 90
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mConfigInited:Z

    .line 91
    iget-object v0, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mBaseWorkHandler:Landroid/os/Handler;

    const/16 v1, 0xc

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 94
    :cond_2
    return-void
.end method

.method protected removeWaitDlg()V
    .locals 1

    .line 75
    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->removeDialog(I)V

    .line 76
    return-void
.end method

.method protected setAntSwapInTestProcess(Z)V
    .locals 0
    .param p1, "inProcess"    # Z

    .line 65
    iput-boolean p1, p0, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->mAntSwapInTestProcess:Z

    .line 66
    return-void
.end method

.method protected showWaitDlg()V
    .locals 1

    .line 70
    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/bluetooth/BtTestBaseActivity;->showDialog(I)V

    .line 71
    return-void
.end method
