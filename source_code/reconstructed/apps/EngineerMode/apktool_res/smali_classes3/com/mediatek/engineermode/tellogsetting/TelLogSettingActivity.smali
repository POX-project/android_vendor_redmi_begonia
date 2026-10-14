.class public Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;
.super Landroid/app/Activity;
.source "TelLogSettingActivity.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$FunctionTask;
    }
.end annotation


# static fields
.field private static final DLG_SWITCHING:I


# instance fields
.field private mBtnSet:Landroid/widget/Button;

.field private mTelLogCtr:Lcom/mediatek/engineermode/tellogsetting/TelLogController;

.field private mTvStatus:Landroid/widget/TextView;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 56
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 58
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->mTvStatus:Landroid/widget/TextView;

    .line 59
    iput-object v0, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->mBtnSet:Landroid/widget/Button;

    .line 60
    iput-object v0, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->mTelLogCtr:Lcom/mediatek/engineermode/tellogsetting/TelLogController;

    return-void
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;)Lcom/mediatek/engineermode/tellogsetting/TelLogController;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;

    .line 56
    iget-object v0, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->mTelLogCtr:Lcom/mediatek/engineermode/tellogsetting/TelLogController;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;

    .line 56
    invoke-direct {p0}, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->updateUI()V

    return-void
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;

    .line 56
    invoke-direct {p0}, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->isActivityAlive()Z

    move-result v0

    return v0
.end method

.method private isActivityAlive()Z
    .locals 4

    .line 147
    invoke-virtual {p0}, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->isFinishing()Z

    move-result v0

    .line 148
    .local v0, "isFinishing":Z
    invoke-virtual {p0}, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->isDestroyed()Z

    move-result v1

    .line 149
    .local v1, "isDestroyed":Z
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "isFinishing: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, " isDestroyed: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "telLogSetting"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 151
    if-nez v0, :cond_0

    if-nez v1, :cond_0

    const/4 v2, 0x1

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    return v2
.end method

.method public static isSupport()Z
    .locals 1

    .line 139
    invoke-static {}, Lcom/mediatek/engineermode/FeatureSupport;->isUserLoad()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 140
    const-string v0, "persist.vendor.log.tel_log_ctrl"

    invoke-static {v0}, Lcom/mediatek/engineermode/FeatureSupport;->isSupported(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 141
    const/4 v0, 0x0

    return v0

    .line 143
    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method private updateUI()V
    .locals 2

    .line 87
    iget-object v0, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->mTelLogCtr:Lcom/mediatek/engineermode/tellogsetting/TelLogController;

    invoke-virtual {v0, p0}, Lcom/mediatek/engineermode/tellogsetting/TelLogController;->getTelLogStatus(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 88
    iget-object v0, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->mTvStatus:Landroid/widget/TextView;

    const v1, 0x7f0a061c

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    .line 89
    iget-object v0, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->mBtnSet:Landroid/widget/Button;

    const v1, 0x7f0a0618

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setText(I)V

    goto :goto_0

    .line 91
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->mTvStatus:Landroid/widget/TextView;

    const v1, 0x7f0a061b

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    .line 92
    iget-object v0, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->mBtnSet:Landroid/widget/Button;

    const v1, 0x7f0a0619

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setText(I)V

    .line 94
    :goto_0
    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 65
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 66
    const v0, 0x7f0800de

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->setContentView(I)V

    .line 67
    const v0, 0x7f0604f1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->mTvStatus:Landroid/widget/TextView;

    .line 68
    const v0, 0x7f0604f2

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->mBtnSet:Landroid/widget/Button;

    .line 70
    new-instance v0, Lcom/mediatek/engineermode/tellogsetting/TelLogController;

    invoke-direct {v0}, Lcom/mediatek/engineermode/tellogsetting/TelLogController;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->mTelLogCtr:Lcom/mediatek/engineermode/tellogsetting/TelLogController;

    .line 72
    invoke-direct {p0}, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->updateUI()V

    .line 74
    iget-object v0, p0, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->mBtnSet:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity$1;-><init>(Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 83
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 2
    .param p1, "id"    # I

    .line 122
    if-nez p1, :cond_0

    .line 123
    new-instance v0, Landroid/app/ProgressDialog;

    invoke-direct {v0, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    .line 125
    .local v0, "dialog":Landroid/app/ProgressDialog;
    const v1, 0x7f0a061d

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/tellogsetting/TelLogSettingActivity;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 126
    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 127
    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 129
    return-object v0

    .line 131
    .end local v0    # "dialog":Landroid/app/ProgressDialog;
    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method
